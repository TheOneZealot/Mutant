#include <hxcpp.h>

#ifndef INCLUDED_mint_Canvas
#include <mint/Canvas.h>
#endif
#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
#endif
#ifndef INCLUDED_mint_Label
#include <mint/Label.h>
#endif
#ifndef INCLUDED_mint_Window
#include <mint/Window.h>
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

Void Window_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("mint.Window","new",0xe90f074e,"mint.Window.new","mint/Window.hx",35,0xaa6053c1)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(169)
	this->pre_resize = true;
	HX_STACK_LINE(168)
	this->pre_h_min = ((Float)0.0);
	HX_STACK_LINE(167)
	this->pre_h = ((Float)0.0);
	HX_STACK_LINE(166)
	this->collapsed = false;
	HX_STACK_LINE(140)
	this->resize_y = ((Float)0.0);
	HX_STACK_LINE(139)
	this->resize_x = ((Float)0.0);
	HX_STACK_LINE(138)
	this->resizing = false;
	HX_STACK_LINE(56)
	this->ready = false;
	HX_STACK_LINE(53)
	this->drag_y = ((Float)0);
	HX_STACK_LINE(52)
	this->drag_x = ((Float)0);
	HX_STACK_LINE(51)
	this->dragging = false;
	HX_STACK_LINE(46)
	this->collapsible = false;
	HX_STACK_LINE(45)
	this->resizable = true;
	HX_STACK_LINE(44)
	this->moveable = true;
	HX_STACK_LINE(43)
	this->focusable = true;
	HX_STACK_LINE(42)
	this->closable = true;
	HX_STACK_LINE(60)
	this->options = _options;
	HX_STACK_LINE(61)
	::mint::core::Signal tmp = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	this->onclose = tmp;
	HX_STACK_LINE(62)
	::mint::core::Signal tmp1 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	this->oncollapse = tmp1;
	HX_STACK_LINE(64)
	{
		HX_STACK_LINE(64)
		Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		::String tmp3 = tmp2->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(64)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(64)
		if ((tmp4)){
			HX_STACK_LINE(64)
			Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(64)
			tmp5->__FieldRef(HX_HCSTRING("name","\x4b","\x72","\xff","\x48")) = HX_HCSTRING("window","\xf0","\x93","\x8c","\x52");
		}
		HX_STACK_LINE(64)
		Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(64)
		tmp5->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
	}
	HX_STACK_LINE(65)
	{
		HX_STACK_LINE(65)
		Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		Dynamic tmp3 = tmp2->__Field(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(65)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(65)
		if ((tmp4)){
			HX_STACK_LINE(65)
			Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(65)
			tmp5->__FieldRef(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a")) = true;
		}
		HX_STACK_LINE(65)
		Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(65)
		tmp5->__Field(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a"), hx::paccDynamic );
	}
	HX_STACK_LINE(67)
	Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(67)
	super::__construct(tmp2,null());
	HX_STACK_LINE(69)
	Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(69)
	{
		HX_STACK_LINE(69)
		Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(69)
		Dynamic tmp5 = tmp4->__Field(HX_HCSTRING("moveable","\x2b","\xad","\x46","\xf8"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(69)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(69)
		if ((tmp6)){
			HX_STACK_LINE(69)
			Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(69)
			tmp7->__FieldRef(HX_HCSTRING("moveable","\x2b","\xad","\x46","\xf8")) = true;
		}
		HX_STACK_LINE(69)
		Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(69)
		tmp3 = tmp7->__Field(HX_HCSTRING("moveable","\x2b","\xad","\x46","\xf8"), hx::paccDynamic );
	}
	HX_STACK_LINE(69)
	this->moveable = tmp3;
	HX_STACK_LINE(70)
	Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(70)
	{
		HX_STACK_LINE(70)
		Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(70)
		Dynamic tmp6 = tmp5->__Field(HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(70)
		bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(70)
		if ((tmp7)){
			HX_STACK_LINE(70)
			Dynamic tmp8 = this->options;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(70)
			tmp8->__FieldRef(HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9")) = true;
		}
		HX_STACK_LINE(70)
		Dynamic tmp8 = this->options;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(70)
		tmp4 = tmp8->__Field(HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9"), hx::paccDynamic );
	}
	HX_STACK_LINE(70)
	this->resizable = tmp4;
	HX_STACK_LINE(71)
	Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(71)
	{
		HX_STACK_LINE(71)
		Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(71)
		Dynamic tmp7 = tmp6->__Field(HX_HCSTRING("closable","\x27","\x6c","\xaa","\x82"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(71)
		bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(71)
		if ((tmp8)){
			HX_STACK_LINE(71)
			Dynamic tmp9 = this->options;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(71)
			tmp9->__FieldRef(HX_HCSTRING("closable","\x27","\x6c","\xaa","\x82")) = true;
		}
		HX_STACK_LINE(71)
		Dynamic tmp9 = this->options;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(71)
		tmp5 = tmp9->__Field(HX_HCSTRING("closable","\x27","\x6c","\xaa","\x82"), hx::paccDynamic );
	}
	HX_STACK_LINE(71)
	this->closable = tmp5;
	HX_STACK_LINE(72)
	Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(72)
	{
		HX_STACK_LINE(72)
		Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(72)
		Dynamic tmp8 = tmp7->__Field(HX_HCSTRING("focusable","\x72","\x99","\x1a","\x2d"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(72)
		bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(72)
		if ((tmp9)){
			HX_STACK_LINE(72)
			Dynamic tmp10 = this->options;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(72)
			tmp10->__FieldRef(HX_HCSTRING("focusable","\x72","\x99","\x1a","\x2d")) = true;
		}
		HX_STACK_LINE(72)
		Dynamic tmp10 = this->options;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(72)
		tmp6 = tmp10->__Field(HX_HCSTRING("focusable","\x72","\x99","\x1a","\x2d"), hx::paccDynamic );
	}
	HX_STACK_LINE(72)
	this->focusable = tmp6;
	HX_STACK_LINE(73)
	Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(73)
	{
		HX_STACK_LINE(73)
		Dynamic tmp8 = this->options;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(73)
		Dynamic tmp9 = tmp8->__Field(HX_HCSTRING("collapsible","\x8a","\x26","\xcf","\x5b"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(73)
		bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(73)
		if ((tmp10)){
			HX_STACK_LINE(73)
			Dynamic tmp11 = this->options;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(73)
			tmp11->__FieldRef(HX_HCSTRING("collapsible","\x8a","\x26","\xcf","\x5b")) = false;
		}
		HX_STACK_LINE(73)
		Dynamic tmp11 = this->options;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(73)
		tmp7 = tmp11->__Field(HX_HCSTRING("collapsible","\x8a","\x26","\xcf","\x5b"), hx::paccDynamic );
	}
	HX_STACK_LINE(73)
	this->collapsible = tmp7;
	HX_STACK_LINE(77)
	Float tmp8 = this->w;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(77)
	Float tmp9 = (tmp8 - (int)24);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(77)
	Float tmp10 = this->h;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(77)
	Float tmp11 = (tmp10 - (int)24);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(78)
	::String tmp12 = this->name;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(78)
	::String tmp13 = (tmp12 + HX_HCSTRING(".resize_handle","\xe5","\x1c","\x40","\xfc"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(79)
	Dynamic tmp14 = this->options;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(79)
	Dynamic tmp15 = tmp14->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
	struct _Function_1_1{
		inline static Dynamic Block( hx::ObjectPtr< ::mint::Window_obj > __this,::String &tmp13,Float &tmp9,Float &tmp11,Dynamic &tmp15){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/Window.hx",75,0xaa6053c1)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed") , ((::mint::Control)(__this)),false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp9,false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp11,false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , ((Dynamic)((int)24)),false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , ((Dynamic)((int)24)),false);
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp13,false);
				__result->Add(HX_HCSTRING("internal_visible","\x30","\x3e","\x18","\xd0") , tmp15,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(75)
	Dynamic tmp16 = _Function_1_1::Block(this,tmp13,tmp9,tmp11,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(75)
	::mint::Control tmp17 = ::mint::Control_obj::__new(tmp16,null());		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(75)
	this->resize_handle = tmp17;
	HX_STACK_LINE(82)
	bool tmp18 = this->resizable;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(82)
	::mint::Control tmp19 = this->resize_handle;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(82)
	tmp19->mouse_input = tmp18;
	HX_STACK_LINE(83)
	::mint::Control tmp20 = this->resize_handle;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(83)
	Dynamic tmp21 = this->on_resize_down_dyn();		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(83)
	tmp20->onmousedown->listen(tmp21);
	HX_STACK_LINE(84)
	::mint::Control tmp22 = this->resize_handle;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(84)
	Dynamic tmp23 = this->on_resize_up_dyn();		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(84)
	tmp22->onmouseup->listen(tmp23);
	HX_STACK_LINE(88)
	Float tmp24 = this->w;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(88)
	Float tmp25 = (tmp24 - (int)4);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(89)
	Dynamic tmp26 = this->options;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(89)
	::String tmp27 = tmp26->__Field(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(92)
	Dynamic tmp28 = this->options;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(92)
	Dynamic tmp29 = tmp28->__Field(HX_HCSTRING("text_size","\xd3","\xdc","\x24","\x05"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(93)
	Dynamic tmp30 = this->options;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(94)
	::String tmp31 = this->name;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(94)
	::String tmp32 = (tmp31 + HX_HCSTRING(".title","\xaa","\xae","\xa5","\x74"));		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(95)
	Dynamic tmp33 = this->options;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(95)
	Dynamic tmp34 = tmp33->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
	struct _Function_1_2{
		inline static Dynamic Block( hx::ObjectPtr< ::mint::Window_obj > __this,Dynamic &tmp34,Float &tmp25,::String &tmp27,Dynamic &tmp29,::String &tmp32,Dynamic &tmp30){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/Window.hx",86,0xaa6053c1)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed") , ((::mint::Control)(__this)),false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , ((Dynamic)((int)2)),false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , ((Dynamic)((int)2)),false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp25,false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , ((Dynamic)((int)22)),false);
				__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , tmp27,false);
				__result->Add(HX_HCSTRING("align","\xc5","\x56","\x91","\x21") , (int)3,false);
				__result->Add(HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53") , (int)3,false);
				__result->Add(HX_HCSTRING("text_size","\xd3","\xdc","\x24","\x05") , tmp29,false);
				__result->Add(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf") , tmp30->__Field(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"), hx::paccDynamic )->__Field(HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp32,false);
				__result->Add(HX_HCSTRING("internal_visible","\x30","\x3e","\x18","\xd0") , tmp34,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(86)
	Dynamic tmp35 = _Function_1_2::Block(this,tmp34,tmp25,tmp27,tmp29,tmp32,tmp30);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(86)
	::mint::Label tmp36 = ::mint::Label_obj::__new(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(86)
	this->title = tmp36;
	HX_STACK_LINE(100)
	Float tmp37 = this->w;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(100)
	Float tmp38 = (tmp37 - (int)24);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(101)
	::String tmp39 = this->name;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(101)
	::String tmp40 = (tmp39 + HX_HCSTRING(".close","\xca","\xb0","\xcd","\xac"));		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(102)
	Dynamic tmp41 = this->options;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(103)
	Dynamic tmp42 = this->options;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(103)
	Dynamic tmp43 = tmp42->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );		HX_STACK_VAR(tmp43,"tmp43");
	struct _Function_1_3{
		inline static Dynamic Block( hx::ObjectPtr< ::mint::Window_obj > __this,Float &tmp38,::String &tmp40,Dynamic &tmp41,Dynamic &tmp43){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/Window.hx",98,0xaa6053c1)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed") , ((::mint::Control)(__this)),false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp38,false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , ((Dynamic)((int)2)),false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , ((Dynamic)((int)22)),false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , ((Dynamic)((int)22)),false);
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp40,false);
				__result->Add(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf") , tmp41->__Field(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"), hx::paccDynamic )->__Field(HX_HCSTRING("close_handle","\x8f","\x64","\xf4","\xa4"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("internal_visible","\x30","\x3e","\x18","\xd0") , tmp43,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(98)
	Dynamic tmp44 = _Function_1_3::Block(this,tmp38,tmp40,tmp41,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(98)
	::mint::Control tmp45 = ::mint::Control_obj::__new(tmp44,null());		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(98)
	this->close_handle = tmp45;
	HX_STACK_LINE(107)
	this->ready = true;
	HX_STACK_LINE(108)
	bool tmp46 = this->closable;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(108)
	::mint::Control tmp47 = this->close_handle;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(108)
	tmp47->mouse_input = tmp46;
	HX_STACK_LINE(110)
	bool tmp48 = this->closable;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(110)
	bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(110)
	if ((tmp49)){
		HX_STACK_LINE(111)
		::mint::Control tmp50 = this->close_handle;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(111)
		tmp50->set_visible(false);
	}
	else{
		HX_STACK_LINE(113)
		::mint::Control tmp50 = this->close_handle;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(113)
		Dynamic tmp51 = this->on_close_dyn();		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(113)
		tmp50->onmousedown->listen(tmp51);
	}
	HX_STACK_LINE(118)
	bool tmp50 = this->closable;		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(118)
	Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(118)
	if ((tmp50)){
		HX_STACK_LINE(118)
		Float tmp52 = this->w;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(118)
		tmp51 = (tmp52 - (int)48);
	}
	else{
		HX_STACK_LINE(118)
		Float tmp52 = this->w;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(118)
		tmp51 = (tmp52 - (int)24);
	}
	HX_STACK_LINE(119)
	::String tmp52 = this->name;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(119)
	::String tmp53 = (tmp52 + HX_HCSTRING(".collapse","\x9b","\x2f","\xf6","\xab"));		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(120)
	Dynamic tmp54 = this->options;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(121)
	Dynamic tmp55 = this->options;		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(121)
	Dynamic tmp56 = tmp55->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );		HX_STACK_VAR(tmp56,"tmp56");
	struct _Function_1_4{
		inline static Dynamic Block( hx::ObjectPtr< ::mint::Window_obj > __this,Dynamic &tmp54,Dynamic &tmp56,Dynamic &tmp51,::String &tmp53){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/Window.hx",116,0xaa6053c1)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed") , ((::mint::Control)(__this)),false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp51,false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , ((Dynamic)((int)2)),false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , ((Dynamic)((int)22)),false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , ((Dynamic)((int)22)),false);
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp53,false);
				__result->Add(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf") , tmp54->__Field(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"), hx::paccDynamic )->__Field(HX_HCSTRING("collapse_handle","\x7a","\xfb","\x15","\x9f"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("internal_visible","\x30","\x3e","\x18","\xd0") , tmp56,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(116)
	Dynamic tmp57 = _Function_1_4::Block(this,tmp54,tmp56,tmp51,tmp53);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(116)
	::mint::Control tmp58 = ::mint::Control_obj::__new(tmp57,null());		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(116)
	this->collapse_handle = tmp58;
	HX_STACK_LINE(124)
	bool tmp59 = this->collapsible;		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(124)
	::mint::Control tmp60 = this->collapse_handle;		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(124)
	tmp60->mouse_input = tmp59;
	HX_STACK_LINE(126)
	bool tmp61 = this->collapsible;		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(126)
	bool tmp62 = !(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(126)
	if ((tmp62)){
		HX_STACK_LINE(127)
		::mint::Control tmp63 = this->collapse_handle;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(127)
		tmp63->set_visible(false);
	}
	else{
		HX_STACK_LINE(129)
		::mint::Control tmp63 = this->collapse_handle;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(129)
		Dynamic tmp64 = this->on_collapse_dyn();		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(129)
		tmp63->onmousedown->listen(tmp64);
	}
	HX_STACK_LINE(132)
	::mint::render::Rendering tmp63 = this->rendering;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(132)
	::mint::render::Renderer tmp64 = tmp63->get(hx::ClassOf< ::mint::Window >(),hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(132)
	this->renderer = tmp64;
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(134)
		::mint::core::Signal tmp65 = this->oncreate;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(51)
		int tmp66 = tmp65->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(51)
		int _count = tmp66;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			bool tmp67 = (_idx < _count);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(52)
			bool tmp68 = !(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(52)
			if ((tmp68)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(134)
			::mint::core::Signal tmp69 = this->oncreate;		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(53)
			Dynamic tmp70 = tmp69->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(53)
			Dynamic fn = tmp70;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp71 = (fn != null());		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(54)
			if ((tmp71)){
				HX_STACK_LINE(55)
				fn().Cast< Void >();
			}
			HX_STACK_LINE(57)
			(_idx)++;
		}
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp67 = (_count > (int)0);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(60)
			bool tmp68 = !(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(60)
			if ((tmp68)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(134)
			::mint::core::Signal tmp69 = this->oncreate;		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(61)
			int tmp70 = (_count - (int)1);		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(61)
			Dynamic tmp71 = tmp69->listeners->__GetItem(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(61)
			Dynamic fn = tmp71;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(62)
			bool tmp72 = (fn == null());		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(62)
			if ((tmp72)){
				HX_STACK_LINE(134)
				::mint::core::Signal tmp73 = this->oncreate;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(62)
				int tmp74 = (_count - (int)1);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(62)
				tmp73->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp74,(int)1);
			}
			HX_STACK_LINE(63)
			(_count)--;
		}
	}
}
;
	return null();
}

//Window_obj::~Window_obj() { }

Dynamic Window_obj::__CreateEmpty() { return  new Window_obj; }
hx::ObjectPtr< Window_obj > Window_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Window_obj > _result_ = new Window_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic Window_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Window_obj > _result_ = new Window_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Window_obj::on_resize_up( Dynamic e,::mint::Control _){
{
		HX_STACK_FRAME("mint.Window","on_resize_up",0x0b9167f8,"mint.Window.on_resize_up","mint/Window.hx",142,0xaa6053c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(144)
		bool tmp = this->resizable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(144)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(144)
		if ((tmp1)){
			HX_STACK_LINE(144)
			return null();
		}
		HX_STACK_LINE(145)
		bool tmp2 = this->collapsed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(145)
		if ((tmp2)){
			HX_STACK_LINE(145)
			return null();
		}
		HX_STACK_LINE(147)
		this->resizing = false;
		HX_STACK_LINE(148)
		{
			HX_STACK_LINE(148)
			::mint::Control tmp3 = this->resize_handle;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(148)
			::mint::Control _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(148)
			{
				HX_STACK_LINE(148)
				bool tmp4 = (_this->destroyed == false);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(148)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(148)
				if ((tmp5)){
					HX_STACK_LINE(148)
					::String tmp6 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _this->name);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(148)
					::String tmp7 = (tmp6 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(148)
					::String tmp8 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(148)
					::String tmp9 = (tmp8 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(148)
					::String tmp10 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(148)
					::mint::core::DebugError tmp11 = ::mint::core::DebugError_obj::assertion(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(148)
					HX_STACK_DO_THROW(tmp11);
				}
			}
			HX_STACK_LINE(148)
			bool tmp4 = (_this->canvas == _this);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(148)
			if ((tmp4)){
				HX_STACK_LINE(148)
				Dynamic();
			}
			else{
				HX_STACK_LINE(148)
				::mint::Control tmp5 = _this->canvas->get_captured();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(148)
				::mint::Control tmp6 = _this;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(148)
				bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(148)
				if ((tmp7)){
					HX_STACK_LINE(148)
					_this->canvas->set_captured(null());
					HX_STACK_LINE(148)
					{
						HX_STACK_LINE(148)
						int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
						HX_STACK_LINE(148)
						int tmp8 = _this->oncaptured->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(148)
						int _count = tmp8;		HX_STACK_VAR(_count,"_count");
						HX_STACK_LINE(148)
						while((true)){
							HX_STACK_LINE(148)
							bool tmp9 = (_idx < _count);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(148)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(148)
							if ((tmp10)){
								HX_STACK_LINE(148)
								break;
							}
							HX_STACK_LINE(148)
							Dynamic tmp11 = _this->oncaptured->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(148)
							Dynamic fn = tmp11;		HX_STACK_VAR(fn,"fn");
							HX_STACK_LINE(148)
							bool tmp12 = (fn != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(148)
							if ((tmp12)){
								HX_STACK_LINE(148)
								fn(false).Cast< Void >();
							}
							HX_STACK_LINE(148)
							(_idx)++;
						}
						HX_STACK_LINE(148)
						while((true)){
							HX_STACK_LINE(148)
							bool tmp9 = (_count > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(148)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(148)
							if ((tmp10)){
								HX_STACK_LINE(148)
								break;
							}
							HX_STACK_LINE(148)
							int tmp11 = (_count - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(148)
							Dynamic tmp12 = _this->oncaptured->listeners->__GetItem(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(148)
							Dynamic fn = tmp12;		HX_STACK_VAR(fn,"fn");
							HX_STACK_LINE(148)
							bool tmp13 = (fn == null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(148)
							if ((tmp13)){
								HX_STACK_LINE(148)
								int tmp14 = (_count - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(148)
								_this->oncaptured->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp14,(int)1);
							}
							HX_STACK_LINE(148)
							(_count)--;
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,on_resize_up,(void))

Void Window_obj::on_resize_down( Dynamic e,::mint::Control _){
{
		HX_STACK_FRAME("mint.Window","on_resize_down",0x15785b3f,"mint.Window.on_resize_down","mint/Window.hx",152,0xaa6053c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(154)
		bool tmp = this->resizable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(154)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(154)
		if ((tmp1)){
			HX_STACK_LINE(154)
			return null();
		}
		HX_STACK_LINE(155)
		bool tmp2 = this->collapsed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(155)
		if ((tmp2)){
			HX_STACK_LINE(155)
			return null();
		}
		HX_STACK_LINE(156)
		bool tmp3 = this->resizing;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(156)
		if ((tmp3)){
			HX_STACK_LINE(156)
			return null();
		}
		HX_STACK_LINE(158)
		this->resizing = true;
		HX_STACK_LINE(159)
		this->resize_x = e->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );
		HX_STACK_LINE(160)
		this->resize_y = e->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );
		HX_STACK_LINE(161)
		{
			HX_STACK_LINE(161)
			::mint::Control tmp4 = this->resize_handle;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(161)
			::mint::Control _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(161)
			{
				HX_STACK_LINE(161)
				bool tmp5 = (_this->destroyed == false);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(161)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(161)
				if ((tmp6)){
					HX_STACK_LINE(161)
					::String tmp7 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _this->name);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(161)
					::String tmp8 = (tmp7 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(161)
					::String tmp9 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(161)
					::String tmp10 = (tmp9 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(161)
					::String tmp11 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(161)
					::mint::core::DebugError tmp12 = ::mint::core::DebugError_obj::assertion(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(161)
					HX_STACK_DO_THROW(tmp12);
				}
			}
			HX_STACK_LINE(161)
			bool tmp5 = (_this->canvas == _this);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(161)
			if ((tmp5)){
				HX_STACK_LINE(161)
				Dynamic();
			}
			else{
				HX_STACK_LINE(161)
				::mint::Control tmp6 = _this->canvas->get_captured();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(161)
				::mint::Control tmp7 = _this;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(161)
				bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(161)
				bool _pre = tmp8;		HX_STACK_VAR(_pre,"_pre");
				HX_STACK_LINE(161)
				::mint::Control tmp9 = _this;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(161)
				_this->canvas->set_captured(tmp9);
				HX_STACK_LINE(161)
				bool tmp10 = _pre;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(161)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(161)
				if ((tmp11)){
					HX_STACK_LINE(161)
					int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
					HX_STACK_LINE(161)
					int tmp12 = _this->oncaptured->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(161)
					int _count = tmp12;		HX_STACK_VAR(_count,"_count");
					HX_STACK_LINE(161)
					while((true)){
						HX_STACK_LINE(161)
						bool tmp13 = (_idx < _count);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(161)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(161)
						if ((tmp14)){
							HX_STACK_LINE(161)
							break;
						}
						HX_STACK_LINE(161)
						Dynamic tmp15 = _this->oncaptured->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(161)
						Dynamic fn = tmp15;		HX_STACK_VAR(fn,"fn");
						HX_STACK_LINE(161)
						bool tmp16 = (fn != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(161)
						if ((tmp16)){
							HX_STACK_LINE(161)
							fn(true).Cast< Void >();
						}
						HX_STACK_LINE(161)
						(_idx)++;
					}
					HX_STACK_LINE(161)
					while((true)){
						HX_STACK_LINE(161)
						bool tmp13 = (_count > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(161)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(161)
						if ((tmp14)){
							HX_STACK_LINE(161)
							break;
						}
						HX_STACK_LINE(161)
						int tmp15 = (_count - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(161)
						Dynamic tmp16 = _this->oncaptured->listeners->__GetItem(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(161)
						Dynamic fn = tmp16;		HX_STACK_VAR(fn,"fn");
						HX_STACK_LINE(161)
						bool tmp17 = (fn == null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(161)
						if ((tmp17)){
							HX_STACK_LINE(161)
							int tmp18 = (_count - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(161)
							_this->oncaptured->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp18,(int)1);
						}
						HX_STACK_LINE(161)
						(_count)--;
					}
				}
			}
		}
		HX_STACK_LINE(162)
		e->__FieldRef(HX_HCSTRING("bubble","\x8c","\xdf","\xec","\xcd")) = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,on_resize_down,(void))

Void Window_obj::on_collapse( Dynamic e,::mint::Control _){
{
		HX_STACK_FRAME("mint.Window","on_collapse",0x30ec20bb,"mint.Window.on_collapse","mint/Window.hx",171,0xaa6053c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(173)
		bool tmp = this->collapsible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(173)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(173)
		if ((tmp1)){
			HX_STACK_LINE(173)
			return null();
		}
		HX_STACK_LINE(175)
		bool tmp2 = this->collapsed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(175)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(175)
		this->collapsed = tmp3;
		HX_STACK_LINE(177)
		bool tmp4 = this->collapsed;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(177)
		bool tmp5 = (tmp4 == true);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(177)
		if ((tmp5)){
			HX_STACK_LINE(178)
			::mint::Control tmp6 = this->resize_handle;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(178)
			this->pre_resize = tmp6->visible;
			HX_STACK_LINE(179)
			Float tmp7 = this->h;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(179)
			this->pre_h = tmp7;
			HX_STACK_LINE(180)
			Float tmp8 = this->h_min;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(180)
			this->pre_h_min = tmp8;
			HX_STACK_LINE(182)
			{
				HX_STACK_LINE(182)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(182)
				Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(182)
				while((true)){
					HX_STACK_LINE(182)
					bool tmp9 = (_g < _g1->length);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(182)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(182)
					if ((tmp10)){
						HX_STACK_LINE(182)
						break;
					}
					HX_STACK_LINE(182)
					::mint::Control tmp11 = _g1->__get(_g).StaticCast< ::mint::Control >();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(182)
					::mint::Control child = tmp11;		HX_STACK_VAR(child,"child");
					HX_STACK_LINE(182)
					++(_g);
					HX_STACK_LINE(183)
					::mint::Control tmp12 = child;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(183)
					::mint::Label tmp13 = this->title;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(183)
					bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(183)
					if ((tmp14)){
						HX_STACK_LINE(183)
						continue;
					}
					HX_STACK_LINE(184)
					::mint::Control tmp15 = child;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(184)
					::mint::Control tmp16 = this->collapse_handle;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(184)
					bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(184)
					if ((tmp17)){
						HX_STACK_LINE(184)
						continue;
					}
					HX_STACK_LINE(185)
					::mint::Control tmp18 = child;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(185)
					::mint::Control tmp19 = this->close_handle;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(185)
					bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(185)
					if ((tmp20)){
						HX_STACK_LINE(185)
						continue;
					}
					HX_STACK_LINE(186)
					{
						HX_STACK_LINE(186)
						{
							HX_STACK_LINE(186)
							bool tmp21 = (child->destroyed == false);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(186)
							bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(186)
							if ((tmp22)){
								HX_STACK_LINE(186)
								::String tmp23 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + child->name);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(186)
								::String tmp24 = (tmp23 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(186)
								::String tmp25 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(186)
								::String tmp26 = (tmp25 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(186)
								::String tmp27 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(186)
								::mint::core::DebugError tmp28 = ::mint::core::DebugError_obj::assertion(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(186)
								HX_STACK_DO_THROW(tmp28);
							}
						}
						HX_STACK_LINE(186)
						child->update_vis_state = false;
						HX_STACK_LINE(186)
						child->set_visible(false);
						HX_STACK_LINE(186)
						child->update_vis_state = true;
					}
				}
			}
			HX_STACK_LINE(189)
			::mint::Label tmp9 = this->title;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(189)
			Float tmp10 = tmp9->h;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(189)
			Float tmp11 = (tmp10 + (int)6);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(189)
			this->set_h_min(tmp11);
			HX_STACK_LINE(190)
			::mint::Label tmp12 = this->title;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(190)
			Float tmp13 = tmp12->h;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(190)
			this->set_h(tmp13);
		}
		else{
			HX_STACK_LINE(192)
			{
				HX_STACK_LINE(192)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(192)
				Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(192)
				while((true)){
					HX_STACK_LINE(192)
					bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(192)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(192)
					if ((tmp7)){
						HX_STACK_LINE(192)
						break;
					}
					HX_STACK_LINE(192)
					::mint::Control tmp8 = _g1->__get(_g).StaticCast< ::mint::Control >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(192)
					::mint::Control child = tmp8;		HX_STACK_VAR(child,"child");
					HX_STACK_LINE(192)
					++(_g);
					HX_STACK_LINE(193)
					::mint::Control tmp9 = child;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(193)
					::mint::Label tmp10 = this->title;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(193)
					bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(193)
					if ((tmp11)){
						HX_STACK_LINE(193)
						continue;
					}
					HX_STACK_LINE(194)
					::mint::Control tmp12 = child;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(194)
					::mint::Control tmp13 = this->collapse_handle;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(194)
					bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(194)
					if ((tmp14)){
						HX_STACK_LINE(194)
						continue;
					}
					HX_STACK_LINE(195)
					::mint::Control tmp15 = child;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(195)
					::mint::Control tmp16 = this->close_handle;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(195)
					bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(195)
					if ((tmp17)){
						HX_STACK_LINE(195)
						continue;
					}
					HX_STACK_LINE(196)
					{
						HX_STACK_LINE(196)
						{
							HX_STACK_LINE(196)
							bool tmp18 = (child->destroyed == false);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(196)
							bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(196)
							if ((tmp19)){
								HX_STACK_LINE(196)
								::String tmp20 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + child->name);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(196)
								::String tmp21 = (tmp20 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(196)
								::String tmp22 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(196)
								::String tmp23 = (tmp22 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(196)
								::String tmp24 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(196)
								::mint::core::DebugError tmp25 = ::mint::core::DebugError_obj::assertion(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(196)
								HX_STACK_DO_THROW(tmp25);
							}
						}
						HX_STACK_LINE(196)
						child->update_vis_state = false;
						HX_STACK_LINE(196)
						child->set_visible(true);
						HX_STACK_LINE(196)
						child->update_vis_state = true;
					}
				}
			}
			HX_STACK_LINE(199)
			Float tmp6 = this->pre_h_min;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(199)
			this->set_h_min(tmp6);
			HX_STACK_LINE(200)
			Float tmp7 = this->pre_h;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(200)
			this->set_h(tmp7);
		}
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(50)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(203)
			::mint::core::Signal tmp6 = this->oncollapse;		HX_STACK_VAR(tmp6,"tmp6");
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
				HX_STACK_LINE(203)
				::mint::core::Signal tmp10 = this->oncollapse;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(53)
				Dynamic tmp11 = tmp10->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(53)
				Dynamic fn = tmp11;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(54)
				bool tmp12 = (fn != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(54)
				if ((tmp12)){
					HX_STACK_LINE(203)
					bool tmp13 = this->collapsed;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(55)
					fn(tmp13).Cast< Void >();
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
				HX_STACK_LINE(203)
				::mint::core::Signal tmp10 = this->oncollapse;		HX_STACK_VAR(tmp10,"tmp10");
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
					HX_STACK_LINE(203)
					::mint::core::Signal tmp14 = this->oncollapse;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(62)
					int tmp15 = (_count - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(62)
					tmp14->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp15,(int)1);
				}
				HX_STACK_LINE(63)
				(_count)--;
			}
		}
		HX_STACK_LINE(204)
		e->__FieldRef(HX_HCSTRING("bubble","\x8c","\xdf","\xec","\xcd")) = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,on_collapse,(void))

Void Window_obj::on_close( Dynamic e,::mint::Control _){
{
		HX_STACK_FRAME("mint.Window","on_close",0xef33cbaa,"mint.Window.on_close","mint/Window.hx",208,0xaa6053c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(50)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(210)
			::mint::core::Signal tmp = this->onclose;		HX_STACK_VAR(tmp,"tmp");
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
				HX_STACK_LINE(210)
				::mint::core::Signal tmp4 = this->onclose;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(53)
				Dynamic tmp5 = tmp4->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(53)
				Dynamic fn = tmp5;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(54)
				bool tmp6 = (fn != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(54)
				if ((tmp6)){
					HX_STACK_LINE(55)
					fn().Cast< bool >();
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
				HX_STACK_LINE(210)
				::mint::core::Signal tmp4 = this->onclose;		HX_STACK_VAR(tmp4,"tmp4");
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
					HX_STACK_LINE(210)
					::mint::core::Signal tmp8 = this->onclose;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(62)
					int tmp9 = (_count - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(62)
					tmp8->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp9,(int)1);
				}
				HX_STACK_LINE(63)
				(_count)--;
			}
		}
		HX_STACK_LINE(212)
		bool tmp = this->closable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(212)
		if ((tmp)){
			HX_STACK_LINE(213)
			this->close();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,on_close,(void))

Void Window_obj::close( ){
{
		HX_STACK_FRAME("mint.Window","close",0x3f8c6626,"mint.Window.close","mint/Window.hx",220,0xaa6053c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(220)
		this->set_visible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,close,(void))

Void Window_obj::open( ){
{
		HX_STACK_FRAME("mint.Window","open",0x04c8dd1c,"mint.Window.open","mint/Window.hx",226,0xaa6053c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(226)
		this->set_visible(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,open,(void))

Void Window_obj::destroy( ){
{
		HX_STACK_FRAME("mint.Window","destroy",0x337272e8,"mint.Window.destroy","mint/Window.hx",230,0xaa6053c1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(232)
		this->super::destroy();
		HX_STACK_LINE(234)
		{
			HX_STACK_LINE(234)
			::mint::core::Signal tmp = this->onclose;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(234)
			::mint::core::Signal _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(234)
			_this->listeners = null();
			HX_STACK_LINE(234)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(235)
		this->onclose = null();
		HX_STACK_LINE(237)
		{
			HX_STACK_LINE(237)
			::mint::core::Signal tmp = this->oncollapse;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(237)
			::mint::core::Signal _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(237)
			_this->listeners = null();
			HX_STACK_LINE(237)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(238)
		this->oncollapse = null();
	}
return null();
}


Void Window_obj::add( ::mint::Control child){
{
		HX_STACK_FRAME("mint.Window","add",0xe905290f,"mint.Window.add","mint/Window.hx",242,0xaa6053c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_LINE(244)
		::mint::Control tmp = child;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(244)
		this->super::add(tmp);
		HX_STACK_LINE(247)
		bool tmp1 = this->ready;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(247)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(247)
		if ((tmp1)){
			HX_STACK_LINE(247)
			::mint::Control tmp3 = child;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(247)
			::mint::Control tmp4 = this->resize_handle;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(247)
			::mint::Control tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(247)
			tmp2 = (tmp3 != tmp5);
		}
		else{
			HX_STACK_LINE(247)
			tmp2 = false;
		}
		HX_STACK_LINE(247)
		if ((tmp2)){
			HX_STACK_LINE(248)
			::mint::Control tmp3 = this->resize_handle;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(248)
			this->add(tmp3);
		}
	}
return null();
}


Void Window_obj::mousemove( Dynamic e){
{
		HX_STACK_FRAME("mint.Window","mousemove",0xe0d88d24,"mint.Window.mousemove","mint/Window.hx",253,0xaa6053c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(255)
		bool tmp = this->resizing;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(255)
		if ((tmp)){
			HX_STACK_LINE(257)
			int tmp1 = e->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(257)
			Float tmp2 = this->resize_x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(257)
			Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(257)
			Float _dx = tmp3;		HX_STACK_VAR(_dx,"_dx");
			HX_STACK_LINE(258)
			int tmp4 = e->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(258)
			Float tmp5 = this->resize_y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(258)
			Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(258)
			Float _dy = tmp6;		HX_STACK_VAR(_dy,"_dy");
			HX_STACK_LINE(260)
			Float tmp7 = this->w;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(260)
			Float tmp8 = _dx;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(260)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(260)
			Float ww = tmp9;		HX_STACK_VAR(ww,"ww");
			HX_STACK_LINE(261)
			Float tmp10 = this->h;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(261)
			Float tmp11 = _dy;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(261)
			Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(261)
			Float hh = tmp12;		HX_STACK_VAR(hh,"hh");
			HX_STACK_LINE(263)
			bool resized = false;		HX_STACK_VAR(resized,"resized");
			HX_STACK_LINE(265)
			Float tmp13 = ww;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(265)
			Float tmp14 = this->w_min;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(265)
			bool tmp15 = (tmp13 >= tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(265)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(265)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(265)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(265)
			if ((tmp17)){
				HX_STACK_LINE(265)
				Float tmp19 = ww;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(265)
				Float tmp20 = this->w_max;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(265)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(265)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(265)
				tmp18 = (tmp19 <= tmp22);
			}
			else{
				HX_STACK_LINE(265)
				tmp18 = true;
			}
			HX_STACK_LINE(265)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(265)
			if ((tmp18)){
				HX_STACK_LINE(265)
				int tmp20 = e->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(265)
				Float tmp21 = this->x;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(265)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(265)
				tmp19 = (tmp20 >= tmp22);
			}
			else{
				HX_STACK_LINE(265)
				tmp19 = false;
			}
			HX_STACK_LINE(265)
			if ((tmp19)){
				HX_STACK_LINE(266)
				this->resize_x = e->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );
				HX_STACK_LINE(267)
				resized = true;
			}
			HX_STACK_LINE(270)
			Float tmp20 = hh;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(270)
			Float tmp21 = this->h_min;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(270)
			bool tmp22 = (tmp20 >= tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(270)
			bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(270)
			bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(270)
			bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(270)
			if ((tmp24)){
				HX_STACK_LINE(270)
				Float tmp26 = hh;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(270)
				Float tmp27 = this->h_max;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(270)
				Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(270)
				Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(270)
				tmp25 = (tmp26 <= tmp29);
			}
			else{
				HX_STACK_LINE(270)
				tmp25 = true;
			}
			HX_STACK_LINE(270)
			bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(270)
			if ((tmp25)){
				HX_STACK_LINE(270)
				int tmp27 = e->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(270)
				Float tmp28 = this->y;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(270)
				Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(270)
				tmp26 = (tmp27 >= tmp29);
			}
			else{
				HX_STACK_LINE(270)
				tmp26 = false;
			}
			HX_STACK_LINE(270)
			if ((tmp26)){
				HX_STACK_LINE(271)
				this->resize_y = e->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );
				HX_STACK_LINE(272)
				resized = true;
			}
			HX_STACK_LINE(275)
			bool tmp27 = resized;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(275)
			if ((tmp27)){
				HX_STACK_LINE(275)
				Float tmp28 = ww;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(275)
				Float tmp29 = hh;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(275)
				this->set_size(tmp28,tmp29);
			}
		}
		else{
			HX_STACK_LINE(277)
			bool tmp1 = this->dragging;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(277)
			if ((tmp1)){
				HX_STACK_LINE(279)
				int tmp2 = e->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(279)
				Float tmp3 = this->drag_x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(279)
				Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(279)
				Float _dx = tmp4;		HX_STACK_VAR(_dx,"_dx");
				HX_STACK_LINE(280)
				int tmp5 = e->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(280)
				Float tmp6 = this->drag_y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(280)
				Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(280)
				Float _dy = tmp7;		HX_STACK_VAR(_dy,"_dy");
				HX_STACK_LINE(282)
				this->drag_x = e->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );
				HX_STACK_LINE(283)
				this->drag_y = e->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );
				HX_STACK_LINE(285)
				Float tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(285)
				Float tmp9 = _dx;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(285)
				Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(285)
				Float tmp11 = this->y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(285)
				Float tmp12 = _dy;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(285)
				Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(285)
				this->set_pos(tmp10,tmp13);
			}
			else{
				HX_STACK_LINE(289)
				Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(289)
				this->super::mousemove(tmp2);
			}
		}
	}
return null();
}


Void Window_obj::mousedown( Dynamic e){
{
		HX_STACK_FRAME("mint.Window","mousedown",0xdae5a275,"mint.Window.mousedown","mint/Window.hx",296,0xaa6053c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(298)
		::mint::Control tmp = this->close_handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(298)
		int tmp1 = e->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(298)
		int tmp2 = e->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(298)
		int tmp3 = tmp1;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(298)
		int tmp4 = tmp2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(298)
		bool tmp5 = tmp->contains(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(298)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(298)
		if ((tmp5)){
			HX_STACK_LINE(298)
			tmp6 = this->closable;
		}
		else{
			HX_STACK_LINE(298)
			tmp6 = false;
		}
		HX_STACK_LINE(298)
		if ((tmp6)){
			HX_STACK_LINE(298)
			return null();
		}
		HX_STACK_LINE(299)
		::mint::Control tmp7 = this->collapse_handle;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(299)
		int tmp8 = e->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(299)
		int tmp9 = e->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(299)
		int tmp10 = tmp8;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(299)
		int tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(299)
		bool tmp12 = tmp7->contains(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(299)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(299)
		if ((tmp12)){
			HX_STACK_LINE(299)
			tmp13 = this->collapsible;
		}
		else{
			HX_STACK_LINE(299)
			tmp13 = false;
		}
		HX_STACK_LINE(299)
		if ((tmp13)){
			HX_STACK_LINE(299)
			return null();
		}
		HX_STACK_LINE(301)
		::mint::Label tmp14 = this->title;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(301)
		int tmp15 = e->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(301)
		int tmp16 = e->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(301)
		bool tmp17 = tmp14->contains(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(301)
		bool in_title = tmp17;		HX_STACK_VAR(in_title,"in_title");
		HX_STACK_LINE(303)
		bool tmp18 = in_title;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(303)
		bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(303)
		if ((tmp19)){
			HX_STACK_LINE(304)
			Dynamic tmp20 = e;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(304)
			this->super::mousedown(tmp20);
		}
		HX_STACK_LINE(307)
		bool tmp20 = this->focusable;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(307)
		if ((tmp20)){
			HX_STACK_LINE(308)
			::mint::Canvas tmp21 = this->canvas;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(308)
			tmp21->bring_to_front(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(311)
		bool tmp21 = this->moveable;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(311)
		bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(311)
		if ((tmp21)){
			HX_STACK_LINE(311)
			tmp22 = in_title;
		}
		else{
			HX_STACK_LINE(311)
			tmp22 = false;
		}
		HX_STACK_LINE(311)
		if ((tmp22)){
			HX_STACK_LINE(312)
			this->dragging = true;
			HX_STACK_LINE(313)
			this->drag_x = e->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );
			HX_STACK_LINE(314)
			this->drag_y = e->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );
			HX_STACK_LINE(315)
			{
				HX_STACK_LINE(315)
				{
					HX_STACK_LINE(315)
					bool tmp23 = this->destroyed;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(315)
					bool tmp24 = (tmp23 == false);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(315)
					bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(315)
					if ((tmp25)){
						HX_STACK_LINE(315)
						::String tmp26 = this->name;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(315)
						::String tmp27 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(315)
						::String tmp28 = (tmp27 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(315)
						::String tmp29 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(315)
						::String tmp30 = (tmp29 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(315)
						::String tmp31 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(315)
						::mint::core::DebugError tmp32 = ::mint::core::DebugError_obj::assertion(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(315)
						HX_STACK_DO_THROW(tmp32);
					}
				}
				HX_STACK_LINE(315)
				::mint::Canvas tmp23 = this->canvas;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(315)
				bool tmp24 = (tmp23 == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(315)
				if ((tmp24)){
					HX_STACK_LINE(315)
					Dynamic();
				}
				else{
					HX_STACK_LINE(315)
					::mint::Canvas tmp25 = this->canvas;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(315)
					::mint::Control tmp26 = tmp25->get_captured();		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(315)
					bool tmp27 = (tmp26 == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(315)
					bool _pre = tmp27;		HX_STACK_VAR(_pre,"_pre");
					HX_STACK_LINE(315)
					::mint::Canvas tmp28 = this->canvas;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(315)
					tmp28->set_captured(hx::ObjectPtr<OBJ_>(this));
					HX_STACK_LINE(315)
					bool tmp29 = _pre;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(315)
					bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(315)
					if ((tmp30)){
						HX_STACK_LINE(315)
						int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
						HX_STACK_LINE(315)
						::mint::core::Signal tmp31 = this->oncaptured;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(315)
						int tmp32 = tmp31->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(315)
						int _count = tmp32;		HX_STACK_VAR(_count,"_count");
						HX_STACK_LINE(315)
						while((true)){
							HX_STACK_LINE(315)
							bool tmp33 = (_idx < _count);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(315)
							bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(315)
							if ((tmp34)){
								HX_STACK_LINE(315)
								break;
							}
							HX_STACK_LINE(315)
							::mint::core::Signal tmp35 = this->oncaptured;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(315)
							Dynamic tmp36 = tmp35->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(315)
							Dynamic fn = tmp36;		HX_STACK_VAR(fn,"fn");
							HX_STACK_LINE(315)
							bool tmp37 = (fn != null());		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(315)
							if ((tmp37)){
								HX_STACK_LINE(315)
								fn(true).Cast< Void >();
							}
							HX_STACK_LINE(315)
							(_idx)++;
						}
						HX_STACK_LINE(315)
						while((true)){
							HX_STACK_LINE(315)
							bool tmp33 = (_count > (int)0);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(315)
							bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(315)
							if ((tmp34)){
								HX_STACK_LINE(315)
								break;
							}
							HX_STACK_LINE(315)
							::mint::core::Signal tmp35 = this->oncaptured;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(315)
							int tmp36 = (_count - (int)1);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(315)
							Dynamic tmp37 = tmp35->listeners->__GetItem(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(315)
							Dynamic fn = tmp37;		HX_STACK_VAR(fn,"fn");
							HX_STACK_LINE(315)
							bool tmp38 = (fn == null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(315)
							if ((tmp38)){
								HX_STACK_LINE(315)
								::mint::core::Signal tmp39 = this->oncaptured;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(315)
								int tmp40 = (_count - (int)1);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(315)
								tmp39->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp40,(int)1);
							}
							HX_STACK_LINE(315)
							(_count)--;
						}
					}
				}
			}
		}
	}
return null();
}


Void Window_obj::mouseup( Dynamic e){
{
		HX_STACK_FRAME("mint.Window","mouseup",0xcf5f55ae,"mint.Window.mouseup","mint/Window.hx",320,0xaa6053c1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(322)
		Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(322)
		this->super::mouseup(tmp);
		HX_STACK_LINE(324)
		bool tmp1 = this->dragging;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(324)
		if ((tmp1)){
			HX_STACK_LINE(325)
			this->dragging = false;
			HX_STACK_LINE(326)
			{
				HX_STACK_LINE(326)
				{
					HX_STACK_LINE(326)
					bool tmp2 = this->destroyed;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(326)
					bool tmp3 = (tmp2 == false);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(326)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(326)
					if ((tmp4)){
						HX_STACK_LINE(326)
						::String tmp5 = this->name;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(326)
						::String tmp6 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(326)
						::String tmp7 = (tmp6 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(326)
						::String tmp8 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(326)
						::String tmp9 = (tmp8 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(326)
						::String tmp10 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(326)
						::mint::core::DebugError tmp11 = ::mint::core::DebugError_obj::assertion(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(326)
						HX_STACK_DO_THROW(tmp11);
					}
				}
				HX_STACK_LINE(326)
				::mint::Canvas tmp2 = this->canvas;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(326)
				bool tmp3 = (tmp2 == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(326)
				if ((tmp3)){
					HX_STACK_LINE(326)
					Dynamic();
				}
				else{
					HX_STACK_LINE(326)
					::mint::Canvas tmp4 = this->canvas;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(326)
					::mint::Control tmp5 = tmp4->get_captured();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(326)
					bool tmp6 = (tmp5 == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(326)
					if ((tmp6)){
						HX_STACK_LINE(326)
						::mint::Canvas tmp7 = this->canvas;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(326)
						tmp7->set_captured(null());
						HX_STACK_LINE(326)
						{
							HX_STACK_LINE(326)
							int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
							HX_STACK_LINE(326)
							::mint::core::Signal tmp8 = this->oncaptured;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(326)
							int tmp9 = tmp8->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(326)
							int _count = tmp9;		HX_STACK_VAR(_count,"_count");
							HX_STACK_LINE(326)
							while((true)){
								HX_STACK_LINE(326)
								bool tmp10 = (_idx < _count);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(326)
								bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(326)
								if ((tmp11)){
									HX_STACK_LINE(326)
									break;
								}
								HX_STACK_LINE(326)
								::mint::core::Signal tmp12 = this->oncaptured;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(326)
								Dynamic tmp13 = tmp12->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(326)
								Dynamic fn = tmp13;		HX_STACK_VAR(fn,"fn");
								HX_STACK_LINE(326)
								bool tmp14 = (fn != null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(326)
								if ((tmp14)){
									HX_STACK_LINE(326)
									fn(false).Cast< Void >();
								}
								HX_STACK_LINE(326)
								(_idx)++;
							}
							HX_STACK_LINE(326)
							while((true)){
								HX_STACK_LINE(326)
								bool tmp10 = (_count > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(326)
								bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(326)
								if ((tmp11)){
									HX_STACK_LINE(326)
									break;
								}
								HX_STACK_LINE(326)
								::mint::core::Signal tmp12 = this->oncaptured;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(326)
								int tmp13 = (_count - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(326)
								Dynamic tmp14 = tmp12->listeners->__GetItem(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(326)
								Dynamic fn = tmp14;		HX_STACK_VAR(fn,"fn");
								HX_STACK_LINE(326)
								bool tmp15 = (fn == null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(326)
								if ((tmp15)){
									HX_STACK_LINE(326)
									::mint::core::Signal tmp16 = this->oncaptured;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(326)
									int tmp17 = (_count - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(326)
									tmp16->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp17,(int)1);
								}
								HX_STACK_LINE(326)
								(_count)--;
							}
						}
					}
				}
			}
		}
	}
return null();
}


Void Window_obj::bounds_changed( hx::Null< Float >  __o__dx,hx::Null< Float >  __o__dy,hx::Null< Float >  __o__dw,hx::Null< Float >  __o__dh){
Float _dx = __o__dx.Default(((Float)0.0));
Float _dy = __o__dy.Default(((Float)0.0));
Float _dw = __o__dw.Default(((Float)0.0));
Float _dh = __o__dh.Default(((Float)0.0));
	HX_STACK_FRAME("mint.Window","bounds_changed",0xc32a01bc,"mint.Window.bounds_changed","mint/Window.hx",331,0xaa6053c1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_dx,"_dx")
	HX_STACK_ARG(_dy,"_dy")
	HX_STACK_ARG(_dw,"_dw")
	HX_STACK_ARG(_dh,"_dh")
{
		HX_STACK_LINE(333)
		Float tmp = _dx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(333)
		Float tmp1 = _dy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(333)
		Float tmp2 = _dw;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(333)
		Float tmp3 = _dh;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(333)
		this->super::bounds_changed(tmp,tmp1,tmp2,tmp3);
		HX_STACK_LINE(335)
		::mint::Control tmp4 = this->close_handle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(335)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(335)
		if ((tmp5)){
			HX_STACK_LINE(335)
			::mint::Control tmp6 = this->close_handle;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(335)
			Float tmp7 = this->w;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(335)
			Float tmp8 = (tmp7 - (int)24);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(335)
			tmp6->set_x_local(tmp8);
		}
		HX_STACK_LINE(336)
		::mint::Control tmp6 = this->collapse_handle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(336)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(336)
		if ((tmp7)){
			HX_STACK_LINE(336)
			::mint::Control tmp8 = this->collapse_handle;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(336)
			bool tmp9 = this->closable;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(336)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(336)
			if ((tmp9)){
				HX_STACK_LINE(336)
				Float tmp11 = this->w;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(336)
				tmp10 = (tmp11 - (int)48);
			}
			else{
				HX_STACK_LINE(336)
				Float tmp11 = this->w;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(336)
				tmp10 = (tmp11 - (int)24);
			}
			HX_STACK_LINE(336)
			tmp8->set_x_local(tmp10);
		}
		HX_STACK_LINE(337)
		::mint::Label tmp8 = this->title;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(337)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(337)
		if ((tmp9)){
			HX_STACK_LINE(337)
			::mint::Label tmp10 = this->title;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(337)
			Float tmp11 = this->w;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(337)
			Float tmp12 = (tmp11 - (int)4);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(337)
			tmp10->set_w(tmp12);
		}
		HX_STACK_LINE(338)
		::mint::Control tmp10 = this->resize_handle;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(338)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(338)
		if ((tmp11)){
			HX_STACK_LINE(338)
			::mint::Control tmp12 = this->resize_handle;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(338)
			Float tmp13 = this->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(338)
			Float tmp14 = this->w;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(338)
			Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(338)
			Float tmp16 = (tmp15 - (int)24);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(338)
			Float tmp17 = this->y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(338)
			Float tmp18 = this->h;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(338)
			Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(338)
			Float tmp20 = (tmp19 - (int)24);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(338)
			tmp12->set_pos(tmp16,tmp20);
		}
	}
return null();
}



Window_obj::Window_obj()
{
}

void Window_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Window);
	HX_MARK_MEMBER_NAME(title,"title");
	HX_MARK_MEMBER_NAME(close_handle,"close_handle");
	HX_MARK_MEMBER_NAME(resize_handle,"resize_handle");
	HX_MARK_MEMBER_NAME(collapse_handle,"collapse_handle");
	HX_MARK_MEMBER_NAME(closable,"closable");
	HX_MARK_MEMBER_NAME(focusable,"focusable");
	HX_MARK_MEMBER_NAME(moveable,"moveable");
	HX_MARK_MEMBER_NAME(resizable,"resizable");
	HX_MARK_MEMBER_NAME(collapsible,"collapsible");
	HX_MARK_MEMBER_NAME(onclose,"onclose");
	HX_MARK_MEMBER_NAME(oncollapse,"oncollapse");
	HX_MARK_MEMBER_NAME(dragging,"dragging");
	HX_MARK_MEMBER_NAME(drag_x,"drag_x");
	HX_MARK_MEMBER_NAME(drag_y,"drag_y");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(ready,"ready");
	HX_MARK_MEMBER_NAME(resizing,"resizing");
	HX_MARK_MEMBER_NAME(resize_x,"resize_x");
	HX_MARK_MEMBER_NAME(resize_y,"resize_y");
	HX_MARK_MEMBER_NAME(collapsed,"collapsed");
	HX_MARK_MEMBER_NAME(pre_h,"pre_h");
	HX_MARK_MEMBER_NAME(pre_h_min,"pre_h_min");
	HX_MARK_MEMBER_NAME(pre_resize,"pre_resize");
	::mint::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Window_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(title,"title");
	HX_VISIT_MEMBER_NAME(close_handle,"close_handle");
	HX_VISIT_MEMBER_NAME(resize_handle,"resize_handle");
	HX_VISIT_MEMBER_NAME(collapse_handle,"collapse_handle");
	HX_VISIT_MEMBER_NAME(closable,"closable");
	HX_VISIT_MEMBER_NAME(focusable,"focusable");
	HX_VISIT_MEMBER_NAME(moveable,"moveable");
	HX_VISIT_MEMBER_NAME(resizable,"resizable");
	HX_VISIT_MEMBER_NAME(collapsible,"collapsible");
	HX_VISIT_MEMBER_NAME(onclose,"onclose");
	HX_VISIT_MEMBER_NAME(oncollapse,"oncollapse");
	HX_VISIT_MEMBER_NAME(dragging,"dragging");
	HX_VISIT_MEMBER_NAME(drag_x,"drag_x");
	HX_VISIT_MEMBER_NAME(drag_y,"drag_y");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(ready,"ready");
	HX_VISIT_MEMBER_NAME(resizing,"resizing");
	HX_VISIT_MEMBER_NAME(resize_x,"resize_x");
	HX_VISIT_MEMBER_NAME(resize_y,"resize_y");
	HX_VISIT_MEMBER_NAME(collapsed,"collapsed");
	HX_VISIT_MEMBER_NAME(pre_h,"pre_h");
	HX_VISIT_MEMBER_NAME(pre_h_min,"pre_h_min");
	HX_VISIT_MEMBER_NAME(pre_resize,"pre_resize");
	::mint::Control_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Window_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"open") ) { return open_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return title; }
		if (HX_FIELD_EQ(inName,"ready") ) { return ready; }
		if (HX_FIELD_EQ(inName,"pre_h") ) { return pre_h; }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"drag_x") ) { return drag_x; }
		if (HX_FIELD_EQ(inName,"drag_y") ) { return drag_y; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onclose") ) { return onclose; }
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseup") ) { return mouseup_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"closable") ) { return closable; }
		if (HX_FIELD_EQ(inName,"moveable") ) { return moveable; }
		if (HX_FIELD_EQ(inName,"dragging") ) { return dragging; }
		if (HX_FIELD_EQ(inName,"resizing") ) { return resizing; }
		if (HX_FIELD_EQ(inName,"resize_x") ) { return resize_x; }
		if (HX_FIELD_EQ(inName,"resize_y") ) { return resize_y; }
		if (HX_FIELD_EQ(inName,"on_close") ) { return on_close_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"focusable") ) { return focusable; }
		if (HX_FIELD_EQ(inName,"resizable") ) { return resizable; }
		if (HX_FIELD_EQ(inName,"collapsed") ) { return collapsed; }
		if (HX_FIELD_EQ(inName,"pre_h_min") ) { return pre_h_min; }
		if (HX_FIELD_EQ(inName,"mousemove") ) { return mousemove_dyn(); }
		if (HX_FIELD_EQ(inName,"mousedown") ) { return mousedown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"oncollapse") ) { return oncollapse; }
		if (HX_FIELD_EQ(inName,"pre_resize") ) { return pre_resize; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collapsible") ) { return collapsible; }
		if (HX_FIELD_EQ(inName,"on_collapse") ) { return on_collapse_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"close_handle") ) { return close_handle; }
		if (HX_FIELD_EQ(inName,"on_resize_up") ) { return on_resize_up_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"resize_handle") ) { return resize_handle; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"on_resize_down") ) { return on_resize_down_dyn(); }
		if (HX_FIELD_EQ(inName,"bounds_changed") ) { return bounds_changed_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"collapse_handle") ) { return collapse_handle; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Window_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { title=inValue.Cast< ::mint::Label >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ready") ) { ready=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pre_h") ) { pre_h=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"drag_x") ) { drag_x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drag_y") ) { drag_y=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onclose") ) { onclose=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"closable") ) { closable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moveable") ) { moveable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dragging") ) { dragging=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resizing") ) { resizing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resize_x") ) { resize_x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resize_y") ) { resize_y=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"focusable") ) { focusable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resizable") ) { resizable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"collapsed") ) { collapsed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pre_h_min") ) { pre_h_min=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"oncollapse") ) { oncollapse=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pre_resize") ) { pre_resize=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collapsible") ) { collapsible=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"close_handle") ) { close_handle=inValue.Cast< ::mint::Control >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"resize_handle") ) { resize_handle=inValue.Cast< ::mint::Control >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"collapse_handle") ) { collapse_handle=inValue.Cast< ::mint::Control >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Window_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"));
	outFields->push(HX_HCSTRING("close_handle","\x8f","\x64","\xf4","\xa4"));
	outFields->push(HX_HCSTRING("resize_handle","\xd3","\x21","\x1b","\x01"));
	outFields->push(HX_HCSTRING("collapse_handle","\x7a","\xfb","\x15","\x9f"));
	outFields->push(HX_HCSTRING("closable","\x27","\x6c","\xaa","\x82"));
	outFields->push(HX_HCSTRING("focusable","\x72","\x99","\x1a","\x2d"));
	outFields->push(HX_HCSTRING("moveable","\x2b","\xad","\x46","\xf8"));
	outFields->push(HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9"));
	outFields->push(HX_HCSTRING("collapsible","\x8a","\x26","\xcf","\x5b"));
	outFields->push(HX_HCSTRING("onclose","\x39","\x46","\x73","\x4b"));
	outFields->push(HX_HCSTRING("oncollapse","\x8c","\x69","\x9a","\xc8"));
	outFields->push(HX_HCSTRING("dragging","\xcf","\x3c","\x8c","\x37"));
	outFields->push(HX_HCSTRING("drag_x","\x2d","\x64","\xca","\xdf"));
	outFields->push(HX_HCSTRING("drag_y","\x2e","\x64","\xca","\xdf"));
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	outFields->push(HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"));
	outFields->push(HX_HCSTRING("resizing","\x31","\x28","\x80","\xa1"));
	outFields->push(HX_HCSTRING("resize_x","\x2d","\x12","\x7d","\xa1"));
	outFields->push(HX_HCSTRING("resize_y","\x2e","\x12","\x7d","\xa1"));
	outFields->push(HX_HCSTRING("collapsed","\x57","\xee","\x11","\x3e"));
	outFields->push(HX_HCSTRING("pre_h","\x0c","\x42","\x88","\xc8"));
	outFields->push(HX_HCSTRING("pre_h_min","\x9f","\x8e","\xbe","\x46"));
	outFields->push(HX_HCSTRING("pre_resize","\xd0","\xa5","\xee","\x17"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::mint::Label*/ ,(int)offsetof(Window_obj,title),HX_HCSTRING("title","\x98","\x15","\x3b","\x10")},
	{hx::fsObject /*::mint::Control*/ ,(int)offsetof(Window_obj,close_handle),HX_HCSTRING("close_handle","\x8f","\x64","\xf4","\xa4")},
	{hx::fsObject /*::mint::Control*/ ,(int)offsetof(Window_obj,resize_handle),HX_HCSTRING("resize_handle","\xd3","\x21","\x1b","\x01")},
	{hx::fsObject /*::mint::Control*/ ,(int)offsetof(Window_obj,collapse_handle),HX_HCSTRING("collapse_handle","\x7a","\xfb","\x15","\x9f")},
	{hx::fsBool,(int)offsetof(Window_obj,closable),HX_HCSTRING("closable","\x27","\x6c","\xaa","\x82")},
	{hx::fsBool,(int)offsetof(Window_obj,focusable),HX_HCSTRING("focusable","\x72","\x99","\x1a","\x2d")},
	{hx::fsBool,(int)offsetof(Window_obj,moveable),HX_HCSTRING("moveable","\x2b","\xad","\x46","\xf8")},
	{hx::fsBool,(int)offsetof(Window_obj,resizable),HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9")},
	{hx::fsBool,(int)offsetof(Window_obj,collapsible),HX_HCSTRING("collapsible","\x8a","\x26","\xcf","\x5b")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Window_obj,onclose),HX_HCSTRING("onclose","\x39","\x46","\x73","\x4b")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Window_obj,oncollapse),HX_HCSTRING("oncollapse","\x8c","\x69","\x9a","\xc8")},
	{hx::fsBool,(int)offsetof(Window_obj,dragging),HX_HCSTRING("dragging","\xcf","\x3c","\x8c","\x37")},
	{hx::fsFloat,(int)offsetof(Window_obj,drag_x),HX_HCSTRING("drag_x","\x2d","\x64","\xca","\xdf")},
	{hx::fsFloat,(int)offsetof(Window_obj,drag_y),HX_HCSTRING("drag_y","\x2e","\x64","\xca","\xdf")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Window_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
	{hx::fsBool,(int)offsetof(Window_obj,ready),HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6")},
	{hx::fsBool,(int)offsetof(Window_obj,resizing),HX_HCSTRING("resizing","\x31","\x28","\x80","\xa1")},
	{hx::fsFloat,(int)offsetof(Window_obj,resize_x),HX_HCSTRING("resize_x","\x2d","\x12","\x7d","\xa1")},
	{hx::fsFloat,(int)offsetof(Window_obj,resize_y),HX_HCSTRING("resize_y","\x2e","\x12","\x7d","\xa1")},
	{hx::fsBool,(int)offsetof(Window_obj,collapsed),HX_HCSTRING("collapsed","\x57","\xee","\x11","\x3e")},
	{hx::fsFloat,(int)offsetof(Window_obj,pre_h),HX_HCSTRING("pre_h","\x0c","\x42","\x88","\xc8")},
	{hx::fsFloat,(int)offsetof(Window_obj,pre_h_min),HX_HCSTRING("pre_h_min","\x9f","\x8e","\xbe","\x46")},
	{hx::fsBool,(int)offsetof(Window_obj,pre_resize),HX_HCSTRING("pre_resize","\xd0","\xa5","\xee","\x17")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("title","\x98","\x15","\x3b","\x10"),
	HX_HCSTRING("close_handle","\x8f","\x64","\xf4","\xa4"),
	HX_HCSTRING("resize_handle","\xd3","\x21","\x1b","\x01"),
	HX_HCSTRING("collapse_handle","\x7a","\xfb","\x15","\x9f"),
	HX_HCSTRING("closable","\x27","\x6c","\xaa","\x82"),
	HX_HCSTRING("focusable","\x72","\x99","\x1a","\x2d"),
	HX_HCSTRING("moveable","\x2b","\xad","\x46","\xf8"),
	HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9"),
	HX_HCSTRING("collapsible","\x8a","\x26","\xcf","\x5b"),
	HX_HCSTRING("onclose","\x39","\x46","\x73","\x4b"),
	HX_HCSTRING("oncollapse","\x8c","\x69","\x9a","\xc8"),
	HX_HCSTRING("dragging","\xcf","\x3c","\x8c","\x37"),
	HX_HCSTRING("drag_x","\x2d","\x64","\xca","\xdf"),
	HX_HCSTRING("drag_y","\x2e","\x64","\xca","\xdf"),
	HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"),
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	HX_HCSTRING("resizing","\x31","\x28","\x80","\xa1"),
	HX_HCSTRING("resize_x","\x2d","\x12","\x7d","\xa1"),
	HX_HCSTRING("resize_y","\x2e","\x12","\x7d","\xa1"),
	HX_HCSTRING("on_resize_up","\xa6","\xec","\x27","\xe9"),
	HX_HCSTRING("on_resize_down","\x6d","\xe7","\x3b","\x69"),
	HX_HCSTRING("collapsed","\x57","\xee","\x11","\x3e"),
	HX_HCSTRING("pre_h","\x0c","\x42","\x88","\xc8"),
	HX_HCSTRING("pre_h_min","\x9f","\x8e","\xbe","\x46"),
	HX_HCSTRING("pre_resize","\xd0","\xa5","\xee","\x17"),
	HX_HCSTRING("on_collapse","\xcd","\x4b","\x9b","\x8c"),
	HX_HCSTRING("on_close","\x58","\xe1","\x62","\xef"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("open","\xca","\x03","\xb4","\x49"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("mousemove","\xb6","\x6f","\xdc","\x09"),
	HX_HCSTRING("mousedown","\x07","\x85","\xe9","\x03"),
	HX_HCSTRING("mouseup","\xc0","\x0f","\x73","\xc0"),
	HX_HCSTRING("bounds_changed","\xea","\x8d","\xed","\x16"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Window_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Window_obj::__mClass,"__mClass");
};

#endif

hx::Class Window_obj::__mClass;

void Window_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mint.Window","\x5c","\x08","\xd2","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Window_obj >;
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
