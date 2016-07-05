#include <hxcpp.h>

#ifndef INCLUDED_mint_Canvas
#include <mint/Canvas.h>
#endif
#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
#endif
#ifndef INCLUDED_mint_Scroll
#include <mint/Scroll.h>
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
namespace mint{

Void Scroll_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("mint.Scroll","new",0x1bf81deb,"mint.Scroll.new","mint/Scroll.hx",20,0x5235bfc4)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(41)
	this->ready = false;
	HX_STACK_LINE(38)
	this->visible_h = false;
	HX_STACK_LINE(37)
	this->percent_h = ((Float)0.0);
	HX_STACK_LINE(36)
	this->drag_x = ((Float)0.0);
	HX_STACK_LINE(35)
	this->drag_h = false;
	HX_STACK_LINE(33)
	this->visible_v = false;
	HX_STACK_LINE(32)
	this->percent_v = ((Float)0.0);
	HX_STACK_LINE(31)
	this->drag_y = ((Float)0.0);
	HX_STACK_LINE(30)
	this->drag_v = false;
	HX_STACK_LINE(47)
	::mint::core::Signal tmp = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	this->onchange = tmp;
	HX_STACK_LINE(48)
	::mint::core::Signal tmp1 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	this->onhandlevis = tmp1;
	HX_STACK_LINE(50)
	this->options = _options;
	HX_STACK_LINE(52)
	{
		HX_STACK_LINE(52)
		Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		::String tmp3 = tmp2->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		if ((tmp4)){
			HX_STACK_LINE(52)
			Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(52)
			tmp5->__FieldRef(HX_HCSTRING("name","\x4b","\x72","\xff","\x48")) = HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47");
		}
		HX_STACK_LINE(52)
		Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		tmp5->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
	}
	HX_STACK_LINE(53)
	{
		HX_STACK_LINE(53)
		Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(53)
		Dynamic tmp3 = tmp2->__Field(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(53)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(53)
		if ((tmp4)){
			HX_STACK_LINE(53)
			Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(53)
			tmp5->__FieldRef(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a")) = true;
		}
		HX_STACK_LINE(53)
		Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(53)
		tmp5->__Field(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a"), hx::paccDynamic );
	}
	HX_STACK_LINE(55)
	Dynamic tmp2 = _options;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	super::__construct(tmp2,null());
	HX_STACK_LINE(59)
	::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(59)
	::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(59)
	::String tmp5 = (tmp4 + HX_HCSTRING(".container","\x53","\xff","\xd4","\x4c"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(61)
	Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(61)
	Dynamic tmp7 = tmp6->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(62)
	Float tmp8 = this->w;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(62)
	Float tmp9 = this->h;		HX_STACK_VAR(tmp9,"tmp9");
	struct _Function_1_1{
		inline static Dynamic Block( hx::ObjectPtr< ::mint::Scroll_obj > __this,::String &tmp5,Float &tmp9,Dynamic &tmp7,Float &tmp8){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/Scroll.hx",57,0x5235bfc4)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed") , ((::mint::Control)(__this)),false);
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp5,false);
				__result->Add(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a") , true,false);
				__result->Add(HX_HCSTRING("internal_visible","\x30","\x3e","\x18","\xd0") , tmp7,false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp8,false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp9,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(57)
	Dynamic tmp10 = _Function_1_1::Block(this,tmp5,tmp9,tmp7,tmp8);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(57)
	::mint::Control tmp11 = ::mint::Control_obj::__new(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(57)
	this->container = tmp11;
	HX_STACK_LINE(66)
	::String tmp12 = this->name;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(66)
	::String tmp13 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(66)
	::String tmp14 = (tmp13 + HX_HCSTRING(".scroll_v","\xb2","\xe6","\xb5","\x73"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(68)
	Dynamic tmp15 = this->options;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(68)
	Dynamic tmp16 = tmp15->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(69)
	Float tmp17 = this->w;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(69)
	Float tmp18 = (tmp17 - (int)8);		HX_STACK_VAR(tmp18,"tmp18");
	struct _Function_1_2{
		inline static Dynamic Block( hx::ObjectPtr< ::mint::Scroll_obj > __this,Dynamic &tmp16,Float &tmp18,::String &tmp14){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/Scroll.hx",65,0x5235bfc4)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed") , ((::mint::Control)(__this)),false);
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp14,false);
				__result->Add(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a") , true,false);
				__result->Add(HX_HCSTRING("internal_visible","\x30","\x3e","\x18","\xd0") , tmp16,false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp18,false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , ((Dynamic)((int)8)),false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , ((Dynamic)((int)16)),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(65)
	Dynamic tmp19 = _Function_1_2::Block(this,tmp16,tmp18,tmp14);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(65)
	::mint::Control tmp20 = ::mint::Control_obj::__new(tmp19,null());		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(65)
	this->scrollv = tmp20;
	HX_STACK_LINE(73)
	::String tmp21 = this->name;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(73)
	::String tmp22 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(73)
	::String tmp23 = (tmp22 + HX_HCSTRING(".scroll_h","\xa4","\xe6","\xb5","\x73"));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(75)
	Dynamic tmp24 = this->options;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(75)
	Dynamic tmp25 = tmp24->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(76)
	Float tmp26 = this->h;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(76)
	Float tmp27 = (tmp26 - (int)8);		HX_STACK_VAR(tmp27,"tmp27");
	struct _Function_1_3{
		inline static Dynamic Block( hx::ObjectPtr< ::mint::Scroll_obj > __this,::String &tmp23,Dynamic &tmp25,Float &tmp27){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/Scroll.hx",72,0x5235bfc4)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed") , ((::mint::Control)(__this)),false);
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp23,false);
				__result->Add(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a") , true,false);
				__result->Add(HX_HCSTRING("internal_visible","\x30","\x3e","\x18","\xd0") , tmp25,false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp27,false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , ((Dynamic)((int)16)),false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , ((Dynamic)((int)8)),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(72)
	Dynamic tmp28 = _Function_1_3::Block(this,tmp23,tmp25,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(72)
	::mint::Control tmp29 = ::mint::Control_obj::__new(tmp28,null());		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(72)
	this->scrollh = tmp29;
	HX_STACK_LINE(79)
	::mint::Control tmp30 = this->container;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(79)
	Dynamic tmp31 = tmp30->get_children_bounds();		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(79)
	this->child_bounds = tmp31;
	HX_STACK_LINE(81)
	::mint::Control tmp32 = this->container;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(81)
	tmp32->set_clip_with(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(82)
	::mint::Control tmp33 = this->scrollv;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(82)
	tmp33->set_clip_with(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(83)
	::mint::Control tmp34 = this->scrollh;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(83)
	tmp34->set_clip_with(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(85)
	this->ready = true;
	HX_STACK_LINE(87)
	::mint::Control tmp35 = this->scrollv;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(87)
	Dynamic tmp36 = this->scrollvdown_dyn();		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(87)
	tmp35->onmousedown->listen(tmp36);
	HX_STACK_LINE(88)
	::mint::Control tmp37 = this->scrollv;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(88)
	Dynamic tmp38 = this->scrollvup_dyn();		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(88)
	tmp37->onmouseup->listen(tmp38);
	HX_STACK_LINE(89)
	::mint::Control tmp39 = this->scrollv;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(89)
	Dynamic tmp40 = this->scrollvmove_dyn();		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(89)
	tmp39->onmousemove->listen(tmp40);
	HX_STACK_LINE(91)
	::mint::Control tmp41 = this->scrollh;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(91)
	Dynamic tmp42 = this->scrollhdown_dyn();		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(91)
	tmp41->onmousedown->listen(tmp42);
	HX_STACK_LINE(92)
	::mint::Control tmp43 = this->scrollh;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(92)
	Dynamic tmp44 = this->scrollhup_dyn();		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(92)
	tmp43->onmouseup->listen(tmp44);
	HX_STACK_LINE(93)
	::mint::Control tmp45 = this->scrollh;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(93)
	Dynamic tmp46 = this->scrollhmove_dyn();		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(93)
	tmp45->onmousemove->listen(tmp46);
	HX_STACK_LINE(95)
	::mint::render::Rendering tmp47 = this->rendering;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(95)
	::mint::render::Renderer tmp48 = tmp47->get(hx::ClassOf< ::mint::Scroll >(),hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(95)
	this->renderer = tmp48;
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(97)
		::mint::core::Signal tmp49 = this->oncreate;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(51)
		int tmp50 = tmp49->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(51)
		int _count = tmp50;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			bool tmp51 = (_idx < _count);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(52)
			bool tmp52 = !(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(52)
			if ((tmp52)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(97)
			::mint::core::Signal tmp53 = this->oncreate;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(53)
			Dynamic tmp54 = tmp53->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(53)
			Dynamic fn = tmp54;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp55 = (fn != null());		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(54)
			if ((tmp55)){
				HX_STACK_LINE(55)
				fn().Cast< Void >();
			}
			HX_STACK_LINE(57)
			(_idx)++;
		}
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp51 = (_count > (int)0);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(60)
			bool tmp52 = !(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(60)
			if ((tmp52)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(97)
			::mint::core::Signal tmp53 = this->oncreate;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(61)
			int tmp54 = (_count - (int)1);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(61)
			Dynamic tmp55 = tmp53->listeners->__GetItem(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(61)
			Dynamic fn = tmp55;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(62)
			bool tmp56 = (fn == null());		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(62)
			if ((tmp56)){
				HX_STACK_LINE(97)
				::mint::core::Signal tmp57 = this->oncreate;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(62)
				int tmp58 = (_count - (int)1);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(62)
				tmp57->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp58,(int)1);
			}
			HX_STACK_LINE(63)
			(_count)--;
		}
	}
}
;
	return null();
}

//Scroll_obj::~Scroll_obj() { }

Dynamic Scroll_obj::__CreateEmpty() { return  new Scroll_obj; }
hx::ObjectPtr< Scroll_obj > Scroll_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Scroll_obj > _result_ = new Scroll_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic Scroll_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Scroll_obj > _result_ = new Scroll_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Scroll_obj::set_scroll_percent( Dynamic _horizontal,Dynamic _vertical){
{
		HX_STACK_FRAME("mint.Scroll","set_scroll_percent",0x1d7beb65,"mint.Scroll.set_scroll_percent","mint/Scroll.hx",101,0x5235bfc4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_horizontal,"_horizontal")
		HX_STACK_ARG(_vertical,"_vertical")
		HX_STACK_LINE(103)
		Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(103)
		{
			HX_STACK_LINE(103)
			bool tmp1 = (_vertical == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(103)
			if ((tmp1)){
				HX_STACK_LINE(103)
				Float tmp2 = this->percent_v;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(103)
				_vertical = tmp2;
			}
			HX_STACK_LINE(103)
			tmp = _vertical;
		}
		HX_STACK_LINE(103)
		this->percent_v = tmp;
		HX_STACK_LINE(104)
		Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			bool tmp2 = (_horizontal == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(104)
			if ((tmp2)){
				HX_STACK_LINE(104)
				Float tmp3 = this->percent_h;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(104)
				_horizontal = tmp3;
			}
			HX_STACK_LINE(104)
			tmp1 = _horizontal;
		}
		HX_STACK_LINE(104)
		this->percent_h = tmp1;
		HX_STACK_LINE(106)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(106)
		{
			HX_STACK_LINE(106)
			Float tmp3 = this->percent_v;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(106)
			Float value = tmp3;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(106)
			bool tmp4 = (value < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(106)
			if ((tmp4)){
				HX_STACK_LINE(106)
				tmp2 = (int)0;
			}
			else{
				HX_STACK_LINE(106)
				bool tmp5 = (value > (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(106)
				if ((tmp5)){
					HX_STACK_LINE(106)
					tmp2 = (int)1;
				}
				else{
					HX_STACK_LINE(106)
					tmp2 = value;
				}
			}
		}
		HX_STACK_LINE(106)
		this->percent_v = tmp2;
		HX_STACK_LINE(107)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(107)
		{
			HX_STACK_LINE(107)
			Float tmp4 = this->percent_h;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(107)
			Float value = tmp4;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(107)
			bool tmp5 = (value < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(107)
			if ((tmp5)){
				HX_STACK_LINE(107)
				tmp3 = (int)0;
			}
			else{
				HX_STACK_LINE(107)
				bool tmp6 = (value > (int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(107)
				if ((tmp6)){
					HX_STACK_LINE(107)
					tmp3 = (int)1;
				}
				else{
					HX_STACK_LINE(107)
					tmp3 = value;
				}
			}
		}
		HX_STACK_LINE(107)
		this->percent_h = tmp3;
		HX_STACK_LINE(109)
		this->update_scroll();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scroll_obj,set_scroll_percent,(void))

Void Scroll_obj::update_container( ){
{
		HX_STACK_FRAME("mint.Scroll","update_container",0xb25c93e0,"mint.Scroll.update_container","mint/Scroll.hx",113,0x5235bfc4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(115)
		bool tmp = this->ready;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(115)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(115)
		if ((tmp1)){
			HX_STACK_LINE(115)
			return null();
		}
		HX_STACK_LINE(117)
		::mint::Control tmp2 = this->container;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(117)
		Dynamic tmp3 = tmp2->get_children_bounds();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(117)
		this->child_bounds = tmp3;
		HX_STACK_LINE(119)
		::mint::Control tmp4 = this->container;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(119)
		Dynamic tmp5 = this->child_bounds;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(119)
		Float tmp6 = tmp5->__Field(HX_HCSTRING("real_w","\x16","\xb2","\x97","\xfc"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(119)
		tmp4->set_w(tmp6);
		HX_STACK_LINE(120)
		::mint::Control tmp7 = this->container;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(120)
		Dynamic tmp8 = this->child_bounds;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(120)
		Float tmp9 = tmp8->__Field(HX_HCSTRING("real_h","\x07","\xb2","\x97","\xfc"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(120)
		tmp7->set_h(tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scroll_obj,update_container,(void))

Void Scroll_obj::scrollvdown( Dynamic e,::mint::Control _){
{
		HX_STACK_FRAME("mint.Scroll","scrollvdown",0x6fb39536,"mint.Scroll.scrollvdown","mint/Scroll.hx",128,0x5235bfc4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(130)
		bool tmp = this->visible_v;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(130)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(130)
		if ((tmp1)){
			HX_STACK_LINE(130)
			return null();
		}
		HX_STACK_LINE(132)
		this->drag_v = true;
		HX_STACK_LINE(133)
		int tmp2 = e->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(133)
		::mint::Control tmp3 = this->scrollv;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(133)
		Float tmp4 = tmp3->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(133)
		Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(133)
		this->drag_y = tmp5;
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			::mint::Control tmp6 = this->scrollv;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(134)
			::mint::Control _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				bool tmp7 = (_this->destroyed == false);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(134)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(134)
				if ((tmp8)){
					HX_STACK_LINE(134)
					::String tmp9 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _this->name);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(134)
					::String tmp10 = (tmp9 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(134)
					::String tmp11 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(134)
					::String tmp12 = (tmp11 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(134)
					::String tmp13 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(134)
					::mint::core::DebugError tmp14 = ::mint::core::DebugError_obj::assertion(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(134)
					HX_STACK_DO_THROW(tmp14);
				}
			}
			HX_STACK_LINE(134)
			bool tmp7 = (_this->canvas == _this);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(134)
			if ((tmp7)){
				HX_STACK_LINE(134)
				Dynamic();
			}
			else{
				HX_STACK_LINE(134)
				::mint::Control tmp8 = _this->canvas->get_captured();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(134)
				::mint::Control tmp9 = _this;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(134)
				bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(134)
				bool _pre = tmp10;		HX_STACK_VAR(_pre,"_pre");
				HX_STACK_LINE(134)
				::mint::Control tmp11 = _this;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(134)
				_this->canvas->set_captured(tmp11);
				HX_STACK_LINE(134)
				bool tmp12 = _pre;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(134)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(134)
				if ((tmp13)){
					HX_STACK_LINE(134)
					int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
					HX_STACK_LINE(134)
					int tmp14 = _this->oncaptured->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(134)
					int _count = tmp14;		HX_STACK_VAR(_count,"_count");
					HX_STACK_LINE(134)
					while((true)){
						HX_STACK_LINE(134)
						bool tmp15 = (_idx < _count);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(134)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(134)
						if ((tmp16)){
							HX_STACK_LINE(134)
							break;
						}
						HX_STACK_LINE(134)
						Dynamic tmp17 = _this->oncaptured->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(134)
						Dynamic fn = tmp17;		HX_STACK_VAR(fn,"fn");
						HX_STACK_LINE(134)
						bool tmp18 = (fn != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(134)
						if ((tmp18)){
							HX_STACK_LINE(134)
							fn(true).Cast< Void >();
						}
						HX_STACK_LINE(134)
						(_idx)++;
					}
					HX_STACK_LINE(134)
					while((true)){
						HX_STACK_LINE(134)
						bool tmp15 = (_count > (int)0);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(134)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(134)
						if ((tmp16)){
							HX_STACK_LINE(134)
							break;
						}
						HX_STACK_LINE(134)
						int tmp17 = (_count - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(134)
						Dynamic tmp18 = _this->oncaptured->listeners->__GetItem(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(134)
						Dynamic fn = tmp18;		HX_STACK_VAR(fn,"fn");
						HX_STACK_LINE(134)
						bool tmp19 = (fn == null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(134)
						if ((tmp19)){
							HX_STACK_LINE(134)
							int tmp20 = (_count - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(134)
							_this->oncaptured->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp20,(int)1);
						}
						HX_STACK_LINE(134)
						(_count)--;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scroll_obj,scrollvdown,(void))

Void Scroll_obj::scrollvup( Dynamic e,::mint::Control _){
{
		HX_STACK_FRAME("mint.Scroll","scrollvup",0x35a7662f,"mint.Scroll.scrollvup","mint/Scroll.hx",138,0x5235bfc4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(140)
		this->drag_v = false;
		HX_STACK_LINE(141)
		{
			HX_STACK_LINE(141)
			::mint::Control tmp = this->scrollv;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(141)
			::mint::Control _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(141)
			{
				HX_STACK_LINE(141)
				bool tmp1 = (_this->destroyed == false);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(141)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(141)
				if ((tmp2)){
					HX_STACK_LINE(141)
					::String tmp3 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _this->name);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(141)
					::String tmp4 = (tmp3 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(141)
					::String tmp5 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(141)
					::String tmp6 = (tmp5 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(141)
					::String tmp7 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(141)
					::mint::core::DebugError tmp8 = ::mint::core::DebugError_obj::assertion(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(141)
					HX_STACK_DO_THROW(tmp8);
				}
			}
			HX_STACK_LINE(141)
			bool tmp1 = (_this->canvas == _this);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(141)
			if ((tmp1)){
				HX_STACK_LINE(141)
				Dynamic();
			}
			else{
				HX_STACK_LINE(141)
				::mint::Control tmp2 = _this->canvas->get_captured();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(141)
				::mint::Control tmp3 = _this;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(141)
				bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(141)
				if ((tmp4)){
					HX_STACK_LINE(141)
					_this->canvas->set_captured(null());
					HX_STACK_LINE(141)
					{
						HX_STACK_LINE(141)
						int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
						HX_STACK_LINE(141)
						int tmp5 = _this->oncaptured->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(141)
						int _count = tmp5;		HX_STACK_VAR(_count,"_count");
						HX_STACK_LINE(141)
						while((true)){
							HX_STACK_LINE(141)
							bool tmp6 = (_idx < _count);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(141)
							bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(141)
							if ((tmp7)){
								HX_STACK_LINE(141)
								break;
							}
							HX_STACK_LINE(141)
							Dynamic tmp8 = _this->oncaptured->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(141)
							Dynamic fn = tmp8;		HX_STACK_VAR(fn,"fn");
							HX_STACK_LINE(141)
							bool tmp9 = (fn != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(141)
							if ((tmp9)){
								HX_STACK_LINE(141)
								fn(false).Cast< Void >();
							}
							HX_STACK_LINE(141)
							(_idx)++;
						}
						HX_STACK_LINE(141)
						while((true)){
							HX_STACK_LINE(141)
							bool tmp6 = (_count > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(141)
							bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(141)
							if ((tmp7)){
								HX_STACK_LINE(141)
								break;
							}
							HX_STACK_LINE(141)
							int tmp8 = (_count - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(141)
							Dynamic tmp9 = _this->oncaptured->listeners->__GetItem(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(141)
							Dynamic fn = tmp9;		HX_STACK_VAR(fn,"fn");
							HX_STACK_LINE(141)
							bool tmp10 = (fn == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(141)
							if ((tmp10)){
								HX_STACK_LINE(141)
								int tmp11 = (_count - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(141)
								_this->oncaptured->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp11,(int)1);
							}
							HX_STACK_LINE(141)
							(_count)--;
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scroll_obj,scrollvup,(void))

Void Scroll_obj::scrollvmove( Dynamic e,::mint::Control _){
{
		HX_STACK_FRAME("mint.Scroll","scrollvmove",0x75a67fe5,"mint.Scroll.scrollvmove","mint/Scroll.hx",145,0x5235bfc4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(147)
		bool tmp = this->drag_v;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(147)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(147)
		if ((tmp)){
			HX_STACK_LINE(147)
			tmp1 = this->visible_v;
		}
		else{
			HX_STACK_LINE(147)
			tmp1 = false;
		}
		HX_STACK_LINE(147)
		if ((tmp1)){
			HX_STACK_LINE(149)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(149)
			{
				HX_STACK_LINE(149)
				int tmp3 = e->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(149)
				Float tmp4 = this->drag_y;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(149)
				Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(149)
				Float value = tmp5;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(149)
				Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(149)
				Float a = tmp6;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(149)
				Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(149)
				Float tmp8 = this->h;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(149)
				Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(149)
				::mint::Control tmp10 = this->scrollv;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(149)
				Float tmp11 = tmp10->h;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(149)
				Float tmp12 = (tmp9 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(149)
				Float b = tmp12;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(149)
				bool tmp13 = (value < a);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(149)
				if ((tmp13)){
					HX_STACK_LINE(149)
					tmp2 = a;
				}
				else{
					HX_STACK_LINE(149)
					bool tmp14 = (value > b);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(149)
					if ((tmp14)){
						HX_STACK_LINE(149)
						tmp2 = b;
					}
					else{
						HX_STACK_LINE(149)
						tmp2 = value;
					}
				}
			}
			HX_STACK_LINE(149)
			Float _dest = tmp2;		HX_STACK_VAR(_dest,"_dest");
			HX_STACK_LINE(150)
			Float tmp3 = _dest;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(150)
			Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(150)
			Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(150)
			Float tmp6 = this->h;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(150)
			::mint::Control tmp7 = this->scrollv;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(150)
			Float tmp8 = tmp7->h;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(150)
			Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(150)
			Float tmp10 = (Float(tmp5) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(150)
			this->percent_v = tmp10;
			HX_STACK_LINE(151)
			this->update_scroll();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scroll_obj,scrollvmove,(void))

Void Scroll_obj::scrollhdown( Dynamic e,::mint::Control _){
{
		HX_STACK_FRAME("mint.Scroll","scrollhdown",0x60177628,"mint.Scroll.scrollhdown","mint/Scroll.hx",159,0x5235bfc4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(161)
		bool tmp = this->visible_h;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(161)
		if ((tmp1)){
			HX_STACK_LINE(161)
			return null();
		}
		HX_STACK_LINE(163)
		this->drag_h = true;
		HX_STACK_LINE(164)
		int tmp2 = e->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		::mint::Control tmp3 = this->scrollh;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(164)
		Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(164)
		Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(164)
		this->drag_x = tmp5;
		HX_STACK_LINE(165)
		{
			HX_STACK_LINE(165)
			::mint::Control tmp6 = this->scrollh;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(165)
			::mint::Control _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(165)
			{
				HX_STACK_LINE(165)
				bool tmp7 = (_this->destroyed == false);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(165)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(165)
				if ((tmp8)){
					HX_STACK_LINE(165)
					::String tmp9 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _this->name);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(165)
					::String tmp10 = (tmp9 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(165)
					::String tmp11 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(165)
					::String tmp12 = (tmp11 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(165)
					::String tmp13 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(165)
					::mint::core::DebugError tmp14 = ::mint::core::DebugError_obj::assertion(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(165)
					HX_STACK_DO_THROW(tmp14);
				}
			}
			HX_STACK_LINE(165)
			bool tmp7 = (_this->canvas == _this);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(165)
			if ((tmp7)){
				HX_STACK_LINE(165)
				Dynamic();
			}
			else{
				HX_STACK_LINE(165)
				::mint::Control tmp8 = _this->canvas->get_captured();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(165)
				::mint::Control tmp9 = _this;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(165)
				bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(165)
				bool _pre = tmp10;		HX_STACK_VAR(_pre,"_pre");
				HX_STACK_LINE(165)
				::mint::Control tmp11 = _this;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(165)
				_this->canvas->set_captured(tmp11);
				HX_STACK_LINE(165)
				bool tmp12 = _pre;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(165)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(165)
				if ((tmp13)){
					HX_STACK_LINE(165)
					int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
					HX_STACK_LINE(165)
					int tmp14 = _this->oncaptured->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(165)
					int _count = tmp14;		HX_STACK_VAR(_count,"_count");
					HX_STACK_LINE(165)
					while((true)){
						HX_STACK_LINE(165)
						bool tmp15 = (_idx < _count);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(165)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(165)
						if ((tmp16)){
							HX_STACK_LINE(165)
							break;
						}
						HX_STACK_LINE(165)
						Dynamic tmp17 = _this->oncaptured->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(165)
						Dynamic fn = tmp17;		HX_STACK_VAR(fn,"fn");
						HX_STACK_LINE(165)
						bool tmp18 = (fn != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(165)
						if ((tmp18)){
							HX_STACK_LINE(165)
							fn(true).Cast< Void >();
						}
						HX_STACK_LINE(165)
						(_idx)++;
					}
					HX_STACK_LINE(165)
					while((true)){
						HX_STACK_LINE(165)
						bool tmp15 = (_count > (int)0);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(165)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(165)
						if ((tmp16)){
							HX_STACK_LINE(165)
							break;
						}
						HX_STACK_LINE(165)
						int tmp17 = (_count - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(165)
						Dynamic tmp18 = _this->oncaptured->listeners->__GetItem(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(165)
						Dynamic fn = tmp18;		HX_STACK_VAR(fn,"fn");
						HX_STACK_LINE(165)
						bool tmp19 = (fn == null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(165)
						if ((tmp19)){
							HX_STACK_LINE(165)
							int tmp20 = (_count - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(165)
							_this->oncaptured->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp20,(int)1);
						}
						HX_STACK_LINE(165)
						(_count)--;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scroll_obj,scrollhdown,(void))

Void Scroll_obj::scrollhup( Dynamic e,::mint::Control _){
{
		HX_STACK_FRAME("mint.Scroll","scrollhup",0x359cc6a1,"mint.Scroll.scrollhup","mint/Scroll.hx",169,0x5235bfc4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(171)
		this->drag_h = false;
		HX_STACK_LINE(172)
		{
			HX_STACK_LINE(172)
			::mint::Control tmp = this->scrollh;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(172)
			::mint::Control _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(172)
			{
				HX_STACK_LINE(172)
				bool tmp1 = (_this->destroyed == false);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(172)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(172)
				if ((tmp2)){
					HX_STACK_LINE(172)
					::String tmp3 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _this->name);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(172)
					::String tmp4 = (tmp3 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(172)
					::String tmp5 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(172)
					::String tmp6 = (tmp5 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(172)
					::String tmp7 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(172)
					::mint::core::DebugError tmp8 = ::mint::core::DebugError_obj::assertion(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(172)
					HX_STACK_DO_THROW(tmp8);
				}
			}
			HX_STACK_LINE(172)
			bool tmp1 = (_this->canvas == _this);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(172)
			if ((tmp1)){
				HX_STACK_LINE(172)
				Dynamic();
			}
			else{
				HX_STACK_LINE(172)
				::mint::Control tmp2 = _this->canvas->get_captured();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(172)
				::mint::Control tmp3 = _this;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(172)
				bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(172)
				if ((tmp4)){
					HX_STACK_LINE(172)
					_this->canvas->set_captured(null());
					HX_STACK_LINE(172)
					{
						HX_STACK_LINE(172)
						int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
						HX_STACK_LINE(172)
						int tmp5 = _this->oncaptured->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(172)
						int _count = tmp5;		HX_STACK_VAR(_count,"_count");
						HX_STACK_LINE(172)
						while((true)){
							HX_STACK_LINE(172)
							bool tmp6 = (_idx < _count);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(172)
							bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(172)
							if ((tmp7)){
								HX_STACK_LINE(172)
								break;
							}
							HX_STACK_LINE(172)
							Dynamic tmp8 = _this->oncaptured->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(172)
							Dynamic fn = tmp8;		HX_STACK_VAR(fn,"fn");
							HX_STACK_LINE(172)
							bool tmp9 = (fn != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(172)
							if ((tmp9)){
								HX_STACK_LINE(172)
								fn(false).Cast< Void >();
							}
							HX_STACK_LINE(172)
							(_idx)++;
						}
						HX_STACK_LINE(172)
						while((true)){
							HX_STACK_LINE(172)
							bool tmp6 = (_count > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(172)
							bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(172)
							if ((tmp7)){
								HX_STACK_LINE(172)
								break;
							}
							HX_STACK_LINE(172)
							int tmp8 = (_count - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(172)
							Dynamic tmp9 = _this->oncaptured->listeners->__GetItem(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(172)
							Dynamic fn = tmp9;		HX_STACK_VAR(fn,"fn");
							HX_STACK_LINE(172)
							bool tmp10 = (fn == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(172)
							if ((tmp10)){
								HX_STACK_LINE(172)
								int tmp11 = (_count - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(172)
								_this->oncaptured->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp11,(int)1);
							}
							HX_STACK_LINE(172)
							(_count)--;
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scroll_obj,scrollhup,(void))

Void Scroll_obj::scrollhmove( Dynamic e,::mint::Control _){
{
		HX_STACK_FRAME("mint.Scroll","scrollhmove",0x660a60d7,"mint.Scroll.scrollhmove","mint/Scroll.hx",176,0x5235bfc4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(178)
		bool tmp = this->drag_h;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(178)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(178)
		if ((tmp)){
			HX_STACK_LINE(178)
			tmp1 = this->visible_h;
		}
		else{
			HX_STACK_LINE(178)
			tmp1 = false;
		}
		HX_STACK_LINE(178)
		if ((tmp1)){
			HX_STACK_LINE(180)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(180)
			{
				HX_STACK_LINE(180)
				int tmp3 = e->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(180)
				Float tmp4 = this->drag_x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(180)
				Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(180)
				Float value = tmp5;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(180)
				Float tmp6 = this->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(180)
				Float a = tmp6;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(180)
				Float tmp7 = this->x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(180)
				Float tmp8 = this->w;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(180)
				Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(180)
				::mint::Control tmp10 = this->scrollh;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(180)
				Float tmp11 = tmp10->w;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(180)
				Float tmp12 = (tmp9 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(180)
				Float b = tmp12;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(180)
				bool tmp13 = (value < a);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(180)
				if ((tmp13)){
					HX_STACK_LINE(180)
					tmp2 = a;
				}
				else{
					HX_STACK_LINE(180)
					bool tmp14 = (value > b);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(180)
					if ((tmp14)){
						HX_STACK_LINE(180)
						tmp2 = b;
					}
					else{
						HX_STACK_LINE(180)
						tmp2 = value;
					}
				}
			}
			HX_STACK_LINE(180)
			Float _dest = tmp2;		HX_STACK_VAR(_dest,"_dest");
			HX_STACK_LINE(181)
			Float tmp3 = _dest;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(181)
			Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(181)
			Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(181)
			Float tmp6 = this->w;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(181)
			::mint::Control tmp7 = this->scrollh;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(181)
			Float tmp8 = tmp7->w;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(181)
			Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(181)
			Float tmp10 = (Float(tmp5) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(181)
			this->percent_h = tmp10;
			HX_STACK_LINE(182)
			this->update_scroll();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scroll_obj,scrollhmove,(void))

Void Scroll_obj::update_scroll( ){
{
		HX_STACK_FRAME("mint.Scroll","update_scroll",0x23a3f00e,"mint.Scroll.update_scroll","mint/Scroll.hx",190,0x5235bfc4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(192)
		bool tmp = this->ready;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(192)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		if ((tmp1)){
			HX_STACK_LINE(192)
			return null();
		}
		HX_STACK_LINE(199)
		Float tmp2 = this->h;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(199)
		::mint::Control tmp3 = this->container;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(199)
		Float tmp4 = tmp3->h;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(199)
		Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(199)
		Float _dy = tmp5;		HX_STACK_VAR(_dy,"_dy");
		HX_STACK_LINE(200)
		Float tmp6 = this->w;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(200)
		::mint::Control tmp7 = this->container;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(200)
		Float tmp8 = tmp7->w;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(200)
		Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(200)
		Float _dx = tmp9;		HX_STACK_VAR(_dx,"_dx");
		HX_STACK_LINE(202)
		bool tmp10 = (_dx < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(202)
		this->visible_h = tmp10;
		HX_STACK_LINE(203)
		bool tmp11 = (_dy < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(203)
		this->visible_v = tmp11;
		HX_STACK_LINE(205)
		bool tmp12 = (_dx >= (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(205)
		if ((tmp12)){
			HX_STACK_LINE(205)
			_dx = (int)0;
		}
		HX_STACK_LINE(206)
		bool tmp13 = (_dy >= (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(206)
		if ((tmp13)){
			HX_STACK_LINE(206)
			_dy = (int)0;
		}
		HX_STACK_LINE(208)
		::mint::Control tmp14 = this->container;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(208)
		Float tmp15 = this->x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(208)
		Float tmp16 = _dx;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(208)
		Float tmp17 = this->percent_h;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(208)
		Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(208)
		Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(208)
		tmp14->set_x(tmp19);
		HX_STACK_LINE(209)
		::mint::Control tmp20 = this->container;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(209)
		Float tmp21 = this->y;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(209)
		Float tmp22 = _dy;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(209)
		Float tmp23 = this->percent_v;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(209)
		Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(209)
		Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(209)
		tmp20->set_y(tmp25);
		HX_STACK_LINE(211)
		::mint::Control tmp26 = this->scrollh;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(211)
		Float tmp27 = this->x;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(211)
		Float tmp28 = this->percent_h;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(211)
		Float tmp29 = this->w;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(211)
		::mint::Control tmp30 = this->scrollh;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(211)
		Float tmp31 = tmp30->w;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(211)
		Float tmp32 = (tmp29 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(211)
		Float tmp33 = (tmp28 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(211)
		Float tmp34 = (tmp27 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(211)
		tmp26->set_x(tmp34);
		HX_STACK_LINE(212)
		::mint::Control tmp35 = this->scrollv;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(212)
		Float tmp36 = this->y;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(212)
		Float tmp37 = this->percent_v;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(212)
		Float tmp38 = this->h;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(212)
		::mint::Control tmp39 = this->scrollv;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(212)
		Float tmp40 = tmp39->h;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(212)
		Float tmp41 = (tmp38 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(212)
		Float tmp42 = (tmp37 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(212)
		Float tmp43 = (tmp36 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(212)
		tmp35->set_y(tmp43);
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(50)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(214)
			::mint::core::Signal tmp44 = this->onchange;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(51)
			int tmp45 = tmp44->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(51)
			int _count = tmp45;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp46 = (_idx < _count);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(52)
				bool tmp47 = !(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(52)
				if ((tmp47)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(214)
				::mint::core::Signal tmp48 = this->onchange;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(53)
				Dynamic tmp49 = tmp48->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(53)
				Dynamic fn = tmp49;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(54)
				bool tmp50 = (fn != null());		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(54)
				if ((tmp50)){
					HX_STACK_LINE(55)
					fn().Cast< Void >();
				}
				HX_STACK_LINE(57)
				(_idx)++;
			}
			HX_STACK_LINE(60)
			while((true)){
				HX_STACK_LINE(60)
				bool tmp46 = (_count > (int)0);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(60)
				bool tmp47 = !(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(60)
				if ((tmp47)){
					HX_STACK_LINE(60)
					break;
				}
				HX_STACK_LINE(214)
				::mint::core::Signal tmp48 = this->onchange;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(61)
				int tmp49 = (_count - (int)1);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(61)
				Dynamic tmp50 = tmp48->listeners->__GetItem(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(61)
				Dynamic fn = tmp50;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(62)
				bool tmp51 = (fn == null());		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(62)
				if ((tmp51)){
					HX_STACK_LINE(214)
					::mint::core::Signal tmp52 = this->onchange;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(62)
					int tmp53 = (_count - (int)1);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(62)
					tmp52->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp53,(int)1);
				}
				HX_STACK_LINE(63)
				(_count)--;
			}
		}
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(50)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(215)
			::mint::core::Signal tmp44 = this->onhandlevis;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(51)
			int tmp45 = tmp44->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(51)
			int _count = tmp45;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp46 = (_idx < _count);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(52)
				bool tmp47 = !(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(52)
				if ((tmp47)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(215)
				::mint::core::Signal tmp48 = this->onhandlevis;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(53)
				Dynamic tmp49 = tmp48->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(53)
				Dynamic fn = tmp49;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(54)
				bool tmp50 = (fn != null());		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(54)
				if ((tmp50)){
					HX_STACK_LINE(215)
					bool tmp51 = this->visible_h;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(215)
					bool tmp52 = this->visible_v;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(55)
					fn(tmp51,tmp52).Cast< Void >();
				}
				HX_STACK_LINE(57)
				(_idx)++;
			}
			HX_STACK_LINE(60)
			while((true)){
				HX_STACK_LINE(60)
				bool tmp46 = (_count > (int)0);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(60)
				bool tmp47 = !(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(60)
				if ((tmp47)){
					HX_STACK_LINE(60)
					break;
				}
				HX_STACK_LINE(215)
				::mint::core::Signal tmp48 = this->onhandlevis;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(61)
				int tmp49 = (_count - (int)1);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(61)
				Dynamic tmp50 = tmp48->listeners->__GetItem(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(61)
				Dynamic fn = tmp50;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(62)
				bool tmp51 = (fn == null());		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(62)
				if ((tmp51)){
					HX_STACK_LINE(215)
					::mint::core::Signal tmp52 = this->onhandlevis;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(62)
					int tmp53 = (_count - (int)1);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(62)
					tmp52->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp53,(int)1);
				}
				HX_STACK_LINE(63)
				(_count)--;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scroll_obj,update_scroll,(void))

Float Scroll_obj::get_step_h( ){
	HX_STACK_FRAME("mint.Scroll","get_step_h",0x94b85f13,"mint.Scroll.get_step_h","mint/Scroll.hx",219,0x5235bfc4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(219)
	return ((Float)0.01);
}


HX_DEFINE_DYNAMIC_FUNC0(Scroll_obj,get_step_h,return )

Float Scroll_obj::get_step_v( ){
	HX_STACK_FRAME("mint.Scroll","get_step_v",0x94b85f21,"mint.Scroll.get_step_v","mint/Scroll.hx",220,0x5235bfc4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(220)
	return ((Float)0.01);
}


HX_DEFINE_DYNAMIC_FUNC0(Scroll_obj,get_step_v,return )

Void Scroll_obj::destroy( ){
{
		HX_STACK_FRAME("mint.Scroll","destroy",0xc5879c05,"mint.Scroll.destroy","mint/Scroll.hx",224,0x5235bfc4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(227)
		this->ready = false;
		HX_STACK_LINE(229)
		this->super::destroy();
		HX_STACK_LINE(231)
		{
			HX_STACK_LINE(231)
			::mint::core::Signal tmp = this->onchange;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(231)
			::mint::core::Signal _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(231)
			_this->listeners = null();
			HX_STACK_LINE(231)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(232)
		this->onchange = null();
		HX_STACK_LINE(233)
		{
			HX_STACK_LINE(233)
			::mint::core::Signal tmp = this->onhandlevis;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(233)
			::mint::core::Signal _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(233)
			_this->listeners = null();
			HX_STACK_LINE(233)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(234)
		this->onhandlevis = null();
	}
return null();
}


Void Scroll_obj::add( ::mint::Control child){
{
		HX_STACK_FRAME("mint.Scroll","add",0x1bee3fac,"mint.Scroll.add","mint/Scroll.hx",238,0x5235bfc4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_LINE(241)
		bool tmp = this->ready;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(241)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(241)
		if ((tmp1)){
			HX_STACK_LINE(243)
			::mint::Control tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(243)
			this->super::add(tmp2);
		}
		else{
			HX_STACK_LINE(247)
			::mint::Control tmp2 = this->container;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(247)
			::mint::Control tmp3 = child;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(247)
			tmp2->add(tmp3);
			HX_STACK_LINE(249)
			this->refresh_scroll();
			HX_STACK_LINE(251)
			child->set_clip_with(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


Void Scroll_obj::refresh_scroll( ){
{
		HX_STACK_FRAME("mint.Scroll","refresh_scroll",0xa3652986,"mint.Scroll.refresh_scroll","mint/Scroll.hx",258,0x5235bfc4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(260)
		this->update_container();
		HX_STACK_LINE(261)
		this->update_scroll();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scroll_obj,refresh_scroll,(void))

Void Scroll_obj::remove( ::mint::Control child){
{
		HX_STACK_FRAME("mint.Scroll","remove",0x08b31799,"mint.Scroll.remove","mint/Scroll.hx",265,0x5235bfc4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_LINE(267)
		::mint::Control tmp = child;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(267)
		this->super::remove(tmp);
		HX_STACK_LINE(269)
		this->refresh_scroll();
	}
return null();
}


Void Scroll_obj::mousewheel( Dynamic e){
{
		HX_STACK_FRAME("mint.Scroll","mousewheel",0xefed022b,"mint.Scroll.mousewheel","mint/Scroll.hx",273,0x5235bfc4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(275)
		Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(275)
		this->super::mousewheel(tmp);
		HX_STACK_LINE(277)
		bool tmp1 = (e->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ) != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(277)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(277)
		if ((tmp1)){
			HX_STACK_LINE(277)
			tmp2 = this->visible_h;
		}
		else{
			HX_STACK_LINE(277)
			tmp2 = false;
		}
		HX_STACK_LINE(277)
		if ((tmp2)){
			HX_STACK_LINE(278)
			Float tmp3 = this->percent_h;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(278)
			Float tmp4 = (e->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ) * ((Float)0.01));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(278)
			Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(278)
			Float tmp6 = this->percent_v;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(278)
			this->set_scroll_percent(tmp5,tmp6);
		}
		HX_STACK_LINE(281)
		bool tmp3 = (e->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ) != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(281)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(281)
		if ((tmp3)){
			HX_STACK_LINE(281)
			tmp4 = this->visible_v;
		}
		else{
			HX_STACK_LINE(281)
			tmp4 = false;
		}
		HX_STACK_LINE(281)
		if ((tmp4)){
			HX_STACK_LINE(282)
			Float tmp5 = this->percent_h;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(282)
			Float tmp6 = this->percent_v;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(282)
			Float tmp7 = (e->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ) * ((Float)0.01));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(282)
			Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(282)
			this->set_scroll_percent(tmp5,tmp8);
		}
	}
return null();
}


Void Scroll_obj::bounds_changed( hx::Null< Float >  __o__dx,hx::Null< Float >  __o__dy,hx::Null< Float >  __o__dw,hx::Null< Float >  __o__dh){
Float _dx = __o__dx.Default(((Float)0.0));
Float _dy = __o__dy.Default(((Float)0.0));
Float _dw = __o__dw.Default(((Float)0.0));
Float _dh = __o__dh.Default(((Float)0.0));
	HX_STACK_FRAME("mint.Scroll","bounds_changed",0x5cb2e63f,"mint.Scroll.bounds_changed","mint/Scroll.hx",287,0x5235bfc4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_dx,"_dx")
	HX_STACK_ARG(_dy,"_dy")
	HX_STACK_ARG(_dw,"_dw")
	HX_STACK_ARG(_dh,"_dh")
{
		HX_STACK_LINE(289)
		Float tmp = _dx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(289)
		Float tmp1 = _dy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(289)
		Float tmp2 = _dw;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(289)
		Float tmp3 = _dh;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(289)
		this->super::bounds_changed(tmp,tmp1,tmp2,tmp3);
		HX_STACK_LINE(291)
		this->refresh_scroll();
		HX_STACK_LINE(293)
		::mint::Control tmp4 = this->scrollh;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(293)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(293)
		if ((tmp5)){
			HX_STACK_LINE(293)
			::mint::Control tmp6 = this->scrollh;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(293)
			Float tmp7 = this->h;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(293)
			Float tmp8 = (tmp7 - (int)8);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(293)
			tmp6->set_y_local(tmp8);
		}
		HX_STACK_LINE(294)
		::mint::Control tmp6 = this->scrollv;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(294)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(294)
		if ((tmp7)){
			HX_STACK_LINE(294)
			::mint::Control tmp8 = this->scrollv;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(294)
			Float tmp9 = this->w;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(294)
			Float tmp10 = (tmp9 - (int)8);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(294)
			tmp8->set_x_local(tmp10);
		}
	}
return null();
}



Scroll_obj::Scroll_obj()
{
}

void Scroll_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scroll);
	HX_MARK_MEMBER_NAME(scrollh,"scrollh");
	HX_MARK_MEMBER_NAME(scrollv,"scrollv");
	HX_MARK_MEMBER_NAME(container,"container");
	HX_MARK_MEMBER_NAME(child_bounds,"child_bounds");
	HX_MARK_MEMBER_NAME(onchange,"onchange");
	HX_MARK_MEMBER_NAME(onhandlevis,"onhandlevis");
	HX_MARK_MEMBER_NAME(drag_v,"drag_v");
	HX_MARK_MEMBER_NAME(drag_y,"drag_y");
	HX_MARK_MEMBER_NAME(percent_v,"percent_v");
	HX_MARK_MEMBER_NAME(visible_v,"visible_v");
	HX_MARK_MEMBER_NAME(drag_h,"drag_h");
	HX_MARK_MEMBER_NAME(drag_x,"drag_x");
	HX_MARK_MEMBER_NAME(percent_h,"percent_h");
	HX_MARK_MEMBER_NAME(visible_h,"visible_h");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(ready,"ready");
	::mint::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Scroll_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(scrollh,"scrollh");
	HX_VISIT_MEMBER_NAME(scrollv,"scrollv");
	HX_VISIT_MEMBER_NAME(container,"container");
	HX_VISIT_MEMBER_NAME(child_bounds,"child_bounds");
	HX_VISIT_MEMBER_NAME(onchange,"onchange");
	HX_VISIT_MEMBER_NAME(onhandlevis,"onhandlevis");
	HX_VISIT_MEMBER_NAME(drag_v,"drag_v");
	HX_VISIT_MEMBER_NAME(drag_y,"drag_y");
	HX_VISIT_MEMBER_NAME(percent_v,"percent_v");
	HX_VISIT_MEMBER_NAME(visible_v,"visible_v");
	HX_VISIT_MEMBER_NAME(drag_h,"drag_h");
	HX_VISIT_MEMBER_NAME(drag_x,"drag_x");
	HX_VISIT_MEMBER_NAME(percent_h,"percent_h");
	HX_VISIT_MEMBER_NAME(visible_h,"visible_h");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(ready,"ready");
	::mint::Control_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Scroll_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ready") ) { return ready; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"drag_v") ) { return drag_v; }
		if (HX_FIELD_EQ(inName,"drag_y") ) { return drag_y; }
		if (HX_FIELD_EQ(inName,"drag_h") ) { return drag_h; }
		if (HX_FIELD_EQ(inName,"drag_x") ) { return drag_x; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollh") ) { return scrollh; }
		if (HX_FIELD_EQ(inName,"scrollv") ) { return scrollv; }
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onchange") ) { return onchange; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"container") ) { return container; }
		if (HX_FIELD_EQ(inName,"percent_v") ) { return percent_v; }
		if (HX_FIELD_EQ(inName,"visible_v") ) { return visible_v; }
		if (HX_FIELD_EQ(inName,"percent_h") ) { return percent_h; }
		if (HX_FIELD_EQ(inName,"visible_h") ) { return visible_h; }
		if (HX_FIELD_EQ(inName,"scrollvup") ) { return scrollvup_dyn(); }
		if (HX_FIELD_EQ(inName,"scrollhup") ) { return scrollhup_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_step_h") ) { return get_step_h_dyn(); }
		if (HX_FIELD_EQ(inName,"get_step_v") ) { return get_step_v_dyn(); }
		if (HX_FIELD_EQ(inName,"mousewheel") ) { return mousewheel_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onhandlevis") ) { return onhandlevis; }
		if (HX_FIELD_EQ(inName,"scrollvdown") ) { return scrollvdown_dyn(); }
		if (HX_FIELD_EQ(inName,"scrollvmove") ) { return scrollvmove_dyn(); }
		if (HX_FIELD_EQ(inName,"scrollhdown") ) { return scrollhdown_dyn(); }
		if (HX_FIELD_EQ(inName,"scrollhmove") ) { return scrollhmove_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"child_bounds") ) { return child_bounds; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"update_scroll") ) { return update_scroll_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"refresh_scroll") ) { return refresh_scroll_dyn(); }
		if (HX_FIELD_EQ(inName,"bounds_changed") ) { return bounds_changed_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"update_container") ) { return update_container_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_scroll_percent") ) { return set_scroll_percent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Scroll_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ready") ) { ready=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"drag_v") ) { drag_v=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drag_y") ) { drag_y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drag_h") ) { drag_h=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drag_x") ) { drag_x=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollh") ) { scrollh=inValue.Cast< ::mint::Control >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollv") ) { scrollv=inValue.Cast< ::mint::Control >(); return inValue; }
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onchange") ) { onchange=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"container") ) { container=inValue.Cast< ::mint::Control >(); return inValue; }
		if (HX_FIELD_EQ(inName,"percent_v") ) { percent_v=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible_v") ) { visible_v=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"percent_h") ) { percent_h=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible_h") ) { visible_h=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onhandlevis") ) { onhandlevis=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"child_bounds") ) { child_bounds=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Scroll_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("scrollh","\xbb","\x33","\xd8","\x30"));
	outFields->push(HX_HCSTRING("scrollv","\xc9","\x33","\xd8","\x30"));
	outFields->push(HX_HCSTRING("container","\x41","\x75","\x73","\xbf"));
	outFields->push(HX_HCSTRING("child_bounds","\xf8","\x99","\x0f","\xd0"));
	outFields->push(HX_HCSTRING("onchange","\xcf","\x13","\x8b","\x62"));
	outFields->push(HX_HCSTRING("onhandlevis","\x39","\x1e","\xec","\x2a"));
	outFields->push(HX_HCSTRING("drag_v","\x2b","\x64","\xca","\xdf"));
	outFields->push(HX_HCSTRING("drag_y","\x2e","\x64","\xca","\xdf"));
	outFields->push(HX_HCSTRING("percent_v","\x3c","\xf9","\xee","\x64"));
	outFields->push(HX_HCSTRING("visible_v","\x29","\x4c","\x89","\x0f"));
	outFields->push(HX_HCSTRING("drag_h","\x1d","\x64","\xca","\xdf"));
	outFields->push(HX_HCSTRING("drag_x","\x2d","\x64","\xca","\xdf"));
	outFields->push(HX_HCSTRING("percent_h","\x2e","\xf9","\xee","\x64"));
	outFields->push(HX_HCSTRING("visible_h","\x1b","\x4c","\x89","\x0f"));
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	outFields->push(HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::mint::Control*/ ,(int)offsetof(Scroll_obj,scrollh),HX_HCSTRING("scrollh","\xbb","\x33","\xd8","\x30")},
	{hx::fsObject /*::mint::Control*/ ,(int)offsetof(Scroll_obj,scrollv),HX_HCSTRING("scrollv","\xc9","\x33","\xd8","\x30")},
	{hx::fsObject /*::mint::Control*/ ,(int)offsetof(Scroll_obj,container),HX_HCSTRING("container","\x41","\x75","\x73","\xbf")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Scroll_obj,child_bounds),HX_HCSTRING("child_bounds","\xf8","\x99","\x0f","\xd0")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Scroll_obj,onchange),HX_HCSTRING("onchange","\xcf","\x13","\x8b","\x62")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Scroll_obj,onhandlevis),HX_HCSTRING("onhandlevis","\x39","\x1e","\xec","\x2a")},
	{hx::fsBool,(int)offsetof(Scroll_obj,drag_v),HX_HCSTRING("drag_v","\x2b","\x64","\xca","\xdf")},
	{hx::fsFloat,(int)offsetof(Scroll_obj,drag_y),HX_HCSTRING("drag_y","\x2e","\x64","\xca","\xdf")},
	{hx::fsFloat,(int)offsetof(Scroll_obj,percent_v),HX_HCSTRING("percent_v","\x3c","\xf9","\xee","\x64")},
	{hx::fsBool,(int)offsetof(Scroll_obj,visible_v),HX_HCSTRING("visible_v","\x29","\x4c","\x89","\x0f")},
	{hx::fsBool,(int)offsetof(Scroll_obj,drag_h),HX_HCSTRING("drag_h","\x1d","\x64","\xca","\xdf")},
	{hx::fsFloat,(int)offsetof(Scroll_obj,drag_x),HX_HCSTRING("drag_x","\x2d","\x64","\xca","\xdf")},
	{hx::fsFloat,(int)offsetof(Scroll_obj,percent_h),HX_HCSTRING("percent_h","\x2e","\xf9","\xee","\x64")},
	{hx::fsBool,(int)offsetof(Scroll_obj,visible_h),HX_HCSTRING("visible_h","\x1b","\x4c","\x89","\x0f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Scroll_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
	{hx::fsBool,(int)offsetof(Scroll_obj,ready),HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("scrollh","\xbb","\x33","\xd8","\x30"),
	HX_HCSTRING("scrollv","\xc9","\x33","\xd8","\x30"),
	HX_HCSTRING("container","\x41","\x75","\x73","\xbf"),
	HX_HCSTRING("child_bounds","\xf8","\x99","\x0f","\xd0"),
	HX_HCSTRING("onchange","\xcf","\x13","\x8b","\x62"),
	HX_HCSTRING("onhandlevis","\x39","\x1e","\xec","\x2a"),
	HX_HCSTRING("drag_v","\x2b","\x64","\xca","\xdf"),
	HX_HCSTRING("drag_y","\x2e","\x64","\xca","\xdf"),
	HX_HCSTRING("percent_v","\x3c","\xf9","\xee","\x64"),
	HX_HCSTRING("visible_v","\x29","\x4c","\x89","\x0f"),
	HX_HCSTRING("drag_h","\x1d","\x64","\xca","\xdf"),
	HX_HCSTRING("drag_x","\x2d","\x64","\xca","\xdf"),
	HX_HCSTRING("percent_h","\x2e","\xf9","\xee","\x64"),
	HX_HCSTRING("visible_h","\x1b","\x4c","\x89","\x0f"),
	HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"),
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	HX_HCSTRING("set_scroll_percent","\x90","\x44","\x1b","\xdd"),
	HX_HCSTRING("update_container","\x4b","\xbc","\x50","\x6e"),
	HX_HCSTRING("scrollvdown","\xab","\x44","\x66","\xea"),
	HX_HCSTRING("scrollvup","\x64","\xde","\x23","\x3e"),
	HX_HCSTRING("scrollvmove","\x5a","\x2f","\x59","\xf0"),
	HX_HCSTRING("scrollhdown","\x9d","\x25","\xca","\xda"),
	HX_HCSTRING("scrollhup","\xd6","\x3e","\x19","\x3e"),
	HX_HCSTRING("scrollhmove","\x4c","\x10","\xbd","\xe0"),
	HX_HCSTRING("update_scroll","\xc3","\x26","\xf9","\xb3"),
	HX_HCSTRING("get_step_h","\x3e","\x15","\x25","\xf9"),
	HX_HCSTRING("get_step_v","\x4c","\x15","\x25","\xf9"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("refresh_scroll","\x31","\xd1","\x9f","\x5d"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("mousewheel","\x56","\xb8","\x59","\x54"),
	HX_HCSTRING("bounds_changed","\xea","\x8d","\xed","\x16"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Scroll_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Scroll_obj::__mClass,"__mClass");
};

#endif

hx::Class Scroll_obj::__mClass;

void Scroll_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mint.Scroll","\x79","\x4c","\xaa","\x40");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Scroll_obj >;
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
