#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_InteractionListener
#include <zpp_nape/callbacks/ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_InteractionListener
#include <zpp_nape/util/ZNPList_ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_InteractionListener
#include <zpp_nape/util/ZNPNode_ZPP_InteractionListener.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_InteractionListener_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","new",0x848f65c3,"zpp_nape.util.ZNPList_ZPP_InteractionListener.new","zpp_nape/util/Lists.hx",3094,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(3104)
	this->length = (int)0;
	HX_STACK_LINE(3103)
	this->pushmod = false;
	HX_STACK_LINE(3102)
	this->modified = false;
	HX_STACK_LINE(3095)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_InteractionListener_obj::~ZNPList_ZPP_InteractionListener_obj() { }

Dynamic ZNPList_ZPP_InteractionListener_obj::__CreateEmpty() { return  new ZNPList_ZPP_InteractionListener_obj; }
hx::ObjectPtr< ZNPList_ZPP_InteractionListener_obj > ZNPList_ZPP_InteractionListener_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_InteractionListener_obj > _result_ = new ZNPList_ZPP_InteractionListener_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPList_ZPP_InteractionListener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_InteractionListener_obj > _result_ = new ZNPList_ZPP_InteractionListener_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::util::ZNPNode_ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","begin",0x6aabde4c,"zpp_nape.util.ZNPList_ZPP_InteractionListener.begin","zpp_nape/util/Lists.hx",3099,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(3100)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3100)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,begin,return )

Void ZNPList_ZPP_InteractionListener_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_InteractionListener i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","setbegin",0x3359e704,"zpp_nape.util.ZNPList_ZPP_InteractionListener.setbegin","zpp_nape/util/Lists.hx",3107,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(3108)
		this->head = i;
		HX_STACK_LINE(3109)
		this->modified = true;
		HX_STACK_LINE(3110)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,setbegin,(void))

::zpp_nape::callbacks::ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::add( ::zpp_nape::callbacks::ZPP_InteractionListener o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","add",0x84858784,"zpp_nape.util.ZNPList_ZPP_InteractionListener.add","zpp_nape/util/Lists.hx",3112,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(3113)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3113)
	{
		HX_STACK_LINE(3113)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3113)
		{
			HX_STACK_LINE(3113)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(3113)
			{
				HX_STACK_LINE(3113)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp2 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(3113)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(3113)
				if ((tmp3)){
					HX_STACK_LINE(3113)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(3113)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(3113)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(3113)
					ret = tmp4;
					HX_STACK_LINE(3113)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
					HX_STACK_LINE(3113)
					ret->next = null();
				}
				HX_STACK_LINE(3113)
				Dynamic();
			}
			HX_STACK_LINE(3113)
			ret->elt = o;
			HX_STACK_LINE(3113)
			tmp1 = ret;
		}
		HX_STACK_LINE(3113)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(3113)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3113)
		temp->next = tmp2;
		HX_STACK_LINE(3113)
		this->head = temp;
		HX_STACK_LINE(3113)
		this->modified = true;
		HX_STACK_LINE(3113)
		(this->length)++;
		HX_STACK_LINE(3113)
		tmp = o;
	}
	HX_STACK_LINE(3113)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,add,return )

::zpp_nape::callbacks::ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::inlined_add( ::zpp_nape::callbacks::ZPP_InteractionListener o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","inlined_add",0xcee27cf0,"zpp_nape.util.ZNPList_ZPP_InteractionListener.inlined_add","zpp_nape/util/Lists.hx",3117,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(3126)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3126)
	{
		HX_STACK_LINE(3127)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3128)
		{
			HX_STACK_LINE(3129)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(3129)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3129)
			if ((tmp2)){
				HX_STACK_LINE(3130)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp3 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(3130)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(3136)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp3 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(3136)
				ret = tmp3;
				HX_STACK_LINE(3137)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
				HX_STACK_LINE(3138)
				ret->next = null();
			}
			HX_STACK_LINE(3143)
			Dynamic();
		}
		HX_STACK_LINE(3145)
		ret->elt = o;
		HX_STACK_LINE(3146)
		tmp = ret;
	}
	HX_STACK_LINE(3126)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(3148)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3148)
	temp->next = tmp1;
	HX_STACK_LINE(3149)
	this->head = temp;
	HX_STACK_LINE(3150)
	this->modified = true;
	HX_STACK_LINE(3151)
	(this->length)++;
	HX_STACK_LINE(3152)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(3152)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,inlined_add,return )

Void ZNPList_ZPP_InteractionListener_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_InteractionListener x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","addAll",0xefdab3fd,"zpp_nape.util.ZNPList_ZPP_InteractionListener.addAll","zpp_nape/util/Lists.hx",3163,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(3164)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(3165)
		while((true)){
			HX_STACK_LINE(3165)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(3165)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(3165)
			if ((tmp1)){
				HX_STACK_LINE(3165)
				break;
			}
			HX_STACK_LINE(3166)
			::zpp_nape::callbacks::ZPP_InteractionListener i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(3167)
			::zpp_nape::callbacks::ZPP_InteractionListener tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3167)
			this->add(tmp2);
			HX_STACK_LINE(3168)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_InteractionListener cur,::zpp_nape::callbacks::ZPP_InteractionListener o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","insert",0xeebcedb6,"zpp_nape.util.ZNPList_ZPP_InteractionListener.insert","zpp_nape/util/Lists.hx",3172,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(3173)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3173)
	{
		HX_STACK_LINE(3173)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3173)
		{
			HX_STACK_LINE(3173)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(3173)
			{
				HX_STACK_LINE(3173)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp2 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(3173)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(3173)
				if ((tmp3)){
					HX_STACK_LINE(3173)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(3173)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(3173)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(3173)
					ret = tmp4;
					HX_STACK_LINE(3173)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
					HX_STACK_LINE(3173)
					ret->next = null();
				}
				HX_STACK_LINE(3173)
				Dynamic();
			}
			HX_STACK_LINE(3173)
			ret->elt = o;
			HX_STACK_LINE(3173)
			tmp1 = ret;
		}
		HX_STACK_LINE(3173)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(3173)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3173)
		if ((tmp2)){
			HX_STACK_LINE(3173)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(3173)
			temp->next = tmp3;
			HX_STACK_LINE(3173)
			this->head = temp;
		}
		else{
			HX_STACK_LINE(3173)
			temp->next = cur->next;
			HX_STACK_LINE(3173)
			cur->next = temp;
		}
		HX_STACK_LINE(3173)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(3173)
		this->pushmod = tmp3;
		HX_STACK_LINE(3173)
		(this->length)++;
		HX_STACK_LINE(3173)
		tmp = temp;
	}
	HX_STACK_LINE(3173)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_InteractionListener_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_InteractionListener cur,::zpp_nape::callbacks::ZPP_InteractionListener o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","inlined_insert",0xbe8a23ca,"zpp_nape.util.ZNPList_ZPP_InteractionListener.inlined_insert","zpp_nape/util/Lists.hx",3177,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(3186)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3186)
	{
		HX_STACK_LINE(3187)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3188)
		{
			HX_STACK_LINE(3189)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(3189)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3189)
			if ((tmp2)){
				HX_STACK_LINE(3190)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp3 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(3190)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(3196)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp3 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(3196)
				ret = tmp3;
				HX_STACK_LINE(3197)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
				HX_STACK_LINE(3198)
				ret->next = null();
			}
			HX_STACK_LINE(3203)
			Dynamic();
		}
		HX_STACK_LINE(3205)
		ret->elt = o;
		HX_STACK_LINE(3206)
		tmp = ret;
	}
	HX_STACK_LINE(3186)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(3208)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3208)
	if ((tmp1)){
		HX_STACK_LINE(3209)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3209)
		temp->next = tmp2;
		HX_STACK_LINE(3210)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(3213)
		temp->next = cur->next;
		HX_STACK_LINE(3214)
		cur->next = temp;
	}
	HX_STACK_LINE(3216)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(3216)
	this->pushmod = tmp2;
	HX_STACK_LINE(3217)
	(this->length)++;
	HX_STACK_LINE(3218)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(3218)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_InteractionListener_obj,inlined_insert,return )

Void ZNPList_ZPP_InteractionListener_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","pop",0x8490f2f4,"zpp_nape.util.ZNPList_ZPP_InteractionListener.pop","zpp_nape/util/Lists.hx",3221,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(3221)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3221)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3221)
		this->head = ret->next;
		HX_STACK_LINE(3221)
		{
			HX_STACK_LINE(3221)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(3221)
			o->elt = null();
			HX_STACK_LINE(3221)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(3221)
			o->next = tmp1;
			HX_STACK_LINE(3221)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
		}
		HX_STACK_LINE(3221)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3221)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3221)
		if ((tmp2)){
			HX_STACK_LINE(3221)
			this->pushmod = true;
		}
		HX_STACK_LINE(3221)
		this->modified = true;
		HX_STACK_LINE(3221)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,pop,(void))

Void ZNPList_ZPP_InteractionListener_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","inlined_pop",0xceede860,"zpp_nape.util.ZNPList_ZPP_InteractionListener.inlined_pop","zpp_nape/util/Lists.hx",3225,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(3234)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3234)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3235)
		this->head = ret->next;
		HX_STACK_LINE(3237)
		{
			HX_STACK_LINE(3238)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(3247)
			o->elt = null();
			HX_STACK_LINE(3248)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(3248)
			o->next = tmp1;
			HX_STACK_LINE(3249)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
		}
		HX_STACK_LINE(3254)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3254)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3254)
		if ((tmp2)){
			HX_STACK_LINE(3254)
			this->pushmod = true;
		}
		HX_STACK_LINE(3255)
		this->modified = true;
		HX_STACK_LINE(3256)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,inlined_pop,(void))

::zpp_nape::callbacks::ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","pop_unsafe",0x39ffa951,"zpp_nape.util.ZNPList_ZPP_InteractionListener.pop_unsafe","zpp_nape/util/Lists.hx",3258,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(3259)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3259)
	{
		HX_STACK_LINE(3259)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3259)
		::zpp_nape::callbacks::ZPP_InteractionListener ret = tmp1->elt;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3259)
		this->pop();
		HX_STACK_LINE(3259)
		tmp = ret;
	}
	HX_STACK_LINE(3259)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,pop_unsafe,return )

::zpp_nape::callbacks::ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","inlined_pop_unsafe",0x9ba37965,"zpp_nape.util.ZNPList_ZPP_InteractionListener.inlined_pop_unsafe","zpp_nape/util/Lists.hx",3263,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(3272)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3272)
	::zpp_nape::callbacks::ZPP_InteractionListener ret = tmp->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3273)
	this->pop();
	HX_STACK_LINE(3274)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3274)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_InteractionListener_obj::remove( ::zpp_nape::callbacks::ZPP_InteractionListener obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","remove",0x556846c1,"zpp_nape.util.ZNPList_ZPP_InteractionListener.remove","zpp_nape/util/Lists.hx",3285,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(3285)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(3285)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3285)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(3285)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3285)
		while((true)){
			HX_STACK_LINE(3285)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(3285)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3285)
			if ((tmp2)){
				HX_STACK_LINE(3285)
				break;
			}
			HX_STACK_LINE(3285)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(3285)
			if ((tmp3)){
				HX_STACK_LINE(3285)
				{
					HX_STACK_LINE(3285)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(3285)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(3285)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(3285)
					if ((tmp4)){
						HX_STACK_LINE(3285)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(3285)
						old = tmp5;
						HX_STACK_LINE(3285)
						ret1 = old->next;
						HX_STACK_LINE(3285)
						this->head = ret1;
						HX_STACK_LINE(3285)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(3285)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(3285)
						if ((tmp7)){
							HX_STACK_LINE(3285)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(3285)
						old = pre->next;
						HX_STACK_LINE(3285)
						ret1 = old->next;
						HX_STACK_LINE(3285)
						pre->next = ret1;
						HX_STACK_LINE(3285)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(3285)
						if ((tmp5)){
							HX_STACK_LINE(3285)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(3285)
					{
						HX_STACK_LINE(3285)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(3285)
						o->elt = null();
						HX_STACK_LINE(3285)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp5 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(3285)
						o->next = tmp5;
						HX_STACK_LINE(3285)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
					}
					HX_STACK_LINE(3285)
					this->modified = true;
					HX_STACK_LINE(3285)
					(this->length)--;
					HX_STACK_LINE(3285)
					this->pushmod = true;
					HX_STACK_LINE(3285)
					ret1;
				}
				HX_STACK_LINE(3285)
				ret = true;
				HX_STACK_LINE(3285)
				break;
			}
			HX_STACK_LINE(3285)
			pre = cur;
			HX_STACK_LINE(3285)
			cur = cur->next;
		}
		HX_STACK_LINE(3285)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,remove,(void))

bool ZNPList_ZPP_InteractionListener_obj::try_remove( ::zpp_nape::callbacks::ZPP_InteractionListener obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","try_remove",0x5129df05,"zpp_nape.util.ZNPList_ZPP_InteractionListener.try_remove","zpp_nape/util/Lists.hx",3287,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(3296)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(3297)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3297)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3298)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3299)
	while((true)){
		HX_STACK_LINE(3299)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3299)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3299)
		if ((tmp2)){
			HX_STACK_LINE(3299)
			break;
		}
		HX_STACK_LINE(3300)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(3300)
		if ((tmp3)){
			HX_STACK_LINE(3301)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(3301)
			this->erase(tmp4);
			HX_STACK_LINE(3302)
			ret = true;
			HX_STACK_LINE(3303)
			break;
		}
		HX_STACK_LINE(3305)
		pre = cur;
		HX_STACK_LINE(3306)
		cur = cur->next;
	}
	HX_STACK_LINE(3308)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3308)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,try_remove,return )

Void ZNPList_ZPP_InteractionListener_obj::inlined_remove( ::zpp_nape::callbacks::ZPP_InteractionListener obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","inlined_remove",0x25357cd5,"zpp_nape.util.ZNPList_ZPP_InteractionListener.inlined_remove","zpp_nape/util/Lists.hx",3321,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(3321)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(3321)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3321)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(3321)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3321)
		while((true)){
			HX_STACK_LINE(3321)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(3321)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3321)
			if ((tmp2)){
				HX_STACK_LINE(3321)
				break;
			}
			HX_STACK_LINE(3321)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(3321)
			if ((tmp3)){
				HX_STACK_LINE(3321)
				{
					HX_STACK_LINE(3321)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(3321)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(3321)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(3321)
					if ((tmp4)){
						HX_STACK_LINE(3321)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(3321)
						old = tmp5;
						HX_STACK_LINE(3321)
						ret1 = old->next;
						HX_STACK_LINE(3321)
						this->head = ret1;
						HX_STACK_LINE(3321)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(3321)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(3321)
						if ((tmp7)){
							HX_STACK_LINE(3321)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(3321)
						old = pre->next;
						HX_STACK_LINE(3321)
						ret1 = old->next;
						HX_STACK_LINE(3321)
						pre->next = ret1;
						HX_STACK_LINE(3321)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(3321)
						if ((tmp5)){
							HX_STACK_LINE(3321)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(3321)
					{
						HX_STACK_LINE(3321)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(3321)
						o->elt = null();
						HX_STACK_LINE(3321)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp5 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(3321)
						o->next = tmp5;
						HX_STACK_LINE(3321)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
					}
					HX_STACK_LINE(3321)
					this->modified = true;
					HX_STACK_LINE(3321)
					(this->length)--;
					HX_STACK_LINE(3321)
					this->pushmod = true;
					HX_STACK_LINE(3321)
					ret1;
				}
				HX_STACK_LINE(3321)
				ret = true;
				HX_STACK_LINE(3321)
				break;
			}
			HX_STACK_LINE(3321)
			pre = cur;
			HX_STACK_LINE(3321)
			cur = cur->next;
		}
		HX_STACK_LINE(3321)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,inlined_remove,(void))

bool ZNPList_ZPP_InteractionListener_obj::inlined_try_remove( ::zpp_nape::callbacks::ZPP_InteractionListener obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","inlined_try_remove",0xb2cdaf19,"zpp_nape.util.ZNPList_ZPP_InteractionListener.inlined_try_remove","zpp_nape/util/Lists.hx",3325,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(3334)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(3335)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3335)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3336)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3337)
	while((true)){
		HX_STACK_LINE(3337)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3337)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3337)
		if ((tmp2)){
			HX_STACK_LINE(3337)
			break;
		}
		HX_STACK_LINE(3338)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(3338)
		if ((tmp3)){
			HX_STACK_LINE(3339)
			{
				HX_STACK_LINE(3339)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(3339)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(3339)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(3339)
				if ((tmp4)){
					HX_STACK_LINE(3339)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(3339)
					old = tmp5;
					HX_STACK_LINE(3339)
					ret1 = old->next;
					HX_STACK_LINE(3339)
					this->head = ret1;
					HX_STACK_LINE(3339)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(3339)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(3339)
					if ((tmp7)){
						HX_STACK_LINE(3339)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(3339)
					old = pre->next;
					HX_STACK_LINE(3339)
					ret1 = old->next;
					HX_STACK_LINE(3339)
					pre->next = ret1;
					HX_STACK_LINE(3339)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(3339)
					if ((tmp5)){
						HX_STACK_LINE(3339)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(3339)
				{
					HX_STACK_LINE(3339)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(3339)
					o->elt = null();
					HX_STACK_LINE(3339)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp5 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(3339)
					o->next = tmp5;
					HX_STACK_LINE(3339)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
				}
				HX_STACK_LINE(3339)
				this->modified = true;
				HX_STACK_LINE(3339)
				(this->length)--;
				HX_STACK_LINE(3339)
				this->pushmod = true;
				HX_STACK_LINE(3339)
				ret1;
			}
			HX_STACK_LINE(3340)
			ret = true;
			HX_STACK_LINE(3341)
			break;
		}
		HX_STACK_LINE(3343)
		pre = cur;
		HX_STACK_LINE(3344)
		cur = cur->next;
	}
	HX_STACK_LINE(3346)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3346)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","erase",0x2d72dd09,"zpp_nape.util.ZNPList_ZPP_InteractionListener.erase","zpp_nape/util/Lists.hx",3348,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(3349)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3349)
	{
		HX_STACK_LINE(3349)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(3349)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3349)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3349)
		if ((tmp1)){
			HX_STACK_LINE(3349)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3349)
			old = tmp2;
			HX_STACK_LINE(3349)
			ret = old->next;
			HX_STACK_LINE(3349)
			this->head = ret;
			HX_STACK_LINE(3349)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(3349)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(3349)
			if ((tmp4)){
				HX_STACK_LINE(3349)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(3349)
			old = pre->next;
			HX_STACK_LINE(3349)
			ret = old->next;
			HX_STACK_LINE(3349)
			pre->next = ret;
			HX_STACK_LINE(3349)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3349)
			if ((tmp2)){
				HX_STACK_LINE(3349)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(3349)
		{
			HX_STACK_LINE(3349)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = old;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(3349)
			o->elt = null();
			HX_STACK_LINE(3349)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp2 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3349)
			o->next = tmp2;
			HX_STACK_LINE(3349)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
		}
		HX_STACK_LINE(3349)
		this->modified = true;
		HX_STACK_LINE(3349)
		(this->length)--;
		HX_STACK_LINE(3349)
		this->pushmod = true;
		HX_STACK_LINE(3349)
		tmp = ret;
	}
	HX_STACK_LINE(3349)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","inlined_erase",0x81090575,"zpp_nape.util.ZNPList_ZPP_InteractionListener.inlined_erase","zpp_nape/util/Lists.hx",3353,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(3362)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(3363)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3364)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3364)
	if ((tmp)){
		HX_STACK_LINE(3365)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3365)
		old = tmp1;
		HX_STACK_LINE(3366)
		ret = old->next;
		HX_STACK_LINE(3367)
		this->head = ret;
		HX_STACK_LINE(3368)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3368)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(3368)
		if ((tmp3)){
			HX_STACK_LINE(3368)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(3371)
		old = pre->next;
		HX_STACK_LINE(3372)
		ret = old->next;
		HX_STACK_LINE(3373)
		pre->next = ret;
		HX_STACK_LINE(3374)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3374)
		if ((tmp1)){
			HX_STACK_LINE(3374)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(3377)
	{
		HX_STACK_LINE(3378)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(3387)
		o->elt = null();
		HX_STACK_LINE(3388)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3388)
		o->next = tmp1;
		HX_STACK_LINE(3389)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
	}
	HX_STACK_LINE(3394)
	this->modified = true;
	HX_STACK_LINE(3395)
	(this->length)--;
	HX_STACK_LINE(3396)
	this->pushmod = true;
	HX_STACK_LINE(3397)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3397)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","splice",0x107e2ff9,"zpp_nape.util.ZNPList_ZPP_InteractionListener.splice","zpp_nape/util/Lists.hx",3399,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(3400)
	while((true)){
		HX_STACK_LINE(3400)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3400)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3400)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3400)
		if ((tmp1)){
			HX_STACK_LINE(3400)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(3400)
			tmp2 = false;
		}
		HX_STACK_LINE(3400)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(3400)
		if ((tmp3)){
			HX_STACK_LINE(3400)
			break;
		}
		HX_STACK_LINE(3400)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(3400)
		this->erase(tmp4);
	}
	HX_STACK_LINE(3401)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3401)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_InteractionListener_obj,splice,return )

Void ZNPList_ZPP_InteractionListener_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","clear",0x02b165b0,"zpp_nape.util.ZNPList_ZPP_InteractionListener.clear","zpp_nape/util/Lists.hx",3404,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(3404)
		while((true)){
			HX_STACK_LINE(3404)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(3404)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(3404)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3404)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(3404)
			if ((tmp3)){
				HX_STACK_LINE(3404)
				break;
			}
			HX_STACK_LINE(3404)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(3404)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(3404)
			this->head = ret->next;
			HX_STACK_LINE(3404)
			{
				HX_STACK_LINE(3404)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(3404)
				o->elt = null();
				HX_STACK_LINE(3404)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp5 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(3404)
				o->next = tmp5;
				HX_STACK_LINE(3404)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
			}
			HX_STACK_LINE(3404)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(3404)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(3404)
			if ((tmp6)){
				HX_STACK_LINE(3404)
				this->pushmod = true;
			}
			HX_STACK_LINE(3404)
			this->modified = true;
			HX_STACK_LINE(3404)
			(this->length)--;
		}
		HX_STACK_LINE(3404)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,clear,(void))

Void ZNPList_ZPP_InteractionListener_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","inlined_clear",0x56478e1c,"zpp_nape.util.ZNPList_ZPP_InteractionListener.inlined_clear","zpp_nape/util/Lists.hx",3409,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(3410)
		while((true)){
			HX_STACK_LINE(3410)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(3410)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(3410)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3410)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(3410)
			if ((tmp3)){
				HX_STACK_LINE(3410)
				break;
			}
			HX_STACK_LINE(3410)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(3410)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(3410)
			this->head = ret->next;
			HX_STACK_LINE(3410)
			{
				HX_STACK_LINE(3410)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(3410)
				o->elt = null();
				HX_STACK_LINE(3410)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp5 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(3410)
				o->next = tmp5;
				HX_STACK_LINE(3410)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
			}
			HX_STACK_LINE(3410)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(3410)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(3410)
			if ((tmp6)){
				HX_STACK_LINE(3410)
				this->pushmod = true;
			}
			HX_STACK_LINE(3410)
			this->modified = true;
			HX_STACK_LINE(3410)
			(this->length)--;
		}
		HX_STACK_LINE(3411)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,inlined_clear,(void))

Void ZNPList_ZPP_InteractionListener_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","reverse",0x8dd1bc05,"zpp_nape.util.ZNPList_ZPP_InteractionListener.reverse","zpp_nape/util/Lists.hx",3414,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(3415)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3415)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(3416)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(3417)
		while((true)){
			HX_STACK_LINE(3417)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(3417)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3417)
			if ((tmp2)){
				HX_STACK_LINE(3417)
				break;
			}
			HX_STACK_LINE(3418)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(3419)
			cur->next = pre;
			HX_STACK_LINE(3420)
			this->head = cur;
			HX_STACK_LINE(3421)
			pre = cur;
			HX_STACK_LINE(3422)
			cur = nx;
		}
		HX_STACK_LINE(3424)
		this->modified = true;
		HX_STACK_LINE(3425)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,reverse,(void))

bool ZNPList_ZPP_InteractionListener_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","empty",0x2a302eb0,"zpp_nape.util.ZNPList_ZPP_InteractionListener.empty","zpp_nape/util/Lists.hx",3429,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(3430)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3430)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3430)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,empty,return )

int ZNPList_ZPP_InteractionListener_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","size",0x7c3ac1fe,"zpp_nape.util.ZNPList_ZPP_InteractionListener.size","zpp_nape/util/Lists.hx",3434,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(3435)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3435)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,size,return )

bool ZNPList_ZPP_InteractionListener_obj::has( ::zpp_nape::callbacks::ZPP_InteractionListener obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","has",0x848ad4bd,"zpp_nape.util.ZNPList_ZPP_InteractionListener.has","zpp_nape/util/Lists.hx",3437,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(3438)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3438)
	{
		HX_STACK_LINE(3438)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3438)
		{
			HX_STACK_LINE(3438)
			ret = false;
			HX_STACK_LINE(3438)
			{
				HX_STACK_LINE(3438)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(3438)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(3438)
				while((true)){
					HX_STACK_LINE(3438)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(3438)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(3438)
					if ((tmp3)){
						HX_STACK_LINE(3438)
						break;
					}
					HX_STACK_LINE(3438)
					::zpp_nape::callbacks::ZPP_InteractionListener npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(3438)
					{
						HX_STACK_LINE(3438)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(3438)
						if ((tmp4)){
							HX_STACK_LINE(3438)
							ret = true;
							HX_STACK_LINE(3438)
							break;
						}
					}
					HX_STACK_LINE(3438)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(3438)
		tmp = ret;
	}
	HX_STACK_LINE(3438)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,has,return )

bool ZNPList_ZPP_InteractionListener_obj::inlined_has( ::zpp_nape::callbacks::ZPP_InteractionListener obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","inlined_has",0xcee7ca29,"zpp_nape.util.ZNPList_ZPP_InteractionListener.inlined_has","zpp_nape/util/Lists.hx",3442,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(3451)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3452)
	{
		HX_STACK_LINE(3453)
		ret = false;
		HX_STACK_LINE(3454)
		{
			HX_STACK_LINE(3455)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(3455)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(3456)
			while((true)){
				HX_STACK_LINE(3456)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(3456)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(3456)
				if ((tmp2)){
					HX_STACK_LINE(3456)
					break;
				}
				HX_STACK_LINE(3457)
				::zpp_nape::callbacks::ZPP_InteractionListener npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(3458)
				{
					HX_STACK_LINE(3459)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(3459)
					if ((tmp3)){
						HX_STACK_LINE(3460)
						ret = true;
						HX_STACK_LINE(3461)
						break;
					}
				}
				HX_STACK_LINE(3464)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(3468)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3468)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,inlined_has,return )

::zpp_nape::callbacks::ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","front",0xc0e40ccc,"zpp_nape.util.ZNPList_ZPP_InteractionListener.front","zpp_nape/util/Lists.hx",3472,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(3473)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3473)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp1 = tmp->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3473)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,front,return )

::zpp_nape::callbacks::ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","back",0x70f7fb64,"zpp_nape.util.ZNPList_ZPP_InteractionListener.back","zpp_nape/util/Lists.hx",3475,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(3476)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3476)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3477)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3478)
	while((true)){
		HX_STACK_LINE(3478)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3478)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3478)
		if ((tmp2)){
			HX_STACK_LINE(3478)
			break;
		}
		HX_STACK_LINE(3479)
		ret = cur;
		HX_STACK_LINE(3480)
		cur = cur->next;
	}
	HX_STACK_LINE(3482)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp1 = ret->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3482)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","iterator_at",0xd386ba47,"zpp_nape.util.ZNPList_ZPP_InteractionListener.iterator_at","zpp_nape/util/Lists.hx",3484,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(3493)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3493)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3494)
	while((true)){
		HX_STACK_LINE(3494)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(3494)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3494)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(3494)
		if ((tmp2)){
			HX_STACK_LINE(3494)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(3494)
			tmp3 = false;
		}
		HX_STACK_LINE(3494)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(3494)
		if ((tmp4)){
			HX_STACK_LINE(3494)
			break;
		}
		HX_STACK_LINE(3494)
		ret = ret->next;
	}
	HX_STACK_LINE(3495)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3495)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,iterator_at,return )

::zpp_nape::callbacks::ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_InteractionListener","at",0x533fbcf0,"zpp_nape.util.ZNPList_ZPP_InteractionListener.at","zpp_nape/util/Lists.hx",3497,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(3506)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(3506)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3506)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(3507)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(3507)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(3507)
	if ((tmp2)){
		HX_STACK_LINE(3507)
		tmp3 = it->elt;
	}
	else{
		HX_STACK_LINE(3507)
		tmp3 = null();
	}
	HX_STACK_LINE(3507)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,at,return )


ZNPList_ZPP_InteractionListener_obj::ZNPList_ZPP_InteractionListener_obj()
{
}

void ZNPList_ZPP_InteractionListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_InteractionListener);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_InteractionListener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_InteractionListener_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { return head; }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"back") ) { return back_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"erase") ) { return erase_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"front") ) { return front_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"addAll") ) { return addAll_dyn(); }
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"splice") ) { return splice_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pushmod") ) { return pushmod; }
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"modified") ) { return modified; }
		if (HX_FIELD_EQ(inName,"setbegin") ) { return setbegin_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pop_unsafe") ) { return pop_unsafe_dyn(); }
		if (HX_FIELD_EQ(inName,"try_remove") ) { return try_remove_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"inlined_add") ) { return inlined_add_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_pop") ) { return inlined_pop_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_has") ) { return inlined_has_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator_at") ) { return iterator_at_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inlined_erase") ) { return inlined_erase_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_clear") ) { return inlined_clear_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"inlined_insert") ) { return inlined_insert_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_remove") ) { return inlined_remove_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"inlined_pop_unsafe") ) { return inlined_pop_unsafe_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_try_remove") ) { return inlined_try_remove_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZNPList_ZPP_InteractionListener_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_InteractionListener >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pushmod") ) { pushmod=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"modified") ) { modified=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZNPList_ZPP_InteractionListener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_InteractionListener*/ ,(int)offsetof(ZNPList_ZPP_InteractionListener_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_InteractionListener_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_InteractionListener_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_InteractionListener_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("head","\x20","\x29","\x0b","\x45"),
	HX_HCSTRING("begin","\x29","\xea","\x55","\xb0"),
	HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"),
	HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("setbegin","\x47","\xe3","\x5c","\x2b"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("inlined_add","\x8d","\x4c","\x2e","\x02"),
	HX_HCSTRING("addAll","\x80","\x09","\xfb","\x9e"),
	HX_HCSTRING("insert","\x39","\x43","\xdd","\x9d"),
	HX_HCSTRING("inlined_insert","\x4d","\x34","\x10","\xa7"),
	HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"),
	HX_HCSTRING("inlined_pop","\xfd","\xb7","\x39","\x02"),
	HX_HCSTRING("pop_unsafe","\x54","\x7c","\xec","\x75"),
	HX_HCSTRING("inlined_pop_unsafe","\x68","\x87","\xef","\x15"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("try_remove","\x08","\xb2","\x16","\x8d"),
	HX_HCSTRING("inlined_remove","\x58","\x8d","\xbb","\x0d"),
	HX_HCSTRING("inlined_try_remove","\x1c","\xbd","\x19","\x2d"),
	HX_HCSTRING("erase","\xe6","\xe8","\x1c","\x73"),
	HX_HCSTRING("inlined_erase","\x52","\xb6","\x9d","\xfa"),
	HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("inlined_clear","\xf9","\x3e","\xdc","\xcf"),
	HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"),
	HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("inlined_has","\xc6","\x99","\x33","\x02"),
	HX_HCSTRING("front","\xa9","\x18","\x8e","\x06"),
	HX_HCSTRING("back","\x27","\xda","\x10","\x41"),
	HX_HCSTRING("iterator_at","\xe4","\x89","\xd2","\x06"),
	HX_HCSTRING("at","\xf3","\x54","\x00","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_InteractionListener_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_InteractionListener_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPList_ZPP_InteractionListener_obj::__mClass;

void ZNPList_ZPP_InteractionListener_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPList_ZPP_InteractionListener","\x51","\xc8","\x5a","\xe9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPList_ZPP_InteractionListener_obj >;
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
} // end namespace util
