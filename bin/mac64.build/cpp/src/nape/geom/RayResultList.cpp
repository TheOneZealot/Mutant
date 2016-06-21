#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_RayResult
#include <nape/geom/RayResult.h>
#endif
#ifndef INCLUDED_nape_geom_RayResultIterator
#include <nape/geom/RayResultIterator.h>
#endif
#ifndef INCLUDED_nape_geom_RayResultList
#include <nape/geom/RayResultList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_RayResult
#include <zpp_nape/util/ZNPList_RayResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_RayResult
#include <zpp_nape/util/ZNPNode_RayResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_RayResultList
#include <zpp_nape/util/ZPP_RayResultList.h>
#endif
namespace nape{
namespace geom{

Void RayResultList_obj::__construct()
{
HX_STACK_FRAME("nape.geom.RayResultList","new",0x62bd824b,"nape.geom.RayResultList.new","nape/geom/RayResultList.hx",234,0x8086abe5)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(238)
	this->zpp_inner = null();
	HX_STACK_LINE(696)
	::zpp_nape::util::ZPP_RayResultList tmp = ::zpp_nape::util::ZPP_RayResultList_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(696)
	this->zpp_inner = tmp;
	HX_STACK_LINE(697)
	::zpp_nape::util::ZPP_RayResultList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(697)
	tmp1->outer = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//RayResultList_obj::~RayResultList_obj() { }

Dynamic RayResultList_obj::__CreateEmpty() { return  new RayResultList_obj; }
hx::ObjectPtr< RayResultList_obj > RayResultList_obj::__new()
{  hx::ObjectPtr< RayResultList_obj > _result_ = new RayResultList_obj();
	_result_->__construct();
	return _result_;}

Dynamic RayResultList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RayResultList_obj > _result_ = new RayResultList_obj();
	_result_->__construct();
	return _result_;}

int RayResultList_obj::get_length( ){
	HX_STACK_FRAME("nape.geom.RayResultList","get_length",0x9e7c3624,"nape.geom.RayResultList.get_length","nape/geom/RayResultList.hx",244,0x8086abe5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(245)
	::zpp_nape::util::ZPP_RayResultList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(245)
	tmp->valmod();
	HX_STACK_LINE(246)
	::zpp_nape::util::ZPP_RayResultList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(246)
	bool tmp2 = tmp1->zip_length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(246)
	if ((tmp2)){
		HX_STACK_LINE(247)
		::zpp_nape::util::ZPP_RayResultList tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(247)
		tmp3->zip_length = false;
		HX_STACK_LINE(259)
		{
			HX_STACK_LINE(259)
			::zpp_nape::util::ZPP_RayResultList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(259)
			int tmp5 = tmp4->inner->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(259)
			::zpp_nape::util::ZPP_RayResultList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(259)
			tmp6->user_length = tmp5;
		}
	}
	HX_STACK_LINE(261)
	::zpp_nape::util::ZPP_RayResultList tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(261)
	int tmp4 = tmp3->user_length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(261)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(RayResultList_obj,get_length,return )

bool RayResultList_obj::has( ::nape::geom::RayResult obj){
	HX_STACK_FRAME("nape.geom.RayResultList","has",0x62b8f145,"nape.geom.RayResultList.has","nape/geom/RayResultList.hx",346,0x8086abe5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(347)
	::zpp_nape::util::ZPP_RayResultList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(347)
	tmp->valmod();
	HX_STACK_LINE(350)
	::zpp_nape::util::ZPP_RayResultList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(350)
	::nape::geom::RayResult tmp2 = obj;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(350)
	bool tmp3 = tmp1->inner->has(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(350)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(RayResultList_obj,has,return )

::nape::geom::RayResult RayResultList_obj::at( int index){
	HX_STACK_FRAME("nape.geom.RayResultList","at",0xb9448968,"nape.geom.RayResultList.at","nape/geom/RayResultList.hx",363,0x8086abe5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(364)
	::zpp_nape::util::ZPP_RayResultList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(364)
	tmp->valmod();
	HX_STACK_LINE(368)
	bool tmp1 = (index < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(368)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(368)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(368)
	if ((tmp2)){
		HX_STACK_LINE(368)
		int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(368)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(368)
		{
			HX_STACK_LINE(368)
			::zpp_nape::util::ZPP_RayResultList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(368)
			::zpp_nape::util::ZPP_RayResultList tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(368)
			tmp7->valmod();
			HX_STACK_LINE(368)
			::zpp_nape::util::ZPP_RayResultList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(368)
			::zpp_nape::util::ZPP_RayResultList tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(368)
			bool tmp10 = tmp9->zip_length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(368)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(368)
			if ((tmp11)){
				HX_STACK_LINE(368)
				::zpp_nape::util::ZPP_RayResultList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(368)
				::zpp_nape::util::ZPP_RayResultList tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(368)
				tmp13->zip_length = false;
				HX_STACK_LINE(368)
				{
					HX_STACK_LINE(368)
					::zpp_nape::util::ZPP_RayResultList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(368)
					::zpp_nape::util::ZPP_RayResultList tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(368)
					int tmp16 = tmp15->inner->length;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(368)
					int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(368)
					::zpp_nape::util::ZPP_RayResultList tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(368)
					::zpp_nape::util::ZPP_RayResultList tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(368)
					tmp19->user_length = tmp17;
				}
			}
			HX_STACK_LINE(368)
			::zpp_nape::util::ZPP_RayResultList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(368)
			::zpp_nape::util::ZPP_RayResultList tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(368)
			tmp5 = tmp13->user_length;
		}
		HX_STACK_LINE(368)
		tmp3 = (tmp4 >= tmp5);
	}
	else{
		HX_STACK_LINE(368)
		tmp3 = true;
	}
	HX_STACK_LINE(368)
	if ((tmp3)){
		HX_STACK_LINE(368)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Index out of bounds","\x10","\xf3","\x5b","\x3f"));
	}
	HX_STACK_LINE(370)
	::zpp_nape::util::ZPP_RayResultList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(370)
	bool tmp5 = tmp4->reverse_flag;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(370)
	if ((tmp5)){
		HX_STACK_LINE(370)
		int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(370)
		{
			HX_STACK_LINE(370)
			::zpp_nape::util::ZPP_RayResultList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(370)
			tmp7->valmod();
			HX_STACK_LINE(370)
			::zpp_nape::util::ZPP_RayResultList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(370)
			bool tmp9 = tmp8->zip_length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(370)
			if ((tmp9)){
				HX_STACK_LINE(370)
				::zpp_nape::util::ZPP_RayResultList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(370)
				tmp10->zip_length = false;
				HX_STACK_LINE(370)
				{
					HX_STACK_LINE(370)
					::zpp_nape::util::ZPP_RayResultList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(370)
					int tmp12 = tmp11->inner->length;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(370)
					::zpp_nape::util::ZPP_RayResultList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(370)
					tmp13->user_length = tmp12;
				}
			}
			HX_STACK_LINE(370)
			::zpp_nape::util::ZPP_RayResultList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(370)
			tmp6 = tmp10->user_length;
		}
		HX_STACK_LINE(370)
		int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(370)
		int tmp8 = index;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(370)
		int tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(370)
		index = tmp9;
	}
	HX_STACK_LINE(371)
	bool tmp6 = true;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(371)
	if ((tmp6)){
		HX_STACK_LINE(372)
		int tmp7 = index;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(372)
		::zpp_nape::util::ZPP_RayResultList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(372)
		int tmp9 = tmp8->at_index;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(372)
		bool tmp10 = (tmp7 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(372)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(372)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(372)
		if ((tmp11)){
			HX_STACK_LINE(372)
			::zpp_nape::util::ZPP_RayResultList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(372)
			::zpp_nape::util::ZPP_RayResultList tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(372)
			::zpp_nape::util::ZNPNode_RayResult tmp15 = tmp14->at_ite;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(372)
			tmp12 = (tmp15 == null());
		}
		else{
			HX_STACK_LINE(372)
			tmp12 = true;
		}
		HX_STACK_LINE(372)
		if ((tmp12)){
			HX_STACK_LINE(373)
			::zpp_nape::util::ZPP_RayResultList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(373)
			tmp13->at_index = index;
			HX_STACK_LINE(374)
			::zpp_nape::util::ZPP_RayResultList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(374)
			int tmp15 = index;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(374)
			::zpp_nape::util::ZNPNode_RayResult tmp16 = tmp14->inner->iterator_at(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(374)
			::zpp_nape::util::ZPP_RayResultList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(374)
			tmp17->at_ite = tmp16;
		}
		else{
			HX_STACK_LINE(377)
			while((true)){
				HX_STACK_LINE(377)
				::zpp_nape::util::ZPP_RayResultList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(377)
				int tmp14 = tmp13->at_index;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(377)
				int tmp15 = index;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(377)
				bool tmp16 = (tmp14 != tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(377)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(377)
				if ((tmp17)){
					HX_STACK_LINE(377)
					break;
				}
				HX_STACK_LINE(378)
				::zpp_nape::util::ZPP_RayResultList tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(378)
				(tmp18->at_index)++;
				HX_STACK_LINE(379)
				::zpp_nape::util::ZPP_RayResultList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(379)
				::zpp_nape::util::ZNPNode_RayResult tmp20 = tmp19->at_ite->next;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(379)
				::zpp_nape::util::ZPP_RayResultList tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(379)
				tmp21->at_ite = tmp20;
			}
		}
	}
	else{
		HX_STACK_LINE(384)
		int tmp7 = index;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(384)
		::zpp_nape::util::ZPP_RayResultList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(384)
		int tmp9 = tmp8->at_index;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(384)
		bool tmp10 = (tmp7 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(384)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(384)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(384)
		if ((tmp11)){
			HX_STACK_LINE(384)
			::zpp_nape::util::ZPP_RayResultList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(384)
			::zpp_nape::util::ZPP_RayResultList tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(384)
			::zpp_nape::util::ZNPNode_RayResult tmp15 = tmp14->at_ite;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(384)
			tmp12 = (tmp15 == null());
		}
		else{
			HX_STACK_LINE(384)
			tmp12 = true;
		}
		HX_STACK_LINE(384)
		if ((tmp12)){
			HX_STACK_LINE(385)
			::zpp_nape::util::ZPP_RayResultList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(385)
			tmp13->at_index = (int)0;
			HX_STACK_LINE(386)
			::zpp_nape::util::ZPP_RayResultList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(386)
			::zpp_nape::util::ZNPNode_RayResult tmp15 = tmp14->inner->head;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(386)
			::zpp_nape::util::ZPP_RayResultList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(386)
			tmp16->at_ite = tmp15;
			HX_STACK_LINE(387)
			while((true)){
				HX_STACK_LINE(388)
				::zpp_nape::util::ZPP_RayResultList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(388)
				::nape::geom::RayResult tmp18 = tmp17->at_ite->elt;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(388)
				::nape::geom::RayResult x = tmp18;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(389)
				break;
				HX_STACK_LINE(390)
				::zpp_nape::util::ZPP_RayResultList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(390)
				::zpp_nape::util::ZNPNode_RayResult tmp20 = tmp19->at_ite->next;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(390)
				::zpp_nape::util::ZPP_RayResultList tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(390)
				tmp21->at_ite = tmp20;
			}
		}
		HX_STACK_LINE(393)
		while((true)){
			HX_STACK_LINE(393)
			::zpp_nape::util::ZPP_RayResultList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(393)
			int tmp14 = tmp13->at_index;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(393)
			int tmp15 = index;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(393)
			bool tmp16 = (tmp14 != tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(393)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(393)
			if ((tmp17)){
				HX_STACK_LINE(393)
				break;
			}
			HX_STACK_LINE(394)
			::zpp_nape::util::ZPP_RayResultList tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(394)
			(tmp18->at_index)++;
			HX_STACK_LINE(395)
			::zpp_nape::util::ZPP_RayResultList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(395)
			::zpp_nape::util::ZNPNode_RayResult tmp20 = tmp19->at_ite->next;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(395)
			::zpp_nape::util::ZPP_RayResultList tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(395)
			tmp21->at_ite = tmp20;
			HX_STACK_LINE(396)
			while((true)){
				HX_STACK_LINE(397)
				::zpp_nape::util::ZPP_RayResultList tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(397)
				::nape::geom::RayResult tmp23 = tmp22->at_ite->elt;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(397)
				::nape::geom::RayResult x = tmp23;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(398)
				break;
				HX_STACK_LINE(399)
				::zpp_nape::util::ZPP_RayResultList tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(399)
				::zpp_nape::util::ZNPNode_RayResult tmp25 = tmp24->at_ite->next;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(399)
				::zpp_nape::util::ZPP_RayResultList tmp26 = this->zpp_inner;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(399)
				tmp26->at_ite = tmp25;
			}
		}
	}
	HX_STACK_LINE(403)
	::zpp_nape::util::ZPP_RayResultList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(403)
	::nape::geom::RayResult tmp8 = tmp7->at_ite->elt;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(403)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(RayResultList_obj,at,return )

bool RayResultList_obj::push( ::nape::geom::RayResult obj){
	HX_STACK_FRAME("nape.geom.RayResultList","push",0x04730d8f,"nape.geom.RayResultList.push","nape/geom/RayResultList.hx",416,0x8086abe5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(418)
	::zpp_nape::util::ZPP_RayResultList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(418)
	bool tmp1 = tmp->immutable;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(418)
	if ((tmp1)){
		HX_STACK_LINE(418)
		::String tmp2 = HX_HCSTRING("Error: RayResult","\x39","\xbc","\xce","\x9c");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(418)
		::String tmp3 = (tmp2 + HX_HCSTRING("List is immutable","\x6e","\xb9","\x49","\xba"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(418)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(420)
	::zpp_nape::util::ZPP_RayResultList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(420)
	tmp2->modify_test();
	HX_STACK_LINE(421)
	::zpp_nape::util::ZPP_RayResultList tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(421)
	tmp3->valmod();
	HX_STACK_LINE(424)
	::zpp_nape::util::ZPP_RayResultList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(424)
	Dynamic tmp5 = tmp4->adder;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(424)
	bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(424)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(424)
	if ((tmp6)){
		HX_STACK_LINE(424)
		::zpp_nape::util::ZPP_RayResultList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(424)
		::nape::geom::RayResult tmp9 = obj;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(424)
		tmp7 = tmp8->adder(tmp9);
	}
	else{
		HX_STACK_LINE(424)
		tmp7 = true;
	}
	HX_STACK_LINE(424)
	bool cont = tmp7;		HX_STACK_VAR(cont,"cont");
	HX_STACK_LINE(425)
	bool tmp8 = cont;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(425)
	if ((tmp8)){
		HX_STACK_LINE(426)
		::zpp_nape::util::ZPP_RayResultList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(426)
		bool tmp10 = tmp9->reverse_flag;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(426)
		if ((tmp10)){
			HX_STACK_LINE(426)
			::zpp_nape::util::ZPP_RayResultList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(426)
			::nape::geom::RayResult tmp12 = obj;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(426)
			tmp11->inner->add(tmp12);
		}
		else{
			HX_STACK_LINE(428)
			::zpp_nape::util::ZPP_RayResultList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(428)
			::zpp_nape::util::ZNPNode_RayResult tmp12 = tmp11->push_ite;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(428)
			bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(428)
			if ((tmp13)){
				HX_STACK_LINE(428)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(428)
				{
					HX_STACK_LINE(428)
					::zpp_nape::util::ZPP_RayResultList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(428)
					::zpp_nape::util::ZNPNode_RayResult tmp16 = tmp15->inner->head;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(428)
					tmp14 = (tmp16 == null());
				}
				HX_STACK_LINE(428)
				::zpp_nape::util::ZNPNode_RayResult tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(428)
				if ((tmp14)){
					HX_STACK_LINE(428)
					tmp15 = null();
				}
				else{
					HX_STACK_LINE(428)
					::zpp_nape::util::ZPP_RayResultList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(428)
					int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(428)
					{
						HX_STACK_LINE(428)
						::zpp_nape::util::ZPP_RayResultList tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(428)
						tmp18->valmod();
						HX_STACK_LINE(428)
						::zpp_nape::util::ZPP_RayResultList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(428)
						bool tmp20 = tmp19->zip_length;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(428)
						if ((tmp20)){
							HX_STACK_LINE(428)
							::zpp_nape::util::ZPP_RayResultList tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(428)
							tmp21->zip_length = false;
							HX_STACK_LINE(428)
							{
								HX_STACK_LINE(428)
								::zpp_nape::util::ZPP_RayResultList tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(428)
								int tmp23 = tmp22->inner->length;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(428)
								::zpp_nape::util::ZPP_RayResultList tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(428)
								tmp24->user_length = tmp23;
							}
						}
						HX_STACK_LINE(428)
						::zpp_nape::util::ZPP_RayResultList tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(428)
						tmp17 = tmp21->user_length;
					}
					HX_STACK_LINE(428)
					int tmp18 = (tmp17 - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(428)
					tmp15 = tmp16->inner->iterator_at(tmp18);
				}
				HX_STACK_LINE(428)
				::zpp_nape::util::ZPP_RayResultList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(428)
				tmp16->push_ite = tmp15;
			}
			HX_STACK_LINE(429)
			::zpp_nape::util::ZPP_RayResultList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZPP_RayResultList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZNPNode_RayResult tmp16 = tmp15->push_ite;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(429)
			::nape::geom::RayResult tmp17 = obj;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZNPNode_RayResult tmp18 = tmp14->inner->insert(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZPP_RayResultList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(429)
			tmp19->push_ite = tmp18;
		}
		HX_STACK_LINE(431)
		::zpp_nape::util::ZPP_RayResultList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(431)
		tmp11->invalidate();
		HX_STACK_LINE(432)
		::zpp_nape::util::ZPP_RayResultList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(432)
		Dynamic tmp13 = tmp12->post_adder;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(432)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(432)
		if ((tmp14)){
			HX_STACK_LINE(432)
			::zpp_nape::util::ZPP_RayResultList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(432)
			::nape::geom::RayResult tmp16 = obj;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(432)
			tmp15->post_adder(tmp16);
		}
	}
	HX_STACK_LINE(434)
	bool tmp9 = cont;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(434)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(RayResultList_obj,push,return )

bool RayResultList_obj::unshift( ::nape::geom::RayResult obj){
	HX_STACK_FRAME("nape.geom.RayResultList","unshift",0xff7466f4,"nape.geom.RayResultList.unshift","nape/geom/RayResultList.hx",447,0x8086abe5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(449)
	::zpp_nape::util::ZPP_RayResultList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(449)
	bool tmp1 = tmp->immutable;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(449)
	if ((tmp1)){
		HX_STACK_LINE(449)
		::String tmp2 = HX_HCSTRING("Error: RayResult","\x39","\xbc","\xce","\x9c");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(449)
		::String tmp3 = (tmp2 + HX_HCSTRING("List is immutable","\x6e","\xb9","\x49","\xba"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(449)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(451)
	::zpp_nape::util::ZPP_RayResultList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(451)
	tmp2->modify_test();
	HX_STACK_LINE(452)
	::zpp_nape::util::ZPP_RayResultList tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(452)
	tmp3->valmod();
	HX_STACK_LINE(455)
	::zpp_nape::util::ZPP_RayResultList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(455)
	Dynamic tmp5 = tmp4->adder;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(455)
	bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(455)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(455)
	if ((tmp6)){
		HX_STACK_LINE(455)
		::zpp_nape::util::ZPP_RayResultList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(455)
		::nape::geom::RayResult tmp9 = obj;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(455)
		tmp7 = tmp8->adder(tmp9);
	}
	else{
		HX_STACK_LINE(455)
		tmp7 = true;
	}
	HX_STACK_LINE(455)
	bool cont = tmp7;		HX_STACK_VAR(cont,"cont");
	HX_STACK_LINE(456)
	bool tmp8 = cont;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(456)
	if ((tmp8)){
		HX_STACK_LINE(457)
		::zpp_nape::util::ZPP_RayResultList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(457)
		bool tmp10 = tmp9->reverse_flag;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(457)
		if ((tmp10)){
			HX_STACK_LINE(458)
			::zpp_nape::util::ZPP_RayResultList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(458)
			::zpp_nape::util::ZNPNode_RayResult tmp12 = tmp11->push_ite;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(458)
			bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(458)
			if ((tmp13)){
				HX_STACK_LINE(458)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(458)
				{
					HX_STACK_LINE(458)
					::zpp_nape::util::ZPP_RayResultList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(458)
					::zpp_nape::util::ZNPNode_RayResult tmp16 = tmp15->inner->head;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(458)
					tmp14 = (tmp16 == null());
				}
				HX_STACK_LINE(458)
				::zpp_nape::util::ZNPNode_RayResult tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(458)
				if ((tmp14)){
					HX_STACK_LINE(458)
					tmp15 = null();
				}
				else{
					HX_STACK_LINE(458)
					::zpp_nape::util::ZPP_RayResultList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(458)
					int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(458)
					{
						HX_STACK_LINE(458)
						::zpp_nape::util::ZPP_RayResultList tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(458)
						tmp18->valmod();
						HX_STACK_LINE(458)
						::zpp_nape::util::ZPP_RayResultList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(458)
						bool tmp20 = tmp19->zip_length;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(458)
						if ((tmp20)){
							HX_STACK_LINE(458)
							::zpp_nape::util::ZPP_RayResultList tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(458)
							tmp21->zip_length = false;
							HX_STACK_LINE(458)
							{
								HX_STACK_LINE(458)
								::zpp_nape::util::ZPP_RayResultList tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(458)
								int tmp23 = tmp22->inner->length;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(458)
								::zpp_nape::util::ZPP_RayResultList tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(458)
								tmp24->user_length = tmp23;
							}
						}
						HX_STACK_LINE(458)
						::zpp_nape::util::ZPP_RayResultList tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(458)
						tmp17 = tmp21->user_length;
					}
					HX_STACK_LINE(458)
					int tmp18 = (tmp17 - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(458)
					tmp15 = tmp16->inner->iterator_at(tmp18);
				}
				HX_STACK_LINE(458)
				::zpp_nape::util::ZPP_RayResultList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(458)
				tmp16->push_ite = tmp15;
			}
			HX_STACK_LINE(459)
			::zpp_nape::util::ZPP_RayResultList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(459)
			::zpp_nape::util::ZPP_RayResultList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(459)
			::zpp_nape::util::ZNPNode_RayResult tmp16 = tmp15->push_ite;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(459)
			::nape::geom::RayResult tmp17 = obj;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(459)
			::zpp_nape::util::ZNPNode_RayResult tmp18 = tmp14->inner->insert(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(459)
			::zpp_nape::util::ZPP_RayResultList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(459)
			tmp19->push_ite = tmp18;
		}
		else{
			HX_STACK_LINE(461)
			::zpp_nape::util::ZPP_RayResultList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(461)
			::nape::geom::RayResult tmp12 = obj;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(461)
			tmp11->inner->add(tmp12);
		}
		HX_STACK_LINE(462)
		::zpp_nape::util::ZPP_RayResultList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(462)
		tmp11->invalidate();
		HX_STACK_LINE(463)
		::zpp_nape::util::ZPP_RayResultList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(463)
		Dynamic tmp13 = tmp12->post_adder;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(463)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(463)
		if ((tmp14)){
			HX_STACK_LINE(463)
			::zpp_nape::util::ZPP_RayResultList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(463)
			::nape::geom::RayResult tmp16 = obj;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(463)
			tmp15->post_adder(tmp16);
		}
	}
	HX_STACK_LINE(465)
	bool tmp9 = cont;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(465)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(RayResultList_obj,unshift,return )

::nape::geom::RayResult RayResultList_obj::pop( ){
	HX_STACK_FRAME("nape.geom.RayResultList","pop",0x62bf0f7c,"nape.geom.RayResultList.pop","nape/geom/RayResultList.hx",478,0x8086abe5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(480)
	::zpp_nape::util::ZPP_RayResultList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(480)
	bool tmp1 = tmp->immutable;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(480)
	if ((tmp1)){
		HX_STACK_LINE(480)
		::String tmp2 = HX_HCSTRING("Error: RayResult","\x39","\xbc","\xce","\x9c");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(480)
		::String tmp3 = (tmp2 + HX_HCSTRING("List is immutable","\x6e","\xb9","\x49","\xba"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(480)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(482)
	::zpp_nape::util::ZPP_RayResultList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(482)
	tmp2->modify_test();
	HX_STACK_LINE(484)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(484)
	{
		HX_STACK_LINE(484)
		::zpp_nape::util::ZPP_RayResultList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(484)
		::zpp_nape::util::ZNPNode_RayResult tmp5 = tmp4->inner->head;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(484)
		tmp3 = (tmp5 == null());
	}
	HX_STACK_LINE(484)
	if ((tmp3)){
		HX_STACK_LINE(484)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot remove from empty list","\x3a","\x7e","\x61","\x8d"));
	}
	HX_STACK_LINE(486)
	::zpp_nape::util::ZPP_RayResultList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(486)
	tmp4->valmod();
	HX_STACK_LINE(489)
	::nape::geom::RayResult ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(490)
	::zpp_nape::util::ZPP_RayResultList tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(490)
	bool tmp6 = tmp5->reverse_flag;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(490)
	if ((tmp6)){
		HX_STACK_LINE(491)
		::zpp_nape::util::ZPP_RayResultList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(491)
		::zpp_nape::util::ZNPNode_RayResult tmp8 = tmp7->inner->head;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(491)
		ret = tmp8->elt;
		HX_STACK_LINE(492)
		::nape::geom::RayResult retx = ret;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(493)
		::zpp_nape::util::ZPP_RayResultList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(493)
		Dynamic tmp10 = tmp9->subber;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(493)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(493)
		if ((tmp11)){
			HX_STACK_LINE(493)
			::zpp_nape::util::ZPP_RayResultList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(493)
			::nape::geom::RayResult tmp13 = retx;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(493)
			tmp12->subber(tmp13);
		}
		HX_STACK_LINE(494)
		::zpp_nape::util::ZPP_RayResultList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(494)
		bool tmp13 = tmp12->dontremove;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(494)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(494)
		if ((tmp14)){
			HX_STACK_LINE(494)
			::zpp_nape::util::ZPP_RayResultList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(494)
			tmp15->inner->pop();
		}
	}
	else{
		HX_STACK_LINE(497)
		::zpp_nape::util::ZPP_RayResultList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(497)
		::zpp_nape::util::ZNPNode_RayResult tmp8 = tmp7->at_ite;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(497)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(497)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(497)
		if ((tmp9)){
			HX_STACK_LINE(497)
			::zpp_nape::util::ZPP_RayResultList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(497)
			::zpp_nape::util::ZPP_RayResultList tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(497)
			::zpp_nape::util::ZNPNode_RayResult tmp13 = tmp12->at_ite->next;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(497)
			::zpp_nape::util::ZNPNode_RayResult tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(497)
			tmp10 = (tmp14 == null());
		}
		else{
			HX_STACK_LINE(497)
			tmp10 = false;
		}
		HX_STACK_LINE(497)
		if ((tmp10)){
			HX_STACK_LINE(497)
			::zpp_nape::util::ZPP_RayResultList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(497)
			tmp11->at_ite = null();
		}
		HX_STACK_LINE(498)
		int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			::zpp_nape::util::ZPP_RayResultList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(498)
			tmp12->valmod();
			HX_STACK_LINE(498)
			::zpp_nape::util::ZPP_RayResultList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(498)
			bool tmp14 = tmp13->zip_length;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(498)
			if ((tmp14)){
				HX_STACK_LINE(498)
				::zpp_nape::util::ZPP_RayResultList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(498)
				tmp15->zip_length = false;
				HX_STACK_LINE(498)
				{
					HX_STACK_LINE(498)
					::zpp_nape::util::ZPP_RayResultList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(498)
					int tmp17 = tmp16->inner->length;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(498)
					::zpp_nape::util::ZPP_RayResultList tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(498)
					tmp18->user_length = tmp17;
				}
			}
			HX_STACK_LINE(498)
			::zpp_nape::util::ZPP_RayResultList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(498)
			tmp11 = tmp15->user_length;
		}
		HX_STACK_LINE(498)
		bool tmp12 = (tmp11 == (int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(498)
		::zpp_nape::util::ZNPNode_RayResult tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(498)
		if ((tmp12)){
			HX_STACK_LINE(498)
			tmp13 = null();
		}
		else{
			HX_STACK_LINE(498)
			::zpp_nape::util::ZPP_RayResultList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(498)
			int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(498)
			{
				HX_STACK_LINE(498)
				::zpp_nape::util::ZPP_RayResultList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(498)
				tmp16->valmod();
				HX_STACK_LINE(498)
				::zpp_nape::util::ZPP_RayResultList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(498)
				bool tmp18 = tmp17->zip_length;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(498)
				if ((tmp18)){
					HX_STACK_LINE(498)
					::zpp_nape::util::ZPP_RayResultList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(498)
					tmp19->zip_length = false;
					HX_STACK_LINE(498)
					{
						HX_STACK_LINE(498)
						::zpp_nape::util::ZPP_RayResultList tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(498)
						int tmp21 = tmp20->inner->length;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(498)
						::zpp_nape::util::ZPP_RayResultList tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(498)
						tmp22->user_length = tmp21;
					}
				}
				HX_STACK_LINE(498)
				::zpp_nape::util::ZPP_RayResultList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(498)
				tmp15 = tmp19->user_length;
			}
			HX_STACK_LINE(498)
			int tmp16 = (tmp15 - (int)2);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(498)
			tmp13 = tmp14->inner->iterator_at(tmp16);
		}
		HX_STACK_LINE(498)
		::zpp_nape::util::ZNPNode_RayResult ite = tmp13;		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(499)
		bool tmp14 = (ite == null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(499)
		::nape::geom::RayResult tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(499)
		if ((tmp14)){
			HX_STACK_LINE(499)
			::zpp_nape::util::ZPP_RayResultList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(499)
			::zpp_nape::util::ZNPNode_RayResult tmp17 = tmp16->inner->head;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(499)
			tmp15 = tmp17->elt;
		}
		else{
			HX_STACK_LINE(499)
			tmp15 = ite->next->elt;
		}
		HX_STACK_LINE(499)
		ret = tmp15;
		HX_STACK_LINE(500)
		::nape::geom::RayResult retx = ret;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(501)
		::zpp_nape::util::ZPP_RayResultList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(501)
		Dynamic tmp17 = tmp16->subber;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(501)
		bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(501)
		if ((tmp18)){
			HX_STACK_LINE(501)
			::zpp_nape::util::ZPP_RayResultList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(501)
			::nape::geom::RayResult tmp20 = retx;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(501)
			tmp19->subber(tmp20);
		}
		HX_STACK_LINE(502)
		::zpp_nape::util::ZPP_RayResultList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(502)
		bool tmp20 = tmp19->dontremove;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(502)
		bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(502)
		if ((tmp21)){
			HX_STACK_LINE(502)
			::zpp_nape::util::ZPP_RayResultList tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(502)
			::zpp_nape::util::ZNPNode_RayResult tmp23 = ite;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(502)
			tmp22->inner->erase(tmp23);
		}
	}
	HX_STACK_LINE(504)
	::zpp_nape::util::ZPP_RayResultList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(504)
	tmp7->invalidate();
	HX_STACK_LINE(505)
	::nape::geom::RayResult retx = ret;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(506)
	::nape::geom::RayResult tmp8 = retx;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(506)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(RayResultList_obj,pop,return )

::nape::geom::RayResult RayResultList_obj::shift( ){
	HX_STACK_FRAME("nape.geom.RayResultList","shift",0x91cd2f2d,"nape.geom.RayResultList.shift","nape/geom/RayResultList.hx",519,0x8086abe5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(521)
	::zpp_nape::util::ZPP_RayResultList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(521)
	bool tmp1 = tmp->immutable;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(521)
	if ((tmp1)){
		HX_STACK_LINE(521)
		::String tmp2 = HX_HCSTRING("Error: RayResult","\x39","\xbc","\xce","\x9c");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(521)
		::String tmp3 = (tmp2 + HX_HCSTRING("List is immutable","\x6e","\xb9","\x49","\xba"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(521)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(523)
	::zpp_nape::util::ZPP_RayResultList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(523)
	tmp2->modify_test();
	HX_STACK_LINE(525)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(525)
	{
		HX_STACK_LINE(525)
		::zpp_nape::util::ZPP_RayResultList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(525)
		::zpp_nape::util::ZNPNode_RayResult tmp5 = tmp4->inner->head;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(525)
		tmp3 = (tmp5 == null());
	}
	HX_STACK_LINE(525)
	if ((tmp3)){
		HX_STACK_LINE(525)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot remove from empty list","\x3a","\x7e","\x61","\x8d"));
	}
	HX_STACK_LINE(527)
	::zpp_nape::util::ZPP_RayResultList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(527)
	tmp4->valmod();
	HX_STACK_LINE(530)
	::nape::geom::RayResult ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(531)
	::zpp_nape::util::ZPP_RayResultList tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(531)
	bool tmp6 = tmp5->reverse_flag;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(531)
	if ((tmp6)){
		HX_STACK_LINE(532)
		::zpp_nape::util::ZPP_RayResultList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(532)
		::zpp_nape::util::ZNPNode_RayResult tmp8 = tmp7->at_ite;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(532)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(532)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(532)
		if ((tmp9)){
			HX_STACK_LINE(532)
			::zpp_nape::util::ZPP_RayResultList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(532)
			::zpp_nape::util::ZPP_RayResultList tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(532)
			::zpp_nape::util::ZNPNode_RayResult tmp13 = tmp12->at_ite->next;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(532)
			::zpp_nape::util::ZNPNode_RayResult tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(532)
			tmp10 = (tmp14 == null());
		}
		else{
			HX_STACK_LINE(532)
			tmp10 = false;
		}
		HX_STACK_LINE(532)
		if ((tmp10)){
			HX_STACK_LINE(532)
			::zpp_nape::util::ZPP_RayResultList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(532)
			tmp11->at_ite = null();
		}
		HX_STACK_LINE(533)
		int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(533)
		{
			HX_STACK_LINE(533)
			::zpp_nape::util::ZPP_RayResultList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(533)
			tmp12->valmod();
			HX_STACK_LINE(533)
			::zpp_nape::util::ZPP_RayResultList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(533)
			bool tmp14 = tmp13->zip_length;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(533)
			if ((tmp14)){
				HX_STACK_LINE(533)
				::zpp_nape::util::ZPP_RayResultList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(533)
				tmp15->zip_length = false;
				HX_STACK_LINE(533)
				{
					HX_STACK_LINE(533)
					::zpp_nape::util::ZPP_RayResultList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(533)
					int tmp17 = tmp16->inner->length;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(533)
					::zpp_nape::util::ZPP_RayResultList tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(533)
					tmp18->user_length = tmp17;
				}
			}
			HX_STACK_LINE(533)
			::zpp_nape::util::ZPP_RayResultList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(533)
			tmp11 = tmp15->user_length;
		}
		HX_STACK_LINE(533)
		bool tmp12 = (tmp11 == (int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(533)
		::zpp_nape::util::ZNPNode_RayResult tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(533)
		if ((tmp12)){
			HX_STACK_LINE(533)
			tmp13 = null();
		}
		else{
			HX_STACK_LINE(533)
			::zpp_nape::util::ZPP_RayResultList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(533)
			int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(533)
			{
				HX_STACK_LINE(533)
				::zpp_nape::util::ZPP_RayResultList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(533)
				tmp16->valmod();
				HX_STACK_LINE(533)
				::zpp_nape::util::ZPP_RayResultList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(533)
				bool tmp18 = tmp17->zip_length;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(533)
				if ((tmp18)){
					HX_STACK_LINE(533)
					::zpp_nape::util::ZPP_RayResultList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(533)
					tmp19->zip_length = false;
					HX_STACK_LINE(533)
					{
						HX_STACK_LINE(533)
						::zpp_nape::util::ZPP_RayResultList tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(533)
						int tmp21 = tmp20->inner->length;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(533)
						::zpp_nape::util::ZPP_RayResultList tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(533)
						tmp22->user_length = tmp21;
					}
				}
				HX_STACK_LINE(533)
				::zpp_nape::util::ZPP_RayResultList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(533)
				tmp15 = tmp19->user_length;
			}
			HX_STACK_LINE(533)
			int tmp16 = (tmp15 - (int)2);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(533)
			tmp13 = tmp14->inner->iterator_at(tmp16);
		}
		HX_STACK_LINE(533)
		::zpp_nape::util::ZNPNode_RayResult ite = tmp13;		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(534)
		bool tmp14 = (ite == null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(534)
		::nape::geom::RayResult tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(534)
		if ((tmp14)){
			HX_STACK_LINE(534)
			::zpp_nape::util::ZPP_RayResultList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(534)
			::zpp_nape::util::ZNPNode_RayResult tmp17 = tmp16->inner->head;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(534)
			tmp15 = tmp17->elt;
		}
		else{
			HX_STACK_LINE(534)
			tmp15 = ite->next->elt;
		}
		HX_STACK_LINE(534)
		ret = tmp15;
		HX_STACK_LINE(535)
		::nape::geom::RayResult retx = ret;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(536)
		::zpp_nape::util::ZPP_RayResultList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(536)
		Dynamic tmp17 = tmp16->subber;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(536)
		bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(536)
		if ((tmp18)){
			HX_STACK_LINE(536)
			::zpp_nape::util::ZPP_RayResultList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(536)
			::nape::geom::RayResult tmp20 = retx;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(536)
			tmp19->subber(tmp20);
		}
		HX_STACK_LINE(537)
		::zpp_nape::util::ZPP_RayResultList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(537)
		bool tmp20 = tmp19->dontremove;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(537)
		bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(537)
		if ((tmp21)){
			HX_STACK_LINE(537)
			::zpp_nape::util::ZPP_RayResultList tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(537)
			::zpp_nape::util::ZNPNode_RayResult tmp23 = ite;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(537)
			tmp22->inner->erase(tmp23);
		}
	}
	else{
		HX_STACK_LINE(540)
		::zpp_nape::util::ZPP_RayResultList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(540)
		::zpp_nape::util::ZNPNode_RayResult tmp8 = tmp7->inner->head;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(540)
		ret = tmp8->elt;
		HX_STACK_LINE(541)
		::nape::geom::RayResult retx = ret;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(542)
		::zpp_nape::util::ZPP_RayResultList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(542)
		Dynamic tmp10 = tmp9->subber;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(542)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(542)
		if ((tmp11)){
			HX_STACK_LINE(542)
			::zpp_nape::util::ZPP_RayResultList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(542)
			::nape::geom::RayResult tmp13 = retx;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(542)
			tmp12->subber(tmp13);
		}
		HX_STACK_LINE(543)
		::zpp_nape::util::ZPP_RayResultList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(543)
		bool tmp13 = tmp12->dontremove;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(543)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(543)
		if ((tmp14)){
			HX_STACK_LINE(543)
			::zpp_nape::util::ZPP_RayResultList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(543)
			tmp15->inner->pop();
		}
	}
	HX_STACK_LINE(545)
	::zpp_nape::util::ZPP_RayResultList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(545)
	tmp7->invalidate();
	HX_STACK_LINE(546)
	::nape::geom::RayResult retx = ret;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(547)
	::nape::geom::RayResult tmp8 = retx;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(547)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(RayResultList_obj,shift,return )

bool RayResultList_obj::add( ::nape::geom::RayResult obj){
	HX_STACK_FRAME("nape.geom.RayResultList","add",0x62b3a40c,"nape.geom.RayResultList.add","nape/geom/RayResultList.hx",563,0x8086abe5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(564)
	::zpp_nape::util::ZPP_RayResultList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(564)
	bool tmp1 = tmp->reverse_flag;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(564)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(564)
	if ((tmp1)){
		HX_STACK_LINE(564)
		::nape::geom::RayResult tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(564)
		tmp2 = this->push(tmp3);
	}
	else{
		HX_STACK_LINE(564)
		::nape::geom::RayResult tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(564)
		tmp2 = this->unshift(tmp3);
	}
	HX_STACK_LINE(564)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(RayResultList_obj,add,return )

bool RayResultList_obj::remove( ::nape::geom::RayResult obj){
	HX_STACK_FRAME("nape.geom.RayResultList","remove",0xe3d8af39,"nape.geom.RayResultList.remove","nape/geom/RayResultList.hx",576,0x8086abe5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(578)
	::zpp_nape::util::ZPP_RayResultList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(578)
	bool tmp1 = tmp->immutable;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(578)
	if ((tmp1)){
		HX_STACK_LINE(578)
		::String tmp2 = HX_HCSTRING("Error: RayResult","\x39","\xbc","\xce","\x9c");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(578)
		::String tmp3 = (tmp2 + HX_HCSTRING("List is immutable","\x6e","\xb9","\x49","\xba"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(578)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(580)
	::zpp_nape::util::ZPP_RayResultList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(580)
	tmp2->modify_test();
	HX_STACK_LINE(581)
	::zpp_nape::util::ZPP_RayResultList tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(581)
	tmp3->valmod();
	HX_STACK_LINE(584)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(585)
	{
		HX_STACK_LINE(586)
		ret = false;
		HX_STACK_LINE(587)
		{
			HX_STACK_LINE(588)
			::zpp_nape::util::ZPP_RayResultList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(588)
			::zpp_nape::util::ZNPNode_RayResult tmp5 = tmp4->inner->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(588)
			::zpp_nape::util::ZNPNode_RayResult cx_ite = tmp5;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(589)
			while((true)){
				HX_STACK_LINE(589)
				bool tmp6 = (cx_ite != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(589)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(589)
				if ((tmp7)){
					HX_STACK_LINE(589)
					break;
				}
				HX_STACK_LINE(590)
				::nape::geom::RayResult x = cx_ite->elt;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(591)
				{
					HX_STACK_LINE(592)
					bool tmp8 = (x == obj);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(592)
					if ((tmp8)){
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
	bool tmp4 = ret;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(601)
	if ((tmp4)){
		HX_STACK_LINE(602)
		::zpp_nape::util::ZPP_RayResultList tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(602)
		Dynamic tmp6 = tmp5->subber;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(602)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(602)
		if ((tmp7)){
			HX_STACK_LINE(602)
			::zpp_nape::util::ZPP_RayResultList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(602)
			::nape::geom::RayResult tmp9 = obj;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(602)
			tmp8->subber(tmp9);
		}
		HX_STACK_LINE(603)
		::zpp_nape::util::ZPP_RayResultList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(603)
		bool tmp9 = tmp8->dontremove;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(603)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(603)
		if ((tmp10)){
			HX_STACK_LINE(603)
			::zpp_nape::util::ZPP_RayResultList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(603)
			::nape::geom::RayResult tmp12 = obj;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(603)
			tmp11->inner->remove(tmp12);
		}
		HX_STACK_LINE(604)
		::zpp_nape::util::ZPP_RayResultList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(604)
		tmp11->invalidate();
	}
	HX_STACK_LINE(606)
	bool tmp5 = ret;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(606)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(RayResultList_obj,remove,return )

Void RayResultList_obj::clear( ){
{
		HX_STACK_FRAME("nape.geom.RayResultList","clear",0x5e05b438,"nape.geom.RayResultList.clear","nape/geom/RayResultList.hx",614,0x8086abe5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(616)
		::zpp_nape::util::ZPP_RayResultList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(616)
		bool tmp1 = tmp->immutable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(616)
		if ((tmp1)){
			HX_STACK_LINE(616)
			::String tmp2 = HX_HCSTRING("Error: RayResult","\x39","\xbc","\xce","\x9c");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(616)
			::String tmp3 = (tmp2 + HX_HCSTRING("List is immutable","\x6e","\xb9","\x49","\xba"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(616)
			HX_STACK_DO_THROW(tmp3);
		}
		HX_STACK_LINE(618)
		::zpp_nape::util::ZPP_RayResultList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(618)
		bool tmp3 = tmp2->reverse_flag;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(618)
		if ((tmp3)){
			HX_STACK_LINE(619)
			while((true)){
				HX_STACK_LINE(619)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(619)
				{
					HX_STACK_LINE(619)
					::zpp_nape::util::ZPP_RayResultList tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(619)
					::zpp_nape::util::ZNPNode_RayResult tmp6 = tmp5->inner->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(619)
					tmp4 = (tmp6 == null());
				}
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
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(622)
				{
					HX_STACK_LINE(622)
					::zpp_nape::util::ZPP_RayResultList tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(622)
					::zpp_nape::util::ZNPNode_RayResult tmp6 = tmp5->inner->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(622)
					tmp4 = (tmp6 == null());
				}
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


HX_DEFINE_DYNAMIC_FUNC0(RayResultList_obj,clear,(void))

bool RayResultList_obj::empty( ){
	HX_STACK_FRAME("nape.geom.RayResultList","empty",0x85847d38,"nape.geom.RayResultList.empty","nape/geom/RayResultList.hx",633,0x8086abe5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(633)
	::zpp_nape::util::ZPP_RayResultList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(633)
	::zpp_nape::util::ZNPNode_RayResult tmp1 = tmp->inner->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(633)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(633)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(RayResultList_obj,empty,return )

::nape::geom::RayResultIterator RayResultList_obj::iterator( ){
	HX_STACK_FRAME("nape.geom.RayResultList","iterator",0xf54cc423,"nape.geom.RayResultList.iterator","nape/geom/RayResultList.hx",647,0x8086abe5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(648)
	::zpp_nape::util::ZPP_RayResultList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(648)
	tmp->valmod();
	HX_STACK_LINE(651)
	::nape::geom::RayResultIterator tmp1 = ::nape::geom::RayResultIterator_obj::get(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(651)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(RayResultList_obj,iterator,return )

::nape::geom::RayResultList RayResultList_obj::copy( hx::Null< bool >  __o_deep){
bool deep = __o_deep.Default(false);
	HX_STACK_FRAME("nape.geom.RayResultList","copy",0xfbd6b76a,"nape.geom.RayResultList.copy","nape/geom/RayResultList.hx",662,0x8086abe5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(deep,"deep")
{
		HX_STACK_LINE(663)
		::nape::geom::RayResultList tmp = ::nape::geom::RayResultList_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(663)
		::nape::geom::RayResultList ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(664)
		{
			HX_STACK_LINE(664)
			::nape::geom::RayResultIterator tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(664)
			{
				HX_STACK_LINE(664)
				::zpp_nape::util::ZPP_RayResultList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(664)
				tmp2->valmod();
				HX_STACK_LINE(664)
				tmp1 = ::nape::geom::RayResultIterator_obj::get(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(664)
			::nape::geom::RayResultIterator _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(664)
			while((true)){
				HX_STACK_LINE(664)
				bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(664)
				{
					HX_STACK_LINE(664)
					::zpp_nape::util::ZPP_RayResultList tmp3 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(664)
					tmp3->valmod();
					HX_STACK_LINE(664)
					int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(664)
					{
						HX_STACK_LINE(664)
						::nape::geom::RayResultList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(664)
						_this->zpp_inner->valmod();
						HX_STACK_LINE(664)
						bool tmp5 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(664)
						if ((tmp5)){
							HX_STACK_LINE(664)
							_this->zpp_inner->zip_length = false;
							HX_STACK_LINE(664)
							{
								HX_STACK_LINE(664)
								::zpp_nape::util::ZNPList_RayResult tmp6 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(664)
								_this->zpp_inner->user_length = tmp6->length;
							}
						}
						HX_STACK_LINE(664)
						tmp4 = _this->zpp_inner->user_length;
					}
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
							::nape::geom::RayResultIterator tmp6 = ::nape::geom::RayResultIterator_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(664)
							_g->zpp_next = tmp6;
							HX_STACK_LINE(664)
							::nape::geom::RayResultIterator_obj::zpp_pool = _g;
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
				::nape::geom::RayResult tmp4;		HX_STACK_VAR(tmp4,"tmp4");
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
				::nape::geom::RayResult i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(664)
				bool tmp5 = deep;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(664)
				::nape::geom::RayResult tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(664)
				if ((tmp5)){
					HX_STACK_LINE(666)
					::String tmp7 = HX_HCSTRING("Error: RayResult","\x39","\xbc","\xce","\x9c");		HX_STACK_VAR(tmp7,"tmp7");
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
		::nape::geom::RayResultList tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(671)
		return tmp1;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(RayResultList_obj,copy,return )

Void RayResultList_obj::merge( ::nape::geom::RayResultList xs){
{
		HX_STACK_FRAME("nape.geom.RayResultList","merge",0x1b70e563,"nape.geom.RayResultList.merge","nape/geom/RayResultList.hx",684,0x8086abe5)
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
			::nape::geom::RayResultIterator tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(688)
			{
				HX_STACK_LINE(688)
				xs->zpp_inner->valmod();
				HX_STACK_LINE(688)
				::nape::geom::RayResultList tmp2 = xs;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(688)
				tmp1 = ::nape::geom::RayResultIterator_obj::get(tmp2);
			}
			HX_STACK_LINE(688)
			::nape::geom::RayResultIterator _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(688)
			while((true)){
				HX_STACK_LINE(688)
				bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(688)
				{
					HX_STACK_LINE(688)
					::zpp_nape::util::ZPP_RayResultList tmp3 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(688)
					tmp3->valmod();
					HX_STACK_LINE(688)
					int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(688)
					{
						HX_STACK_LINE(688)
						::nape::geom::RayResultList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(688)
						_this->zpp_inner->valmod();
						HX_STACK_LINE(688)
						bool tmp5 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(688)
						if ((tmp5)){
							HX_STACK_LINE(688)
							_this->zpp_inner->zip_length = false;
							HX_STACK_LINE(688)
							{
								HX_STACK_LINE(688)
								::zpp_nape::util::ZNPList_RayResult tmp6 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(688)
								_this->zpp_inner->user_length = tmp6->length;
							}
						}
						HX_STACK_LINE(688)
						tmp4 = _this->zpp_inner->user_length;
					}
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
							::nape::geom::RayResultIterator tmp6 = ::nape::geom::RayResultIterator_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(688)
							_g->zpp_next = tmp6;
							HX_STACK_LINE(688)
							::nape::geom::RayResultIterator_obj::zpp_pool = _g;
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
				::nape::geom::RayResult tmp4;		HX_STACK_VAR(tmp4,"tmp4");
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
				::nape::geom::RayResult x = tmp4;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(689)
				::nape::geom::RayResult tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(689)
				bool tmp6 = this->has(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(689)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(689)
				if ((tmp7)){
					HX_STACK_LINE(689)
					::zpp_nape::util::ZPP_RayResultList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(689)
					bool tmp9 = tmp8->reverse_flag;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(689)
					if ((tmp9)){
						HX_STACK_LINE(689)
						::nape::geom::RayResult tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(689)
						this->push(tmp10);
					}
					else{
						HX_STACK_LINE(689)
						::nape::geom::RayResult tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(689)
						this->unshift(tmp10);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RayResultList_obj,merge,(void))

::String RayResultList_obj::toString( ){
	HX_STACK_FRAME("nape.geom.RayResultList","toString",0x9a214ae1,"nape.geom.RayResultList.toString","nape/geom/RayResultList.hx",702,0x8086abe5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(703)
	::String ret = HX_HCSTRING("[","\x5b","\x00","\x00","\x00");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(704)
	bool fst = true;		HX_STACK_VAR(fst,"fst");
	HX_STACK_LINE(705)
	{
		HX_STACK_LINE(705)
		::nape::geom::RayResultIterator tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(705)
		{
			HX_STACK_LINE(705)
			::zpp_nape::util::ZPP_RayResultList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(705)
			tmp1->valmod();
			HX_STACK_LINE(705)
			tmp = ::nape::geom::RayResultIterator_obj::get(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(705)
		::nape::geom::RayResultIterator _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(705)
		while((true)){
			HX_STACK_LINE(705)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(705)
			{
				HX_STACK_LINE(705)
				::zpp_nape::util::ZPP_RayResultList tmp2 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(705)
				tmp2->valmod();
				HX_STACK_LINE(705)
				int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(705)
				{
					HX_STACK_LINE(705)
					::nape::geom::RayResultList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(705)
					_this->zpp_inner->valmod();
					HX_STACK_LINE(705)
					bool tmp4 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(705)
					if ((tmp4)){
						HX_STACK_LINE(705)
						_this->zpp_inner->zip_length = false;
						HX_STACK_LINE(705)
						{
							HX_STACK_LINE(705)
							::zpp_nape::util::ZNPList_RayResult tmp5 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(705)
							_this->zpp_inner->user_length = tmp5->length;
						}
					}
					HX_STACK_LINE(705)
					tmp3 = _this->zpp_inner->user_length;
				}
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
						::nape::geom::RayResultIterator tmp5 = ::nape::geom::RayResultIterator_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(705)
						_g->zpp_next = tmp5;
						HX_STACK_LINE(705)
						::nape::geom::RayResultIterator_obj::zpp_pool = _g;
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
			::nape::geom::RayResult tmp3;		HX_STACK_VAR(tmp3,"tmp3");
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
			::nape::geom::RayResult i = tmp3;		HX_STACK_VAR(i,"i");
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


HX_DEFINE_DYNAMIC_FUNC0(RayResultList_obj,toString,return )

::nape::geom::RayResultList RayResultList_obj::foreach( Dynamic lambda){
	HX_STACK_FRAME("nape.geom.RayResultList","foreach",0x60a580f5,"nape.geom.RayResultList.foreach","nape/geom/RayResultList.hx",732,0x8086abe5)
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
	::nape::geom::RayResultIterator tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(736)
	{
		HX_STACK_LINE(736)
		::zpp_nape::util::ZPP_RayResultList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(736)
		tmp2->valmod();
		HX_STACK_LINE(736)
		tmp1 = ::nape::geom::RayResultIterator_obj::get(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(736)
	::nape::geom::RayResultIterator it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(737)
	while((true)){
		HX_STACK_LINE(737)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(737)
		{
			HX_STACK_LINE(737)
			::zpp_nape::util::ZPP_RayResultList tmp3 = it->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(737)
			tmp3->valmod();
			HX_STACK_LINE(737)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(737)
			{
				HX_STACK_LINE(737)
				::nape::geom::RayResultList _this = it->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(737)
				_this->zpp_inner->valmod();
				HX_STACK_LINE(737)
				bool tmp5 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(737)
				if ((tmp5)){
					HX_STACK_LINE(737)
					_this->zpp_inner->zip_length = false;
					HX_STACK_LINE(737)
					{
						HX_STACK_LINE(737)
						::zpp_nape::util::ZNPList_RayResult tmp6 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(737)
						_this->zpp_inner->user_length = tmp6->length;
					}
				}
				HX_STACK_LINE(737)
				tmp4 = _this->zpp_inner->user_length;
			}
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
					::nape::geom::RayResultIterator tmp6 = ::nape::geom::RayResultIterator_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(737)
					it->zpp_next = tmp6;
					HX_STACK_LINE(737)
					::nape::geom::RayResultIterator_obj::zpp_pool = it;
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
			::nape::geom::RayResult tmp4;		HX_STACK_VAR(tmp4,"tmp4");
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
						::nape::geom::RayResultIterator tmp4 = ::nape::geom::RayResultIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(743)
						it->zpp_next = tmp4;
						HX_STACK_LINE(744)
						::nape::geom::RayResultIterator_obj::zpp_pool = it;
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


HX_DEFINE_DYNAMIC_FUNC1(RayResultList_obj,foreach,return )

::nape::geom::RayResultList RayResultList_obj::filter( Dynamic lambda){
	HX_STACK_FRAME("nape.geom.RayResultList","filter",0x648532ad,"nape.geom.RayResultList.filter","nape/geom/RayResultList.hx",779,0x8086abe5)
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
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(784)
		{
			HX_STACK_LINE(784)
			::zpp_nape::util::ZPP_RayResultList tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(784)
			tmp3->valmod();
			HX_STACK_LINE(784)
			::zpp_nape::util::ZPP_RayResultList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(784)
			bool tmp5 = tmp4->zip_length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(784)
			if ((tmp5)){
				HX_STACK_LINE(784)
				::zpp_nape::util::ZPP_RayResultList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(784)
				tmp6->zip_length = false;
				HX_STACK_LINE(784)
				{
					HX_STACK_LINE(784)
					::zpp_nape::util::ZPP_RayResultList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(784)
					int tmp8 = tmp7->inner->length;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(784)
					::zpp_nape::util::ZPP_RayResultList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(784)
					tmp9->user_length = tmp8;
				}
			}
			HX_STACK_LINE(784)
			::zpp_nape::util::ZPP_RayResultList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(784)
			tmp2 = tmp6->user_length;
		}
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
		::nape::geom::RayResult tmp6 = this->at(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(785)
		::nape::geom::RayResult x = tmp6;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(786)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(787)
			::nape::geom::RayResult tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(787)
			bool tmp8 = lambda(tmp7).Cast< bool >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(787)
			if ((tmp8)){
				HX_STACK_LINE(787)
				(i)++;
			}
			else{
				HX_STACK_LINE(788)
				::nape::geom::RayResult tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
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


HX_DEFINE_DYNAMIC_FUNC1(RayResultList_obj,filter,return )

::nape::geom::RayResultList RayResultList_obj::fromArray( Array< ::Dynamic > array){
	HX_STACK_FRAME("nape.geom.RayResultList","fromArray",0xf490cbfa,"nape.geom.RayResultList.fromArray","nape/geom/RayResultList.hx",304,0x8086abe5)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(306)
	bool tmp = (array == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(306)
	if ((tmp)){
		HX_STACK_LINE(307)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot convert null Array to Nape list","\x35","\xf1","\x7a","\x22"));
	}
	HX_STACK_LINE(310)
	::nape::geom::RayResultList tmp1 = ::nape::geom::RayResultList_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(310)
	::nape::geom::RayResultList ret = tmp1;		HX_STACK_VAR(ret,"ret");
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
			::nape::geom::RayResult tmp4 = array->__get(_g).StaticCast< ::nape::geom::RayResult >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(311)
			::nape::geom::RayResult i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(311)
			++(_g);
			HX_STACK_LINE(316)
			::nape::geom::RayResult tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(316)
			ret->push(tmp5);
		}
	}
	HX_STACK_LINE(318)
	::nape::geom::RayResultList tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(318)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RayResultList_obj,fromArray,return )


RayResultList_obj::RayResultList_obj()
{
}

void RayResultList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RayResultList);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void RayResultList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic RayResultList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

bool RayResultList_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromArray") ) { outValue = fromArray_dyn(); return true;  }
	}
	return false;
}

Dynamic RayResultList_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::util::ZPP_RayResultList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RayResultList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZPP_RayResultList*/ ,(int)offsetof(RayResultList_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
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
	HX_MARK_MEMBER_NAME(RayResultList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RayResultList_obj::__mClass,"__mClass");
};

#endif

hx::Class RayResultList_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromArray","\xcf","\x57","\x18","\xda"),
	::String(null()) };

void RayResultList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.geom.RayResultList","\xd9","\x00","\x0e","\xb3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &RayResultList_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RayResultList_obj >;
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
} // end namespace geom