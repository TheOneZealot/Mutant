#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_callbacks_BodyListener
#include <nape/callbacks/BodyListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbEvent
#include <nape/callbacks/CbEvent.h>
#endif
#ifndef INCLUDED_nape_callbacks_ConstraintListener
#include <nape/callbacks/ConstraintListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionListener
#include <nape/callbacks/InteractionListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_callbacks_ListenerList
#include <nape/callbacks/ListenerList.h>
#endif
#ifndef INCLUDED_nape_callbacks_ListenerType
#include <nape/callbacks/ListenerType.h>
#endif
#ifndef INCLUDED_nape_callbacks_OptionType
#include <nape/callbacks/OptionType.h>
#endif
#ifndef INCLUDED_nape_callbacks_PreListener
#include <nape/callbacks/PreListener.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_BodyListener
#include <zpp_nape/callbacks/ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_ConstraintListener
#include <zpp_nape/callbacks/ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_InteractionListener
#include <zpp_nape/callbacks/ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_OptionType
#include <zpp_nape/callbacks/ZPP_OptionType.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ListenerList
#include <zpp_nape/util/ZPP_ListenerList.h>
#endif
namespace nape{
namespace callbacks{

Void Listener_obj::__construct()
{
HX_STACK_FRAME("nape.callbacks.Listener","new",0x194abbac,"nape.callbacks.Listener.new","nape/callbacks/Listener.hx",177,0x82b91542)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(181)
	this->zpp_inner = null();
	HX_STACK_LINE(239)
	bool tmp = ::zpp_nape::callbacks::ZPP_Listener_obj::internal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(239)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(239)
	if ((tmp1)){
		HX_STACK_LINE(240)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot instantiate Listener derp!","\xbb","\x95","\x96","\xdf"));
	}
}
;
	return null();
}

//Listener_obj::~Listener_obj() { }

Dynamic Listener_obj::__CreateEmpty() { return  new Listener_obj; }
hx::ObjectPtr< Listener_obj > Listener_obj::__new()
{  hx::ObjectPtr< Listener_obj > _result_ = new Listener_obj();
	_result_->__construct();
	return _result_;}

Dynamic Listener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Listener_obj > _result_ = new Listener_obj();
	_result_->__construct();
	return _result_;}

::nape::callbacks::ListenerType Listener_obj::get_type( ){
	HX_STACK_FRAME("nape.callbacks.Listener","get_type",0xb8f84f77,"nape.callbacks.Listener.get_type","nape/callbacks/Listener.hx",187,0x82b91542)
	HX_STACK_THIS(this)
	HX_STACK_LINE(188)
	::zpp_nape::callbacks::ZPP_Listener tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(188)
	int tmp1 = tmp->type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(188)
	::nape::callbacks::ListenerType tmp2 = ::zpp_nape::callbacks::ZPP_Listener_obj::types->__get(tmp1).StaticCast< ::nape::callbacks::ListenerType >();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(188)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Listener_obj,get_type,return )

::nape::callbacks::CbEvent Listener_obj::get_event( ){
	HX_STACK_FRAME("nape.callbacks.Listener","get_event",0x7b4690bd,"nape.callbacks.Listener.get_event","nape/callbacks/Listener.hx",195,0x82b91542)
	HX_STACK_THIS(this)
	HX_STACK_LINE(196)
	::zpp_nape::callbacks::ZPP_Listener tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	int tmp1 = tmp->event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(196)
	::nape::callbacks::CbEvent tmp2 = ::zpp_nape::callbacks::ZPP_Listener_obj::events->__get(tmp1).StaticCast< ::nape::callbacks::CbEvent >();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(196)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Listener_obj,get_event,return )

::nape::callbacks::CbEvent Listener_obj::set_event( ::nape::callbacks::CbEvent event){
	HX_STACK_FRAME("nape.callbacks.Listener","set_event",0x5e977cc9,"nape.callbacks.Listener.set_event","nape/callbacks/Listener.hx",198,0x82b91542)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(199)
	{
		HX_STACK_LINE(201)
		bool tmp = (event == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(201)
		if ((tmp)){
			HX_STACK_LINE(202)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot set listener event type to null","\x2b","\xcc","\x11","\x11"));
		}
		HX_STACK_LINE(205)
		::zpp_nape::callbacks::ZPP_Listener tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(205)
		int tmp2 = tmp1->event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(205)
		::nape::callbacks::CbEvent tmp3 = ::zpp_nape::callbacks::ZPP_Listener_obj::events->__get(tmp2).StaticCast< ::nape::callbacks::CbEvent >();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(205)
		::nape::callbacks::CbEvent tmp4 = event;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(205)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(205)
		if ((tmp5)){
			HX_STACK_LINE(206)
			::nape::callbacks::CbEvent tmp6 = event;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(206)
			::nape::callbacks::CbEvent tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(206)
			{
				HX_STACK_LINE(206)
				::nape::callbacks::CbEvent tmp8 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(206)
				bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(206)
				if ((tmp9)){
					HX_STACK_LINE(206)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(206)
					::nape::callbacks::CbEvent tmp10 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(206)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN = tmp10;
					HX_STACK_LINE(206)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(206)
				tmp7 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN;
			}
			HX_STACK_LINE(206)
			bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(206)
			int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(206)
			if ((tmp8)){
				HX_STACK_LINE(206)
				tmp9 = (int)0;
			}
			else{
				HX_STACK_LINE(206)
				::nape::callbacks::CbEvent tmp10 = event;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(206)
				::nape::callbacks::CbEvent tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(206)
				{
					HX_STACK_LINE(206)
					::nape::callbacks::CbEvent tmp12 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(206)
					bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(206)
					if ((tmp13)){
						HX_STACK_LINE(206)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(206)
						::nape::callbacks::CbEvent tmp14 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(206)
						::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING = tmp14;
						HX_STACK_LINE(206)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(206)
					tmp11 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING;
				}
				HX_STACK_LINE(206)
				bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(206)
				if ((tmp12)){
					HX_STACK_LINE(206)
					tmp9 = (int)6;
				}
				else{
					HX_STACK_LINE(206)
					::nape::callbacks::CbEvent tmp13 = event;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(206)
					::nape::callbacks::CbEvent tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(206)
					{
						HX_STACK_LINE(206)
						::nape::callbacks::CbEvent tmp15 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_END;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(206)
						bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(206)
						if ((tmp16)){
							HX_STACK_LINE(206)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(206)
							::nape::callbacks::CbEvent tmp17 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(206)
							::zpp_nape::util::ZPP_Flags_obj::CbEvent_END = tmp17;
							HX_STACK_LINE(206)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(206)
						tmp14 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_END;
					}
					HX_STACK_LINE(206)
					bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(206)
					if ((tmp15)){
						HX_STACK_LINE(206)
						tmp9 = (int)1;
					}
					else{
						HX_STACK_LINE(206)
						::nape::callbacks::CbEvent tmp16 = event;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(206)
						::nape::callbacks::CbEvent tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(206)
						{
							HX_STACK_LINE(206)
							::nape::callbacks::CbEvent tmp18 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(206)
							bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(206)
							if ((tmp19)){
								HX_STACK_LINE(206)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(206)
								::nape::callbacks::CbEvent tmp20 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(206)
								::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP = tmp20;
								HX_STACK_LINE(206)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(206)
							tmp17 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP;
						}
						HX_STACK_LINE(206)
						bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(206)
						if ((tmp18)){
							HX_STACK_LINE(206)
							tmp9 = (int)3;
						}
						else{
							HX_STACK_LINE(206)
							::nape::callbacks::CbEvent tmp19 = event;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(206)
							::nape::callbacks::CbEvent tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(206)
							{
								HX_STACK_LINE(206)
								::nape::callbacks::CbEvent tmp21 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(206)
								bool tmp22 = (tmp21 == null());		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(206)
								if ((tmp22)){
									HX_STACK_LINE(206)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(206)
									::nape::callbacks::CbEvent tmp23 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(206)
									::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE = tmp23;
									HX_STACK_LINE(206)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(206)
								tmp20 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE;
							}
							HX_STACK_LINE(206)
							bool tmp21 = (tmp19 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(206)
							if ((tmp21)){
								HX_STACK_LINE(206)
								tmp9 = (int)2;
							}
							else{
								HX_STACK_LINE(206)
								::nape::callbacks::CbEvent tmp22 = event;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(206)
								::nape::callbacks::CbEvent tmp23;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(206)
								{
									HX_STACK_LINE(206)
									::nape::callbacks::CbEvent tmp24 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(206)
									bool tmp25 = (tmp24 == null());		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(206)
									if ((tmp25)){
										HX_STACK_LINE(206)
										::zpp_nape::util::ZPP_Flags_obj::internal = true;
										HX_STACK_LINE(206)
										::nape::callbacks::CbEvent tmp26 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(206)
										::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE = tmp26;
										HX_STACK_LINE(206)
										::zpp_nape::util::ZPP_Flags_obj::internal = false;
									}
									HX_STACK_LINE(206)
									tmp23 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE;
								}
								HX_STACK_LINE(206)
								bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(206)
								if ((tmp24)){
									HX_STACK_LINE(206)
									tmp9 = (int)5;
								}
								else{
									HX_STACK_LINE(206)
									tmp9 = (int)4;
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(206)
			int xevent = tmp9;		HX_STACK_VAR(xevent,"xevent");
			HX_STACK_LINE(207)
			::zpp_nape::callbacks::ZPP_Listener tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(207)
			int tmp11 = xevent;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(207)
			tmp10->swapEvent(tmp11);
		}
	}
	HX_STACK_LINE(210)
	::zpp_nape::callbacks::ZPP_Listener tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(210)
	int tmp1 = tmp->event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(210)
	::nape::callbacks::CbEvent tmp2 = ::zpp_nape::callbacks::ZPP_Listener_obj::events->__get(tmp1).StaticCast< ::nape::callbacks::CbEvent >();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(210)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Listener_obj,set_event,return )

int Listener_obj::get_precedence( ){
	HX_STACK_FRAME("nape.callbacks.Listener","get_precedence",0xe231fe87,"nape.callbacks.Listener.get_precedence","nape/callbacks/Listener.hx",222,0x82b91542)
	HX_STACK_THIS(this)
	HX_STACK_LINE(223)
	::zpp_nape::callbacks::ZPP_Listener tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(223)
	int tmp1 = tmp->precedence;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(223)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Listener_obj,get_precedence,return )

int Listener_obj::set_precedence( int precedence){
	HX_STACK_FRAME("nape.callbacks.Listener","set_precedence",0x0251e6fb,"nape.callbacks.Listener.set_precedence","nape/callbacks/Listener.hx",225,0x82b91542)
	HX_STACK_THIS(this)
	HX_STACK_ARG(precedence,"precedence")
	HX_STACK_LINE(226)
	{
		HX_STACK_LINE(227)
		::zpp_nape::callbacks::ZPP_Listener tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(227)
		int tmp1 = tmp->precedence;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(227)
		int tmp2 = precedence;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(227)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(227)
		if ((tmp3)){
			HX_STACK_LINE(228)
			::zpp_nape::callbacks::ZPP_Listener tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(228)
			tmp4->precedence = precedence;
			HX_STACK_LINE(229)
			::zpp_nape::callbacks::ZPP_Listener tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(229)
			tmp5->invalidate_precedence();
		}
	}
	HX_STACK_LINE(232)
	::zpp_nape::callbacks::ZPP_Listener tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(232)
	int tmp1 = tmp->precedence;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(232)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Listener_obj,set_precedence,return )

::nape::space::Space Listener_obj::get_space( ){
	HX_STACK_FRAME("nape.callbacks.Listener","get_space",0x86e85569,"nape.callbacks.Listener.get_space","nape/callbacks/Listener.hx",254,0x82b91542)
	HX_STACK_THIS(this)
	HX_STACK_LINE(255)
	::zpp_nape::callbacks::ZPP_Listener tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(255)
	::zpp_nape::space::ZPP_Space tmp1 = tmp->space;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(255)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(255)
	::nape::space::Space tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(255)
	if ((tmp2)){
		HX_STACK_LINE(255)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(255)
		::zpp_nape::callbacks::ZPP_Listener tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(255)
		tmp3 = tmp4->space->outer;
	}
	HX_STACK_LINE(255)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Listener_obj,get_space,return )

::nape::space::Space Listener_obj::set_space( ::nape::space::Space space){
	HX_STACK_FRAME("nape.callbacks.Listener","set_space",0x6a394175,"nape.callbacks.Listener.set_space","nape/callbacks/Listener.hx",257,0x82b91542)
	HX_STACK_THIS(this)
	HX_STACK_ARG(space,"space")
	HX_STACK_LINE(258)
	{
		HX_STACK_LINE(259)
		::zpp_nape::callbacks::ZPP_Listener tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(259)
		::zpp_nape::space::ZPP_Space tmp1 = tmp->space;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(259)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(259)
		::nape::space::Space tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(259)
		if ((tmp2)){
			HX_STACK_LINE(259)
			tmp3 = null();
		}
		else{
			HX_STACK_LINE(259)
			::zpp_nape::callbacks::ZPP_Listener tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(259)
			tmp3 = tmp4->space->outer;
		}
		HX_STACK_LINE(259)
		::nape::space::Space tmp4 = space;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(259)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(259)
		if ((tmp5)){
			HX_STACK_LINE(260)
			::zpp_nape::callbacks::ZPP_Listener tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(260)
			::zpp_nape::space::ZPP_Space tmp7 = tmp6->space;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(260)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(260)
			if ((tmp8)){
				HX_STACK_LINE(261)
				::zpp_nape::callbacks::ZPP_Listener tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(261)
				::nape::space::Space tmp10 = tmp9->space->outer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(261)
				::nape::callbacks::ListenerList tmp11 = tmp10->zpp_inner->wrap_listeners;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(261)
				tmp11->remove(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(263)
			bool tmp9 = (space != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(263)
			if ((tmp9)){
				HX_STACK_LINE(264)
				::nape::callbacks::ListenerList tmp10 = space->zpp_inner->wrap_listeners;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(264)
				::nape::callbacks::ListenerList _this = tmp10;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(264)
				bool tmp11 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(264)
				if ((tmp11)){
					HX_STACK_LINE(264)
					_this->push(hx::ObjectPtr<OBJ_>(this));
				}
				else{
					HX_STACK_LINE(264)
					_this->unshift(hx::ObjectPtr<OBJ_>(this));
				}
			}
			else{
				HX_STACK_LINE(267)
				::zpp_nape::callbacks::ZPP_Listener tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(267)
				tmp10->space = null();
			}
		}
	}
	HX_STACK_LINE(271)
	::zpp_nape::callbacks::ZPP_Listener tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(271)
	::zpp_nape::space::ZPP_Space tmp1 = tmp->space;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(271)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(271)
	::nape::space::Space tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(271)
	if ((tmp2)){
		HX_STACK_LINE(271)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(271)
		::zpp_nape::callbacks::ZPP_Listener tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(271)
		tmp3 = tmp4->space->outer;
	}
	HX_STACK_LINE(271)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Listener_obj,set_space,return )

::String Listener_obj::toString( ){
	HX_STACK_FRAME("nape.callbacks.Listener","toString",0x24a371e0,"nape.callbacks.Listener.toString","nape/callbacks/Listener.hx",276,0x82b91542)
	HX_STACK_THIS(this)
	HX_STACK_LINE(277)
	::zpp_nape::callbacks::ZPP_Listener tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(277)
	int tmp1 = tmp->event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(277)
	::String tmp2 = Array_obj< ::String >::__new().Add(HX_HCSTRING("BEGIN","\x09","\x22","\x44","\x2e")).Add(HX_HCSTRING("END","\xbb","\x9f","\x34","\x00")).Add(HX_HCSTRING("WAKE","\x24","\x24","\xb3","\x39")).Add(HX_HCSTRING("SLEEP","\xf7","\xf4","\xb2","\xfc")).Add(HX_HCSTRING("BREAK","\x9f","\x5c","\xda","\x36")).Add(HX_HCSTRING("PRE","\x03","\xfc","\x3c","\x00")).Add(HX_HCSTRING("ONGOING","\x1b","\x7e","\xd8","\x1a"))->__get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(277)
	::String event = tmp2;		HX_STACK_VAR(event,"event");
	HX_STACK_LINE(278)
	::zpp_nape::callbacks::ZPP_Listener tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(278)
	int tmp4 = tmp3->type;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(278)
	bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(278)
	if ((tmp5)){
		HX_STACK_LINE(279)
		::zpp_nape::callbacks::ZPP_Listener tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(279)
		::zpp_nape::callbacks::ZPP_BodyListener body = tmp6->body;		HX_STACK_VAR(body,"body");
		HX_STACK_LINE(280)
		::String tmp7 = (HX_HCSTRING("BodyListener{","\x65","\xb6","\x16","\x4d") + event);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(280)
		::String tmp8 = (tmp7 + HX_HCSTRING("::","\xc0","\x32","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(280)
		::zpp_nape::callbacks::ZPP_BodyListener tmp9 = body->outer_zn->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(280)
		::nape::callbacks::OptionType tmp10 = tmp9->options->outer;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(280)
		::String tmp11 = ::Std_obj::string(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(280)
		::String tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(280)
		::String tmp13 = (tmp12 + HX_HCSTRING("}","\x7d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(280)
		return tmp13;
	}
	else{
		HX_STACK_LINE(282)
		::zpp_nape::callbacks::ZPP_Listener tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(282)
		int tmp7 = tmp6->type;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(282)
		bool tmp8 = (tmp7 == (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(282)
		if ((tmp8)){
			HX_STACK_LINE(283)
			::zpp_nape::callbacks::ZPP_Listener tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(283)
			::zpp_nape::callbacks::ZPP_ConstraintListener con = tmp9->constraint;		HX_STACK_VAR(con,"con");
			HX_STACK_LINE(284)
			::String tmp10 = (HX_HCSTRING("ConstraintListener{","\x4a","\x49","\x80","\xba") + event);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(284)
			::String tmp11 = (tmp10 + HX_HCSTRING("::","\xc0","\x32","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(284)
			::zpp_nape::callbacks::ZPP_ConstraintListener tmp12 = con->outer_zn->zpp_inner_zn;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(284)
			::nape::callbacks::OptionType tmp13 = tmp12->options->outer;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(284)
			::String tmp14 = ::Std_obj::string(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(284)
			::String tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(284)
			::String tmp16 = (tmp15 + HX_HCSTRING("}","\x7d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(284)
			return tmp16;
		}
		else{
			HX_STACK_LINE(287)
			::zpp_nape::callbacks::ZPP_Listener tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(287)
			::zpp_nape::callbacks::ZPP_InteractionListener con = tmp9->interaction;		HX_STACK_VAR(con,"con");
			HX_STACK_LINE(288)
			::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(288)
			{
				HX_STACK_LINE(288)
				int _g = con->itype;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(288)
				int tmp11 = _g;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(288)
				switch( (int)(tmp11)){
					case (int)1: {
						HX_STACK_LINE(289)
						tmp10 = HX_HCSTRING("COLLISION","\x52","\x18","\x93","\xd6");
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(290)
						tmp10 = HX_HCSTRING("SENSOR","\x3a","\xde","\x12","\x1e");
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(291)
						tmp10 = HX_HCSTRING("FLUID","\xea","\x91","\x89","\x80");
					}
					;break;
					default: {
						HX_STACK_LINE(292)
						tmp10 = HX_HCSTRING("ALL","\x01","\x95","\x31","\x00");
					}
				}
			}
			HX_STACK_LINE(288)
			::String itype = tmp10;		HX_STACK_VAR(itype,"itype");
			HX_STACK_LINE(294)
			::zpp_nape::callbacks::ZPP_Listener tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(294)
			int tmp12 = tmp11->type;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(294)
			bool tmp13 = (tmp12 == (int)2);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(294)
			::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(294)
			if ((tmp13)){
				HX_STACK_LINE(294)
				::String tmp15 = (HX_HCSTRING("InteractionListener{","\x75","\xef","\x2a","\x76") + event);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(294)
				::String tmp16 = (tmp15 + HX_HCSTRING("#","\x23","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(294)
				::String tmp17 = itype;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(294)
				::String tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(294)
				::String tmp19 = (tmp18 + HX_HCSTRING("::","\xc0","\x32","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(294)
				::zpp_nape::callbacks::ZPP_InteractionListener tmp20 = con->outer_zni->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(294)
				::nape::callbacks::OptionType tmp21 = tmp20->options1->outer;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(294)
				::String tmp22 = ::Std_obj::string(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(294)
				::String tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(294)
				::String tmp24 = (tmp23 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(294)
				::zpp_nape::callbacks::ZPP_InteractionListener tmp25 = con->outer_zni->zpp_inner_zn;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(294)
				::nape::callbacks::OptionType tmp26 = tmp25->options2->outer;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(294)
				::String tmp27 = ::Std_obj::string(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(294)
				::String tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(294)
				tmp14 = (tmp28 + HX_HCSTRING("}","\x7d","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(294)
				::String tmp15 = (HX_HCSTRING("PreListener{","\x04","\x95","\xa0","\x61") + itype);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(294)
				::String tmp16 = (tmp15 + HX_HCSTRING("::","\xc0","\x32","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(294)
				::zpp_nape::callbacks::ZPP_InteractionListener tmp17 = con->outer_znp->zpp_inner_zn;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(294)
				::nape::callbacks::OptionType tmp18 = tmp17->options1->outer;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(294)
				::String tmp19 = ::Std_obj::string(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(294)
				::String tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(294)
				::String tmp21 = (tmp20 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(294)
				::zpp_nape::callbacks::ZPP_InteractionListener tmp22 = con->outer_znp->zpp_inner_zn;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(294)
				::nape::callbacks::OptionType tmp23 = tmp22->options2->outer;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(294)
				::String tmp24 = ::Std_obj::string(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(294)
				::String tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(294)
				tmp14 = (tmp25 + HX_HCSTRING("}","\x7d","\x00","\x00","\x00"));
			}
			HX_STACK_LINE(294)
			::String tmp15 = (tmp14 + HX_HCSTRING(" precedence=","\xd3","\x06","\x48","\x66"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(294)
			::zpp_nape::callbacks::ZPP_Listener tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(294)
			int tmp17 = tmp16->precedence;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(294)
			::String tmp18 = (tmp15 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(294)
			return tmp18;
		}
	}
	HX_STACK_LINE(278)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Listener_obj,toString,return )


Listener_obj::Listener_obj()
{
}

void Listener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Listener);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Listener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic Listener_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == hx::paccAlways) return get_type(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"event") ) { if (inCallProp == hx::paccAlways) return get_event(); }
		if (HX_FIELD_EQ(inName,"space") ) { if (inCallProp == hx::paccAlways) return get_space(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"get_event") ) { return get_event_dyn(); }
		if (HX_FIELD_EQ(inName,"set_event") ) { return set_event_dyn(); }
		if (HX_FIELD_EQ(inName,"get_space") ) { return get_space_dyn(); }
		if (HX_FIELD_EQ(inName,"set_space") ) { return set_space_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"precedence") ) { if (inCallProp == hx::paccAlways) return get_precedence(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_precedence") ) { return get_precedence_dyn(); }
		if (HX_FIELD_EQ(inName,"set_precedence") ) { return set_precedence_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Listener_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"event") ) { if (inCallProp == hx::paccAlways) return set_event(inValue); }
		if (HX_FIELD_EQ(inName,"space") ) { if (inCallProp == hx::paccAlways) return set_space(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::callbacks::ZPP_Listener >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"precedence") ) { if (inCallProp == hx::paccAlways) return set_precedence(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Listener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"));
	outFields->push(HX_HCSTRING("precedence","\x0a","\xf6","\xfc","\xee"));
	outFields->push(HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_Listener*/ ,(int)offsetof(Listener_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("get_type","\x43","\xae","\xc3","\xcc"),
	HX_HCSTRING("get_event","\x71","\x24","\x6e","\xb9"),
	HX_HCSTRING("set_event","\x7d","\x10","\xbf","\x9c"),
	HX_HCSTRING("get_precedence","\x53","\x7e","\xf2","\x64"),
	HX_HCSTRING("set_precedence","\xc7","\x66","\x12","\x85"),
	HX_HCSTRING("get_space","\x1d","\xe9","\x0f","\xc5"),
	HX_HCSTRING("set_space","\x29","\xd5","\x60","\xa8"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Listener_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Listener_obj::__mClass,"__mClass");
};

#endif

hx::Class Listener_obj::__mClass;

void Listener_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.callbacks.Listener","\xba","\xb5","\x08","\x37");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Listener_obj >;
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
} // end namespace callbacks
