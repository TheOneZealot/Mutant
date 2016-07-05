#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_mint_Canvas
#include <mint/Canvas.h>
#endif
#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
#endif
#ifndef INCLUDED_mint_core_DebugError
#include <mint/core/DebugError.h>
#endif
#ifndef INCLUDED_mint_core_Signal
#include <mint/core/Signal.h>
#endif
#ifndef INCLUDED_mint_render_Renderer
#include <mint/render/Renderer.h>
#endif
#ifndef INCLUDED_mint_render_Rendering
#include <mint/render/Rendering.h>
#endif
#ifndef INCLUDED_mint_types_Helper
#include <mint/types/Helper.h>
#endif
namespace mint{

Void Control_obj::__construct(Dynamic _options,hx::Null< bool >  __o__emit_oncreate)
{
HX_STACK_FRAME("mint.Control","new",0xda1382e3,"mint.Control.new","mint/Control.hx",69,0xafc4152e)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
HX_STACK_ARG(__o__emit_oncreate,"_emit_oncreate")
bool _emit_oncreate = __o__emit_oncreate.Default(false);
{
	HX_STACK_LINE(1042)
	this->ignore_spatial = false;
	HX_STACK_LINE(846)
	this->updating = false;
	HX_STACK_LINE(415)
	this->update_vis_state = true;
	HX_STACK_LINE(414)
	this->vis_state = true;
	HX_STACK_LINE(197)
	this->depth_offset = ((Float)0);
	HX_STACK_LINE(189)
	this->depth = ((Float)1.0);
	HX_STACK_LINE(135)
	this->visible = true;
	HX_STACK_LINE(132)
	this->destroyed = false;
	HX_STACK_LINE(130)
	this->renderable = false;
	HX_STACK_LINE(128)
	this->key_input = false;
	HX_STACK_LINE(126)
	this->mouse_input = false;
	HX_STACK_LINE(124)
	this->ishovered = false;
	HX_STACK_LINE(122)
	this->iscaptured = false;
	HX_STACK_LINE(120)
	this->ismarked = false;
	HX_STACK_LINE(118)
	this->isfocused = false;
	HX_STACK_LINE(98)
	this->h_max = ((Float)0);
	HX_STACK_LINE(96)
	this->w_max = ((Float)0);
	HX_STACK_LINE(94)
	this->h_min = ((Float)0);
	HX_STACK_LINE(92)
	this->w_min = ((Float)0);
	HX_STACK_LINE(72)
	this->name = HX_HCSTRING("control","\x5d","\x6b","\x81","\x19");
	HX_STACK_LINE(203)
	this->_options_ = _options;
	HX_STACK_LINE(204)
	{
		HX_STACK_LINE(204)
		Dynamic tmp = this->_options_;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(204)
		Dynamic tmp1 = tmp->__Field(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(204)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(204)
		if ((tmp2)){
			struct _Function_3_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/Control.hx",204,0xafc4152e)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(204)
			Dynamic tmp3 = _Function_3_1::Block();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(204)
			Dynamic tmp4 = this->_options_;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(204)
			tmp4->__FieldRef(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")) = tmp3;
		}
		HX_STACK_LINE(204)
		Dynamic tmp3 = this->_options_;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(204)
		tmp3->__Field(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"), hx::paccDynamic );
	}
	HX_STACK_LINE(206)
	::mint::core::Signal tmp = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(206)
	this->oncreate = tmp;
	HX_STACK_LINE(207)
	::mint::core::Signal tmp1 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(207)
	this->onrender = tmp1;
	HX_STACK_LINE(208)
	::mint::core::Signal tmp2 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(208)
	this->onrenamed = tmp2;
	HX_STACK_LINE(209)
	::mint::core::Signal tmp3 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(209)
	this->onbounds = tmp3;
	HX_STACK_LINE(210)
	::mint::core::Signal tmp4 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(210)
	this->ondestroy = tmp4;
	HX_STACK_LINE(211)
	::mint::core::Signal tmp5 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(211)
	this->onvisible = tmp5;
	HX_STACK_LINE(212)
	::mint::core::Signal tmp6 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(212)
	this->ondepth = tmp6;
	HX_STACK_LINE(213)
	::mint::core::Signal tmp7 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(213)
	this->onclip = tmp7;
	HX_STACK_LINE(214)
	::mint::core::Signal tmp8 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(214)
	this->onchildadd = tmp8;
	HX_STACK_LINE(215)
	::mint::core::Signal tmp9 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(215)
	this->onchildremove = tmp9;
	HX_STACK_LINE(216)
	::mint::core::Signal tmp10 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(216)
	this->onmousedown = tmp10;
	HX_STACK_LINE(217)
	::mint::core::Signal tmp11 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(217)
	this->onmouseup = tmp11;
	HX_STACK_LINE(218)
	::mint::core::Signal tmp12 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(218)
	this->onmousemove = tmp12;
	HX_STACK_LINE(219)
	::mint::core::Signal tmp13 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(219)
	this->onmousewheel = tmp13;
	HX_STACK_LINE(220)
	::mint::core::Signal tmp14 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(220)
	this->onmouseleave = tmp14;
	HX_STACK_LINE(221)
	::mint::core::Signal tmp15 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(221)
	this->onmouseenter = tmp15;
	HX_STACK_LINE(222)
	::mint::core::Signal tmp16 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(222)
	this->onkeydown = tmp16;
	HX_STACK_LINE(223)
	::mint::core::Signal tmp17 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(223)
	this->onkeyup = tmp17;
	HX_STACK_LINE(224)
	::mint::core::Signal tmp18 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(224)
	this->ontextinput = tmp18;
	HX_STACK_LINE(225)
	::mint::core::Signal tmp19 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(225)
	this->onfocused = tmp19;
	HX_STACK_LINE(226)
	::mint::core::Signal tmp20 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(226)
	this->onmarked = tmp20;
	HX_STACK_LINE(227)
	::mint::core::Signal tmp21 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(227)
	this->oncaptured = tmp21;
	HX_STACK_LINE(229)
	this->children = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(231)
	::String tmp22;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(231)
	{
		HX_STACK_LINE(231)
		Dynamic tmp23 = this->_options_;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(231)
		::String tmp24 = tmp23->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(231)
		bool tmp25 = (tmp24 == null());		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(231)
		if ((tmp25)){
			HX_STACK_LINE(231)
			Dynamic tmp26 = this->_options_;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(231)
			tmp26->__FieldRef(HX_HCSTRING("name","\x4b","\x72","\xff","\x48")) = HX_HCSTRING("control","\x5d","\x6b","\x81","\x19");
		}
		HX_STACK_LINE(231)
		Dynamic tmp26 = this->_options_;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(231)
		tmp22 = tmp26->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
	}
	HX_STACK_LINE(231)
	this->set_name(tmp22);
	HX_STACK_LINE(232)
	Dynamic tmp23 = this->_options_;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(232)
	this->user = tmp23->__Field(HX_HCSTRING("user","\x4b","\x92","\xad","\x4d"), hx::paccDynamic );
	HX_STACK_LINE(233)
	Dynamic tmp24;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(233)
	{
		HX_STACK_LINE(233)
		Dynamic tmp25 = this->_options_;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(233)
		Dynamic tmp26 = tmp25->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(233)
		bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(233)
		if ((tmp27)){
			HX_STACK_LINE(233)
			Dynamic tmp28 = this->_options_;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(233)
			tmp28->__FieldRef(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7")) = (int)0;
		}
		HX_STACK_LINE(233)
		Dynamic tmp28 = this->_options_;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(233)
		tmp24 = tmp28->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );
	}
	HX_STACK_LINE(233)
	this->depth_offset = tmp24;
	HX_STACK_LINE(235)
	Dynamic tmp25;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(235)
	{
		HX_STACK_LINE(235)
		Dynamic tmp26 = this->_options_;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(235)
		Dynamic tmp27 = tmp26->__Field(HX_HCSTRING("w_min","\x8a","\x5e","\xcd","\xc3"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(235)
		bool tmp28 = (tmp27 == null());		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(235)
		if ((tmp28)){
			HX_STACK_LINE(235)
			Dynamic tmp29 = this->_options_;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(235)
			tmp29->__FieldRef(HX_HCSTRING("w_min","\x8a","\x5e","\xcd","\xc3")) = (int)0;
		}
		HX_STACK_LINE(235)
		Dynamic tmp29 = this->_options_;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(235)
		tmp25 = tmp29->__Field(HX_HCSTRING("w_min","\x8a","\x5e","\xcd","\xc3"), hx::paccDynamic );
	}
	HX_STACK_LINE(235)
	this->set_w_min(tmp25);
	HX_STACK_LINE(236)
	Dynamic tmp26;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(236)
	{
		HX_STACK_LINE(236)
		Dynamic tmp27 = this->_options_;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(236)
		Dynamic tmp28 = tmp27->__Field(HX_HCSTRING("h_min","\xfb","\xaa","\xca","\x20"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(236)
		bool tmp29 = (tmp28 == null());		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(236)
		if ((tmp29)){
			HX_STACK_LINE(236)
			Dynamic tmp30 = this->_options_;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(236)
			tmp30->__FieldRef(HX_HCSTRING("h_min","\xfb","\xaa","\xca","\x20")) = (int)0;
		}
		HX_STACK_LINE(236)
		Dynamic tmp30 = this->_options_;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(236)
		tmp26 = tmp30->__Field(HX_HCSTRING("h_min","\xfb","\xaa","\xca","\x20"), hx::paccDynamic );
	}
	HX_STACK_LINE(236)
	this->set_h_min(tmp26);
	HX_STACK_LINE(237)
	Dynamic tmp27;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(237)
	{
		HX_STACK_LINE(237)
		Dynamic tmp28 = this->_options_;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(237)
		Dynamic tmp29 = tmp28->__Field(HX_HCSTRING("w_max","\x9c","\x57","\xcd","\xc3"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(237)
		bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(237)
		if ((tmp30)){
			HX_STACK_LINE(237)
			Dynamic tmp31 = this->_options_;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(237)
			tmp31->__FieldRef(HX_HCSTRING("w_max","\x9c","\x57","\xcd","\xc3")) = (int)0;
		}
		HX_STACK_LINE(237)
		Dynamic tmp31 = this->_options_;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(237)
		tmp27 = tmp31->__Field(HX_HCSTRING("w_max","\x9c","\x57","\xcd","\xc3"), hx::paccDynamic );
	}
	HX_STACK_LINE(237)
	this->set_w_max(tmp27);
	HX_STACK_LINE(238)
	Dynamic tmp28;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(238)
	{
		HX_STACK_LINE(238)
		Dynamic tmp29 = this->_options_;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(238)
		Dynamic tmp30 = tmp29->__Field(HX_HCSTRING("h_max","\x0d","\xa4","\xca","\x20"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(238)
		bool tmp31 = (tmp30 == null());		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(238)
		if ((tmp31)){
			HX_STACK_LINE(238)
			Dynamic tmp32 = this->_options_;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(238)
			tmp32->__FieldRef(HX_HCSTRING("h_max","\x0d","\xa4","\xca","\x20")) = (int)0;
		}
		HX_STACK_LINE(238)
		Dynamic tmp32 = this->_options_;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(238)
		tmp28 = tmp32->__Field(HX_HCSTRING("h_max","\x0d","\xa4","\xca","\x20"), hx::paccDynamic );
	}
	HX_STACK_LINE(238)
	this->set_h_max(tmp28);
	HX_STACK_LINE(240)
	this->ignore_spatial = true;
	HX_STACK_LINE(242)
	Dynamic tmp29;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(242)
	{
		HX_STACK_LINE(242)
		Dynamic tmp30 = this->_options_;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(242)
		Dynamic tmp31 = tmp30->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(242)
		bool tmp32 = (tmp31 == null());		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(242)
		if ((tmp32)){
			HX_STACK_LINE(242)
			Dynamic tmp33 = this->_options_;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(242)
			tmp33->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)0;
		}
		HX_STACK_LINE(242)
		Dynamic tmp33 = this->_options_;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(242)
		tmp29 = tmp33->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(242)
	this->set_x(tmp29);
	HX_STACK_LINE(243)
	Dynamic tmp30;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(243)
	{
		HX_STACK_LINE(243)
		Dynamic tmp31 = this->_options_;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(243)
		Dynamic tmp32 = tmp31->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(243)
		bool tmp33 = (tmp32 == null());		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(243)
		if ((tmp33)){
			HX_STACK_LINE(243)
			Dynamic tmp34 = this->_options_;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(243)
			tmp34->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)0;
		}
		HX_STACK_LINE(243)
		Dynamic tmp34 = this->_options_;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(243)
		tmp30 = tmp34->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(243)
	this->set_y(tmp30);
	HX_STACK_LINE(244)
	Dynamic tmp31;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(244)
	{
		HX_STACK_LINE(244)
		Dynamic tmp32 = this->_options_;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(244)
		Dynamic tmp33 = tmp32->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(244)
		bool tmp34 = (tmp33 == null());		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(244)
		if ((tmp34)){
			HX_STACK_LINE(244)
			Dynamic tmp35 = this->_options_;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(244)
			tmp35->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)32;
		}
		HX_STACK_LINE(244)
		Dynamic tmp35 = this->_options_;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(244)
		tmp31 = tmp35->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(244)
	this->set_w(tmp31);
	HX_STACK_LINE(245)
	Dynamic tmp32;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(245)
	{
		HX_STACK_LINE(245)
		Dynamic tmp33 = this->_options_;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(245)
		Dynamic tmp34 = tmp33->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(245)
		bool tmp35 = (tmp34 == null());		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(245)
		if ((tmp35)){
			HX_STACK_LINE(245)
			Dynamic tmp36 = this->_options_;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(245)
			tmp36->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)32;
		}
		HX_STACK_LINE(245)
		Dynamic tmp36 = this->_options_;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(245)
		tmp32 = tmp36->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(245)
	this->set_h(tmp32);
	HX_STACK_LINE(247)
	Float tmp33 = this->x;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(247)
	this->set_x_local(tmp33);
	HX_STACK_LINE(248)
	Float tmp34 = this->y;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(248)
	this->set_y_local(tmp34);
	HX_STACK_LINE(250)
	this->ignore_spatial = false;
	HX_STACK_LINE(252)
	Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(252)
	{
		HX_STACK_LINE(252)
		Dynamic tmp36 = this->_options_;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(252)
		Dynamic tmp37 = tmp36->__Field(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(252)
		bool tmp38 = (tmp37 == null());		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(252)
		if ((tmp38)){
			HX_STACK_LINE(252)
			Dynamic tmp39 = this->_options_;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(252)
			tmp39->__FieldRef(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a")) = false;
		}
		HX_STACK_LINE(252)
		Dynamic tmp39 = this->_options_;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(252)
		tmp35 = tmp39->__Field(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a"), hx::paccDynamic );
	}
	HX_STACK_LINE(252)
	this->mouse_input = tmp35;
	HX_STACK_LINE(253)
	Dynamic tmp36;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(253)
	{
		HX_STACK_LINE(253)
		Dynamic tmp37 = this->_options_;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(253)
		Dynamic tmp38 = tmp37->__Field(HX_HCSTRING("key_input","\x2a","\x16","\x78","\x1d"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(253)
		bool tmp39 = (tmp38 == null());		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(253)
		if ((tmp39)){
			HX_STACK_LINE(253)
			Dynamic tmp40 = this->_options_;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(253)
			tmp40->__FieldRef(HX_HCSTRING("key_input","\x2a","\x16","\x78","\x1d")) = false;
		}
		HX_STACK_LINE(253)
		Dynamic tmp40 = this->_options_;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(253)
		tmp36 = tmp40->__Field(HX_HCSTRING("key_input","\x2a","\x16","\x78","\x1d"), hx::paccDynamic );
	}
	HX_STACK_LINE(253)
	this->key_input = tmp36;
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/Control.hx",255,0xafc4152e)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , ((Float)((int)0)),false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , ((Float)((int)0)),false);
				__result->Add(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9") , ((Float)((int)0)),false);
				__result->Add(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65") , ((Float)((int)0)),false);
				__result->Add(HX_HCSTRING("real_x","\x17","\xb2","\x97","\xfc") , ((Float)((int)0)),false);
				__result->Add(HX_HCSTRING("real_y","\x18","\xb2","\x97","\xfc") , ((Float)((int)0)),false);
				__result->Add(HX_HCSTRING("real_w","\x16","\xb2","\x97","\xfc") , ((Float)((int)0)),false);
				__result->Add(HX_HCSTRING("real_h","\x07","\xb2","\x97","\xfc") , ((Float)((int)0)),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(255)
	Dynamic tmp37 = _Function_1_1::Block();		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(255)
	this->children_bounds = tmp37;
	HX_STACK_LINE(260)
	Dynamic tmp38 = this->_options_;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(260)
	::mint::Control tmp39 = tmp38->__Field(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(260)
	bool tmp40 = (tmp39 != null());		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(260)
	if ((tmp40)){
		HX_STACK_LINE(262)
		Dynamic tmp41 = this->_options_;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(262)
		::mint::Canvas tmp42 = tmp41->__Field(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(262)
		this->canvas = tmp42;
		HX_STACK_LINE(263)
		Dynamic tmp43 = this->_options_;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(263)
		tmp43->__Field(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));
	}
	else{
		HX_STACK_LINE(267)
		bool tmp41 = ::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::mint::Canvas >());		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(267)
		bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(267)
		bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(267)
		bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(267)
		if ((tmp43)){
			HX_STACK_LINE(267)
			::mint::Canvas tmp45 = this->canvas;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(267)
			::mint::Canvas tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(267)
			tmp44 = (tmp46 == null());
		}
		else{
			HX_STACK_LINE(267)
			tmp44 = false;
		}
		HX_STACK_LINE(267)
		if ((tmp44)){
			HX_STACK_LINE(268)
			Dynamic tmp45 = this->_options_;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(268)
			::String tmp46 = ::Std_obj::string(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(268)
			::String tmp47 = (HX_HCSTRING("Control without a canvas ","\x0e","\xd0","\xae","\x7f") + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(268)
			HX_STACK_DO_THROW(tmp47);
		}
	}
	HX_STACK_LINE(273)
	::mint::Control tmp41 = this->find_top_parent(null());		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(273)
	this->closest_to_canvas = tmp41;
	HX_STACK_LINE(277)
	::mint::render::Rendering tmp42;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(277)
	{
		HX_STACK_LINE(277)
		bool tmp43 = (_options->__Field(HX_HCSTRING("rendering","\x4c","\xdb","\x73","\xcd"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(277)
		if ((tmp43)){
			HX_STACK_LINE(277)
			::mint::Canvas tmp44 = this->canvas;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(277)
			_options->__FieldRef(HX_HCSTRING("rendering","\x4c","\xdb","\x73","\xcd")) = tmp44->rendering;
		}
		HX_STACK_LINE(277)
		tmp42 = _options->__Field(HX_HCSTRING("rendering","\x4c","\xdb","\x73","\xcd"), hx::paccDynamic );
	}
	HX_STACK_LINE(277)
	this->rendering = tmp42;
	HX_STACK_LINE(279)
	Dynamic tmp43 = this->_options_;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(279)
	Dynamic tmp44 = tmp43->__Field(HX_HCSTRING("renderable","\xf0","\x3b","\x99","\xf2"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(279)
	bool tmp45 = (tmp44 != null());		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(279)
	if ((tmp45)){
		HX_STACK_LINE(280)
		Dynamic tmp46 = this->_options_;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(280)
		this->renderable = tmp46->__Field(HX_HCSTRING("renderable","\xf0","\x3b","\x99","\xf2"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(282)
		::mint::Canvas tmp46 = this->canvas;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(282)
		bool tmp47 = (tmp46 != null());		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(282)
		if ((tmp47)){
			HX_STACK_LINE(283)
			::mint::Canvas tmp48 = this->canvas;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(283)
			this->renderable = tmp48->renderable;
		}
	}
	HX_STACK_LINE(287)
	Dynamic tmp46 = this->_options_;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(287)
	Dynamic tmp47 = tmp46->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(287)
	bool tmp48 = (tmp47 != null());		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(287)
	if ((tmp48)){
		HX_STACK_LINE(288)
		Dynamic tmp49 = this->_options_;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(288)
		Dynamic tmp50 = tmp49->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(288)
		this->set_visible(tmp50);
	}
	else{
		HX_STACK_LINE(289)
		Dynamic tmp49 = this->_options_;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(289)
		Dynamic tmp50 = tmp49->__Field(HX_HCSTRING("internal_visible","\x30","\x3e","\x18","\xd0"), hx::paccDynamic );		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(289)
		bool tmp51 = (tmp50 != null());		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(289)
		if ((tmp51)){
			HX_STACK_LINE(290)
			Dynamic tmp52 = this->_options_;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(290)
			bool _visible = tmp52->__Field(HX_HCSTRING("internal_visible","\x30","\x3e","\x18","\xd0"), hx::paccDynamic );		HX_STACK_VAR(_visible,"_visible");
			HX_STACK_LINE(290)
			{
				HX_STACK_LINE(290)
				bool tmp53 = this->destroyed;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(290)
				bool tmp54 = (tmp53 == false);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(290)
				bool tmp55 = !(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(290)
				if ((tmp55)){
					HX_STACK_LINE(290)
					::String tmp56 = this->name;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(290)
					::String tmp57 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(290)
					::String tmp58 = (tmp57 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(290)
					::String tmp59 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(290)
					::String tmp60 = (tmp59 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(290)
					::String tmp61 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(290)
					::mint::core::DebugError tmp62 = ::mint::core::DebugError_obj::assertion(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(290)
					HX_STACK_DO_THROW(tmp62);
				}
			}
			HX_STACK_LINE(290)
			this->update_vis_state = false;
			HX_STACK_LINE(290)
			bool tmp53 = _visible;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(290)
			this->set_visible(tmp53);
			HX_STACK_LINE(290)
			this->update_vis_state = true;
		}
		else{
			HX_STACK_LINE(291)
			::mint::Control tmp52 = this->parent;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(291)
			bool tmp53 = (tmp52 != null());		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(291)
			if ((tmp53)){
				HX_STACK_LINE(292)
				{
					HX_STACK_LINE(292)
					bool tmp54 = this->destroyed;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(292)
					bool tmp55 = (tmp54 == false);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(292)
					bool tmp56 = !(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(292)
					if ((tmp56)){
						HX_STACK_LINE(292)
						::String tmp57 = this->name;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(292)
						::String tmp58 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(292)
						::String tmp59 = (tmp58 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(292)
						::String tmp60 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(292)
						::String tmp61 = (tmp60 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(292)
						::String tmp62 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(292)
						::mint::core::DebugError tmp63 = ::mint::core::DebugError_obj::assertion(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(292)
						HX_STACK_DO_THROW(tmp63);
					}
				}
				HX_STACK_LINE(292)
				this->update_vis_state = false;
				HX_STACK_LINE(292)
				::mint::Control tmp54 = this->parent;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(292)
				bool tmp55 = tmp54->visible;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(292)
				this->set_visible(tmp55);
				HX_STACK_LINE(292)
				this->update_vis_state = true;
			}
		}
	}
	HX_STACK_LINE(295)
	bool tmp49 = _emit_oncreate;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(295)
	if ((tmp49)){
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(295)
		::mint::core::Signal tmp50 = this->oncreate;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(51)
		int tmp51 = tmp50->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(51)
		int _count = tmp51;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			bool tmp52 = (_idx < _count);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(52)
			bool tmp53 = !(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(52)
			if ((tmp53)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(295)
			::mint::core::Signal tmp54 = this->oncreate;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(53)
			Dynamic tmp55 = tmp54->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(53)
			Dynamic fn = tmp55;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp56 = (fn != null());		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(54)
			if ((tmp56)){
				HX_STACK_LINE(55)
				fn().Cast< Void >();
			}
			HX_STACK_LINE(57)
			(_idx)++;
		}
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp52 = (_count > (int)0);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(60)
			bool tmp53 = !(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(60)
			if ((tmp53)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(295)
			::mint::core::Signal tmp54 = this->oncreate;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(61)
			int tmp55 = (_count - (int)1);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(61)
			Dynamic tmp56 = tmp54->listeners->__GetItem(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(61)
			Dynamic fn = tmp56;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(62)
			bool tmp57 = (fn == null());		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(62)
			if ((tmp57)){
				HX_STACK_LINE(295)
				::mint::core::Signal tmp58 = this->oncreate;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(62)
				int tmp59 = (_count - (int)1);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(62)
				tmp58->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp59,(int)1);
			}
			HX_STACK_LINE(63)
			(_count)--;
		}
	}
}
;
	return null();
}

//Control_obj::~Control_obj() { }

Dynamic Control_obj::__CreateEmpty() { return  new Control_obj; }
hx::ObjectPtr< Control_obj > Control_obj::__new(Dynamic _options,hx::Null< bool >  __o__emit_oncreate)
{  hx::ObjectPtr< Control_obj > _result_ = new Control_obj();
	_result_->__construct(_options,__o__emit_oncreate);
	return _result_;}

Dynamic Control_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Control_obj > _result_ = new Control_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Array< ::Dynamic > Control_obj::children_at_point( Float _x,Float _y,Array< ::Dynamic > _into){
	HX_STACK_FRAME("mint.Control","children_at_point",0x541838c7,"mint.Control.children_at_point","mint/Control.hx",299,0xafc4152e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_into,"_into")
	HX_STACK_LINE(301)
	{
		HX_STACK_LINE(301)
		bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(301)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(301)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(301)
		if ((tmp2)){
			HX_STACK_LINE(301)
			::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(301)
			::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(301)
			::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(21)
			::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(21)
			::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(301)
			::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(301)
			::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(301)
			HX_STACK_DO_THROW(tmp9);
		}
	}
	HX_STACK_LINE(303)
	Array< ::Dynamic > _result;		HX_STACK_VAR(_result,"_result");
	HX_STACK_LINE(303)
	{
		HX_STACK_LINE(303)
		bool tmp = (_into == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(303)
		if ((tmp)){
			HX_STACK_LINE(303)
			_into = Array_obj< ::Dynamic >::__new();
		}
		HX_STACK_LINE(303)
		_result = _into;
	}
	HX_STACK_LINE(305)
	int tmp = this->children->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(305)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(305)
	if ((tmp1)){
		HX_STACK_LINE(305)
		return _result;
	}
	HX_STACK_LINE(307)
	{
		HX_STACK_LINE(307)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(307)
		Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(307)
		while((true)){
			HX_STACK_LINE(307)
			bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(307)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(307)
			if ((tmp3)){
				HX_STACK_LINE(307)
				break;
			}
			HX_STACK_LINE(307)
			::mint::Control tmp4 = _g1->__get(_g).StaticCast< ::mint::Control >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(307)
			::mint::Control _child = tmp4;		HX_STACK_VAR(_child,"_child");
			HX_STACK_LINE(307)
			++(_g);
			HX_STACK_LINE(308)
			Float tmp5 = _x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(308)
			Float tmp6 = _y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(308)
			Float tmp7 = tmp5;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(308)
			Float tmp8 = tmp6;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(308)
			bool tmp9 = _child->contains(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(308)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(308)
			if ((tmp9)){
				HX_STACK_LINE(308)
				tmp10 = _child->visible;
			}
			else{
				HX_STACK_LINE(308)
				tmp10 = false;
			}
			HX_STACK_LINE(308)
			if ((tmp10)){
				HX_STACK_LINE(309)
				::mint::Control tmp11 = _child;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(309)
				_result->push(tmp11);
				HX_STACK_LINE(310)
				int tmp12 = _child->children->length;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(310)
				bool tmp13 = (tmp12 > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(310)
				if ((tmp13)){
					HX_STACK_LINE(311)
					Float tmp14 = _x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(311)
					Float tmp15 = _y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(311)
					return _child->children_at_point(tmp14,tmp15,_result);
				}
			}
		}
	}

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 2; }
	int run(::mint::Control a,::mint::Control b){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","mint/Control.hx",316,0xafc4152e)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		{
			HX_STACK_LINE(317)
			bool tmp2 = (a->depth == b->depth);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(317)
			if ((tmp2)){
				HX_STACK_LINE(317)
				return (int)0;
			}
			HX_STACK_LINE(318)
			bool tmp3 = (a->depth < b->depth);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(318)
			if ((tmp3)){
				HX_STACK_LINE(318)
				return (int)-1;
			}
			HX_STACK_LINE(319)
			return (int)1;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_STACK_LINE(316)
	_result->sort( Dynamic(new _Function_1_1()));
	HX_STACK_LINE(322)
	return _result;
}


HX_DEFINE_DYNAMIC_FUNC3(Control_obj,children_at_point,return )

::mint::Control Control_obj::topmost_child_at_point( Float _x,Float _y){
	HX_STACK_FRAME("mint.Control","topmost_child_at_point",0x6099ac6b,"mint.Control.topmost_child_at_point","mint/Control.hx",326,0xafc4152e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_LINE(328)
	{
		HX_STACK_LINE(328)
		bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(328)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(328)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(328)
		if ((tmp2)){
			HX_STACK_LINE(328)
			::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(328)
			::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(328)
			::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(21)
			::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(21)
			::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(328)
			::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(328)
			::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(328)
			HX_STACK_DO_THROW(tmp9);
		}
	}
	HX_STACK_LINE(331)
	int tmp = this->children->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(331)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(331)
	if ((tmp1)){
		HX_STACK_LINE(331)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(336)
	::mint::Control highest_child = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(highest_child,"highest_child");
	HX_STACK_LINE(337)
	Float highest_depth = ((Float)0.0);		HX_STACK_VAR(highest_depth,"highest_depth");
	HX_STACK_LINE(339)
	{
		HX_STACK_LINE(339)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(339)
		Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(339)
		while((true)){
			HX_STACK_LINE(339)
			bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(339)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(339)
			if ((tmp3)){
				HX_STACK_LINE(339)
				break;
			}
			HX_STACK_LINE(339)
			::mint::Control tmp4 = _g1->__get(_g).StaticCast< ::mint::Control >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(339)
			::mint::Control _child = tmp4;		HX_STACK_VAR(_child,"_child");
			HX_STACK_LINE(339)
			++(_g);
			HX_STACK_LINE(342)
			Float tmp5 = _x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(342)
			Float tmp6 = _y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(342)
			Float tmp7 = tmp5;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(342)
			Float tmp8 = tmp6;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(342)
			bool tmp9 = _child->contains(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(342)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(342)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(342)
			if ((tmp10)){
				HX_STACK_LINE(342)
				tmp11 = _child->mouse_input;
			}
			else{
				HX_STACK_LINE(342)
				tmp11 = false;
			}
			HX_STACK_LINE(342)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(342)
			if ((tmp11)){
				HX_STACK_LINE(342)
				tmp12 = _child->visible;
			}
			else{
				HX_STACK_LINE(342)
				tmp12 = false;
			}
			HX_STACK_LINE(342)
			if ((tmp12)){
				HX_STACK_LINE(344)
				bool tmp13 = (_child->depth >= highest_depth);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(344)
				if ((tmp13)){
					HX_STACK_LINE(345)
					highest_child = _child;
					HX_STACK_LINE(346)
					highest_depth = _child->depth;
				}
			}
		}
	}
	HX_STACK_LINE(352)
	bool tmp2 = (highest_child != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(352)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(352)
	if ((tmp2)){
		HX_STACK_LINE(352)
		int tmp4 = highest_child->children->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(352)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(352)
		tmp3 = (tmp5 != (int)0);
	}
	else{
		HX_STACK_LINE(352)
		tmp3 = false;
	}
	HX_STACK_LINE(352)
	if ((tmp3)){
		HX_STACK_LINE(353)
		Float tmp4 = _x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(353)
		Float tmp5 = _y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(353)
		::mint::Control tmp6 = highest_child->topmost_child_at_point(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(353)
		return tmp6;
	}
	else{
		HX_STACK_LINE(355)
		::mint::Control tmp4 = highest_child;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(355)
		return tmp4;
	}
	HX_STACK_LINE(352)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Control_obj,topmost_child_at_point,return )

bool Control_obj::contains( Float _x,Float _y){
	HX_STACK_FRAME("mint.Control","contains",0x8556acbc,"mint.Control.contains","mint/Control.hx",360,0xafc4152e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_LINE(362)
	{
		HX_STACK_LINE(362)
		bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(362)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(362)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(362)
		if ((tmp2)){
			HX_STACK_LINE(362)
			::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(362)
			::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(362)
			::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(21)
			::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(21)
			::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(362)
			::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(362)
			::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(362)
			HX_STACK_DO_THROW(tmp9);
		}
	}
	HX_STACK_LINE(364)
	Float tmp = _x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(364)
	Float tmp1 = _y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(364)
	Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(364)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(364)
	Float tmp4 = this->w;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(364)
	Float tmp5 = this->h;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(364)
	bool tmp6 = ::mint::types::Helper_obj::in_rect(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(364)
	bool inside = tmp6;		HX_STACK_VAR(inside,"inside");
	HX_STACK_LINE(366)
	::mint::Control tmp7 = this->clip_with;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(366)
	bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(366)
	if ((tmp8)){
		HX_STACK_LINE(366)
		bool tmp9 = inside;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(366)
		return tmp9;
	}
	HX_STACK_LINE(368)
	bool tmp9 = inside;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(368)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(368)
	if ((tmp9)){
		HX_STACK_LINE(368)
		::mint::Control tmp11 = this->clip_with;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(368)
		::mint::Control tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(368)
		Float tmp13 = _x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(368)
		Float tmp14 = _y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(368)
		Float tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(368)
		Float tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(368)
		tmp10 = tmp12->contains(tmp15,tmp16);
	}
	else{
		HX_STACK_LINE(368)
		tmp10 = false;
	}
	HX_STACK_LINE(368)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC2(Control_obj,contains,return )

Void Control_obj::onclipchanged( ){
{
		HX_STACK_FRAME("mint.Control","onclipchanged",0x82eb55a8,"mint.Control.onclipchanged","mint/Control.hx",372,0xafc4152e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(374)
		{
			HX_STACK_LINE(374)
			bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(374)
			bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(374)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(374)
			if ((tmp2)){
				HX_STACK_LINE(374)
				::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(374)
				::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(374)
				::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(21)
				::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(21)
				::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(374)
				::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(374)
				::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(374)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(376)
		::mint::Control tmp = this->clip_with;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(376)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(376)
		if ((tmp1)){
			HX_STACK_LINE(50)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(377)
			::mint::core::Signal tmp2 = this->onclip;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(51)
			int tmp3 = tmp2->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(51)
			int _count = tmp3;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp4 = (_idx < _count);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(52)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(52)
				if ((tmp5)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(377)
				::mint::core::Signal tmp6 = this->onclip;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(53)
				Dynamic tmp7 = tmp6->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(53)
				Dynamic fn = tmp7;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(54)
				bool tmp8 = (fn != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(54)
				if ((tmp8)){
					HX_STACK_LINE(377)
					::mint::Control tmp9 = this->clip_with;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(377)
					Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(377)
					::mint::Control tmp11 = this->clip_with;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(377)
					Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(377)
					::mint::Control tmp13 = this->clip_with;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(377)
					Float tmp14 = tmp13->w;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(377)
					::mint::Control tmp15 = this->clip_with;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(377)
					Float tmp16 = tmp15->h;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(55)
					fn(false,tmp10,tmp12,tmp14,tmp16).Cast< Void >();
				}
				HX_STACK_LINE(57)
				(_idx)++;
			}
			HX_STACK_LINE(60)
			while((true)){
				HX_STACK_LINE(60)
				bool tmp4 = (_count > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(60)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(60)
				if ((tmp5)){
					HX_STACK_LINE(60)
					break;
				}
				HX_STACK_LINE(377)
				::mint::core::Signal tmp6 = this->onclip;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(61)
				int tmp7 = (_count - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(61)
				Dynamic tmp8 = tmp6->listeners->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(61)
				Dynamic fn = tmp8;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(62)
				bool tmp9 = (fn == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(62)
				if ((tmp9)){
					HX_STACK_LINE(377)
					::mint::core::Signal tmp10 = this->onclip;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(62)
					int tmp11 = (_count - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(62)
					tmp10->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp11,(int)1);
				}
				HX_STACK_LINE(63)
				(_count)--;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,onclipchanged,(void))

::mint::Control Control_obj::set_clip_with( ::mint::Control _other){
	HX_STACK_FRAME("mint.Control","set_clip_with",0x4a403b3b,"mint.Control.set_clip_with","mint/Control.hx",382,0xafc4152e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_other,"_other")
	HX_STACK_LINE(384)
	{
		HX_STACK_LINE(384)
		bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(384)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(384)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(384)
		if ((tmp2)){
			HX_STACK_LINE(384)
			::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(384)
			::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(384)
			::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(21)
			::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(21)
			::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(384)
			::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(384)
			::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(384)
			HX_STACK_DO_THROW(tmp9);
		}
	}
	HX_STACK_LINE(386)
	::mint::Control tmp = this->clip_with;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(386)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(386)
	if ((tmp1)){
		HX_STACK_LINE(387)
		::mint::Control tmp2 = this->clip_with;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(387)
		Dynamic tmp3 = this->onclipchanged_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(387)
		tmp2->onbounds->remove(tmp3);
	}
	HX_STACK_LINE(390)
	this->clip_with = _other;
	HX_STACK_LINE(392)
	::mint::Control tmp2 = this->clip_with;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(392)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(392)
	if ((tmp3)){
		HX_STACK_LINE(394)
		::mint::Control tmp4 = this->clip_with;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(394)
		Dynamic tmp5 = this->onclipchanged_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(394)
		tmp4->onbounds->listen(tmp5);
		HX_STACK_LINE(397)
		{
			HX_STACK_LINE(397)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(397)
			Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(397)
			while((true)){
				HX_STACK_LINE(397)
				bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(397)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(397)
				if ((tmp7)){
					HX_STACK_LINE(397)
					break;
				}
				HX_STACK_LINE(397)
				::mint::Control tmp8 = _g1->__get(_g).StaticCast< ::mint::Control >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(397)
				::mint::Control child = tmp8;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(397)
				++(_g);
				HX_STACK_LINE(398)
				::mint::Control tmp9 = this->clip_with;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(398)
				child->set_clip_with(tmp9);
			}
		}
		HX_STACK_LINE(401)
		this->onclipchanged();
	}
	else{
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(404)
		::mint::core::Signal tmp4 = this->onclip;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(51)
		int tmp5 = tmp4->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(51)
		int _count = tmp5;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			bool tmp6 = (_idx < _count);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(52)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(52)
			if ((tmp7)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(404)
			::mint::core::Signal tmp8 = this->onclip;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(53)
			Dynamic tmp9 = tmp8->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(53)
			Dynamic fn = tmp9;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp10 = (fn != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(54)
			if ((tmp10)){
				HX_STACK_LINE(55)
				fn(true,(int)0,(int)0,(int)0,(int)0).Cast< Void >();
			}
			HX_STACK_LINE(57)
			(_idx)++;
		}
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp6 = (_count > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(60)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(60)
			if ((tmp7)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(404)
			::mint::core::Signal tmp8 = this->onclip;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(61)
			int tmp9 = (_count - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(61)
			Dynamic tmp10 = tmp8->listeners->__GetItem(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(61)
			Dynamic fn = tmp10;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(62)
			bool tmp11 = (fn == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(62)
			if ((tmp11)){
				HX_STACK_LINE(404)
				::mint::core::Signal tmp12 = this->onclip;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(62)
				int tmp13 = (_count - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(62)
				tmp12->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp13,(int)1);
			}
			HX_STACK_LINE(63)
			(_count)--;
		}
	}
	HX_STACK_LINE(407)
	::mint::Control tmp4 = this->clip_with;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(407)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,set_clip_with,return )

Void Control_obj::set_visible_only( bool _visible){
{
		HX_STACK_FRAME("mint.Control","set_visible_only",0x1786dd33,"mint.Control.set_visible_only","mint/Control.hx",417,0xafc4152e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_visible,"_visible")
		HX_STACK_LINE(419)
		{
			HX_STACK_LINE(419)
			bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(419)
			bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(419)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(419)
			if ((tmp2)){
				HX_STACK_LINE(419)
				::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(419)
				::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(419)
				::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(21)
				::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(21)
				::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(419)
				::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(419)
				::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(419)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(421)
		this->update_vis_state = false;
		HX_STACK_LINE(422)
		bool tmp = _visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(422)
		this->set_visible(tmp);
		HX_STACK_LINE(423)
		this->update_vis_state = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,set_visible_only,(void))

bool Control_obj::set_visible( bool _visible){
	HX_STACK_FRAME("mint.Control","set_visible",0x30d64d18,"mint.Control.set_visible","mint/Control.hx",427,0xafc4152e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_visible,"_visible")
	HX_STACK_LINE(429)
	{
		HX_STACK_LINE(429)
		bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(429)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(429)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(429)
		if ((tmp2)){
			HX_STACK_LINE(429)
			::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(429)
			::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(429)
			::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(21)
			::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(21)
			::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(429)
			::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(429)
			::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(429)
			HX_STACK_DO_THROW(tmp9);
		}
	}
	HX_STACK_LINE(431)
	this->visible = _visible;
	HX_STACK_LINE(432)
	bool tmp = this->update_vis_state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(432)
	if ((tmp)){
		HX_STACK_LINE(432)
		this->vis_state = _visible;
	}
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(434)
		::mint::core::Signal tmp1 = this->onvisible;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		int tmp2 = tmp1->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		int _count = tmp2;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			bool tmp3 = (_idx < _count);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(52)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(52)
			if ((tmp4)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(434)
			::mint::core::Signal tmp5 = this->onvisible;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(53)
			Dynamic tmp6 = tmp5->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(53)
			Dynamic fn = tmp6;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp7 = (fn != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(54)
			if ((tmp7)){
				HX_STACK_LINE(434)
				bool tmp8 = this->visible;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(55)
				fn(tmp8).Cast< Void >();
			}
			HX_STACK_LINE(57)
			(_idx)++;
		}
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp3 = (_count > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(60)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(60)
			if ((tmp4)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(434)
			::mint::core::Signal tmp5 = this->onvisible;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(61)
			int tmp6 = (_count - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(61)
			Dynamic tmp7 = tmp5->listeners->__GetItem(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(61)
			Dynamic fn = tmp7;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(62)
			bool tmp8 = (fn == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(62)
			if ((tmp8)){
				HX_STACK_LINE(434)
				::mint::core::Signal tmp9 = this->onvisible;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(62)
				int tmp10 = (_count - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(62)
				tmp9->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp10,(int)1);
			}
			HX_STACK_LINE(63)
			(_count)--;
		}
	}
	HX_STACK_LINE(436)
	{
		HX_STACK_LINE(436)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(436)
		Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(436)
		while((true)){
			HX_STACK_LINE(436)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(436)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(436)
			if ((tmp2)){
				HX_STACK_LINE(436)
				break;
			}
			HX_STACK_LINE(436)
			::mint::Control tmp3 = _g1->__get(_g).StaticCast< ::mint::Control >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(436)
			::mint::Control _child = tmp3;		HX_STACK_VAR(_child,"_child");
			HX_STACK_LINE(436)
			++(_g);
			HX_STACK_LINE(437)
			{
				HX_STACK_LINE(437)
				{
					HX_STACK_LINE(437)
					bool tmp4 = (_child->destroyed == false);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(437)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(437)
					if ((tmp5)){
						HX_STACK_LINE(437)
						::String tmp6 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _child->name);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(437)
						::String tmp7 = (tmp6 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(437)
						::String tmp8 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(437)
						::String tmp9 = (tmp8 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(437)
						::String tmp10 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(437)
						::mint::core::DebugError tmp11 = ::mint::core::DebugError_obj::assertion(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(437)
						HX_STACK_DO_THROW(tmp11);
					}
				}
				HX_STACK_LINE(437)
				_child->update_vis_state = false;
				HX_STACK_LINE(437)
				bool tmp4 = this->visible;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(437)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(437)
				if ((tmp4)){
					HX_STACK_LINE(437)
					tmp5 = _child->vis_state;
				}
				else{
					HX_STACK_LINE(437)
					tmp5 = false;
				}
				HX_STACK_LINE(437)
				_child->set_visible(tmp5);
				HX_STACK_LINE(437)
				_child->update_vis_state = true;
			}
		}
	}
	HX_STACK_LINE(440)
	::mint::Canvas tmp1 = this->canvas;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(440)
	tmp1->focus_invalid = true;
	HX_STACK_LINE(442)
	bool tmp2 = this->visible;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(442)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,set_visible,return )

::mint::Control Control_obj::find_top_parent( ::mint::Control _from){
	HX_STACK_FRAME("mint.Control","find_top_parent",0x2ed42d5d,"mint.Control.find_top_parent","mint/Control.hx",446,0xafc4152e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_from,"_from")
	HX_STACK_LINE(448)
	{
		HX_STACK_LINE(448)
		bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(448)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(448)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(448)
		if ((tmp2)){
			HX_STACK_LINE(448)
			::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(448)
			::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(448)
			::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(21)
			::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(21)
			::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(448)
			::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(448)
			::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(448)
			HX_STACK_DO_THROW(tmp9);
		}
	}
	HX_STACK_LINE(450)
	bool tmp = (_from == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(450)
	::mint::Control tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(450)
	if ((tmp)){
		HX_STACK_LINE(450)
		tmp1 = hx::ObjectPtr<OBJ_>(this);
	}
	else{
		HX_STACK_LINE(450)
		tmp1 = _from;
	}
	HX_STACK_LINE(450)
	::mint::Control _target = tmp1;		HX_STACK_VAR(_target,"_target");
	HX_STACK_LINE(452)
	bool tmp2 = (_target == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(452)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(452)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(452)
	if ((tmp3)){
		HX_STACK_LINE(452)
		tmp4 = (_target->parent == null());
	}
	else{
		HX_STACK_LINE(452)
		tmp4 = true;
	}
	HX_STACK_LINE(452)
	if ((tmp4)){
		HX_STACK_LINE(453)
		return null();
	}
	HX_STACK_LINE(458)
	::mint::Control tmp5 = _target->parent;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(458)
	bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::mint::Canvas >());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(458)
	if ((tmp6)){
		HX_STACK_LINE(459)
		::mint::Control tmp7 = _target;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(459)
		return tmp7;
	}
	else{
		HX_STACK_LINE(461)
		::mint::Control tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(461)
		::mint::Control tmp8 = tmp7->find_top_parent(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(461)
		return tmp8;
	}
	HX_STACK_LINE(458)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,find_top_parent,return )

Void Control_obj::add( ::mint::Control child){
{
		HX_STACK_FRAME("mint.Control","add",0xda09a4a4,"mint.Control.add","mint/Control.hx",466,0xafc4152e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_LINE(468)
		{
			HX_STACK_LINE(468)
			bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(468)
			bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(468)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(468)
			if ((tmp2)){
				HX_STACK_LINE(468)
				::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(468)
				::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(468)
				::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(21)
				::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(21)
				::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(468)
				::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(468)
				::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(468)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(470)
		bool tmp = (child->parent != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(470)
		if ((tmp)){
			HX_STACK_LINE(471)
			::mint::Control tmp1 = child;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(471)
			child->parent->remove(tmp1);
		}
		HX_STACK_LINE(474)
		bool tmp1 = (child->parent != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(474)
		if ((tmp1)){
			HX_STACK_LINE(475)
			::mint::Control tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(475)
			this->children->push(tmp2);
			HX_STACK_LINE(476)
			child->set_parent(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(49)
			{
				HX_STACK_LINE(50)
				int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
				HX_STACK_LINE(477)
				::mint::core::Signal tmp3 = this->onchildadd;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(51)
				int tmp4 = tmp3->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(51)
				int _count = tmp4;		HX_STACK_VAR(_count,"_count");
				HX_STACK_LINE(52)
				while((true)){
					HX_STACK_LINE(52)
					bool tmp5 = (_idx < _count);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(52)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(52)
					if ((tmp6)){
						HX_STACK_LINE(52)
						break;
					}
					HX_STACK_LINE(477)
					::mint::core::Signal tmp7 = this->onchildadd;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(53)
					Dynamic tmp8 = tmp7->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(53)
					Dynamic fn = tmp8;		HX_STACK_VAR(fn,"fn");
					HX_STACK_LINE(54)
					bool tmp9 = (fn != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(54)
					if ((tmp9)){
						HX_STACK_LINE(477)
						::mint::Control tmp10 = child;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(55)
						fn(tmp10).Cast< Void >();
					}
					HX_STACK_LINE(57)
					(_idx)++;
				}
				HX_STACK_LINE(60)
				while((true)){
					HX_STACK_LINE(60)
					bool tmp5 = (_count > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(60)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(60)
					if ((tmp6)){
						HX_STACK_LINE(60)
						break;
					}
					HX_STACK_LINE(477)
					::mint::core::Signal tmp7 = this->onchildadd;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(61)
					int tmp8 = (_count - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(61)
					Dynamic tmp9 = tmp7->listeners->__GetItem(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(61)
					Dynamic fn = tmp9;		HX_STACK_VAR(fn,"fn");
					HX_STACK_LINE(62)
					bool tmp10 = (fn == null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(62)
					if ((tmp10)){
						HX_STACK_LINE(477)
						::mint::core::Signal tmp11 = this->onchildadd;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(62)
						int tmp12 = (_count - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(62)
						tmp11->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp12,(int)1);
					}
					HX_STACK_LINE(63)
					(_count)--;
				}
			}
		}
		HX_STACK_LINE(480)
		::mint::Canvas tmp2 = this->canvas;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(480)
		tmp2->sync_depth();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,add,(void))

Void Control_obj::remove( ::mint::Control child){
{
		HX_STACK_FRAME("mint.Control","remove",0x8abb1da1,"mint.Control.remove","mint/Control.hx",484,0xafc4152e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_LINE(486)
		{
			HX_STACK_LINE(486)
			bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(486)
			bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(486)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(486)
			if ((tmp2)){
				HX_STACK_LINE(486)
				::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(486)
				::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(486)
				::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(21)
				::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(21)
				::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(486)
				::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(486)
				::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(486)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(488)
		bool tmp = (child->parent == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(488)
		if ((tmp)){
			HX_STACK_LINE(489)
			::mint::Control tmp1 = child;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(489)
			this->children->remove(tmp1);
			HX_STACK_LINE(49)
			{
				HX_STACK_LINE(50)
				int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
				HX_STACK_LINE(490)
				::mint::core::Signal tmp2 = this->onchildremove;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(51)
				int tmp3 = tmp2->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(51)
				int _count = tmp3;		HX_STACK_VAR(_count,"_count");
				HX_STACK_LINE(52)
				while((true)){
					HX_STACK_LINE(52)
					bool tmp4 = (_idx < _count);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(52)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(52)
					if ((tmp5)){
						HX_STACK_LINE(52)
						break;
					}
					HX_STACK_LINE(490)
					::mint::core::Signal tmp6 = this->onchildremove;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(53)
					Dynamic tmp7 = tmp6->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(53)
					Dynamic fn = tmp7;		HX_STACK_VAR(fn,"fn");
					HX_STACK_LINE(54)
					bool tmp8 = (fn != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(54)
					if ((tmp8)){
						HX_STACK_LINE(490)
						::mint::Control tmp9 = child;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(55)
						fn(tmp9).Cast< Void >();
					}
					HX_STACK_LINE(57)
					(_idx)++;
				}
				HX_STACK_LINE(60)
				while((true)){
					HX_STACK_LINE(60)
					bool tmp4 = (_count > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(60)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(60)
					if ((tmp5)){
						HX_STACK_LINE(60)
						break;
					}
					HX_STACK_LINE(490)
					::mint::core::Signal tmp6 = this->onchildremove;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(61)
					int tmp7 = (_count - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(61)
					Dynamic tmp8 = tmp6->listeners->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(61)
					Dynamic fn = tmp8;		HX_STACK_VAR(fn,"fn");
					HX_STACK_LINE(62)
					bool tmp9 = (fn == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(62)
					if ((tmp9)){
						HX_STACK_LINE(490)
						::mint::core::Signal tmp10 = this->onchildremove;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(62)
						int tmp11 = (_count - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(62)
						tmp10->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp11,(int)1);
					}
					HX_STACK_LINE(63)
					(_count)--;
				}
			}
			HX_STACK_LINE(491)
			child->set_parent(null());
			HX_STACK_LINE(492)
			::mint::Canvas tmp2 = this->canvas;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(492)
			tmp2->sync_depth();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,remove,(void))

Dynamic Control_obj::get_children_bounds( ){
	HX_STACK_FRAME("mint.Control","get_children_bounds",0x438cac4f,"mint.Control.get_children_bounds","mint/Control.hx",498,0xafc4152e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(500)
	{
		HX_STACK_LINE(500)
		bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(500)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(500)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(500)
		if ((tmp2)){
			HX_STACK_LINE(500)
			::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(500)
			::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(500)
			::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(21)
			::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(21)
			::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(500)
			::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(500)
			::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(500)
			HX_STACK_DO_THROW(tmp9);
		}
	}
	HX_STACK_LINE(502)
	int tmp = this->children->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(502)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(502)
	if ((tmp1)){
		HX_STACK_LINE(504)
		Dynamic tmp2 = this->children_bounds;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(504)
		tmp2->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)0;
		HX_STACK_LINE(505)
		Dynamic tmp3 = this->children_bounds;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(505)
		tmp3->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)0;
		HX_STACK_LINE(506)
		Dynamic tmp4 = this->children_bounds;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(506)
		tmp4->__FieldRef(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9")) = (int)0;
		HX_STACK_LINE(507)
		Dynamic tmp5 = this->children_bounds;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(507)
		tmp5->__FieldRef(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65")) = (int)0;
		HX_STACK_LINE(508)
		Dynamic tmp6 = this->children_bounds;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(508)
		tmp6->__FieldRef(HX_HCSTRING("real_x","\x17","\xb2","\x97","\xfc")) = (int)0;
		HX_STACK_LINE(509)
		Dynamic tmp7 = this->children_bounds;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(509)
		tmp7->__FieldRef(HX_HCSTRING("real_y","\x18","\xb2","\x97","\xfc")) = (int)0;
		HX_STACK_LINE(510)
		Dynamic tmp8 = this->children_bounds;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(510)
		tmp8->__FieldRef(HX_HCSTRING("real_w","\x16","\xb2","\x97","\xfc")) = (int)0;
		HX_STACK_LINE(511)
		Dynamic tmp9 = this->children_bounds;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(511)
		tmp9->__FieldRef(HX_HCSTRING("real_h","\x07","\xb2","\x97","\xfc")) = (int)0;
		HX_STACK_LINE(513)
		Dynamic tmp10 = this->children_bounds;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(513)
		return tmp10;
	}
	HX_STACK_LINE(517)
	::mint::Control tmp2 = this->children->__get((int)0).StaticCast< ::mint::Control >();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(517)
	::mint::Control _first_child = tmp2;		HX_STACK_VAR(_first_child,"_first_child");
	HX_STACK_LINE(519)
	Float tmp3 = _first_child->get_x_local();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(519)
	Float _current_x = tmp3;		HX_STACK_VAR(_current_x,"_current_x");
	HX_STACK_LINE(520)
	Float tmp4 = _first_child->get_y_local();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(520)
	Float _current_y = tmp4;		HX_STACK_VAR(_current_y,"_current_y");
	HX_STACK_LINE(521)
	Float tmp5 = _first_child->get_x_local();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(521)
	Float tmp6 = _first_child->w;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(521)
	Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(521)
	Float _current_r = tmp7;		HX_STACK_VAR(_current_r,"_current_r");
	HX_STACK_LINE(522)
	Float tmp8 = _first_child->get_y_local();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(522)
	Float tmp9 = _first_child->h;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(522)
	Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(522)
	Float _current_b = tmp10;		HX_STACK_VAR(_current_b,"_current_b");
	HX_STACK_LINE(524)
	Float _real_x = _first_child->x;		HX_STACK_VAR(_real_x,"_real_x");
	HX_STACK_LINE(525)
	Float _real_y = _first_child->y;		HX_STACK_VAR(_real_y,"_real_y");
	HX_STACK_LINE(527)
	{
		HX_STACK_LINE(527)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(527)
		Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(527)
		while((true)){
			HX_STACK_LINE(527)
			bool tmp11 = (_g < _g1->length);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(527)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(527)
			if ((tmp12)){
				HX_STACK_LINE(527)
				break;
			}
			HX_STACK_LINE(527)
			::mint::Control tmp13 = _g1->__get(_g).StaticCast< ::mint::Control >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(527)
			::mint::Control child = tmp13;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(527)
			++(_g);
			HX_STACK_LINE(529)
			Float tmp14 = child->get_x_local();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(529)
			Float tmp15 = _current_x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(529)
			Float tmp16 = ::Math_obj::min(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(529)
			_current_x = tmp16;
			HX_STACK_LINE(530)
			Float tmp17 = child->get_y_local();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(530)
			Float tmp18 = _current_y;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(530)
			Float tmp19 = ::Math_obj::min(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(530)
			_current_y = tmp19;
			HX_STACK_LINE(531)
			Float tmp20 = _current_r;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(531)
			Float tmp21 = child->get_x_local();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(531)
			Float tmp22 = child->w;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(531)
			Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(531)
			Float tmp24 = ::Math_obj::max(tmp20,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(531)
			_current_r = tmp24;
			HX_STACK_LINE(532)
			Float tmp25 = _current_b;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(532)
			Float tmp26 = child->get_y_local();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(532)
			Float tmp27 = child->h;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(532)
			Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(532)
			Float tmp29 = ::Math_obj::max(tmp25,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(532)
			_current_b = tmp29;
			HX_STACK_LINE(534)
			Float tmp30 = child->x;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(534)
			Float tmp31 = _real_x;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(534)
			Float tmp32 = ::Math_obj::min(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(534)
			_real_x = tmp32;
			HX_STACK_LINE(535)
			Float tmp33 = child->y;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(535)
			Float tmp34 = _real_y;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(535)
			Float tmp35 = ::Math_obj::min(tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(535)
			_real_y = tmp35;
		}
	}
	HX_STACK_LINE(539)
	Dynamic tmp11 = this->children_bounds;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(539)
	tmp11->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = _current_x;
	HX_STACK_LINE(540)
	Dynamic tmp12 = this->children_bounds;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(540)
	tmp12->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = _current_y;
	HX_STACK_LINE(541)
	Dynamic tmp13 = this->children_bounds;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(541)
	tmp13->__FieldRef(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9")) = _current_r;
	HX_STACK_LINE(542)
	Dynamic tmp14 = this->children_bounds;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(542)
	tmp14->__FieldRef(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65")) = _current_b;
	HX_STACK_LINE(543)
	Dynamic tmp15 = this->children_bounds;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(543)
	tmp15->__FieldRef(HX_HCSTRING("real_x","\x17","\xb2","\x97","\xfc")) = _real_x;
	HX_STACK_LINE(544)
	Dynamic tmp16 = this->children_bounds;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(544)
	tmp16->__FieldRef(HX_HCSTRING("real_y","\x18","\xb2","\x97","\xfc")) = _real_y;
	HX_STACK_LINE(545)
	Dynamic tmp17 = this->children_bounds;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(545)
	tmp17->__FieldRef(HX_HCSTRING("real_w","\x16","\xb2","\x97","\xfc")) = _current_r;
	HX_STACK_LINE(546)
	Dynamic tmp18 = this->children_bounds;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(546)
	tmp18->__FieldRef(HX_HCSTRING("real_h","\x07","\xb2","\x97","\xfc")) = _current_b;
	HX_STACK_LINE(548)
	Dynamic tmp19 = this->children_bounds;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(548)
	return tmp19;
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,get_children_bounds,return )

Void Control_obj::render( ){
{
		HX_STACK_FRAME("mint.Control","render",0x8b5becb3,"mint.Control.render","mint/Control.hx",552,0xafc4152e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(554)
		{
			HX_STACK_LINE(554)
			bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(554)
			bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(554)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(554)
			if ((tmp2)){
				HX_STACK_LINE(554)
				::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(554)
				::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(554)
				::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(21)
				::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(21)
				::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(554)
				::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(554)
				::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(554)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(556)
		bool tmp = this->renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(556)
		if ((tmp)){
			HX_STACK_LINE(50)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(556)
			::mint::core::Signal tmp1 = this->onrender;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(51)
			int tmp2 = tmp1->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(51)
			int _count = tmp2;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp3 = (_idx < _count);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(52)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(52)
				if ((tmp4)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(556)
				::mint::core::Signal tmp5 = this->onrender;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(53)
				Dynamic tmp6 = tmp5->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(53)
				Dynamic fn = tmp6;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(54)
				bool tmp7 = (fn != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(54)
				if ((tmp7)){
					HX_STACK_LINE(55)
					fn().Cast< Void >();
				}
				HX_STACK_LINE(57)
				(_idx)++;
			}
			HX_STACK_LINE(60)
			while((true)){
				HX_STACK_LINE(60)
				bool tmp3 = (_count > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(60)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(60)
				if ((tmp4)){
					HX_STACK_LINE(60)
					break;
				}
				HX_STACK_LINE(556)
				::mint::core::Signal tmp5 = this->onrender;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(61)
				int tmp6 = (_count - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(61)
				Dynamic tmp7 = tmp5->listeners->__GetItem(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(61)
				Dynamic fn = tmp7;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(62)
				bool tmp8 = (fn == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(62)
				if ((tmp8)){
					HX_STACK_LINE(556)
					::mint::core::Signal tmp9 = this->onrender;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(62)
					int tmp10 = (_count - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(62)
					tmp9->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp10,(int)1);
				}
				HX_STACK_LINE(63)
				(_count)--;
			}
		}
		HX_STACK_LINE(558)
		{
			HX_STACK_LINE(558)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(558)
			Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(558)
			while((true)){
				HX_STACK_LINE(558)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(558)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(558)
				if ((tmp2)){
					HX_STACK_LINE(558)
					break;
				}
				HX_STACK_LINE(558)
				::mint::Control tmp3 = _g1->__get(_g).StaticCast< ::mint::Control >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(558)
				::mint::Control child = tmp3;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(558)
				++(_g);
				HX_STACK_LINE(558)
				child->render();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,render,(void))

Void Control_obj::keyup( Dynamic e){
{
		HX_STACK_FRAME("mint.Control","keyup",0x6df26efd,"mint.Control.keyup","mint/Control.hx",562,0xafc4152e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(564)
		{
			HX_STACK_LINE(564)
			bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(564)
			bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(564)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(564)
			if ((tmp2)){
				HX_STACK_LINE(564)
				::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(564)
				::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(564)
				::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(21)
				::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(21)
				::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(564)
				::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(564)
				::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(564)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(50)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(566)
			::mint::core::Signal tmp = this->onkeyup;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(51)
			int tmp1 = tmp->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(51)
			int _count = tmp1;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp2 = (_idx < _count);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(52)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(52)
				if ((tmp3)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(566)
				::mint::core::Signal tmp4 = this->onkeyup;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(53)
				Dynamic tmp5 = tmp4->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(53)
				Dynamic fn = tmp5;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(54)
				bool tmp6 = (fn != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(54)
				if ((tmp6)){
					HX_STACK_LINE(566)
					Dynamic tmp7 = e;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(55)
					fn(tmp7,hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
				}
				HX_STACK_LINE(57)
				(_idx)++;
			}
			HX_STACK_LINE(60)
			while((true)){
				HX_STACK_LINE(60)
				bool tmp2 = (_count > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(60)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(60)
				if ((tmp3)){
					HX_STACK_LINE(60)
					break;
				}
				HX_STACK_LINE(566)
				::mint::core::Signal tmp4 = this->onkeyup;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(61)
				int tmp5 = (_count - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(61)
				Dynamic tmp6 = tmp4->listeners->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(61)
				Dynamic fn = tmp6;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(62)
				bool tmp7 = (fn == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(62)
				if ((tmp7)){
					HX_STACK_LINE(566)
					::mint::core::Signal tmp8 = this->onkeyup;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(62)
					int tmp9 = (_count - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(62)
					tmp8->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp9,(int)1);
				}
				HX_STACK_LINE(63)
				(_count)--;
			}
		}
		HX_STACK_LINE(568)
		::mint::Control tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(568)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(568)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(568)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(568)
		if ((tmp2)){
			HX_STACK_LINE(569)
			::mint::Control tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(569)
			::mint::Control tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(569)
			::mint::Control tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(569)
			::mint::Canvas tmp7 = this->canvas;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(569)
			::mint::Canvas tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(569)
			::mint::Canvas tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(569)
			tmp3 = (tmp6 != tmp9);
		}
		else{
			HX_STACK_LINE(568)
			tmp3 = false;
		}
		HX_STACK_LINE(568)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(568)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(568)
		if ((tmp4)){
			HX_STACK_LINE(570)
			::mint::Canvas tmp6 = this->canvas;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(570)
			::mint::Canvas tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(570)
			::mint::Canvas tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(570)
			tmp5 = (tmp8 != hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(568)
			tmp5 = false;
		}
		HX_STACK_LINE(568)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(568)
		if ((tmp5)){
			HX_STACK_LINE(571)
			tmp6 = e->__Field(HX_HCSTRING("bubble","\x8c","\xdf","\xec","\xcd"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(568)
			tmp6 = false;
		}
		HX_STACK_LINE(568)
		if ((tmp6)){
			HX_STACK_LINE(573)
			::mint::Control tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(573)
			Dynamic tmp8 = e;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(573)
			tmp7->keyup(tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,keyup,(void))

Void Control_obj::keydown( Dynamic e){
{
		HX_STACK_FRAME("mint.Control","keydown",0x976ced84,"mint.Control.keydown","mint/Control.hx",578,0xafc4152e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(580)
		{
			HX_STACK_LINE(580)
			bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(580)
			bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(580)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(580)
			if ((tmp2)){
				HX_STACK_LINE(580)
				::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(580)
				::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(580)
				::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(21)
				::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(21)
				::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(580)
				::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(580)
				::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(580)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(50)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(582)
			::mint::core::Signal tmp = this->onkeydown;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(51)
			int tmp1 = tmp->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(51)
			int _count = tmp1;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp2 = (_idx < _count);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(52)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(52)
				if ((tmp3)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(582)
				::mint::core::Signal tmp4 = this->onkeydown;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(53)
				Dynamic tmp5 = tmp4->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(53)
				Dynamic fn = tmp5;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(54)
				bool tmp6 = (fn != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(54)
				if ((tmp6)){
					HX_STACK_LINE(582)
					Dynamic tmp7 = e;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(55)
					fn(tmp7,hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
				}
				HX_STACK_LINE(57)
				(_idx)++;
			}
			HX_STACK_LINE(60)
			while((true)){
				HX_STACK_LINE(60)
				bool tmp2 = (_count > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(60)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(60)
				if ((tmp3)){
					HX_STACK_LINE(60)
					break;
				}
				HX_STACK_LINE(582)
				::mint::core::Signal tmp4 = this->onkeydown;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(61)
				int tmp5 = (_count - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(61)
				Dynamic tmp6 = tmp4->listeners->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(61)
				Dynamic fn = tmp6;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(62)
				bool tmp7 = (fn == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(62)
				if ((tmp7)){
					HX_STACK_LINE(582)
					::mint::core::Signal tmp8 = this->onkeydown;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(62)
					int tmp9 = (_count - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(62)
					tmp8->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp9,(int)1);
				}
				HX_STACK_LINE(63)
				(_count)--;
			}
		}
		HX_STACK_LINE(584)
		::mint::Control tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(584)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(584)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(584)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(584)
		if ((tmp2)){
			HX_STACK_LINE(585)
			::mint::Control tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(585)
			::mint::Control tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(585)
			::mint::Control tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(585)
			::mint::Canvas tmp7 = this->canvas;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(585)
			::mint::Canvas tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(585)
			::mint::Canvas tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(585)
			tmp3 = (tmp6 != tmp9);
		}
		else{
			HX_STACK_LINE(584)
			tmp3 = false;
		}
		HX_STACK_LINE(584)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(584)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(584)
		if ((tmp4)){
			HX_STACK_LINE(586)
			::mint::Canvas tmp6 = this->canvas;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(586)
			::mint::Canvas tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(586)
			::mint::Canvas tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(586)
			tmp5 = (tmp8 != hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(584)
			tmp5 = false;
		}
		HX_STACK_LINE(584)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(584)
		if ((tmp5)){
			HX_STACK_LINE(587)
			tmp6 = e->__Field(HX_HCSTRING("bubble","\x8c","\xdf","\xec","\xcd"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(584)
			tmp6 = false;
		}
		HX_STACK_LINE(584)
		if ((tmp6)){
			HX_STACK_LINE(589)
			::mint::Control tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(589)
			Dynamic tmp8 = e;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(589)
			tmp7->keydown(tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,keydown,(void))

Void Control_obj::textinput( Dynamic e){
{
		HX_STACK_FRAME("mint.Control","textinput",0x2aeadb00,"mint.Control.textinput","mint/Control.hx",594,0xafc4152e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(596)
		{
			HX_STACK_LINE(596)
			bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(596)
			bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(596)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(596)
			if ((tmp2)){
				HX_STACK_LINE(596)
				::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(596)
				::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(596)
				::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(21)
				::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(21)
				::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(596)
				::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(596)
				::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(596)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(50)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(598)
			::mint::core::Signal tmp = this->ontextinput;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(51)
			int tmp1 = tmp->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(51)
			int _count = tmp1;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp2 = (_idx < _count);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(52)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(52)
				if ((tmp3)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(598)
				::mint::core::Signal tmp4 = this->ontextinput;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(53)
				Dynamic tmp5 = tmp4->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(53)
				Dynamic fn = tmp5;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(54)
				bool tmp6 = (fn != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(54)
				if ((tmp6)){
					HX_STACK_LINE(598)
					Dynamic tmp7 = e;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(55)
					fn(tmp7,hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
				}
				HX_STACK_LINE(57)
				(_idx)++;
			}
			HX_STACK_LINE(60)
			while((true)){
				HX_STACK_LINE(60)
				bool tmp2 = (_count > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(60)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(60)
				if ((tmp3)){
					HX_STACK_LINE(60)
					break;
				}
				HX_STACK_LINE(598)
				::mint::core::Signal tmp4 = this->ontextinput;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(61)
				int tmp5 = (_count - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(61)
				Dynamic tmp6 = tmp4->listeners->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(61)
				Dynamic fn = tmp6;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(62)
				bool tmp7 = (fn == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(62)
				if ((tmp7)){
					HX_STACK_LINE(598)
					::mint::core::Signal tmp8 = this->ontextinput;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(62)
					int tmp9 = (_count - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(62)
					tmp8->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp9,(int)1);
				}
				HX_STACK_LINE(63)
				(_count)--;
			}
		}
		HX_STACK_LINE(600)
		::mint::Control tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(600)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(600)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(600)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(600)
		if ((tmp2)){
			HX_STACK_LINE(601)
			::mint::Control tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(601)
			::mint::Control tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(601)
			::mint::Control tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(601)
			::mint::Canvas tmp7 = this->canvas;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(601)
			::mint::Canvas tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(601)
			::mint::Canvas tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(601)
			tmp3 = (tmp6 != tmp9);
		}
		else{
			HX_STACK_LINE(600)
			tmp3 = false;
		}
		HX_STACK_LINE(600)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(600)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(600)
		if ((tmp4)){
			HX_STACK_LINE(602)
			::mint::Canvas tmp6 = this->canvas;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(602)
			::mint::Canvas tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(602)
			::mint::Canvas tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(602)
			tmp5 = (tmp8 != hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(600)
			tmp5 = false;
		}
		HX_STACK_LINE(600)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(600)
		if ((tmp5)){
			HX_STACK_LINE(603)
			tmp6 = e->__Field(HX_HCSTRING("bubble","\x8c","\xdf","\xec","\xcd"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(600)
			tmp6 = false;
		}
		HX_STACK_LINE(600)
		if ((tmp6)){
			HX_STACK_LINE(605)
			::mint::Control tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(605)
			Dynamic tmp8 = e;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(605)
			tmp7->textinput(tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,textinput,(void))

Void Control_obj::mousemove( Dynamic e){
{
		HX_STACK_FRAME("mint.Control","mousemove",0x70e96679,"mint.Control.mousemove","mint/Control.hx",610,0xafc4152e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(612)
		{
			HX_STACK_LINE(612)
			bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(612)
			bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(612)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(612)
			if ((tmp2)){
				HX_STACK_LINE(612)
				::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(612)
				::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(612)
				::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(21)
				::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(21)
				::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(612)
				::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(612)
				::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(612)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(50)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(614)
			::mint::core::Signal tmp = this->onmousemove;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(51)
			int tmp1 = tmp->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(51)
			int _count = tmp1;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp2 = (_idx < _count);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(52)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(52)
				if ((tmp3)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(614)
				::mint::core::Signal tmp4 = this->onmousemove;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(53)
				Dynamic tmp5 = tmp4->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(53)
				Dynamic fn = tmp5;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(54)
				bool tmp6 = (fn != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(54)
				if ((tmp6)){
					HX_STACK_LINE(614)
					Dynamic tmp7 = e;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(55)
					fn(tmp7,hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
				}
				HX_STACK_LINE(57)
				(_idx)++;
			}
			HX_STACK_LINE(60)
			while((true)){
				HX_STACK_LINE(60)
				bool tmp2 = (_count > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(60)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(60)
				if ((tmp3)){
					HX_STACK_LINE(60)
					break;
				}
				HX_STACK_LINE(614)
				::mint::core::Signal tmp4 = this->onmousemove;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(61)
				int tmp5 = (_count - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(61)
				Dynamic tmp6 = tmp4->listeners->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(61)
				Dynamic fn = tmp6;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(62)
				bool tmp7 = (fn == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(62)
				if ((tmp7)){
					HX_STACK_LINE(614)
					::mint::core::Signal tmp8 = this->onmousemove;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(62)
					int tmp9 = (_count - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(62)
					tmp8->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp9,(int)1);
				}
				HX_STACK_LINE(63)
				(_count)--;
			}
		}
		HX_STACK_LINE(616)
		::mint::Control tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(616)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(616)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(616)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(616)
		if ((tmp2)){
			HX_STACK_LINE(617)
			::mint::Control tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(617)
			::mint::Control tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(617)
			::mint::Control tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(617)
			::mint::Canvas tmp7 = this->canvas;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(617)
			::mint::Canvas tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(617)
			::mint::Canvas tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(617)
			tmp3 = (tmp6 != tmp9);
		}
		else{
			HX_STACK_LINE(616)
			tmp3 = false;
		}
		HX_STACK_LINE(616)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(616)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(616)
		if ((tmp4)){
			HX_STACK_LINE(618)
			::mint::Canvas tmp6 = this->canvas;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(618)
			::mint::Canvas tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(618)
			::mint::Canvas tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(618)
			tmp5 = (tmp8 != hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(616)
			tmp5 = false;
		}
		HX_STACK_LINE(616)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(616)
		if ((tmp5)){
			HX_STACK_LINE(619)
			tmp6 = e->__Field(HX_HCSTRING("bubble","\x8c","\xdf","\xec","\xcd"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(616)
			tmp6 = false;
		}
		HX_STACK_LINE(616)
		if ((tmp6)){
			HX_STACK_LINE(621)
			::mint::Control tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(621)
			Dynamic tmp8 = e;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(621)
			tmp7->mousemove(tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,mousemove,(void))

Void Control_obj::mouseup( Dynamic e){
{
		HX_STACK_FRAME("mint.Control","mouseup",0xa671bfc3,"mint.Control.mouseup","mint/Control.hx",626,0xafc4152e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(628)
		{
			HX_STACK_LINE(628)
			bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(628)
			bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(628)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(628)
			if ((tmp2)){
				HX_STACK_LINE(628)
				::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(628)
				::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(628)
				::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(21)
				::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(21)
				::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(628)
				::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(628)
				::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(628)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(50)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(630)
			::mint::core::Signal tmp = this->onmouseup;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(51)
			int tmp1 = tmp->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(51)
			int _count = tmp1;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp2 = (_idx < _count);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(52)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(52)
				if ((tmp3)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(630)
				::mint::core::Signal tmp4 = this->onmouseup;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(53)
				Dynamic tmp5 = tmp4->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(53)
				Dynamic fn = tmp5;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(54)
				bool tmp6 = (fn != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(54)
				if ((tmp6)){
					HX_STACK_LINE(630)
					Dynamic tmp7 = e;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(55)
					fn(tmp7,hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
				}
				HX_STACK_LINE(57)
				(_idx)++;
			}
			HX_STACK_LINE(60)
			while((true)){
				HX_STACK_LINE(60)
				bool tmp2 = (_count > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(60)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(60)
				if ((tmp3)){
					HX_STACK_LINE(60)
					break;
				}
				HX_STACK_LINE(630)
				::mint::core::Signal tmp4 = this->onmouseup;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(61)
				int tmp5 = (_count - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(61)
				Dynamic tmp6 = tmp4->listeners->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(61)
				Dynamic fn = tmp6;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(62)
				bool tmp7 = (fn == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(62)
				if ((tmp7)){
					HX_STACK_LINE(630)
					::mint::core::Signal tmp8 = this->onmouseup;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(62)
					int tmp9 = (_count - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(62)
					tmp8->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp9,(int)1);
				}
				HX_STACK_LINE(63)
				(_count)--;
			}
		}
		HX_STACK_LINE(632)
		::mint::Control tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(632)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(632)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(632)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(632)
		if ((tmp2)){
			HX_STACK_LINE(633)
			::mint::Control tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(633)
			::mint::Control tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(633)
			::mint::Control tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(633)
			::mint::Canvas tmp7 = this->canvas;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(633)
			::mint::Canvas tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(633)
			::mint::Canvas tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(633)
			tmp3 = (tmp6 != tmp9);
		}
		else{
			HX_STACK_LINE(632)
			tmp3 = false;
		}
		HX_STACK_LINE(632)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(632)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(632)
		if ((tmp4)){
			HX_STACK_LINE(634)
			::mint::Canvas tmp6 = this->canvas;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(634)
			::mint::Canvas tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(634)
			::mint::Canvas tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(634)
			tmp5 = (tmp8 != hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(632)
			tmp5 = false;
		}
		HX_STACK_LINE(632)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(632)
		if ((tmp5)){
			HX_STACK_LINE(635)
			tmp6 = e->__Field(HX_HCSTRING("bubble","\x8c","\xdf","\xec","\xcd"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(632)
			tmp6 = false;
		}
		HX_STACK_LINE(632)
		if ((tmp6)){
			HX_STACK_LINE(637)
			::mint::Control tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(637)
			Dynamic tmp8 = e;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(637)
			tmp7->mouseup(tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,mouseup,(void))

Void Control_obj::mousewheel( Dynamic e){
{
		HX_STACK_FRAME("mint.Control","mousewheel",0x18a4ac33,"mint.Control.mousewheel","mint/Control.hx",642,0xafc4152e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(644)
		{
			HX_STACK_LINE(644)
			bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(644)
			bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(644)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(644)
			if ((tmp2)){
				HX_STACK_LINE(644)
				::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(644)
				::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(644)
				::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(21)
				::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(21)
				::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(644)
				::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(644)
				::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(644)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(50)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(646)
			::mint::core::Signal tmp = this->onmousewheel;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(51)
			int tmp1 = tmp->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(51)
			int _count = tmp1;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp2 = (_idx < _count);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(52)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(52)
				if ((tmp3)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(646)
				::mint::core::Signal tmp4 = this->onmousewheel;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(53)
				Dynamic tmp5 = tmp4->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(53)
				Dynamic fn = tmp5;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(54)
				bool tmp6 = (fn != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(54)
				if ((tmp6)){
					HX_STACK_LINE(646)
					Dynamic tmp7 = e;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(55)
					fn(tmp7,hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
				}
				HX_STACK_LINE(57)
				(_idx)++;
			}
			HX_STACK_LINE(60)
			while((true)){
				HX_STACK_LINE(60)
				bool tmp2 = (_count > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(60)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(60)
				if ((tmp3)){
					HX_STACK_LINE(60)
					break;
				}
				HX_STACK_LINE(646)
				::mint::core::Signal tmp4 = this->onmousewheel;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(61)
				int tmp5 = (_count - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(61)
				Dynamic tmp6 = tmp4->listeners->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(61)
				Dynamic fn = tmp6;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(62)
				bool tmp7 = (fn == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(62)
				if ((tmp7)){
					HX_STACK_LINE(646)
					::mint::core::Signal tmp8 = this->onmousewheel;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(62)
					int tmp9 = (_count - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(62)
					tmp8->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp9,(int)1);
				}
				HX_STACK_LINE(63)
				(_count)--;
			}
		}
		HX_STACK_LINE(648)
		::mint::Control tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(648)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(648)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(648)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(648)
		if ((tmp2)){
			HX_STACK_LINE(649)
			::mint::Control tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(649)
			::mint::Control tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(649)
			::mint::Control tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(649)
			::mint::Canvas tmp7 = this->canvas;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(649)
			::mint::Canvas tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(649)
			::mint::Canvas tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(649)
			tmp3 = (tmp6 != tmp9);
		}
		else{
			HX_STACK_LINE(648)
			tmp3 = false;
		}
		HX_STACK_LINE(648)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(648)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(648)
		if ((tmp4)){
			HX_STACK_LINE(650)
			::mint::Canvas tmp6 = this->canvas;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(650)
			::mint::Canvas tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(650)
			::mint::Canvas tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(650)
			tmp5 = (tmp8 != hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(648)
			tmp5 = false;
		}
		HX_STACK_LINE(648)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(648)
		if ((tmp5)){
			HX_STACK_LINE(651)
			tmp6 = e->__Field(HX_HCSTRING("bubble","\x8c","\xdf","\xec","\xcd"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(648)
			tmp6 = false;
		}
		HX_STACK_LINE(648)
		if ((tmp6)){
			HX_STACK_LINE(653)
			::mint::Control tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(653)
			Dynamic tmp8 = e;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(653)
			tmp7->mousewheel(tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,mousewheel,(void))

Void Control_obj::mousedown( Dynamic e){
{
		HX_STACK_FRAME("mint.Control","mousedown",0x6af67bca,"mint.Control.mousedown","mint/Control.hx",658,0xafc4152e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(660)
		{
			HX_STACK_LINE(660)
			bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(660)
			bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(660)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(660)
			if ((tmp2)){
				HX_STACK_LINE(660)
				::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(660)
				::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(660)
				::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(21)
				::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(21)
				::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(660)
				::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(660)
				::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(660)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(50)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(662)
			::mint::core::Signal tmp = this->onmousedown;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(51)
			int tmp1 = tmp->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(51)
			int _count = tmp1;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp2 = (_idx < _count);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(52)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(52)
				if ((tmp3)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(662)
				::mint::core::Signal tmp4 = this->onmousedown;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(53)
				Dynamic tmp5 = tmp4->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(53)
				Dynamic fn = tmp5;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(54)
				bool tmp6 = (fn != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(54)
				if ((tmp6)){
					HX_STACK_LINE(662)
					Dynamic tmp7 = e;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(55)
					fn(tmp7,hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
				}
				HX_STACK_LINE(57)
				(_idx)++;
			}
			HX_STACK_LINE(60)
			while((true)){
				HX_STACK_LINE(60)
				bool tmp2 = (_count > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(60)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(60)
				if ((tmp3)){
					HX_STACK_LINE(60)
					break;
				}
				HX_STACK_LINE(662)
				::mint::core::Signal tmp4 = this->onmousedown;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(61)
				int tmp5 = (_count - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(61)
				Dynamic tmp6 = tmp4->listeners->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(61)
				Dynamic fn = tmp6;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(62)
				bool tmp7 = (fn == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(62)
				if ((tmp7)){
					HX_STACK_LINE(662)
					::mint::core::Signal tmp8 = this->onmousedown;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(62)
					int tmp9 = (_count - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(62)
					tmp8->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp9,(int)1);
				}
				HX_STACK_LINE(63)
				(_count)--;
			}
		}
		HX_STACK_LINE(664)
		::mint::Control tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(664)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(664)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(664)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(664)
		if ((tmp2)){
			HX_STACK_LINE(665)
			::mint::Control tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(665)
			::mint::Control tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(665)
			::mint::Control tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(665)
			::mint::Canvas tmp7 = this->canvas;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(665)
			::mint::Canvas tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(665)
			::mint::Canvas tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(665)
			tmp3 = (tmp6 != tmp9);
		}
		else{
			HX_STACK_LINE(664)
			tmp3 = false;
		}
		HX_STACK_LINE(664)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(664)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(664)
		if ((tmp4)){
			HX_STACK_LINE(666)
			::mint::Canvas tmp6 = this->canvas;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(666)
			::mint::Canvas tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(666)
			::mint::Canvas tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(666)
			tmp5 = (tmp8 != hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(664)
			tmp5 = false;
		}
		HX_STACK_LINE(664)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(664)
		if ((tmp5)){
			HX_STACK_LINE(667)
			tmp6 = e->__Field(HX_HCSTRING("bubble","\x8c","\xdf","\xec","\xcd"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(664)
			tmp6 = false;
		}
		HX_STACK_LINE(664)
		if ((tmp6)){
			HX_STACK_LINE(669)
			::mint::Control tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(669)
			Dynamic tmp8 = e;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(669)
			tmp7->mousedown(tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,mousedown,(void))

Void Control_obj::mouseenter( Dynamic e){
{
		HX_STACK_FRAME("mint.Control","mouseenter",0xbf70e4b0,"mint.Control.mouseenter","mint/Control.hx",674,0xafc4152e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(676)
		{
			HX_STACK_LINE(676)
			bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(676)
			bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(676)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(676)
			if ((tmp2)){
				HX_STACK_LINE(676)
				::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(676)
				::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(676)
				::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(21)
				::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(21)
				::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(676)
				::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(676)
				::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(676)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(50)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(678)
			::mint::core::Signal tmp = this->onmouseenter;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(51)
			int tmp1 = tmp->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(51)
			int _count = tmp1;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp2 = (_idx < _count);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(52)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(52)
				if ((tmp3)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(678)
				::mint::core::Signal tmp4 = this->onmouseenter;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(53)
				Dynamic tmp5 = tmp4->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(53)
				Dynamic fn = tmp5;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(54)
				bool tmp6 = (fn != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(54)
				if ((tmp6)){
					HX_STACK_LINE(678)
					Dynamic tmp7 = e;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(55)
					fn(tmp7,hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
				}
				HX_STACK_LINE(57)
				(_idx)++;
			}
			HX_STACK_LINE(60)
			while((true)){
				HX_STACK_LINE(60)
				bool tmp2 = (_count > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(60)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(60)
				if ((tmp3)){
					HX_STACK_LINE(60)
					break;
				}
				HX_STACK_LINE(678)
				::mint::core::Signal tmp4 = this->onmouseenter;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(61)
				int tmp5 = (_count - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(61)
				Dynamic tmp6 = tmp4->listeners->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(61)
				Dynamic fn = tmp6;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(62)
				bool tmp7 = (fn == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(62)
				if ((tmp7)){
					HX_STACK_LINE(678)
					::mint::core::Signal tmp8 = this->onmouseenter;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(62)
					int tmp9 = (_count - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(62)
					tmp8->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp9,(int)1);
				}
				HX_STACK_LINE(63)
				(_count)--;
			}
		}
		HX_STACK_LINE(679)
		this->ishovered = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,mouseenter,(void))

Void Control_obj::mouseleave( Dynamic e){
{
		HX_STACK_FRAME("mint.Control","mouseleave",0xc13dac8f,"mint.Control.mouseleave","mint/Control.hx",683,0xafc4152e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(685)
		{
			HX_STACK_LINE(685)
			bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(685)
			bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(685)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(685)
			if ((tmp2)){
				HX_STACK_LINE(685)
				::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(685)
				::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(685)
				::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(21)
				::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(21)
				::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(685)
				::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(685)
				::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(685)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(50)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(687)
			::mint::core::Signal tmp = this->onmouseleave;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(51)
			int tmp1 = tmp->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(51)
			int _count = tmp1;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp2 = (_idx < _count);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(52)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(52)
				if ((tmp3)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(687)
				::mint::core::Signal tmp4 = this->onmouseleave;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(53)
				Dynamic tmp5 = tmp4->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(53)
				Dynamic fn = tmp5;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(54)
				bool tmp6 = (fn != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(54)
				if ((tmp6)){
					HX_STACK_LINE(687)
					Dynamic tmp7 = e;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(55)
					fn(tmp7,hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
				}
				HX_STACK_LINE(57)
				(_idx)++;
			}
			HX_STACK_LINE(60)
			while((true)){
				HX_STACK_LINE(60)
				bool tmp2 = (_count > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(60)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(60)
				if ((tmp3)){
					HX_STACK_LINE(60)
					break;
				}
				HX_STACK_LINE(687)
				::mint::core::Signal tmp4 = this->onmouseleave;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(61)
				int tmp5 = (_count - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(61)
				Dynamic tmp6 = tmp4->listeners->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(61)
				Dynamic fn = tmp6;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(62)
				bool tmp7 = (fn == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(62)
				if ((tmp7)){
					HX_STACK_LINE(687)
					::mint::core::Signal tmp8 = this->onmouseleave;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(62)
					int tmp9 = (_count - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(62)
					tmp8->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp9,(int)1);
				}
				HX_STACK_LINE(63)
				(_count)--;
			}
		}
		HX_STACK_LINE(688)
		this->ishovered = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,mouseleave,(void))

Void Control_obj::destroy_children( ){
{
		HX_STACK_FRAME("mint.Control","destroy_children",0x45982c01,"mint.Control.destroy_children","mint/Control.hx",692,0xafc4152e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(694)
		{
			HX_STACK_LINE(694)
			bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(694)
			bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(694)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(694)
			if ((tmp2)){
				HX_STACK_LINE(694)
				::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(694)
				::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(694)
				::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(21)
				::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(21)
				::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(694)
				::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(694)
				::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(694)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(696)
		while((true)){
			HX_STACK_LINE(696)
			int tmp = this->children->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(696)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(696)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(696)
			if ((tmp2)){
				HX_STACK_LINE(696)
				break;
			}
			HX_STACK_LINE(697)
			::mint::Control tmp3 = this->children->shift().StaticCast< ::mint::Control >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(697)
			::mint::Control child = tmp3;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(698)
			child->destroy();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,destroy_children,(void))

Void Control_obj::destroy( ){
{
		HX_STACK_FRAME("mint.Control","destroy",0x0a84dcfd,"mint.Control.destroy","mint/Control.hx",703,0xafc4152e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(705)
		{
			HX_STACK_LINE(705)
			bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(705)
			bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(705)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(705)
			if ((tmp2)){
				HX_STACK_LINE(705)
				::String tmp3 = ::Std_obj::string(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(705)
				::String tmp4 = (HX_HCSTRING("attempt to destroy control twice `","\x8d","\x29","\xb5","\x52") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(705)
				::String tmp5 = (tmp4 + HX_HCSTRING("` (","\x68","\xf4","\x48","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(705)
				::String tmp6 = this->name;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(705)
				::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(705)
				::String tmp8 = (tmp7 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(21)
				::String tmp9 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(21)
				::String tmp10 = (tmp9 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(705)
				::String tmp11 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(705)
				::mint::core::DebugError tmp12 = ::mint::core::DebugError_obj::assertion(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(705)
				HX_STACK_DO_THROW(tmp12);
			}
		}
		HX_STACK_LINE(707)
		{
			HX_STACK_LINE(707)
			{
				HX_STACK_LINE(707)
				bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(707)
				bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(707)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(707)
				if ((tmp2)){
					HX_STACK_LINE(707)
					::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(707)
					::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(707)
					::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(707)
					::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(707)
					::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(707)
					::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(707)
					::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(707)
					HX_STACK_DO_THROW(tmp9);
				}
			}
			HX_STACK_LINE(707)
			::mint::Canvas tmp = this->canvas;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(707)
			bool tmp1 = (tmp == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(707)
			if ((tmp1)){
				HX_STACK_LINE(707)
				Dynamic();
			}
			else{
				HX_STACK_LINE(707)
				::mint::Canvas tmp2 = this->canvas;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(707)
				::mint::Control tmp3 = tmp2->get_marked();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(707)
				bool tmp4 = (tmp3 == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(707)
				if ((tmp4)){
					HX_STACK_LINE(707)
					::mint::Canvas tmp5 = this->canvas;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(707)
					tmp5->set_marked(null());
					HX_STACK_LINE(707)
					{
						HX_STACK_LINE(707)
						int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
						HX_STACK_LINE(707)
						::mint::core::Signal tmp6 = this->onmarked;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(707)
						int tmp7 = tmp6->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(707)
						int _count = tmp7;		HX_STACK_VAR(_count,"_count");
						HX_STACK_LINE(707)
						while((true)){
							HX_STACK_LINE(707)
							bool tmp8 = (_idx < _count);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(707)
							bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(707)
							if ((tmp9)){
								HX_STACK_LINE(707)
								break;
							}
							HX_STACK_LINE(707)
							::mint::core::Signal tmp10 = this->onmarked;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(707)
							Dynamic tmp11 = tmp10->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(707)
							Dynamic fn = tmp11;		HX_STACK_VAR(fn,"fn");
							HX_STACK_LINE(707)
							bool tmp12 = (fn != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(707)
							if ((tmp12)){
								HX_STACK_LINE(707)
								fn(false).Cast< Void >();
							}
							HX_STACK_LINE(707)
							(_idx)++;
						}
						HX_STACK_LINE(707)
						while((true)){
							HX_STACK_LINE(707)
							bool tmp8 = (_count > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(707)
							bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(707)
							if ((tmp9)){
								HX_STACK_LINE(707)
								break;
							}
							HX_STACK_LINE(707)
							::mint::core::Signal tmp10 = this->onmarked;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(707)
							int tmp11 = (_count - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(707)
							Dynamic tmp12 = tmp10->listeners->__GetItem(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(707)
							Dynamic fn = tmp12;		HX_STACK_VAR(fn,"fn");
							HX_STACK_LINE(707)
							bool tmp13 = (fn == null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(707)
							if ((tmp13)){
								HX_STACK_LINE(707)
								::mint::core::Signal tmp14 = this->onmarked;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(707)
								int tmp15 = (_count - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(707)
								tmp14->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp15,(int)1);
							}
							HX_STACK_LINE(707)
							(_count)--;
						}
					}
				}
			}
		}
		HX_STACK_LINE(708)
		this->unfocus();
		HX_STACK_LINE(709)
		{
			HX_STACK_LINE(709)
			{
				HX_STACK_LINE(709)
				bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(709)
				bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(709)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(709)
				if ((tmp2)){
					HX_STACK_LINE(709)
					::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(709)
					::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(709)
					::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(709)
					::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(709)
					::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(709)
					::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(709)
					::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(709)
					HX_STACK_DO_THROW(tmp9);
				}
			}
			HX_STACK_LINE(709)
			::mint::Canvas tmp = this->canvas;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(709)
			bool tmp1 = (tmp == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(709)
			if ((tmp1)){
				HX_STACK_LINE(709)
				Dynamic();
			}
			else{
				HX_STACK_LINE(709)
				::mint::Canvas tmp2 = this->canvas;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(709)
				::mint::Control tmp3 = tmp2->get_captured();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(709)
				bool tmp4 = (tmp3 == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(709)
				if ((tmp4)){
					HX_STACK_LINE(709)
					::mint::Canvas tmp5 = this->canvas;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(709)
					tmp5->set_captured(null());
					HX_STACK_LINE(709)
					{
						HX_STACK_LINE(709)
						int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
						HX_STACK_LINE(709)
						::mint::core::Signal tmp6 = this->oncaptured;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(709)
						int tmp7 = tmp6->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(709)
						int _count = tmp7;		HX_STACK_VAR(_count,"_count");
						HX_STACK_LINE(709)
						while((true)){
							HX_STACK_LINE(709)
							bool tmp8 = (_idx < _count);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(709)
							bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(709)
							if ((tmp9)){
								HX_STACK_LINE(709)
								break;
							}
							HX_STACK_LINE(709)
							::mint::core::Signal tmp10 = this->oncaptured;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(709)
							Dynamic tmp11 = tmp10->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(709)
							Dynamic fn = tmp11;		HX_STACK_VAR(fn,"fn");
							HX_STACK_LINE(709)
							bool tmp12 = (fn != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(709)
							if ((tmp12)){
								HX_STACK_LINE(709)
								fn(false).Cast< Void >();
							}
							HX_STACK_LINE(709)
							(_idx)++;
						}
						HX_STACK_LINE(709)
						while((true)){
							HX_STACK_LINE(709)
							bool tmp8 = (_count > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(709)
							bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(709)
							if ((tmp9)){
								HX_STACK_LINE(709)
								break;
							}
							HX_STACK_LINE(709)
							::mint::core::Signal tmp10 = this->oncaptured;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(709)
							int tmp11 = (_count - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(709)
							Dynamic tmp12 = tmp10->listeners->__GetItem(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(709)
							Dynamic fn = tmp12;		HX_STACK_VAR(fn,"fn");
							HX_STACK_LINE(709)
							bool tmp13 = (fn == null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(709)
							if ((tmp13)){
								HX_STACK_LINE(709)
								::mint::core::Signal tmp14 = this->oncaptured;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(709)
								int tmp15 = (_count - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(709)
								tmp14->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp15,(int)1);
							}
							HX_STACK_LINE(709)
							(_count)--;
						}
					}
				}
			}
		}
		HX_STACK_LINE(711)
		this->destroy_children();
		HX_STACK_LINE(713)
		::mint::Control tmp = this->clip_with;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(713)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(713)
		if ((tmp1)){
			HX_STACK_LINE(714)
			::mint::Control tmp2 = this->clip_with;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(714)
			Dynamic tmp3 = this->onclipchanged_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(714)
			tmp2->onbounds->remove(tmp3);
		}
		HX_STACK_LINE(717)
		::mint::Control tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(717)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(717)
		if ((tmp3)){
			HX_STACK_LINE(718)
			::mint::Control tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(718)
			tmp4->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(50)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(721)
			::mint::core::Signal tmp4 = this->ondestroy;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(51)
			int tmp5 = tmp4->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(51)
			int _count = tmp5;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp6 = (_idx < _count);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(52)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(52)
				if ((tmp7)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(721)
				::mint::core::Signal tmp8 = this->ondestroy;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(53)
				Dynamic tmp9 = tmp8->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(53)
				Dynamic fn = tmp9;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(54)
				bool tmp10 = (fn != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(54)
				if ((tmp10)){
					HX_STACK_LINE(55)
					fn().Cast< Void >();
				}
				HX_STACK_LINE(57)
				(_idx)++;
			}
			HX_STACK_LINE(60)
			while((true)){
				HX_STACK_LINE(60)
				bool tmp6 = (_count > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(60)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(60)
				if ((tmp7)){
					HX_STACK_LINE(60)
					break;
				}
				HX_STACK_LINE(721)
				::mint::core::Signal tmp8 = this->ondestroy;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(61)
				int tmp9 = (_count - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(61)
				Dynamic tmp10 = tmp8->listeners->__GetItem(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(61)
				Dynamic fn = tmp10;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(62)
				bool tmp11 = (fn == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(62)
				if ((tmp11)){
					HX_STACK_LINE(721)
					::mint::core::Signal tmp12 = this->ondestroy;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(62)
					int tmp13 = (_count - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(62)
					tmp12->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp13,(int)1);
				}
				HX_STACK_LINE(63)
				(_count)--;
			}
		}
		HX_STACK_LINE(723)
		this->user = null();
		HX_STACK_LINE(725)
		{
			HX_STACK_LINE(725)
			::mint::core::Signal tmp4 = this->oncreate;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(725)
			::mint::core::Signal _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(725)
			_this->listeners = null();
			HX_STACK_LINE(725)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(725)
		this->oncreate = null();
		HX_STACK_LINE(726)
		{
			HX_STACK_LINE(726)
			::mint::core::Signal tmp4 = this->onrender;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(726)
			::mint::core::Signal _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(726)
			_this->listeners = null();
			HX_STACK_LINE(726)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(726)
		this->onrender = null();
		HX_STACK_LINE(727)
		{
			HX_STACK_LINE(727)
			::mint::core::Signal tmp4 = this->onrenamed;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(727)
			::mint::core::Signal _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(727)
			_this->listeners = null();
			HX_STACK_LINE(727)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(727)
		this->onrenamed = null();
		HX_STACK_LINE(728)
		{
			HX_STACK_LINE(728)
			::mint::core::Signal tmp4 = this->onbounds;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(728)
			::mint::core::Signal _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(728)
			_this->listeners = null();
			HX_STACK_LINE(728)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(728)
		this->onbounds = null();
		HX_STACK_LINE(729)
		{
			HX_STACK_LINE(729)
			::mint::core::Signal tmp4 = this->ondestroy;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(729)
			::mint::core::Signal _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(729)
			_this->listeners = null();
			HX_STACK_LINE(729)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(729)
		this->ondestroy = null();
		HX_STACK_LINE(730)
		{
			HX_STACK_LINE(730)
			::mint::core::Signal tmp4 = this->onvisible;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(730)
			::mint::core::Signal _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(730)
			_this->listeners = null();
			HX_STACK_LINE(730)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(730)
		this->onvisible = null();
		HX_STACK_LINE(731)
		{
			HX_STACK_LINE(731)
			::mint::core::Signal tmp4 = this->ondepth;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(731)
			::mint::core::Signal _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(731)
			_this->listeners = null();
			HX_STACK_LINE(731)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(731)
		this->ondepth = null();
		HX_STACK_LINE(732)
		{
			HX_STACK_LINE(732)
			::mint::core::Signal tmp4 = this->onclip;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(732)
			::mint::core::Signal _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(732)
			_this->listeners = null();
			HX_STACK_LINE(732)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(732)
		this->onclip = null();
		HX_STACK_LINE(733)
		{
			HX_STACK_LINE(733)
			::mint::core::Signal tmp4 = this->onchildadd;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(733)
			::mint::core::Signal _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(733)
			_this->listeners = null();
			HX_STACK_LINE(733)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(733)
		this->onchildadd = null();
		HX_STACK_LINE(734)
		{
			HX_STACK_LINE(734)
			::mint::core::Signal tmp4 = this->onchildremove;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(734)
			::mint::core::Signal _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(734)
			_this->listeners = null();
			HX_STACK_LINE(734)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(734)
		this->onchildremove = null();
		HX_STACK_LINE(735)
		{
			HX_STACK_LINE(735)
			::mint::core::Signal tmp4 = this->onmousedown;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(735)
			::mint::core::Signal _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(735)
			_this->listeners = null();
			HX_STACK_LINE(735)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(735)
		this->onmousedown = null();
		HX_STACK_LINE(736)
		{
			HX_STACK_LINE(736)
			::mint::core::Signal tmp4 = this->onmouseup;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(736)
			::mint::core::Signal _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(736)
			_this->listeners = null();
			HX_STACK_LINE(736)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(736)
		this->onmouseup = null();
		HX_STACK_LINE(737)
		{
			HX_STACK_LINE(737)
			::mint::core::Signal tmp4 = this->onmousemove;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(737)
			::mint::core::Signal _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(737)
			_this->listeners = null();
			HX_STACK_LINE(737)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(737)
		this->onmousemove = null();
		HX_STACK_LINE(738)
		{
			HX_STACK_LINE(738)
			::mint::core::Signal tmp4 = this->onmousewheel;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(738)
			::mint::core::Signal _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(738)
			_this->listeners = null();
			HX_STACK_LINE(738)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(738)
		this->onmousewheel = null();
		HX_STACK_LINE(739)
		{
			HX_STACK_LINE(739)
			::mint::core::Signal tmp4 = this->onmouseleave;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(739)
			::mint::core::Signal _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(739)
			_this->listeners = null();
			HX_STACK_LINE(739)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(739)
		this->onmouseleave = null();
		HX_STACK_LINE(740)
		{
			HX_STACK_LINE(740)
			::mint::core::Signal tmp4 = this->onmouseenter;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(740)
			::mint::core::Signal _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(740)
			_this->listeners = null();
			HX_STACK_LINE(740)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(740)
		this->onmouseenter = null();
		HX_STACK_LINE(741)
		{
			HX_STACK_LINE(741)
			::mint::core::Signal tmp4 = this->onkeydown;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(741)
			::mint::core::Signal _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(741)
			_this->listeners = null();
			HX_STACK_LINE(741)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(741)
		this->onkeydown = null();
		HX_STACK_LINE(742)
		{
			HX_STACK_LINE(742)
			::mint::core::Signal tmp4 = this->onkeyup;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(742)
			::mint::core::Signal _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(742)
			_this->listeners = null();
			HX_STACK_LINE(742)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(742)
		this->onkeyup = null();
		HX_STACK_LINE(743)
		{
			HX_STACK_LINE(743)
			::mint::core::Signal tmp4 = this->ontextinput;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(743)
			::mint::core::Signal _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(743)
			_this->listeners = null();
			HX_STACK_LINE(743)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(743)
		this->ontextinput = null();
		HX_STACK_LINE(744)
		{
			HX_STACK_LINE(744)
			::mint::core::Signal tmp4 = this->onfocused;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(744)
			::mint::core::Signal _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(744)
			_this->listeners = null();
			HX_STACK_LINE(744)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(744)
		this->onfocused = null();
		HX_STACK_LINE(745)
		{
			HX_STACK_LINE(745)
			::mint::core::Signal tmp4 = this->onmarked;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(745)
			::mint::core::Signal _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(745)
			_this->listeners = null();
			HX_STACK_LINE(745)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(745)
		this->onmarked = null();
		HX_STACK_LINE(746)
		{
			HX_STACK_LINE(746)
			::mint::core::Signal tmp4 = this->oncaptured;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(746)
			::mint::core::Signal _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(746)
			_this->listeners = null();
			HX_STACK_LINE(746)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(746)
		this->oncaptured = null();
		HX_STACK_LINE(748)
		this->destroyed = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,destroy,(void))

Void Control_obj::update( Float dt){
{
		HX_STACK_FRAME("mint.Control","update",0x0d380766,"mint.Control.update","mint/Control.hx",754,0xafc4152e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(754)
		bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(754)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(754)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(754)
		if ((tmp2)){
			HX_STACK_LINE(754)
			::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(754)
			::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(754)
			::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(21)
			::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(21)
			::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(754)
			::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(754)
			::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(754)
			HX_STACK_DO_THROW(tmp9);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,update,(void))

Void Control_obj::focus( ){
{
		HX_STACK_FRAME("mint.Control","focus",0x937cf91b,"mint.Control.focus","mint/Control.hx",758,0xafc4152e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(760)
		{
			HX_STACK_LINE(760)
			bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(760)
			bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(760)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(760)
			if ((tmp2)){
				HX_STACK_LINE(760)
				::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(760)
				::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(760)
				::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(21)
				::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(21)
				::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(760)
				::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(760)
				::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(760)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(762)
		::mint::Canvas tmp = this->canvas;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(762)
		bool tmp1 = (tmp == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(762)
		if ((tmp1)){
			HX_STACK_LINE(762)
			return null();
		}
		HX_STACK_LINE(764)
		::mint::Canvas tmp2 = this->canvas;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(764)
		::mint::Control tmp3 = tmp2->get_focused();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(764)
		bool tmp4 = (tmp3 == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(764)
		bool _pre = tmp4;		HX_STACK_VAR(_pre,"_pre");
		HX_STACK_LINE(766)
		::mint::Canvas tmp5 = this->canvas;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(766)
		tmp5->set_focused(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(768)
		bool tmp6 = _pre;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(768)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(768)
		if ((tmp7)){
			HX_STACK_LINE(50)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(768)
			::mint::core::Signal tmp8 = this->onfocused;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(51)
			int tmp9 = tmp8->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(51)
			int _count = tmp9;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp10 = (_idx < _count);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(52)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(52)
				if ((tmp11)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(768)
				::mint::core::Signal tmp12 = this->onfocused;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(53)
				Dynamic tmp13 = tmp12->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(53)
				Dynamic fn = tmp13;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(54)
				bool tmp14 = (fn != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(54)
				if ((tmp14)){
					HX_STACK_LINE(55)
					fn(true).Cast< Void >();
				}
				HX_STACK_LINE(57)
				(_idx)++;
			}
			HX_STACK_LINE(60)
			while((true)){
				HX_STACK_LINE(60)
				bool tmp10 = (_count > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(60)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(60)
				if ((tmp11)){
					HX_STACK_LINE(60)
					break;
				}
				HX_STACK_LINE(768)
				::mint::core::Signal tmp12 = this->onfocused;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(61)
				int tmp13 = (_count - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(61)
				Dynamic tmp14 = tmp12->listeners->__GetItem(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(61)
				Dynamic fn = tmp14;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(62)
				bool tmp15 = (fn == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(62)
				if ((tmp15)){
					HX_STACK_LINE(768)
					::mint::core::Signal tmp16 = this->onfocused;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(62)
					int tmp17 = (_count - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(62)
					tmp16->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp17,(int)1);
				}
				HX_STACK_LINE(63)
				(_count)--;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,focus,(void))

Void Control_obj::unfocus( ){
{
		HX_STACK_FRAME("mint.Control","unfocus",0xe71906e2,"mint.Control.unfocus","mint/Control.hx",772,0xafc4152e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(774)
		{
			HX_STACK_LINE(774)
			bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(774)
			bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(774)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(774)
			if ((tmp2)){
				HX_STACK_LINE(774)
				::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(774)
				::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(774)
				::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(21)
				::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(21)
				::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(774)
				::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(774)
				::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(774)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(776)
		::mint::Canvas tmp = this->canvas;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(776)
		bool tmp1 = (tmp == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(776)
		if ((tmp1)){
			HX_STACK_LINE(776)
			return null();
		}
		HX_STACK_LINE(777)
		::mint::Canvas tmp2 = this->canvas;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(777)
		::mint::Control tmp3 = tmp2->get_focused();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(777)
		bool tmp4 = (tmp3 == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(777)
		if ((tmp4)){
			HX_STACK_LINE(778)
			::mint::Canvas tmp5 = this->canvas;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(778)
			tmp5->set_focused(null());
			HX_STACK_LINE(49)
			{
				HX_STACK_LINE(50)
				int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
				HX_STACK_LINE(779)
				::mint::core::Signal tmp6 = this->onfocused;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(51)
				int tmp7 = tmp6->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(51)
				int _count = tmp7;		HX_STACK_VAR(_count,"_count");
				HX_STACK_LINE(52)
				while((true)){
					HX_STACK_LINE(52)
					bool tmp8 = (_idx < _count);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(52)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(52)
					if ((tmp9)){
						HX_STACK_LINE(52)
						break;
					}
					HX_STACK_LINE(779)
					::mint::core::Signal tmp10 = this->onfocused;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(53)
					Dynamic tmp11 = tmp10->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(53)
					Dynamic fn = tmp11;		HX_STACK_VAR(fn,"fn");
					HX_STACK_LINE(54)
					bool tmp12 = (fn != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(54)
					if ((tmp12)){
						HX_STACK_LINE(55)
						fn(false).Cast< Void >();
					}
					HX_STACK_LINE(57)
					(_idx)++;
				}
				HX_STACK_LINE(60)
				while((true)){
					HX_STACK_LINE(60)
					bool tmp8 = (_count > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(60)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(60)
					if ((tmp9)){
						HX_STACK_LINE(60)
						break;
					}
					HX_STACK_LINE(779)
					::mint::core::Signal tmp10 = this->onfocused;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(61)
					int tmp11 = (_count - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(61)
					Dynamic tmp12 = tmp10->listeners->__GetItem(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(61)
					Dynamic fn = tmp12;		HX_STACK_VAR(fn,"fn");
					HX_STACK_LINE(62)
					bool tmp13 = (fn == null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(62)
					if ((tmp13)){
						HX_STACK_LINE(779)
						::mint::core::Signal tmp14 = this->onfocused;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(62)
						int tmp15 = (_count - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(62)
						tmp14->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp15,(int)1);
					}
					HX_STACK_LINE(63)
					(_count)--;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,unfocus,(void))

Void Control_obj::capture( ){
{
		HX_STACK_FRAME("mint.Control","capture",0x8d508089,"mint.Control.capture","mint/Control.hx",784,0xafc4152e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(786)
		{
			HX_STACK_LINE(786)
			bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(786)
			bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(786)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(786)
			if ((tmp2)){
				HX_STACK_LINE(786)
				::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(786)
				::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(786)
				::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(21)
				::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(21)
				::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(786)
				::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(786)
				::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(786)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(788)
		::mint::Canvas tmp = this->canvas;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(788)
		bool tmp1 = (tmp == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(788)
		if ((tmp1)){
			HX_STACK_LINE(788)
			return null();
		}
		HX_STACK_LINE(790)
		::mint::Canvas tmp2 = this->canvas;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(790)
		::mint::Control tmp3 = tmp2->get_captured();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(790)
		bool tmp4 = (tmp3 == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(790)
		bool _pre = tmp4;		HX_STACK_VAR(_pre,"_pre");
		HX_STACK_LINE(792)
		::mint::Canvas tmp5 = this->canvas;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(792)
		tmp5->set_captured(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(794)
		bool tmp6 = _pre;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(794)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(794)
		if ((tmp7)){
			HX_STACK_LINE(50)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(794)
			::mint::core::Signal tmp8 = this->oncaptured;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(51)
			int tmp9 = tmp8->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(51)
			int _count = tmp9;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp10 = (_idx < _count);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(52)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(52)
				if ((tmp11)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(794)
				::mint::core::Signal tmp12 = this->oncaptured;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(53)
				Dynamic tmp13 = tmp12->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(53)
				Dynamic fn = tmp13;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(54)
				bool tmp14 = (fn != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(54)
				if ((tmp14)){
					HX_STACK_LINE(55)
					fn(true).Cast< Void >();
				}
				HX_STACK_LINE(57)
				(_idx)++;
			}
			HX_STACK_LINE(60)
			while((true)){
				HX_STACK_LINE(60)
				bool tmp10 = (_count > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(60)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(60)
				if ((tmp11)){
					HX_STACK_LINE(60)
					break;
				}
				HX_STACK_LINE(794)
				::mint::core::Signal tmp12 = this->oncaptured;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(61)
				int tmp13 = (_count - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(61)
				Dynamic tmp14 = tmp12->listeners->__GetItem(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(61)
				Dynamic fn = tmp14;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(62)
				bool tmp15 = (fn == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(62)
				if ((tmp15)){
					HX_STACK_LINE(794)
					::mint::core::Signal tmp16 = this->oncaptured;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(62)
					int tmp17 = (_count - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(62)
					tmp16->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp17,(int)1);
				}
				HX_STACK_LINE(63)
				(_count)--;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,capture,(void))

Void Control_obj::uncapture( ){
{
		HX_STACK_FRAME("mint.Control","uncapture",0x0a60ce10,"mint.Control.uncapture","mint/Control.hx",798,0xafc4152e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(800)
		{
			HX_STACK_LINE(800)
			bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(800)
			bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(800)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(800)
			if ((tmp2)){
				HX_STACK_LINE(800)
				::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(800)
				::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(800)
				::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(21)
				::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(21)
				::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(800)
				::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(800)
				::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(800)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(802)
		::mint::Canvas tmp = this->canvas;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(802)
		bool tmp1 = (tmp == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(802)
		if ((tmp1)){
			HX_STACK_LINE(802)
			return null();
		}
		HX_STACK_LINE(803)
		::mint::Canvas tmp2 = this->canvas;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(803)
		::mint::Control tmp3 = tmp2->get_captured();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(803)
		bool tmp4 = (tmp3 == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(803)
		if ((tmp4)){
			HX_STACK_LINE(804)
			::mint::Canvas tmp5 = this->canvas;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(804)
			tmp5->set_captured(null());
			HX_STACK_LINE(49)
			{
				HX_STACK_LINE(50)
				int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
				HX_STACK_LINE(805)
				::mint::core::Signal tmp6 = this->oncaptured;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(51)
				int tmp7 = tmp6->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(51)
				int _count = tmp7;		HX_STACK_VAR(_count,"_count");
				HX_STACK_LINE(52)
				while((true)){
					HX_STACK_LINE(52)
					bool tmp8 = (_idx < _count);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(52)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(52)
					if ((tmp9)){
						HX_STACK_LINE(52)
						break;
					}
					HX_STACK_LINE(805)
					::mint::core::Signal tmp10 = this->oncaptured;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(53)
					Dynamic tmp11 = tmp10->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(53)
					Dynamic fn = tmp11;		HX_STACK_VAR(fn,"fn");
					HX_STACK_LINE(54)
					bool tmp12 = (fn != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(54)
					if ((tmp12)){
						HX_STACK_LINE(55)
						fn(false).Cast< Void >();
					}
					HX_STACK_LINE(57)
					(_idx)++;
				}
				HX_STACK_LINE(60)
				while((true)){
					HX_STACK_LINE(60)
					bool tmp8 = (_count > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(60)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(60)
					if ((tmp9)){
						HX_STACK_LINE(60)
						break;
					}
					HX_STACK_LINE(805)
					::mint::core::Signal tmp10 = this->oncaptured;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(61)
					int tmp11 = (_count - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(61)
					Dynamic tmp12 = tmp10->listeners->__GetItem(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(61)
					Dynamic fn = tmp12;		HX_STACK_VAR(fn,"fn");
					HX_STACK_LINE(62)
					bool tmp13 = (fn == null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(62)
					if ((tmp13)){
						HX_STACK_LINE(805)
						::mint::core::Signal tmp14 = this->oncaptured;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(62)
						int tmp15 = (_count - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(62)
						tmp14->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp15,(int)1);
					}
					HX_STACK_LINE(63)
					(_count)--;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,uncapture,(void))

Void Control_obj::mark( ){
{
		HX_STACK_FRAME("mint.Control","mark",0xf652c02a,"mint.Control.mark","mint/Control.hx",810,0xafc4152e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(812)
		{
			HX_STACK_LINE(812)
			bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(812)
			bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(812)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(812)
			if ((tmp2)){
				HX_STACK_LINE(812)
				::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(812)
				::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(812)
				::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(21)
				::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(21)
				::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(812)
				::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(812)
				::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(812)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(814)
		::mint::Canvas tmp = this->canvas;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(814)
		bool tmp1 = (tmp == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(814)
		if ((tmp1)){
			HX_STACK_LINE(814)
			return null();
		}
		HX_STACK_LINE(816)
		::mint::Canvas tmp2 = this->canvas;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(816)
		::mint::Control tmp3 = tmp2->get_marked();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(816)
		bool tmp4 = (tmp3 == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(816)
		bool _pre = tmp4;		HX_STACK_VAR(_pre,"_pre");
		HX_STACK_LINE(818)
		::mint::Canvas tmp5 = this->canvas;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(818)
		tmp5->set_marked(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(820)
		bool tmp6 = _pre;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(820)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(820)
		if ((tmp7)){
			HX_STACK_LINE(50)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(820)
			::mint::core::Signal tmp8 = this->onmarked;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(51)
			int tmp9 = tmp8->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(51)
			int _count = tmp9;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp10 = (_idx < _count);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(52)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(52)
				if ((tmp11)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(820)
				::mint::core::Signal tmp12 = this->onmarked;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(53)
				Dynamic tmp13 = tmp12->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(53)
				Dynamic fn = tmp13;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(54)
				bool tmp14 = (fn != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(54)
				if ((tmp14)){
					HX_STACK_LINE(55)
					fn(true).Cast< Void >();
				}
				HX_STACK_LINE(57)
				(_idx)++;
			}
			HX_STACK_LINE(60)
			while((true)){
				HX_STACK_LINE(60)
				bool tmp10 = (_count > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(60)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(60)
				if ((tmp11)){
					HX_STACK_LINE(60)
					break;
				}
				HX_STACK_LINE(820)
				::mint::core::Signal tmp12 = this->onmarked;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(61)
				int tmp13 = (_count - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(61)
				Dynamic tmp14 = tmp12->listeners->__GetItem(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(61)
				Dynamic fn = tmp14;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(62)
				bool tmp15 = (fn == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(62)
				if ((tmp15)){
					HX_STACK_LINE(820)
					::mint::core::Signal tmp16 = this->onmarked;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(62)
					int tmp17 = (_count - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(62)
					tmp16->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp17,(int)1);
				}
				HX_STACK_LINE(63)
				(_count)--;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,mark,(void))

Void Control_obj::unmark( ){
{
		HX_STACK_FRAME("mint.Control","unmark",0xec5dc843,"mint.Control.unmark","mint/Control.hx",824,0xafc4152e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(826)
		{
			HX_STACK_LINE(826)
			bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(826)
			bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(826)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(826)
			if ((tmp2)){
				HX_STACK_LINE(826)
				::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(826)
				::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(826)
				::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(21)
				::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(21)
				::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(826)
				::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(826)
				::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(826)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(828)
		::mint::Canvas tmp = this->canvas;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(828)
		bool tmp1 = (tmp == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(828)
		if ((tmp1)){
			HX_STACK_LINE(828)
			return null();
		}
		HX_STACK_LINE(829)
		::mint::Canvas tmp2 = this->canvas;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(829)
		::mint::Control tmp3 = tmp2->get_marked();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(829)
		bool tmp4 = (tmp3 == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(829)
		if ((tmp4)){
			HX_STACK_LINE(830)
			::mint::Canvas tmp5 = this->canvas;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(830)
			tmp5->set_marked(null());
			HX_STACK_LINE(49)
			{
				HX_STACK_LINE(50)
				int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
				HX_STACK_LINE(831)
				::mint::core::Signal tmp6 = this->onmarked;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(51)
				int tmp7 = tmp6->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(51)
				int _count = tmp7;		HX_STACK_VAR(_count,"_count");
				HX_STACK_LINE(52)
				while((true)){
					HX_STACK_LINE(52)
					bool tmp8 = (_idx < _count);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(52)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(52)
					if ((tmp9)){
						HX_STACK_LINE(52)
						break;
					}
					HX_STACK_LINE(831)
					::mint::core::Signal tmp10 = this->onmarked;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(53)
					Dynamic tmp11 = tmp10->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(53)
					Dynamic fn = tmp11;		HX_STACK_VAR(fn,"fn");
					HX_STACK_LINE(54)
					bool tmp12 = (fn != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(54)
					if ((tmp12)){
						HX_STACK_LINE(55)
						fn(false).Cast< Void >();
					}
					HX_STACK_LINE(57)
					(_idx)++;
				}
				HX_STACK_LINE(60)
				while((true)){
					HX_STACK_LINE(60)
					bool tmp8 = (_count > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(60)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(60)
					if ((tmp9)){
						HX_STACK_LINE(60)
						break;
					}
					HX_STACK_LINE(831)
					::mint::core::Signal tmp10 = this->onmarked;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(61)
					int tmp11 = (_count - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(61)
					Dynamic tmp12 = tmp10->listeners->__GetItem(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(61)
					Dynamic fn = tmp12;		HX_STACK_VAR(fn,"fn");
					HX_STACK_LINE(62)
					bool tmp13 = (fn == null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(62)
					if ((tmp13)){
						HX_STACK_LINE(831)
						::mint::core::Signal tmp14 = this->onmarked;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(62)
						int tmp15 = (_count - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(62)
						tmp14->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp15,(int)1);
					}
					HX_STACK_LINE(63)
					(_count)--;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,unmark,(void))

Void Control_obj::refresh_bounds( ){
{
		HX_STACK_FRAME("mint.Control","refresh_bounds",0xcc2725f6,"mint.Control.refresh_bounds","mint/Control.hx",836,0xafc4152e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(50)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(838)
			::mint::core::Signal tmp = this->onbounds;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(51)
			int tmp1 = tmp->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(51)
			int _count = tmp1;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp2 = (_idx < _count);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(52)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(52)
				if ((tmp3)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(838)
				::mint::core::Signal tmp4 = this->onbounds;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(53)
				Dynamic tmp5 = tmp4->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(53)
				Dynamic fn = tmp5;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(54)
				bool tmp6 = (fn != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(54)
				if ((tmp6)){
					HX_STACK_LINE(55)
					fn().Cast< Void >();
				}
				HX_STACK_LINE(57)
				(_idx)++;
			}
			HX_STACK_LINE(60)
			while((true)){
				HX_STACK_LINE(60)
				bool tmp2 = (_count > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(60)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(60)
				if ((tmp3)){
					HX_STACK_LINE(60)
					break;
				}
				HX_STACK_LINE(838)
				::mint::core::Signal tmp4 = this->onbounds;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(61)
				int tmp5 = (_count - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(61)
				Dynamic tmp6 = tmp4->listeners->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(61)
				Dynamic fn = tmp6;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(62)
				bool tmp7 = (fn == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(62)
				if ((tmp7)){
					HX_STACK_LINE(838)
					::mint::core::Signal tmp8 = this->onbounds;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(62)
					int tmp9 = (_count - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(62)
					tmp8->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp9,(int)1);
				}
				HX_STACK_LINE(63)
				(_count)--;
			}
		}
		HX_STACK_LINE(840)
		{
			HX_STACK_LINE(840)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(840)
			Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(840)
			while((true)){
				HX_STACK_LINE(840)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(840)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(840)
				if ((tmp1)){
					HX_STACK_LINE(840)
					break;
				}
				HX_STACK_LINE(840)
				::mint::Control tmp2 = _g1->__get(_g).StaticCast< ::mint::Control >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(840)
				::mint::Control _child = tmp2;		HX_STACK_VAR(_child,"_child");
				HX_STACK_LINE(840)
				++(_g);
				HX_STACK_LINE(841)
				_child->refresh_bounds();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,refresh_bounds,(void))

Void Control_obj::bounds_changed( hx::Null< Float >  __o__dx,hx::Null< Float >  __o__dy,hx::Null< Float >  __o__dw,hx::Null< Float >  __o__dh){
Float _dx = __o__dx.Default(((Float)0.0));
Float _dy = __o__dy.Default(((Float)0.0));
Float _dw = __o__dw.Default(((Float)0.0));
Float _dh = __o__dh.Default(((Float)0.0));
	HX_STACK_FRAME("mint.Control","bounds_changed",0x66bc3447,"mint.Control.bounds_changed","mint/Control.hx",847,0xafc4152e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_dx,"_dx")
	HX_STACK_ARG(_dy,"_dy")
	HX_STACK_ARG(_dw,"_dw")
	HX_STACK_ARG(_dh,"_dh")
{
		HX_STACK_LINE(849)
		{
			HX_STACK_LINE(849)
			bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(849)
			bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(849)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(849)
			if ((tmp2)){
				HX_STACK_LINE(849)
				::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(849)
				::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(849)
				::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(21)
				::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(21)
				::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(849)
				::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(849)
				::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(849)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(851)
		bool tmp = this->updating;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(851)
		if ((tmp)){
			HX_STACK_LINE(851)
			return null();
		}
		HX_STACK_LINE(853)
		bool tmp1 = (_dx != ((Float)0.0));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(853)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(853)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(853)
		if ((tmp2)){
			HX_STACK_LINE(853)
			tmp3 = (_dy != ((Float)0.0));
		}
		else{
			HX_STACK_LINE(853)
			tmp3 = true;
		}
		HX_STACK_LINE(853)
		if ((tmp3)){
			HX_STACK_LINE(854)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(854)
			Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(854)
			while((true)){
				HX_STACK_LINE(854)
				bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(854)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(854)
				if ((tmp5)){
					HX_STACK_LINE(854)
					break;
				}
				HX_STACK_LINE(854)
				::mint::Control tmp6 = _g1->__get(_g).StaticCast< ::mint::Control >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(854)
				::mint::Control child = tmp6;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(854)
				++(_g);
				HX_STACK_LINE(855)
				Float tmp7 = (child->x + _dx);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(855)
				Float tmp8 = (child->y + _dy);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(855)
				child->set_pos(tmp7,tmp8);
			}
		}
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(50)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(859)
			::mint::core::Signal tmp4 = this->onbounds;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(51)
			int tmp5 = tmp4->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(51)
			int _count = tmp5;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp6 = (_idx < _count);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(52)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(52)
				if ((tmp7)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(859)
				::mint::core::Signal tmp8 = this->onbounds;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(53)
				Dynamic tmp9 = tmp8->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(53)
				Dynamic fn = tmp9;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(54)
				bool tmp10 = (fn != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(54)
				if ((tmp10)){
					HX_STACK_LINE(55)
					fn().Cast< Void >();
				}
				HX_STACK_LINE(57)
				(_idx)++;
			}
			HX_STACK_LINE(60)
			while((true)){
				HX_STACK_LINE(60)
				bool tmp6 = (_count > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(60)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(60)
				if ((tmp7)){
					HX_STACK_LINE(60)
					break;
				}
				HX_STACK_LINE(859)
				::mint::core::Signal tmp8 = this->onbounds;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(61)
				int tmp9 = (_count - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(61)
				Dynamic tmp10 = tmp8->listeners->__GetItem(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(61)
				Dynamic fn = tmp10;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(62)
				bool tmp11 = (fn == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(62)
				if ((tmp11)){
					HX_STACK_LINE(859)
					::mint::core::Signal tmp12 = this->onbounds;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(62)
					int tmp13 = (_count - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(62)
					tmp12->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp13,(int)1);
				}
				HX_STACK_LINE(63)
				(_count)--;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Control_obj,bounds_changed,(void))

Void Control_obj::set_pos( Float _x,Float _y){
{
		HX_STACK_FRAME("mint.Control","set_pos",0xffca673a,"mint.Control.set_pos","mint/Control.hx",867,0xafc4152e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_LINE(869)
		{
			HX_STACK_LINE(869)
			bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(869)
			bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(869)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(869)
			if ((tmp2)){
				HX_STACK_LINE(869)
				::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(869)
				::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(869)
				::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(21)
				::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(21)
				::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(869)
				::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(869)
				::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(869)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(871)
		this->updating = true;
		HX_STACK_LINE(873)
		Float tmp = _x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(873)
		Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(873)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(873)
		Float _dx = tmp2;		HX_STACK_VAR(_dx,"_dx");
		HX_STACK_LINE(874)
		Float tmp3 = _y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(874)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(874)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(874)
		Float _dy = tmp5;		HX_STACK_VAR(_dy,"_dy");
		HX_STACK_LINE(876)
		Float tmp6 = _x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(876)
		this->set_x(tmp6);
		HX_STACK_LINE(877)
		Float tmp7 = _y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(877)
		this->set_y(tmp7);
		HX_STACK_LINE(879)
		this->updating = false;
		HX_STACK_LINE(881)
		Float tmp8 = _dx;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(881)
		Float tmp9 = _dy;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(881)
		this->bounds_changed(tmp8,tmp9,(int)0,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Control_obj,set_pos,(void))

Void Control_obj::set_size( Float _w,Float _h){
{
		HX_STACK_FRAME("mint.Control","set_size",0xd347085b,"mint.Control.set_size","mint/Control.hx",885,0xafc4152e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_w,"_w")
		HX_STACK_ARG(_h,"_h")
		HX_STACK_LINE(887)
		{
			HX_STACK_LINE(887)
			bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(887)
			bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(887)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(887)
			if ((tmp2)){
				HX_STACK_LINE(887)
				::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(887)
				::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(887)
				::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(21)
				::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(21)
				::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(887)
				::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(887)
				::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(887)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(889)
		this->updating = true;
		HX_STACK_LINE(891)
		Float tmp = _w;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(891)
		Float tmp1 = this->w;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(891)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(891)
		Float _dw = tmp2;		HX_STACK_VAR(_dw,"_dw");
		HX_STACK_LINE(892)
		Float tmp3 = _h;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(892)
		Float tmp4 = this->h;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(892)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(892)
		Float _dh = tmp5;		HX_STACK_VAR(_dh,"_dh");
		HX_STACK_LINE(894)
		Float tmp6 = _w;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(894)
		this->set_w(tmp6);
		HX_STACK_LINE(895)
		Float tmp7 = _h;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(895)
		this->set_h(tmp7);
		HX_STACK_LINE(897)
		this->updating = false;
		HX_STACK_LINE(899)
		Float tmp8 = _dw;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(899)
		Float tmp9 = _dh;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(899)
		this->bounds_changed((int)0,(int)0,tmp8,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Control_obj,set_size,(void))

Float Control_obj::get_right( ){
	HX_STACK_FRAME("mint.Control","get_right",0x941a5ef6,"mint.Control.get_right","mint/Control.hx",903,0xafc4152e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(905)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(905)
	Float tmp1 = this->w;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(905)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(905)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,get_right,return )

Float Control_obj::get_bottom( ){
	HX_STACK_FRAME("mint.Control","get_bottom",0x1a4b4a91,"mint.Control.get_bottom","mint/Control.hx",909,0xafc4152e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(911)
	Float tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(911)
	Float tmp1 = this->h;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(911)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(911)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,get_bottom,return )

::String Control_obj::set_name( ::String _name){
	HX_STACK_FRAME("mint.Control","set_name",0xcff2d9e5,"mint.Control.set_name","mint/Control.hx",915,0xafc4152e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(917)
	{
		HX_STACK_LINE(917)
		bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(917)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(917)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(917)
		if ((tmp2)){
			HX_STACK_LINE(917)
			::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(917)
			::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(917)
			::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(21)
			::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(21)
			::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(917)
			::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(917)
			::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(917)
			HX_STACK_DO_THROW(tmp9);
		}
	}
	HX_STACK_LINE(919)
	::String tmp = this->name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(919)
	::String _prev = tmp;		HX_STACK_VAR(_prev,"_prev");
	HX_STACK_LINE(920)
	this->name = _name;
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(922)
		::mint::core::Signal tmp1 = this->onrenamed;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		int tmp2 = tmp1->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		int _count = tmp2;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			bool tmp3 = (_idx < _count);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(52)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(52)
			if ((tmp4)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(922)
			::mint::core::Signal tmp5 = this->onrenamed;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(53)
			Dynamic tmp6 = tmp5->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(53)
			Dynamic fn = tmp6;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp7 = (fn != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(54)
			if ((tmp7)){
				HX_STACK_LINE(922)
				::String tmp8 = _prev;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(922)
				::String tmp9 = _name;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(55)
				fn(tmp8,tmp9).Cast< Void >();
			}
			HX_STACK_LINE(57)
			(_idx)++;
		}
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp3 = (_count > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(60)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(60)
			if ((tmp4)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(922)
			::mint::core::Signal tmp5 = this->onrenamed;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(61)
			int tmp6 = (_count - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(61)
			Dynamic tmp7 = tmp5->listeners->__GetItem(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(61)
			Dynamic fn = tmp7;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(62)
			bool tmp8 = (fn == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(62)
			if ((tmp8)){
				HX_STACK_LINE(922)
				::mint::core::Signal tmp9 = this->onrenamed;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(62)
				int tmp10 = (_count - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(62)
				tmp9->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp10,(int)1);
			}
			HX_STACK_LINE(63)
			(_count)--;
		}
	}
	HX_STACK_LINE(924)
	::String tmp1 = this->name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(924)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,set_name,return )

Float Control_obj::set_x( Float _x){
	HX_STACK_FRAME("mint.Control","set_x",0x0923349e,"mint.Control.set_x","mint/Control.hx",928,0xafc4152e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_LINE(930)
	Float tmp = _x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(930)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(930)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(930)
	Float _dx = tmp2;		HX_STACK_VAR(_dx,"_dx");
	HX_STACK_LINE(932)
	this->x = _x;
	HX_STACK_LINE(934)
	bool tmp3 = this->ignore_spatial;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(934)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(934)
	if ((tmp4)){
		HX_STACK_LINE(935)
		this->ignore_spatial = true;
		HX_STACK_LINE(936)
		::mint::Control tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(936)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(936)
		if ((tmp6)){
			HX_STACK_LINE(937)
			Float tmp7 = this->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(937)
			::mint::Control tmp8 = this->parent;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(937)
			Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(937)
			Float tmp10 = (tmp7 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(937)
			this->set_x_local(tmp10);
		}
		else{
			HX_STACK_LINE(939)
			Float tmp7 = this->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(939)
			this->set_x_local(tmp7);
		}
		HX_STACK_LINE(941)
		this->ignore_spatial = false;
	}
	HX_STACK_LINE(944)
	Float tmp5 = _dx;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(944)
	this->bounds_changed(tmp5,null(),null(),null());
	HX_STACK_LINE(946)
	Float tmp6 = this->x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(946)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,set_x,return )

Float Control_obj::set_y( Float _y){
	HX_STACK_FRAME("mint.Control","set_y",0x0923349f,"mint.Control.set_y","mint/Control.hx",950,0xafc4152e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_y,"_y")
	HX_STACK_LINE(952)
	Float tmp = _y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(952)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(952)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(952)
	Float _dy = tmp2;		HX_STACK_VAR(_dy,"_dy");
	HX_STACK_LINE(954)
	this->y = _y;
	HX_STACK_LINE(956)
	bool tmp3 = this->ignore_spatial;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(956)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(956)
	if ((tmp4)){
		HX_STACK_LINE(957)
		this->ignore_spatial = true;
		HX_STACK_LINE(958)
		::mint::Control tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(958)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(958)
		if ((tmp6)){
			HX_STACK_LINE(959)
			Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(959)
			::mint::Control tmp8 = this->parent;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(959)
			Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(959)
			Float tmp10 = (tmp7 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(959)
			this->set_y_local(tmp10);
		}
		else{
			HX_STACK_LINE(961)
			Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(961)
			this->set_y_local(tmp7);
		}
		HX_STACK_LINE(963)
		this->ignore_spatial = false;
	}
	HX_STACK_LINE(966)
	Float tmp5 = _dy;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(966)
	this->bounds_changed((int)0,tmp5,null(),null());
	HX_STACK_LINE(968)
	Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(968)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,set_y,return )

Float Control_obj::set_w_min( Float _w_min){
	HX_STACK_FRAME("mint.Control","set_w_min",0x51d49db0,"mint.Control.set_w_min","mint/Control.hx",972,0xafc4152e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_w_min,"_w_min")
	HX_STACK_LINE(974)
	this->w_min = _w_min;
	HX_STACK_LINE(976)
	Float tmp = this->w;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(976)
	Float tmp1 = this->w_min;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(976)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(976)
	if ((tmp2)){
		HX_STACK_LINE(976)
		Float tmp3 = this->w_min;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(976)
		this->set_w(tmp3);
	}
	HX_STACK_LINE(978)
	Float tmp3 = this->w_min;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(978)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,set_w_min,return )

Float Control_obj::set_h_min( Float _h_min){
	HX_STACK_FRAME("mint.Control","set_h_min",0xaed1ea21,"mint.Control.set_h_min","mint/Control.hx",982,0xafc4152e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_h_min,"_h_min")
	HX_STACK_LINE(984)
	this->h_min = _h_min;
	HX_STACK_LINE(986)
	Float tmp = this->h;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(986)
	Float tmp1 = this->h_min;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(986)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(986)
	if ((tmp2)){
		HX_STACK_LINE(986)
		Float tmp3 = this->h_min;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(986)
		this->set_h(tmp3);
	}
	HX_STACK_LINE(988)
	Float tmp3 = this->h_min;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(988)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,set_h_min,return )

Float Control_obj::set_w_max( Float _w_max){
	HX_STACK_FRAME("mint.Control","set_w_max",0x51d496c2,"mint.Control.set_w_max","mint/Control.hx",992,0xafc4152e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_w_max,"_w_max")
	HX_STACK_LINE(994)
	this->w_max = _w_max;
	HX_STACK_LINE(996)
	Float tmp = this->w;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(996)
	Float tmp1 = this->w_max;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(996)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(996)
	if ((tmp2)){
		HX_STACK_LINE(996)
		Float tmp3 = this->w_max;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(996)
		this->set_w(tmp3);
	}
	HX_STACK_LINE(998)
	Float tmp3 = this->w_max;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(998)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,set_w_max,return )

Float Control_obj::set_h_max( Float _h_max){
	HX_STACK_FRAME("mint.Control","set_h_max",0xaed1e333,"mint.Control.set_h_max","mint/Control.hx",1002,0xafc4152e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_h_max,"_h_max")
	HX_STACK_LINE(1004)
	this->h_max = _h_max;
	HX_STACK_LINE(1006)
	Float tmp = this->h;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1006)
	Float tmp1 = this->h_max;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1006)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1006)
	if ((tmp2)){
		HX_STACK_LINE(1006)
		Float tmp3 = this->h_max;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1006)
		this->set_h(tmp3);
	}
	HX_STACK_LINE(1008)
	Float tmp3 = this->h_max;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1008)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,set_h_max,return )

Float Control_obj::set_w( Float _w){
	HX_STACK_FRAME("mint.Control","set_w",0x0923349d,"mint.Control.set_w","mint/Control.hx",1012,0xafc4152e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_w,"_w")
	HX_STACK_LINE(1014)
	Float tmp = _w;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1014)
	Float tmp1 = this->w_min;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1014)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1014)
	if ((tmp2)){
		HX_STACK_LINE(1014)
		Float tmp3 = this->w_min;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1014)
		_w = tmp3;
	}
	HX_STACK_LINE(1015)
	Float tmp3 = _w;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1015)
	Float tmp4 = this->w_max;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1015)
	bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1015)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1015)
	if ((tmp5)){
		HX_STACK_LINE(1015)
		Float tmp7 = this->w_max;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1015)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1015)
		tmp6 = (tmp8 != (int)0);
	}
	else{
		HX_STACK_LINE(1015)
		tmp6 = false;
	}
	HX_STACK_LINE(1015)
	if ((tmp6)){
		HX_STACK_LINE(1015)
		Float tmp7 = this->w_max;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1015)
		_w = tmp7;
	}
	HX_STACK_LINE(1017)
	Float tmp7 = _w;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1017)
	Float tmp8 = this->w;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1017)
	Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1017)
	Float _dw = tmp9;		HX_STACK_VAR(_dw,"_dw");
	HX_STACK_LINE(1019)
	this->w = _w;
	HX_STACK_LINE(1021)
	Float tmp10 = _dw;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1021)
	this->bounds_changed((int)0,(int)0,tmp10,null());
	HX_STACK_LINE(1023)
	Float tmp11 = this->w;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1023)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,set_w,return )

Float Control_obj::set_h( Float _h){
	HX_STACK_FRAME("mint.Control","set_h",0x0923348e,"mint.Control.set_h","mint/Control.hx",1027,0xafc4152e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_h,"_h")
	HX_STACK_LINE(1029)
	Float tmp = _h;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1029)
	Float tmp1 = this->h_min;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1029)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1029)
	if ((tmp2)){
		HX_STACK_LINE(1029)
		Float tmp3 = this->h_min;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1029)
		_h = tmp3;
	}
	HX_STACK_LINE(1030)
	Float tmp3 = _h;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1030)
	Float tmp4 = this->h_max;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1030)
	bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1030)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1030)
	if ((tmp5)){
		HX_STACK_LINE(1030)
		Float tmp7 = this->h_max;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1030)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1030)
		tmp6 = (tmp8 != (int)0);
	}
	else{
		HX_STACK_LINE(1030)
		tmp6 = false;
	}
	HX_STACK_LINE(1030)
	if ((tmp6)){
		HX_STACK_LINE(1030)
		Float tmp7 = this->h_max;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1030)
		_h = tmp7;
	}
	HX_STACK_LINE(1032)
	Float tmp7 = _h;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1032)
	Float tmp8 = this->h;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1032)
	Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1032)
	Float _dh = tmp9;		HX_STACK_VAR(_dh,"_dh");
	HX_STACK_LINE(1034)
	this->h = _h;
	HX_STACK_LINE(1036)
	Float tmp10 = _dh;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1036)
	this->bounds_changed((int)0,(int)0,(int)0,tmp10);
	HX_STACK_LINE(1038)
	Float tmp11 = this->h;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1038)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,set_h,return )

Float Control_obj::set_x_local( Float _x){
	HX_STACK_FRAME("mint.Control","set_x_local",0x80998fca,"mint.Control.set_x_local","mint/Control.hx",1043,0xafc4152e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_LINE(1045)
	this->x_local = _x;
	HX_STACK_LINE(1047)
	bool tmp = this->ignore_spatial;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1047)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1047)
	if ((tmp1)){
		HX_STACK_LINE(1048)
		this->ignore_spatial = true;
		HX_STACK_LINE(1049)
		::mint::Control tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1049)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1049)
		if ((tmp3)){
			HX_STACK_LINE(1050)
			::mint::Control tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1050)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1050)
			Float tmp6 = this->get_x_local();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1050)
			Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1050)
			this->set_x(tmp7);
		}
		else{
			HX_STACK_LINE(1052)
			Float tmp4 = this->get_x_local();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1052)
			this->set_x(tmp4);
		}
		HX_STACK_LINE(1054)
		this->ignore_spatial = false;
	}
	HX_STACK_LINE(1057)
	Float tmp2 = this->get_x_local();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1057)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,set_x_local,return )

Float Control_obj::set_y_local( Float _y){
	HX_STACK_FRAME("mint.Control","set_y_local",0xaa2f068b,"mint.Control.set_y_local","mint/Control.hx",1061,0xafc4152e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_y,"_y")
	HX_STACK_LINE(1063)
	this->y_local = _y;
	HX_STACK_LINE(1065)
	bool tmp = this->ignore_spatial;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1065)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1065)
	if ((tmp1)){
		HX_STACK_LINE(1066)
		this->ignore_spatial = true;
		HX_STACK_LINE(1067)
		::mint::Control tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1067)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1067)
		if ((tmp3)){
			HX_STACK_LINE(1068)
			::mint::Control tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1068)
			Float tmp5 = tmp4->y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1068)
			Float tmp6 = this->get_y_local();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1068)
			Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1068)
			this->set_y(tmp7);
		}
		else{
			HX_STACK_LINE(1070)
			Float tmp4 = this->get_y_local();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1070)
			this->set_y(tmp4);
		}
		HX_STACK_LINE(1072)
		this->ignore_spatial = false;
	}
	HX_STACK_LINE(1075)
	Float tmp2 = this->get_y_local();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1075)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,set_y_local,return )

Float Control_obj::get_x_local( ){
	HX_STACK_FRAME("mint.Control","get_x_local",0x762c88be,"mint.Control.get_x_local","mint/Control.hx",1079,0xafc4152e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1081)
	Float tmp = this->x_local;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1081)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,get_x_local,return )

Float Control_obj::get_y_local( ){
	HX_STACK_FRAME("mint.Control","get_y_local",0x9fc1ff7f,"mint.Control.get_y_local","mint/Control.hx",1085,0xafc4152e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1087)
	Float tmp = this->y_local;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1087)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,get_y_local,return )

int Control_obj::get_nodes( ){
	HX_STACK_FRAME("mint.Control","get_nodes",0x4a750b4b,"mint.Control.get_nodes","mint/Control.hx",1093,0xafc4152e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1095)
	{
		HX_STACK_LINE(1095)
		bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1095)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1095)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1095)
		if ((tmp2)){
			HX_STACK_LINE(1095)
			::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1095)
			::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1095)
			::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(21)
			::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(21)
			::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1095)
			::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1095)
			::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1095)
			HX_STACK_DO_THROW(tmp9);
		}
	}
	HX_STACK_LINE(1097)
	int _nodes = (int)1;		HX_STACK_VAR(_nodes,"_nodes");
	HX_STACK_LINE(1098)
	{
		HX_STACK_LINE(1098)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1098)
		Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1098)
		while((true)){
			HX_STACK_LINE(1098)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1098)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1098)
			if ((tmp1)){
				HX_STACK_LINE(1098)
				break;
			}
			HX_STACK_LINE(1098)
			::mint::Control tmp2 = _g1->__get(_g).StaticCast< ::mint::Control >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1098)
			::mint::Control child = tmp2;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(1098)
			++(_g);
			HX_STACK_LINE(1098)
			int tmp3 = child->get_nodes();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1098)
			hx::AddEq(_nodes,tmp3);
		}
	}
	HX_STACK_LINE(1099)
	int tmp = _nodes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1099)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,get_nodes,return )

Float Control_obj::get_depth( ){
	HX_STACK_FRAME("mint.Control","get_depth",0x81e0441d,"mint.Control.get_depth","mint/Control.hx",1105,0xafc4152e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1107)
	Float tmp = this->depth;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1107)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,get_depth,return )

Float Control_obj::set_depth( Float _depth){
	HX_STACK_FRAME("mint.Control","set_depth",0x65313029,"mint.Control.set_depth","mint/Control.hx",1111,0xafc4152e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_depth,"_depth")
	HX_STACK_LINE(1113)
	{
		HX_STACK_LINE(1113)
		bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1113)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1113)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1113)
		if ((tmp2)){
			HX_STACK_LINE(1113)
			::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1113)
			::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1113)
			::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(21)
			::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(21)
			::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1113)
			::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1113)
			::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1113)
			HX_STACK_DO_THROW(tmp9);
		}
	}
	HX_STACK_LINE(1115)
	this->depth = _depth;
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(1117)
		::mint::core::Signal tmp = this->ondepth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		int tmp1 = tmp->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		int _count = tmp1;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			bool tmp2 = (_idx < _count);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(52)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(52)
			if ((tmp3)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(1117)
			::mint::core::Signal tmp4 = this->ondepth;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(53)
			Dynamic tmp5 = tmp4->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(53)
			Dynamic fn = tmp5;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp6 = (fn != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(54)
			if ((tmp6)){
				HX_STACK_LINE(1117)
				Float tmp7 = this->depth;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(55)
				fn(tmp7).Cast< Void >();
			}
			HX_STACK_LINE(57)
			(_idx)++;
		}
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp2 = (_count > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(60)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(60)
			if ((tmp3)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(1117)
			::mint::core::Signal tmp4 = this->ondepth;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(61)
			int tmp5 = (_count - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(61)
			Dynamic tmp6 = tmp4->listeners->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(61)
			Dynamic fn = tmp6;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(62)
			bool tmp7 = (fn == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(62)
			if ((tmp7)){
				HX_STACK_LINE(1117)
				::mint::core::Signal tmp8 = this->ondepth;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(62)
				int tmp9 = (_count - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(62)
				tmp8->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp9,(int)1);
			}
			HX_STACK_LINE(63)
			(_count)--;
		}
	}
	HX_STACK_LINE(1119)
	Float tmp = this->depth;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1119)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,set_depth,return )

::mint::Control Control_obj::set_parent( ::mint::Control p){
	HX_STACK_FRAME("mint.Control","set_parent",0xa5ce0744,"mint.Control.set_parent","mint/Control.hx",1125,0xafc4152e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(1127)
	{
		HX_STACK_LINE(1127)
		bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1127)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1127)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1127)
		if ((tmp2)){
			HX_STACK_LINE(1127)
			::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1127)
			::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1127)
			::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(21)
			::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(21)
			::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1127)
			::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1127)
			::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1127)
			HX_STACK_DO_THROW(tmp9);
		}
	}
	HX_STACK_LINE(1131)
	this->parent = p;
	HX_STACK_LINE(1133)
	::mint::Control tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1133)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1133)
	if ((tmp1)){
		HX_STACK_LINE(1134)
		this->ignore_spatial = true;
		HX_STACK_LINE(1135)
		::mint::Control tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1135)
		Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1135)
		Float tmp4 = this->get_x_local();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1135)
		Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1135)
		this->set_x(tmp5);
		HX_STACK_LINE(1136)
		::mint::Control tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1136)
		Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1136)
		Float tmp8 = this->get_y_local();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1136)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1136)
		this->set_y(tmp9);
		HX_STACK_LINE(1137)
		this->ignore_spatial = false;
	}
	HX_STACK_LINE(1140)
	::mint::Control tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1140)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,set_parent,return )

::mint::Control Control_obj::get_parent( ){
	HX_STACK_FRAME("mint.Control","get_parent",0xa25068d0,"mint.Control.get_parent","mint/Control.hx",1144,0xafc4152e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1146)
	::mint::Control tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1146)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,get_parent,return )


Control_obj::Control_obj()
{
}

void Control_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Control);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(user,"user");
	HX_MARK_MEMBER_NAME(canvas,"canvas");
	HX_MARK_MEMBER_NAME(closest_to_canvas,"closest_to_canvas");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_MEMBER_NAME(w_min,"w_min");
	HX_MARK_MEMBER_NAME(h_min,"h_min");
	HX_MARK_MEMBER_NAME(w_max,"w_max");
	HX_MARK_MEMBER_NAME(h_max,"h_max");
	HX_MARK_MEMBER_NAME(x_local,"x_local");
	HX_MARK_MEMBER_NAME(y_local,"y_local");
	HX_MARK_MEMBER_NAME(clip_with,"clip_with");
	HX_MARK_MEMBER_NAME(children,"children");
	HX_MARK_MEMBER_NAME(isfocused,"isfocused");
	HX_MARK_MEMBER_NAME(ismarked,"ismarked");
	HX_MARK_MEMBER_NAME(iscaptured,"iscaptured");
	HX_MARK_MEMBER_NAME(ishovered,"ishovered");
	HX_MARK_MEMBER_NAME(mouse_input,"mouse_input");
	HX_MARK_MEMBER_NAME(key_input,"key_input");
	HX_MARK_MEMBER_NAME(renderable,"renderable");
	HX_MARK_MEMBER_NAME(destroyed,"destroyed");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(children_bounds,"children_bounds");
	HX_MARK_MEMBER_NAME(oncreate,"oncreate");
	HX_MARK_MEMBER_NAME(onrender,"onrender");
	HX_MARK_MEMBER_NAME(onrenamed,"onrenamed");
	HX_MARK_MEMBER_NAME(onbounds,"onbounds");
	HX_MARK_MEMBER_NAME(ondestroy,"ondestroy");
	HX_MARK_MEMBER_NAME(onvisible,"onvisible");
	HX_MARK_MEMBER_NAME(ondepth,"ondepth");
	HX_MARK_MEMBER_NAME(onclip,"onclip");
	HX_MARK_MEMBER_NAME(onchildadd,"onchildadd");
	HX_MARK_MEMBER_NAME(onchildremove,"onchildremove");
	HX_MARK_MEMBER_NAME(onmousedown,"onmousedown");
	HX_MARK_MEMBER_NAME(onmouseup,"onmouseup");
	HX_MARK_MEMBER_NAME(onmousemove,"onmousemove");
	HX_MARK_MEMBER_NAME(onmousewheel,"onmousewheel");
	HX_MARK_MEMBER_NAME(onmouseenter,"onmouseenter");
	HX_MARK_MEMBER_NAME(onmouseleave,"onmouseleave");
	HX_MARK_MEMBER_NAME(onkeydown,"onkeydown");
	HX_MARK_MEMBER_NAME(onkeyup,"onkeyup");
	HX_MARK_MEMBER_NAME(ontextinput,"ontextinput");
	HX_MARK_MEMBER_NAME(onfocused,"onfocused");
	HX_MARK_MEMBER_NAME(onmarked,"onmarked");
	HX_MARK_MEMBER_NAME(oncaptured,"oncaptured");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	HX_MARK_MEMBER_NAME(rendering,"rendering");
	HX_MARK_MEMBER_NAME(_options_,"_options_");
	HX_MARK_MEMBER_NAME(depth_offset,"depth_offset");
	HX_MARK_MEMBER_NAME(vis_state,"vis_state");
	HX_MARK_MEMBER_NAME(update_vis_state,"update_vis_state");
	HX_MARK_MEMBER_NAME(updating,"updating");
	HX_MARK_MEMBER_NAME(ignore_spatial,"ignore_spatial");
	HX_MARK_END_CLASS();
}

void Control_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(user,"user");
	HX_VISIT_MEMBER_NAME(canvas,"canvas");
	HX_VISIT_MEMBER_NAME(closest_to_canvas,"closest_to_canvas");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(w,"w");
	HX_VISIT_MEMBER_NAME(h,"h");
	HX_VISIT_MEMBER_NAME(w_min,"w_min");
	HX_VISIT_MEMBER_NAME(h_min,"h_min");
	HX_VISIT_MEMBER_NAME(w_max,"w_max");
	HX_VISIT_MEMBER_NAME(h_max,"h_max");
	HX_VISIT_MEMBER_NAME(x_local,"x_local");
	HX_VISIT_MEMBER_NAME(y_local,"y_local");
	HX_VISIT_MEMBER_NAME(clip_with,"clip_with");
	HX_VISIT_MEMBER_NAME(children,"children");
	HX_VISIT_MEMBER_NAME(isfocused,"isfocused");
	HX_VISIT_MEMBER_NAME(ismarked,"ismarked");
	HX_VISIT_MEMBER_NAME(iscaptured,"iscaptured");
	HX_VISIT_MEMBER_NAME(ishovered,"ishovered");
	HX_VISIT_MEMBER_NAME(mouse_input,"mouse_input");
	HX_VISIT_MEMBER_NAME(key_input,"key_input");
	HX_VISIT_MEMBER_NAME(renderable,"renderable");
	HX_VISIT_MEMBER_NAME(destroyed,"destroyed");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(children_bounds,"children_bounds");
	HX_VISIT_MEMBER_NAME(oncreate,"oncreate");
	HX_VISIT_MEMBER_NAME(onrender,"onrender");
	HX_VISIT_MEMBER_NAME(onrenamed,"onrenamed");
	HX_VISIT_MEMBER_NAME(onbounds,"onbounds");
	HX_VISIT_MEMBER_NAME(ondestroy,"ondestroy");
	HX_VISIT_MEMBER_NAME(onvisible,"onvisible");
	HX_VISIT_MEMBER_NAME(ondepth,"ondepth");
	HX_VISIT_MEMBER_NAME(onclip,"onclip");
	HX_VISIT_MEMBER_NAME(onchildadd,"onchildadd");
	HX_VISIT_MEMBER_NAME(onchildremove,"onchildremove");
	HX_VISIT_MEMBER_NAME(onmousedown,"onmousedown");
	HX_VISIT_MEMBER_NAME(onmouseup,"onmouseup");
	HX_VISIT_MEMBER_NAME(onmousemove,"onmousemove");
	HX_VISIT_MEMBER_NAME(onmousewheel,"onmousewheel");
	HX_VISIT_MEMBER_NAME(onmouseenter,"onmouseenter");
	HX_VISIT_MEMBER_NAME(onmouseleave,"onmouseleave");
	HX_VISIT_MEMBER_NAME(onkeydown,"onkeydown");
	HX_VISIT_MEMBER_NAME(onkeyup,"onkeyup");
	HX_VISIT_MEMBER_NAME(ontextinput,"ontextinput");
	HX_VISIT_MEMBER_NAME(onfocused,"onfocused");
	HX_VISIT_MEMBER_NAME(onmarked,"onmarked");
	HX_VISIT_MEMBER_NAME(oncaptured,"oncaptured");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	HX_VISIT_MEMBER_NAME(rendering,"rendering");
	HX_VISIT_MEMBER_NAME(_options_,"_options_");
	HX_VISIT_MEMBER_NAME(depth_offset,"depth_offset");
	HX_VISIT_MEMBER_NAME(vis_state,"vis_state");
	HX_VISIT_MEMBER_NAME(update_vis_state,"update_vis_state");
	HX_VISIT_MEMBER_NAME(updating,"updating");
	HX_VISIT_MEMBER_NAME(ignore_spatial,"ignore_spatial");
}

Dynamic Control_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		if (HX_FIELD_EQ(inName,"h") ) { return h; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"user") ) { return user; }
		if (HX_FIELD_EQ(inName,"mark") ) { return mark_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"w_min") ) { return w_min; }
		if (HX_FIELD_EQ(inName,"h_min") ) { return h_min; }
		if (HX_FIELD_EQ(inName,"w_max") ) { return w_max; }
		if (HX_FIELD_EQ(inName,"h_max") ) { return h_max; }
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == hx::paccAlways) return get_right(); }
		if (HX_FIELD_EQ(inName,"nodes") ) { if (inCallProp == hx::paccAlways) return get_nodes(); }
		if (HX_FIELD_EQ(inName,"depth") ) { return inCallProp == hx::paccAlways ? get_depth() : depth; }
		if (HX_FIELD_EQ(inName,"keyup") ) { return keyup_dyn(); }
		if (HX_FIELD_EQ(inName,"focus") ) { return focus_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_w") ) { return set_w_dyn(); }
		if (HX_FIELD_EQ(inName,"set_h") ) { return set_h_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"canvas") ) { return canvas; }
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == hx::paccAlways) return get_bottom(); }
		if (HX_FIELD_EQ(inName,"onclip") ) { return onclip; }
		if (HX_FIELD_EQ(inName,"parent") ) { return inCallProp == hx::paccAlways ? get_parent() : parent; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"unmark") ) { return unmark_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"x_local") ) { return inCallProp == hx::paccAlways ? get_x_local() : x_local; }
		if (HX_FIELD_EQ(inName,"y_local") ) { return inCallProp == hx::paccAlways ? get_y_local() : y_local; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"ondepth") ) { return ondepth; }
		if (HX_FIELD_EQ(inName,"onkeyup") ) { return onkeyup; }
		if (HX_FIELD_EQ(inName,"keydown") ) { return keydown_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseup") ) { return mouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"unfocus") ) { return unfocus_dyn(); }
		if (HX_FIELD_EQ(inName,"capture") ) { return capture_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return set_pos_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { return children; }
		if (HX_FIELD_EQ(inName,"ismarked") ) { return ismarked; }
		if (HX_FIELD_EQ(inName,"oncreate") ) { return oncreate; }
		if (HX_FIELD_EQ(inName,"onrender") ) { return onrender; }
		if (HX_FIELD_EQ(inName,"onbounds") ) { return onbounds; }
		if (HX_FIELD_EQ(inName,"onmarked") ) { return onmarked; }
		if (HX_FIELD_EQ(inName,"renderer") ) { return renderer; }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"updating") ) { return updating; }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_name") ) { return set_name_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clip_with") ) { return clip_with; }
		if (HX_FIELD_EQ(inName,"isfocused") ) { return isfocused; }
		if (HX_FIELD_EQ(inName,"ishovered") ) { return ishovered; }
		if (HX_FIELD_EQ(inName,"key_input") ) { return key_input; }
		if (HX_FIELD_EQ(inName,"destroyed") ) { return destroyed; }
		if (HX_FIELD_EQ(inName,"onrenamed") ) { return onrenamed; }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy; }
		if (HX_FIELD_EQ(inName,"onvisible") ) { return onvisible; }
		if (HX_FIELD_EQ(inName,"onmouseup") ) { return onmouseup; }
		if (HX_FIELD_EQ(inName,"onkeydown") ) { return onkeydown; }
		if (HX_FIELD_EQ(inName,"onfocused") ) { return onfocused; }
		if (HX_FIELD_EQ(inName,"rendering") ) { return rendering; }
		if (HX_FIELD_EQ(inName,"_options_") ) { return _options_; }
		if (HX_FIELD_EQ(inName,"vis_state") ) { return vis_state; }
		if (HX_FIELD_EQ(inName,"textinput") ) { return textinput_dyn(); }
		if (HX_FIELD_EQ(inName,"mousemove") ) { return mousemove_dyn(); }
		if (HX_FIELD_EQ(inName,"mousedown") ) { return mousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"uncapture") ) { return uncapture_dyn(); }
		if (HX_FIELD_EQ(inName,"get_right") ) { return get_right_dyn(); }
		if (HX_FIELD_EQ(inName,"set_w_min") ) { return set_w_min_dyn(); }
		if (HX_FIELD_EQ(inName,"set_h_min") ) { return set_h_min_dyn(); }
		if (HX_FIELD_EQ(inName,"set_w_max") ) { return set_w_max_dyn(); }
		if (HX_FIELD_EQ(inName,"set_h_max") ) { return set_h_max_dyn(); }
		if (HX_FIELD_EQ(inName,"get_nodes") ) { return get_nodes_dyn(); }
		if (HX_FIELD_EQ(inName,"get_depth") ) { return get_depth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_depth") ) { return set_depth_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"iscaptured") ) { return iscaptured; }
		if (HX_FIELD_EQ(inName,"renderable") ) { return renderable; }
		if (HX_FIELD_EQ(inName,"onchildadd") ) { return onchildadd; }
		if (HX_FIELD_EQ(inName,"oncaptured") ) { return oncaptured; }
		if (HX_FIELD_EQ(inName,"mousewheel") ) { return mousewheel_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseenter") ) { return mouseenter_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseleave") ) { return mouseleave_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bottom") ) { return get_bottom_dyn(); }
		if (HX_FIELD_EQ(inName,"set_parent") ) { return set_parent_dyn(); }
		if (HX_FIELD_EQ(inName,"get_parent") ) { return get_parent_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mouse_input") ) { return mouse_input; }
		if (HX_FIELD_EQ(inName,"onmousedown") ) { return onmousedown; }
		if (HX_FIELD_EQ(inName,"onmousemove") ) { return onmousemove; }
		if (HX_FIELD_EQ(inName,"ontextinput") ) { return ontextinput; }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x_local") ) { return set_x_local_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y_local") ) { return set_y_local_dyn(); }
		if (HX_FIELD_EQ(inName,"get_x_local") ) { return get_x_local_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y_local") ) { return get_y_local_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onmousewheel") ) { return onmousewheel; }
		if (HX_FIELD_EQ(inName,"onmouseenter") ) { return onmouseenter; }
		if (HX_FIELD_EQ(inName,"onmouseleave") ) { return onmouseleave; }
		if (HX_FIELD_EQ(inName,"depth_offset") ) { return depth_offset; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onchildremove") ) { return onchildremove; }
		if (HX_FIELD_EQ(inName,"onclipchanged") ) { return onclipchanged_dyn(); }
		if (HX_FIELD_EQ(inName,"set_clip_with") ) { return set_clip_with_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"refresh_bounds") ) { return refresh_bounds_dyn(); }
		if (HX_FIELD_EQ(inName,"bounds_changed") ) { return bounds_changed_dyn(); }
		if (HX_FIELD_EQ(inName,"ignore_spatial") ) { return ignore_spatial; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"children_bounds") ) { return inCallProp == hx::paccAlways ? get_children_bounds() : children_bounds; }
		if (HX_FIELD_EQ(inName,"find_top_parent") ) { return find_top_parent_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"update_vis_state") ) { return update_vis_state; }
		if (HX_FIELD_EQ(inName,"set_visible_only") ) { return set_visible_only_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy_children") ) { return destroy_children_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"closest_to_canvas") ) { return closest_to_canvas; }
		if (HX_FIELD_EQ(inName,"children_at_point") ) { return children_at_point_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_children_bounds") ) { return get_children_bounds_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"topmost_child_at_point") ) { return topmost_child_at_point_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Control_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue);x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue);y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { if (inCallProp == hx::paccAlways) return set_w(inValue);w=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"h") ) { if (inCallProp == hx::paccAlways) return set_h(inValue);h=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return set_name(inValue);name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"user") ) { user=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"w_min") ) { if (inCallProp == hx::paccAlways) return set_w_min(inValue);w_min=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"h_min") ) { if (inCallProp == hx::paccAlways) return set_h_min(inValue);h_min=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w_max") ) { if (inCallProp == hx::paccAlways) return set_w_max(inValue);w_max=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"h_max") ) { if (inCallProp == hx::paccAlways) return set_h_max(inValue);h_max=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp == hx::paccAlways) return set_depth(inValue);depth=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"canvas") ) { canvas=inValue.Cast< ::mint::Canvas >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onclip") ) { onclip=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { if (inCallProp == hx::paccAlways) return set_parent(inValue);parent=inValue.Cast< ::mint::Control >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"x_local") ) { if (inCallProp == hx::paccAlways) return set_x_local(inValue);x_local=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y_local") ) { if (inCallProp == hx::paccAlways) return set_y_local(inValue);y_local=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return set_visible(inValue);visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ondepth") ) { ondepth=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onkeyup") ) { onkeyup=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ismarked") ) { ismarked=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oncreate") ) { oncreate=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onrender") ) { onrender=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onbounds") ) { onbounds=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onmarked") ) { onmarked=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::mint::render::Renderer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"updating") ) { updating=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clip_with") ) { if (inCallProp == hx::paccAlways) return set_clip_with(inValue);clip_with=inValue.Cast< ::mint::Control >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isfocused") ) { isfocused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ishovered") ) { ishovered=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key_input") ) { key_input=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"destroyed") ) { destroyed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onrenamed") ) { onrenamed=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { ondestroy=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onvisible") ) { onvisible=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onmouseup") ) { onmouseup=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onkeydown") ) { onkeydown=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onfocused") ) { onfocused=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rendering") ) { rendering=inValue.Cast< ::mint::render::Rendering >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_options_") ) { _options_=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vis_state") ) { vis_state=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"iscaptured") ) { iscaptured=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderable") ) { renderable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onchildadd") ) { onchildadd=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oncaptured") ) { oncaptured=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mouse_input") ) { mouse_input=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onmousedown") ) { onmousedown=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onmousemove") ) { onmousemove=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ontextinput") ) { ontextinput=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onmousewheel") ) { onmousewheel=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onmouseenter") ) { onmouseenter=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onmouseleave") ) { onmouseleave=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depth_offset") ) { depth_offset=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onchildremove") ) { onchildremove=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ignore_spatial") ) { ignore_spatial=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"children_bounds") ) { children_bounds=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"update_vis_state") ) { update_vis_state=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"closest_to_canvas") ) { closest_to_canvas=inValue.Cast< ::mint::Control >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Control_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("user","\x4b","\x92","\xad","\x4d"));
	outFields->push(HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8"));
	outFields->push(HX_HCSTRING("closest_to_canvas","\xb6","\x95","\xe9","\x10"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("h","\x68","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("w_min","\x8a","\x5e","\xcd","\xc3"));
	outFields->push(HX_HCSTRING("h_min","\xfb","\xaa","\xca","\x20"));
	outFields->push(HX_HCSTRING("w_max","\x9c","\x57","\xcd","\xc3"));
	outFields->push(HX_HCSTRING("h_max","\x0d","\xa4","\xca","\x20"));
	outFields->push(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));
	outFields->push(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"));
	outFields->push(HX_HCSTRING("x_local","\x24","\xbb","\xe7","\xf2"));
	outFields->push(HX_HCSTRING("y_local","\xe5","\x31","\x7d","\x1c"));
	outFields->push(HX_HCSTRING("clip_with","\x15","\x71","\xf3","\x8c"));
	outFields->push(HX_HCSTRING("children","\x3f","\x19","\x6a","\x70"));
	outFields->push(HX_HCSTRING("nodes","\x31","\xb8","\xbe","\x9f"));
	outFields->push(HX_HCSTRING("isfocused","\x8d","\xb3","\x30","\x78"));
	outFields->push(HX_HCSTRING("ismarked","\x16","\x9d","\x45","\xde"));
	outFields->push(HX_HCSTRING("iscaptured","\x08","\xfb","\x41","\x61"));
	outFields->push(HX_HCSTRING("ishovered","\x71","\x7a","\x64","\xb1"));
	outFields->push(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a"));
	outFields->push(HX_HCSTRING("key_input","\x2a","\x16","\x78","\x1d"));
	outFields->push(HX_HCSTRING("renderable","\xf0","\x3b","\x99","\xf2"));
	outFields->push(HX_HCSTRING("destroyed","\xd9","\x37","\x27","\xf4"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("children_bounds","\xb5","\xb4","\xf9","\xa5"));
	outFields->push(HX_HCSTRING("oncreate","\x5b","\xe9","\x27","\x27"));
	outFields->push(HX_HCSTRING("onrender","\xb5","\xed","\x41","\xb0"));
	outFields->push(HX_HCSTRING("onrenamed","\xe7","\x73","\x78","\x87"));
	outFields->push(HX_HCSTRING("onbounds","\xd4","\x08","\x36","\x11"));
	outFields->push(HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"));
	outFields->push(HX_HCSTRING("onvisible","\x33","\x09","\x7e","\xad"));
	outFields->push(HX_HCSTRING("ondepth","\x84","\x1f","\x3a","\xda"));
	outFields->push(HX_HCSTRING("onclip","\x6f","\x4b","\x73","\xf9"));
	outFields->push(HX_HCSTRING("onchildadd","\x24","\x4a","\x62","\x74"));
	outFields->push(HX_HCSTRING("onchildremove","\x21","\xe8","\x32","\x5c"));
	outFields->push(HX_HCSTRING("onmousedown","\x08","\x88","\x59","\x84"));
	outFields->push(HX_HCSTRING("onmouseup","\x81","\xa0","\xcc","\xca"));
	outFields->push(HX_HCSTRING("onmousemove","\xb7","\x72","\x4c","\x8a"));
	outFields->push(HX_HCSTRING("onmousewheel","\x35","\x56","\xec","\x35"));
	outFields->push(HX_HCSTRING("onmouseenter","\xb2","\x8e","\xb8","\xdc"));
	outFields->push(HX_HCSTRING("onmouseleave","\x91","\x56","\x85","\xde"));
	outFields->push(HX_HCSTRING("onkeydown","\x42","\xce","\xc7","\xbb"));
	outFields->push(HX_HCSTRING("onkeyup","\x3b","\x04","\x0f","\xe2"));
	outFields->push(HX_HCSTRING("ontextinput","\x3e","\xe7","\x4d","\x44"));
	outFields->push(HX_HCSTRING("onfocused","\xf8","\xee","\xdc","\x4b"));
	outFields->push(HX_HCSTRING("onmarked","\x0b","\xf8","\x88","\x65"));
	outFields->push(HX_HCSTRING("oncaptured","\x3d","\xbd","\x49","\xc4"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"));
	outFields->push(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"));
	outFields->push(HX_HCSTRING("rendering","\x4c","\xdb","\x73","\xcd"));
	outFields->push(HX_HCSTRING("_options_","\xa0","\xb6","\x04","\x66"));
	outFields->push(HX_HCSTRING("depth_offset","\x8f","\x2e","\xb4","\x47"));
	outFields->push(HX_HCSTRING("vis_state","\x32","\x4b","\x0e","\xdf"));
	outFields->push(HX_HCSTRING("update_vis_state","\x3c","\x92","\xeb","\x8d"));
	outFields->push(HX_HCSTRING("updating","\x86","\x43","\xfd","\x77"));
	outFields->push(HX_HCSTRING("ignore_spatial","\x57","\x3d","\x53","\xbb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Control_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Control_obj,user),HX_HCSTRING("user","\x4b","\x92","\xad","\x4d")},
	{hx::fsObject /*::mint::Canvas*/ ,(int)offsetof(Control_obj,canvas),HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8")},
	{hx::fsObject /*::mint::Control*/ ,(int)offsetof(Control_obj,closest_to_canvas),HX_HCSTRING("closest_to_canvas","\xb6","\x95","\xe9","\x10")},
	{hx::fsFloat,(int)offsetof(Control_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Control_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Control_obj,w),HX_HCSTRING("w","\x77","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Control_obj,h),HX_HCSTRING("h","\x68","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Control_obj,w_min),HX_HCSTRING("w_min","\x8a","\x5e","\xcd","\xc3")},
	{hx::fsFloat,(int)offsetof(Control_obj,h_min),HX_HCSTRING("h_min","\xfb","\xaa","\xca","\x20")},
	{hx::fsFloat,(int)offsetof(Control_obj,w_max),HX_HCSTRING("w_max","\x9c","\x57","\xcd","\xc3")},
	{hx::fsFloat,(int)offsetof(Control_obj,h_max),HX_HCSTRING("h_max","\x0d","\xa4","\xca","\x20")},
	{hx::fsFloat,(int)offsetof(Control_obj,x_local),HX_HCSTRING("x_local","\x24","\xbb","\xe7","\xf2")},
	{hx::fsFloat,(int)offsetof(Control_obj,y_local),HX_HCSTRING("y_local","\xe5","\x31","\x7d","\x1c")},
	{hx::fsObject /*::mint::Control*/ ,(int)offsetof(Control_obj,clip_with),HX_HCSTRING("clip_with","\x15","\x71","\xf3","\x8c")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Control_obj,children),HX_HCSTRING("children","\x3f","\x19","\x6a","\x70")},
	{hx::fsBool,(int)offsetof(Control_obj,isfocused),HX_HCSTRING("isfocused","\x8d","\xb3","\x30","\x78")},
	{hx::fsBool,(int)offsetof(Control_obj,ismarked),HX_HCSTRING("ismarked","\x16","\x9d","\x45","\xde")},
	{hx::fsBool,(int)offsetof(Control_obj,iscaptured),HX_HCSTRING("iscaptured","\x08","\xfb","\x41","\x61")},
	{hx::fsBool,(int)offsetof(Control_obj,ishovered),HX_HCSTRING("ishovered","\x71","\x7a","\x64","\xb1")},
	{hx::fsBool,(int)offsetof(Control_obj,mouse_input),HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a")},
	{hx::fsBool,(int)offsetof(Control_obj,key_input),HX_HCSTRING("key_input","\x2a","\x16","\x78","\x1d")},
	{hx::fsBool,(int)offsetof(Control_obj,renderable),HX_HCSTRING("renderable","\xf0","\x3b","\x99","\xf2")},
	{hx::fsBool,(int)offsetof(Control_obj,destroyed),HX_HCSTRING("destroyed","\xd9","\x37","\x27","\xf4")},
	{hx::fsBool,(int)offsetof(Control_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Control_obj,children_bounds),HX_HCSTRING("children_bounds","\xb5","\xb4","\xf9","\xa5")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Control_obj,oncreate),HX_HCSTRING("oncreate","\x5b","\xe9","\x27","\x27")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Control_obj,onrender),HX_HCSTRING("onrender","\xb5","\xed","\x41","\xb0")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Control_obj,onrenamed),HX_HCSTRING("onrenamed","\xe7","\x73","\x78","\x87")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Control_obj,onbounds),HX_HCSTRING("onbounds","\xd4","\x08","\x36","\x11")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Control_obj,ondestroy),HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Control_obj,onvisible),HX_HCSTRING("onvisible","\x33","\x09","\x7e","\xad")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Control_obj,ondepth),HX_HCSTRING("ondepth","\x84","\x1f","\x3a","\xda")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Control_obj,onclip),HX_HCSTRING("onclip","\x6f","\x4b","\x73","\xf9")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Control_obj,onchildadd),HX_HCSTRING("onchildadd","\x24","\x4a","\x62","\x74")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Control_obj,onchildremove),HX_HCSTRING("onchildremove","\x21","\xe8","\x32","\x5c")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Control_obj,onmousedown),HX_HCSTRING("onmousedown","\x08","\x88","\x59","\x84")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Control_obj,onmouseup),HX_HCSTRING("onmouseup","\x81","\xa0","\xcc","\xca")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Control_obj,onmousemove),HX_HCSTRING("onmousemove","\xb7","\x72","\x4c","\x8a")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Control_obj,onmousewheel),HX_HCSTRING("onmousewheel","\x35","\x56","\xec","\x35")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Control_obj,onmouseenter),HX_HCSTRING("onmouseenter","\xb2","\x8e","\xb8","\xdc")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Control_obj,onmouseleave),HX_HCSTRING("onmouseleave","\x91","\x56","\x85","\xde")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Control_obj,onkeydown),HX_HCSTRING("onkeydown","\x42","\xce","\xc7","\xbb")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Control_obj,onkeyup),HX_HCSTRING("onkeyup","\x3b","\x04","\x0f","\xe2")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Control_obj,ontextinput),HX_HCSTRING("ontextinput","\x3e","\xe7","\x4d","\x44")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Control_obj,onfocused),HX_HCSTRING("onfocused","\xf8","\xee","\xdc","\x4b")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Control_obj,onmarked),HX_HCSTRING("onmarked","\x0b","\xf8","\x88","\x65")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Control_obj,oncaptured),HX_HCSTRING("oncaptured","\x3d","\xbd","\x49","\xc4")},
	{hx::fsObject /*::mint::Control*/ ,(int)offsetof(Control_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsFloat,(int)offsetof(Control_obj,depth),HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7")},
	{hx::fsObject /*::mint::render::Renderer*/ ,(int)offsetof(Control_obj,renderer),HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2")},
	{hx::fsObject /*::mint::render::Rendering*/ ,(int)offsetof(Control_obj,rendering),HX_HCSTRING("rendering","\x4c","\xdb","\x73","\xcd")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Control_obj,_options_),HX_HCSTRING("_options_","\xa0","\xb6","\x04","\x66")},
	{hx::fsFloat,(int)offsetof(Control_obj,depth_offset),HX_HCSTRING("depth_offset","\x8f","\x2e","\xb4","\x47")},
	{hx::fsBool,(int)offsetof(Control_obj,vis_state),HX_HCSTRING("vis_state","\x32","\x4b","\x0e","\xdf")},
	{hx::fsBool,(int)offsetof(Control_obj,update_vis_state),HX_HCSTRING("update_vis_state","\x3c","\x92","\xeb","\x8d")},
	{hx::fsBool,(int)offsetof(Control_obj,updating),HX_HCSTRING("updating","\x86","\x43","\xfd","\x77")},
	{hx::fsBool,(int)offsetof(Control_obj,ignore_spatial),HX_HCSTRING("ignore_spatial","\x57","\x3d","\x53","\xbb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("user","\x4b","\x92","\xad","\x4d"),
	HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8"),
	HX_HCSTRING("closest_to_canvas","\xb6","\x95","\xe9","\x10"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("w","\x77","\x00","\x00","\x00"),
	HX_HCSTRING("h","\x68","\x00","\x00","\x00"),
	HX_HCSTRING("w_min","\x8a","\x5e","\xcd","\xc3"),
	HX_HCSTRING("h_min","\xfb","\xaa","\xca","\x20"),
	HX_HCSTRING("w_max","\x9c","\x57","\xcd","\xc3"),
	HX_HCSTRING("h_max","\x0d","\xa4","\xca","\x20"),
	HX_HCSTRING("x_local","\x24","\xbb","\xe7","\xf2"),
	HX_HCSTRING("y_local","\xe5","\x31","\x7d","\x1c"),
	HX_HCSTRING("clip_with","\x15","\x71","\xf3","\x8c"),
	HX_HCSTRING("children","\x3f","\x19","\x6a","\x70"),
	HX_HCSTRING("isfocused","\x8d","\xb3","\x30","\x78"),
	HX_HCSTRING("ismarked","\x16","\x9d","\x45","\xde"),
	HX_HCSTRING("iscaptured","\x08","\xfb","\x41","\x61"),
	HX_HCSTRING("ishovered","\x71","\x7a","\x64","\xb1"),
	HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a"),
	HX_HCSTRING("key_input","\x2a","\x16","\x78","\x1d"),
	HX_HCSTRING("renderable","\xf0","\x3b","\x99","\xf2"),
	HX_HCSTRING("destroyed","\xd9","\x37","\x27","\xf4"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("children_bounds","\xb5","\xb4","\xf9","\xa5"),
	HX_HCSTRING("oncreate","\x5b","\xe9","\x27","\x27"),
	HX_HCSTRING("onrender","\xb5","\xed","\x41","\xb0"),
	HX_HCSTRING("onrenamed","\xe7","\x73","\x78","\x87"),
	HX_HCSTRING("onbounds","\xd4","\x08","\x36","\x11"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onvisible","\x33","\x09","\x7e","\xad"),
	HX_HCSTRING("ondepth","\x84","\x1f","\x3a","\xda"),
	HX_HCSTRING("onclip","\x6f","\x4b","\x73","\xf9"),
	HX_HCSTRING("onchildadd","\x24","\x4a","\x62","\x74"),
	HX_HCSTRING("onchildremove","\x21","\xe8","\x32","\x5c"),
	HX_HCSTRING("onmousedown","\x08","\x88","\x59","\x84"),
	HX_HCSTRING("onmouseup","\x81","\xa0","\xcc","\xca"),
	HX_HCSTRING("onmousemove","\xb7","\x72","\x4c","\x8a"),
	HX_HCSTRING("onmousewheel","\x35","\x56","\xec","\x35"),
	HX_HCSTRING("onmouseenter","\xb2","\x8e","\xb8","\xdc"),
	HX_HCSTRING("onmouseleave","\x91","\x56","\x85","\xde"),
	HX_HCSTRING("onkeydown","\x42","\xce","\xc7","\xbb"),
	HX_HCSTRING("onkeyup","\x3b","\x04","\x0f","\xe2"),
	HX_HCSTRING("ontextinput","\x3e","\xe7","\x4d","\x44"),
	HX_HCSTRING("onfocused","\xf8","\xee","\xdc","\x4b"),
	HX_HCSTRING("onmarked","\x0b","\xf8","\x88","\x65"),
	HX_HCSTRING("oncaptured","\x3d","\xbd","\x49","\xc4"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"),
	HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"),
	HX_HCSTRING("rendering","\x4c","\xdb","\x73","\xcd"),
	HX_HCSTRING("_options_","\xa0","\xb6","\x04","\x66"),
	HX_HCSTRING("depth_offset","\x8f","\x2e","\xb4","\x47"),
	HX_HCSTRING("children_at_point","\x04","\x47","\x42","\x58"),
	HX_HCSTRING("topmost_child_at_point","\x0e","\xe1","\x01","\x67"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("onclipchanged","\x65","\x41","\x08","\xcc"),
	HX_HCSTRING("set_clip_with","\xf8","\x26","\x5d","\x93"),
	HX_HCSTRING("vis_state","\x32","\x4b","\x0e","\xdf"),
	HX_HCSTRING("update_vis_state","\x3c","\x92","\xeb","\x8d"),
	HX_HCSTRING("set_visible_only","\x96","\x25","\xfc","\x39"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("find_top_parent","\x5a","\x42","\xd1","\xa9"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("get_children_bounds","\xcc","\x83","\x04","\x31"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("keyup","\xba","\xd5","\xfe","\xde"),
	HX_HCSTRING("keydown","\x81","\x3d","\x6e","\xb1"),
	HX_HCSTRING("textinput","\x3d","\xe4","\xdd","\xc3"),
	HX_HCSTRING("mousemove","\xb6","\x6f","\xdc","\x09"),
	HX_HCSTRING("mouseup","\xc0","\x0f","\x73","\xc0"),
	HX_HCSTRING("mousewheel","\x56","\xb8","\x59","\x54"),
	HX_HCSTRING("mousedown","\x07","\x85","\xe9","\x03"),
	HX_HCSTRING("mouseenter","\xd3","\xf0","\x25","\xfb"),
	HX_HCSTRING("mouseleave","\xb2","\xb8","\xf2","\xfc"),
	HX_HCSTRING("destroy_children","\x64","\x74","\x0d","\x68"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("focus","\xd8","\x5f","\x89","\x04"),
	HX_HCSTRING("unfocus","\xdf","\x56","\x1a","\x01"),
	HX_HCSTRING("capture","\x86","\xd0","\x51","\xa7"),
	HX_HCSTRING("uncapture","\x4d","\xd7","\x53","\xa3"),
	HX_HCSTRING("mark","\x0d","\x40","\x56","\x48"),
	HX_HCSTRING("unmark","\xe6","\x46","\x2b","\x66"),
	HX_HCSTRING("refresh_bounds","\x99","\x7f","\x58","\x7c"),
	HX_HCSTRING("updating","\x86","\x43","\xfd","\x77"),
	HX_HCSTRING("bounds_changed","\xea","\x8d","\xed","\x16"),
	HX_HCSTRING("set_pos","\x37","\xb7","\xcb","\x19"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	HX_HCSTRING("get_right","\x33","\x68","\x0d","\x2d"),
	HX_HCSTRING("get_bottom","\xb4","\x56","\x00","\x56"),
	HX_HCSTRING("set_name","\x48","\x87","\x17","\x77"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_w_min","\xed","\xa6","\xc7","\xea"),
	HX_HCSTRING("set_h_min","\x5e","\xf3","\xc4","\x47"),
	HX_HCSTRING("set_w_max","\xff","\x9f","\xc7","\xea"),
	HX_HCSTRING("set_h_max","\x70","\xec","\xc4","\x47"),
	HX_HCSTRING("set_w","\x5a","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_h","\x4b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("ignore_spatial","\x57","\x3d","\x53","\xbb"),
	HX_HCSTRING("set_x_local","\x47","\x22","\x4f","\x83"),
	HX_HCSTRING("set_y_local","\x08","\x99","\xe4","\xac"),
	HX_HCSTRING("get_x_local","\x3b","\x1b","\xe2","\x78"),
	HX_HCSTRING("get_y_local","\xfc","\x91","\x77","\xa2"),
	HX_HCSTRING("get_nodes","\x88","\x14","\x68","\xe3"),
	HX_HCSTRING("get_depth","\x5a","\x4d","\xd3","\x1a"),
	HX_HCSTRING("set_depth","\x66","\x39","\x24","\xfe"),
	HX_HCSTRING("set_parent","\x67","\x13","\x83","\xe1"),
	HX_HCSTRING("get_parent","\xf3","\x74","\x05","\xde"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Control_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Control_obj::__mClass,"__mClass");
};

#endif

hx::Class Control_obj::__mClass;

void Control_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mint.Control","\x71","\xd5","\x01","\x3d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Control_obj >;
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

} // end namespace mint
