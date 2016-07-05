#include <hxcpp.h>

#ifndef INCLUDED_mint_Canvas
#include <mint/Canvas.h>
#endif
#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
#endif
#ifndef INCLUDED_mint_Dropdown
#include <mint/Dropdown.h>
#endif
#ifndef INCLUDED_mint_Label
#include <mint/Label.h>
#endif
#ifndef INCLUDED_mint_List
#include <mint/List.h>
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

Void Dropdown_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("mint.Dropdown","new",0x24677eef,"mint.Dropdown.new","mint/Dropdown.hx",22,0x05116100)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(140)
	this->skip_mouse_up = false;
	HX_STACK_LINE(30)
	this->_height = ((Float)110);
	HX_STACK_LINE(26)
	this->is_open = false;
	HX_STACK_LINE(36)
	this->options = _options;
	HX_STACK_LINE(38)
	{
		HX_STACK_LINE(38)
		Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		::String tmp1 = tmp->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		if ((tmp2)){
			HX_STACK_LINE(38)
			Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(38)
			tmp3->__FieldRef(HX_HCSTRING("name","\x4b","\x72","\xff","\x48")) = HX_HCSTRING("dropdown","\x11","\x74","\x2f","\xfd");
		}
		HX_STACK_LINE(38)
		Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		tmp3->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
	}
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		Dynamic tmp1 = tmp->__Field(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		if ((tmp2)){
			HX_STACK_LINE(39)
			Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(39)
			tmp3->__FieldRef(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a")) = true;
		}
		HX_STACK_LINE(39)
		Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(39)
		tmp3->__Field(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a"), hx::paccDynamic );
	}
	HX_STACK_LINE(42)
	Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	super::__construct(tmp,null());
	HX_STACK_LINE(44)
	::mint::core::Signal tmp1 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	this->onselect = tmp1;
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		Dynamic tmp3 = tmp2->__Field(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(46)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(46)
		if ((tmp4)){
			HX_STACK_LINE(46)
			Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(46)
			tmp5->__FieldRef(HX_HCSTRING("align","\xc5","\x56","\x91","\x21")) = (int)1;
		}
		HX_STACK_LINE(46)
		Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(46)
		tmp5->__Field(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"), hx::paccDynamic );
	}
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		Dynamic tmp3 = tmp2->__Field(HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(47)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(47)
		if ((tmp4)){
			HX_STACK_LINE(47)
			Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(47)
			tmp5->__FieldRef(HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53")) = (int)3;
		}
		HX_STACK_LINE(47)
		Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(47)
		tmp5->__Field(HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53"), hx::paccDynamic );
	}
	HX_STACK_LINE(48)
	{
		HX_STACK_LINE(48)
		Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(48)
		Dynamic tmp3 = tmp2->__Field(HX_HCSTRING("text_size","\xd3","\xdc","\x24","\x05"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(48)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(48)
		if ((tmp4)){
			HX_STACK_LINE(48)
			Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(48)
			tmp5->__FieldRef(HX_HCSTRING("text_size","\xd3","\xdc","\x24","\x05")) = (int)14;
		}
		HX_STACK_LINE(48)
		Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(48)
		tmp5->__Field(HX_HCSTRING("text_size","\xd3","\xdc","\x24","\x05"), hx::paccDynamic );
	}
	HX_STACK_LINE(52)
	::String tmp2 = this->name;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	::String tmp3 = (tmp2 + HX_HCSTRING(".list","\x8c","\xcb","\x21","\xc4"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(53)
	Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(53)
	Dynamic tmp5 = tmp4->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(53)
	Float tmp6 = (tmp5 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(53)
	Float tmp7 = this->w;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(53)
	Float tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(53)
	Float tmp9 = this->_height;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(54)
	Dynamic tmp10 = this->options;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(55)
	Dynamic tmp11 = this->options;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(55)
	Dynamic tmp12 = tmp11->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
	struct _Function_1_1{
		inline static Dynamic Block( hx::ObjectPtr< ::mint::Dropdown_obj > __this,Float &tmp6,Float &tmp9,Dynamic &tmp10,::String &tmp3,Float &tmp8,Dynamic &tmp12){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/Dropdown.hx",50,0x05116100)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed") , ((::mint::Control)(__this)),false);
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp3,false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp6,false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp8,false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp9,false);
				__result->Add(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf") , tmp10->__Field(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"), hx::paccDynamic )->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("internal_visible","\x30","\x3e","\x18","\xd0") , tmp12,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(50)
	Dynamic tmp13 = _Function_1_1::Block(this,tmp6,tmp9,tmp10,tmp3,tmp8,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(50)
	::mint::List tmp14 = ::mint::List_obj::__new(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(50)
	this->list = tmp14;
	HX_STACK_LINE(58)
	::mint::List tmp15 = this->list;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(58)
	Dynamic tmp16 = this->onselected_dyn();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(58)
	tmp15->onselect->listen(tmp16);
	HX_STACK_LINE(59)
	::mint::List tmp17 = this->list;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(59)
	Dynamic tmp18 = this->ondeselect_dyn();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(59)
	tmp17->onmousedown->listen(tmp18);
	HX_STACK_LINE(63)
	Float tmp19 = this->w;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(63)
	Float tmp20 = (tmp19 - (int)10);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(63)
	Float tmp21 = this->h;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(64)
	Dynamic tmp22 = this->options;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(64)
	::String tmp23 = tmp22->__Field(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(65)
	Dynamic tmp24 = this->options;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(65)
	Dynamic tmp25 = tmp24->__Field(HX_HCSTRING("text_size","\xd3","\xdc","\x24","\x05"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(66)
	::String tmp26 = this->name;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(66)
	::String tmp27 = (tmp26 + HX_HCSTRING(".label","\x06","\xa7","\x19","\xd4"));		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(67)
	Dynamic tmp28 = this->options;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(68)
	Dynamic tmp29 = this->options;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(68)
	Dynamic tmp30 = tmp29->__Field(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(69)
	Dynamic tmp31 = this->options;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(69)
	Dynamic tmp32 = tmp31->__Field(HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(70)
	Dynamic tmp33 = this->options;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(70)
	Dynamic tmp34 = tmp33->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
	struct _Function_1_2{
		inline static Dynamic Block( hx::ObjectPtr< ::mint::Dropdown_obj > __this,Dynamic &tmp28,Float &tmp20,::String &tmp23,Float &tmp21,Dynamic &tmp34,Dynamic &tmp25,::String &tmp27,Dynamic &tmp32,Dynamic &tmp30){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/Dropdown.hx",61,0x05116100)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed") , ((::mint::Control)(__this)),false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , ((Dynamic)((int)5)),false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp20,false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp21,false);
				__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , tmp23,false);
				__result->Add(HX_HCSTRING("text_size","\xd3","\xdc","\x24","\x05") , tmp25,false);
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp27,false);
				__result->Add(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf") , tmp28->__Field(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"), hx::paccDynamic )->__Field(HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("align","\xc5","\x56","\x91","\x21") , tmp30,false);
				__result->Add(HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53") , tmp32,false);
				__result->Add(HX_HCSTRING("internal_visible","\x30","\x3e","\x18","\xd0") , tmp34,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(61)
	Dynamic tmp35 = _Function_1_2::Block(this,tmp28,tmp20,tmp23,tmp21,tmp34,tmp25,tmp27,tmp32,tmp30);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(61)
	::mint::Label tmp36 = ::mint::Label_obj::__new(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(61)
	this->label = tmp36;
	HX_STACK_LINE(73)
	::mint::render::Rendering tmp37 = this->rendering;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(73)
	::mint::render::Renderer tmp38 = tmp37->get(hx::ClassOf< ::mint::Dropdown >(),hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(73)
	this->renderer = tmp38;
	HX_STACK_LINE(75)
	::mint::List tmp39 = this->list;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(75)
	tmp39->set_visible(false);
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(77)
		::mint::core::Signal tmp40 = this->oncreate;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(51)
		int tmp41 = tmp40->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(51)
		int _count = tmp41;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			bool tmp42 = (_idx < _count);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(52)
			bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(52)
			if ((tmp43)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(77)
			::mint::core::Signal tmp44 = this->oncreate;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(53)
			Dynamic tmp45 = tmp44->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(53)
			Dynamic fn = tmp45;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp46 = (fn != null());		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(54)
			if ((tmp46)){
				HX_STACK_LINE(55)
				fn().Cast< Void >();
			}
			HX_STACK_LINE(57)
			(_idx)++;
		}
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp42 = (_count > (int)0);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(60)
			bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(60)
			if ((tmp43)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(77)
			::mint::core::Signal tmp44 = this->oncreate;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(61)
			int tmp45 = (_count - (int)1);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(61)
			Dynamic tmp46 = tmp44->listeners->__GetItem(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(61)
			Dynamic fn = tmp46;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(62)
			bool tmp47 = (fn == null());		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(62)
			if ((tmp47)){
				HX_STACK_LINE(77)
				::mint::core::Signal tmp48 = this->oncreate;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(62)
				int tmp49 = (_count - (int)1);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(62)
				tmp48->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp49,(int)1);
			}
			HX_STACK_LINE(63)
			(_count)--;
		}
	}
}
;
	return null();
}

//Dropdown_obj::~Dropdown_obj() { }

Dynamic Dropdown_obj::__CreateEmpty() { return  new Dropdown_obj; }
hx::ObjectPtr< Dropdown_obj > Dropdown_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Dropdown_obj > _result_ = new Dropdown_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic Dropdown_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Dropdown_obj > _result_ = new Dropdown_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Dropdown_obj::ondeselect( Dynamic e,::mint::Control c){
{
		HX_STACK_FRAME("mint.Dropdown","ondeselect",0x3ef072ad,"mint.Dropdown.ondeselect","mint/Dropdown.hx",81,0x05116100)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(83)
		::mint::List tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		int tmp1 = e->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		int tmp2 = e->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		bool tmp3 = tmp->contains(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(83)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(83)
		if ((tmp4)){
			HX_STACK_LINE(84)
			this->close_list();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Dropdown_obj,ondeselect,(void))

Void Dropdown_obj::onselected( int idx,::mint::Control c,Dynamic e){
{
		HX_STACK_FRAME("mint.Dropdown","onselected",0xc67e13cb,"mint.Dropdown.onselected","mint/Dropdown.hx",89,0x05116100)
		HX_STACK_THIS(this)
		HX_STACK_ARG(idx,"idx")
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(50)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(91)
			::mint::core::Signal tmp = this->onselect;		HX_STACK_VAR(tmp,"tmp");
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
				HX_STACK_LINE(91)
				::mint::core::Signal tmp4 = this->onselect;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(53)
				Dynamic tmp5 = tmp4->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(53)
				Dynamic fn = tmp5;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(54)
				bool tmp6 = (fn != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(54)
				if ((tmp6)){
					HX_STACK_LINE(91)
					int tmp7 = idx;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(91)
					::mint::Control tmp8 = c;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(91)
					Dynamic tmp9 = e;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(55)
					fn(tmp7,tmp8,tmp9).Cast< Void >();
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
				HX_STACK_LINE(91)
				::mint::core::Signal tmp4 = this->onselect;		HX_STACK_VAR(tmp4,"tmp4");
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
					HX_STACK_LINE(91)
					::mint::core::Signal tmp8 = this->onselect;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(62)
					int tmp9 = (_count - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(62)
					tmp8->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp9,(int)1);
				}
				HX_STACK_LINE(63)
				(_count)--;
			}
		}
		HX_STACK_LINE(92)
		this->close_list();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Dropdown_obj,onselected,(void))

Void Dropdown_obj::add_item( ::mint::Control _item,hx::Null< Float >  __o_offset_x,hx::Null< Float >  __o_offset_y){
Float offset_x = __o_offset_x.Default(((Float)0.0));
Float offset_y = __o_offset_y.Default(((Float)0.0));
	HX_STACK_FRAME("mint.Dropdown","add_item",0x5bdec242,"mint.Dropdown.add_item","mint/Dropdown.hx",96,0x05116100)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_item,"_item")
	HX_STACK_ARG(offset_x,"offset_x")
	HX_STACK_ARG(offset_y,"offset_y")
{
		HX_STACK_LINE(97)
		::mint::List tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(97)
		::mint::Control tmp1 = _item;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(97)
		Float tmp2 = offset_x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(97)
		Float tmp3 = offset_y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(97)
		tmp->add_item(tmp1,tmp2,tmp3);
		HX_STACK_LINE(98)
		::mint::List tmp4 = this->list;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(98)
		bool tmp5 = this->is_open;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(98)
		tmp4->set_visible(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Dropdown_obj,add_item,(void))

Void Dropdown_obj::close_list( ){
{
		HX_STACK_FRAME("mint.Dropdown","close_list",0x4383f6d6,"mint.Dropdown.close_list","mint/Dropdown.hx",101,0x05116100)
		HX_STACK_THIS(this)
		HX_STACK_LINE(103)
		{
			HX_STACK_LINE(103)
			::mint::List tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(103)
			::mint::List _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(103)
			{
				HX_STACK_LINE(103)
				bool tmp1 = (_this->destroyed == false);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(103)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(103)
				if ((tmp2)){
					HX_STACK_LINE(103)
					::String tmp3 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _this->name);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(103)
					::String tmp4 = (tmp3 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(103)
					::String tmp5 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(103)
					::String tmp6 = (tmp5 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(103)
					::String tmp7 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(103)
					::mint::core::DebugError tmp8 = ::mint::core::DebugError_obj::assertion(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(103)
					HX_STACK_DO_THROW(tmp8);
				}
			}
			HX_STACK_LINE(103)
			bool tmp1 = (_this->canvas == _this);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(103)
			if ((tmp1)){
				HX_STACK_LINE(103)
				Dynamic();
			}
			else{
				HX_STACK_LINE(103)
				::mint::Control tmp2 = _this->canvas->get_captured();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(103)
				::mint::Control tmp3 = _this;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(103)
				bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(103)
				if ((tmp4)){
					HX_STACK_LINE(103)
					_this->canvas->set_captured(null());
					HX_STACK_LINE(103)
					{
						HX_STACK_LINE(103)
						int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
						HX_STACK_LINE(103)
						int tmp5 = _this->oncaptured->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(103)
						int _count = tmp5;		HX_STACK_VAR(_count,"_count");
						HX_STACK_LINE(103)
						while((true)){
							HX_STACK_LINE(103)
							bool tmp6 = (_idx < _count);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(103)
							bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(103)
							if ((tmp7)){
								HX_STACK_LINE(103)
								break;
							}
							HX_STACK_LINE(103)
							Dynamic tmp8 = _this->oncaptured->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(103)
							Dynamic fn = tmp8;		HX_STACK_VAR(fn,"fn");
							HX_STACK_LINE(103)
							bool tmp9 = (fn != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(103)
							if ((tmp9)){
								HX_STACK_LINE(103)
								fn(false).Cast< Void >();
							}
							HX_STACK_LINE(103)
							(_idx)++;
						}
						HX_STACK_LINE(103)
						while((true)){
							HX_STACK_LINE(103)
							bool tmp6 = (_count > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(103)
							bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(103)
							if ((tmp7)){
								HX_STACK_LINE(103)
								break;
							}
							HX_STACK_LINE(103)
							int tmp8 = (_count - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(103)
							Dynamic tmp9 = _this->oncaptured->listeners->__GetItem(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(103)
							Dynamic fn = tmp9;		HX_STACK_VAR(fn,"fn");
							HX_STACK_LINE(103)
							bool tmp10 = (fn == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(103)
							if ((tmp10)){
								HX_STACK_LINE(103)
								int tmp11 = (_count - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(103)
								_this->oncaptured->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp11,(int)1);
							}
							HX_STACK_LINE(103)
							(_count)--;
						}
					}
				}
			}
		}
		HX_STACK_LINE(104)
		::mint::List tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(104)
		tmp->set_visible(false);
		HX_STACK_LINE(107)
		::mint::List tmp1 = this->list;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		tmp1->set_x((int)0);
		HX_STACK_LINE(108)
		::mint::List tmp2 = this->list;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(108)
		Float tmp3 = this->h;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(108)
		Float tmp4 = (tmp3 + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(108)
		tmp2->set_y(tmp4);
		HX_STACK_LINE(109)
		::mint::List tmp5 = this->list;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(109)
		this->add(tmp5);
		HX_STACK_LINE(111)
		this->is_open = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Dropdown_obj,close_list,(void))

Void Dropdown_obj::open_list( ){
{
		HX_STACK_FRAME("mint.Dropdown","open_list",0xa043bc02,"mint.Dropdown.open_list","mint/Dropdown.hx",115,0x05116100)
		HX_STACK_THIS(this)
		HX_STACK_LINE(117)
		::mint::List tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		tmp->set_visible(true);
		HX_STACK_LINE(120)
		::mint::Canvas tmp1 = this->canvas;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(120)
		::mint::List tmp2 = this->list;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(120)
		tmp1->bring_to_front(tmp2);
		HX_STACK_LINE(122)
		::mint::List tmp3 = this->list;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(122)
		Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(122)
		tmp3->set_x(tmp4);
		HX_STACK_LINE(123)
		::mint::List tmp5 = this->list;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(123)
		Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(123)
		Float tmp7 = this->h;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(123)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(123)
		Float tmp9 = (tmp8 + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(123)
		tmp5->set_y(tmp9);
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			::mint::List tmp10 = this->list;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(125)
			::mint::List _this = tmp10;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(125)
			{
				HX_STACK_LINE(125)
				bool tmp11 = (_this->destroyed == false);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(125)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(125)
				if ((tmp12)){
					HX_STACK_LINE(125)
					::String tmp13 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _this->name);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(125)
					::String tmp14 = (tmp13 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(125)
					::String tmp15 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(125)
					::String tmp16 = (tmp15 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(125)
					::String tmp17 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(125)
					::mint::core::DebugError tmp18 = ::mint::core::DebugError_obj::assertion(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(125)
					HX_STACK_DO_THROW(tmp18);
				}
			}
			HX_STACK_LINE(125)
			bool tmp11 = (_this->canvas == _this);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(125)
			if ((tmp11)){
				HX_STACK_LINE(125)
				Dynamic();
			}
			else{
				HX_STACK_LINE(125)
				::mint::Control tmp12 = _this->canvas->get_captured();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(125)
				::mint::Control tmp13 = _this;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(125)
				bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(125)
				bool _pre = tmp14;		HX_STACK_VAR(_pre,"_pre");
				HX_STACK_LINE(125)
				::mint::Control tmp15 = _this;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(125)
				_this->canvas->set_captured(tmp15);
				HX_STACK_LINE(125)
				bool tmp16 = _pre;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(125)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(125)
				if ((tmp17)){
					HX_STACK_LINE(125)
					int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
					HX_STACK_LINE(125)
					int tmp18 = _this->oncaptured->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(125)
					int _count = tmp18;		HX_STACK_VAR(_count,"_count");
					HX_STACK_LINE(125)
					while((true)){
						HX_STACK_LINE(125)
						bool tmp19 = (_idx < _count);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(125)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(125)
						if ((tmp20)){
							HX_STACK_LINE(125)
							break;
						}
						HX_STACK_LINE(125)
						Dynamic tmp21 = _this->oncaptured->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(125)
						Dynamic fn = tmp21;		HX_STACK_VAR(fn,"fn");
						HX_STACK_LINE(125)
						bool tmp22 = (fn != null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(125)
						if ((tmp22)){
							HX_STACK_LINE(125)
							fn(true).Cast< Void >();
						}
						HX_STACK_LINE(125)
						(_idx)++;
					}
					HX_STACK_LINE(125)
					while((true)){
						HX_STACK_LINE(125)
						bool tmp19 = (_count > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(125)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(125)
						if ((tmp20)){
							HX_STACK_LINE(125)
							break;
						}
						HX_STACK_LINE(125)
						int tmp21 = (_count - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(125)
						Dynamic tmp22 = _this->oncaptured->listeners->__GetItem(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(125)
						Dynamic fn = tmp22;		HX_STACK_VAR(fn,"fn");
						HX_STACK_LINE(125)
						bool tmp23 = (fn == null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(125)
						if ((tmp23)){
							HX_STACK_LINE(125)
							int tmp24 = (_count - (int)1);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(125)
							_this->oncaptured->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp24,(int)1);
						}
						HX_STACK_LINE(125)
						(_count)--;
					}
				}
			}
		}
		HX_STACK_LINE(127)
		this->is_open = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Dropdown_obj,open_list,(void))

Void Dropdown_obj::destroy( ){
{
		HX_STACK_FRAME("mint.Dropdown","destroy",0x5d55cf09,"mint.Dropdown.destroy","mint/Dropdown.hx",131,0x05116100)
		HX_STACK_THIS(this)
		HX_STACK_LINE(133)
		this->super::destroy();
		HX_STACK_LINE(135)
		{
			HX_STACK_LINE(135)
			::mint::core::Signal tmp = this->onselect;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(135)
			::mint::core::Signal _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(135)
			_this->listeners = null();
			HX_STACK_LINE(135)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(136)
		this->onselect = null();
	}
return null();
}


Void Dropdown_obj::mousedown( Dynamic e){
{
		HX_STACK_FRAME("mint.Dropdown","mousedown",0xc97108d6,"mint.Dropdown.mousedown","mint/Dropdown.hx",142,0x05116100)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(144)
		Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(144)
		this->super::mousedown(tmp);
		HX_STACK_LINE(146)
		bool tmp1 = (e->__Field(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(146)
		if ((tmp1)){
			HX_STACK_LINE(148)
			int tmp2 = e->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(148)
			int tmp3 = e->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(148)
			int tmp4 = tmp2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(148)
			int tmp5 = tmp3;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(148)
			bool tmp6 = this->contains(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(148)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(148)
			if ((tmp6)){
				HX_STACK_LINE(148)
				bool tmp8 = this->is_open;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(148)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(148)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(148)
				tmp7 = !(tmp10);
			}
			else{
				HX_STACK_LINE(148)
				tmp7 = false;
			}
			HX_STACK_LINE(148)
			if ((tmp7)){
				HX_STACK_LINE(149)
				this->open_list();
				HX_STACK_LINE(150)
				this->skip_mouse_up = true;
			}
		}
	}
return null();
}


Void Dropdown_obj::mouseup( Dynamic e){
{
		HX_STACK_FRAME("mint.Dropdown","mouseup",0xf942b1cf,"mint.Dropdown.mouseup","mint/Dropdown.hx",157,0x05116100)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(159)
		Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(159)
		this->super::mouseup(tmp);
		HX_STACK_LINE(161)
		bool tmp1 = (e->__Field(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(161)
		if ((tmp1)){
			HX_STACK_LINE(163)
			bool tmp2 = this->is_open;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(163)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(163)
			if ((tmp2)){
				HX_STACK_LINE(163)
				bool tmp4 = this->skip_mouse_up;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(163)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(163)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(163)
				tmp3 = !(tmp6);
			}
			else{
				HX_STACK_LINE(163)
				tmp3 = false;
			}
			HX_STACK_LINE(163)
			if ((tmp3)){
				HX_STACK_LINE(164)
				this->close_list();
				HX_STACK_LINE(165)
				return null();
			}
			HX_STACK_LINE(168)
			this->skip_mouse_up = false;
		}
	}
return null();
}


Void Dropdown_obj::bounds_changed( hx::Null< Float >  __o__dx,hx::Null< Float >  __o__dy,hx::Null< Float >  __o__dw,hx::Null< Float >  __o__dh){
Float _dx = __o__dx.Default(((Float)0.0));
Float _dy = __o__dy.Default(((Float)0.0));
Float _dw = __o__dw.Default(((Float)0.0));
Float _dh = __o__dh.Default(((Float)0.0));
	HX_STACK_FRAME("mint.Dropdown","bounds_changed",0x6c2adbbb,"mint.Dropdown.bounds_changed","mint/Dropdown.hx",174,0x05116100)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_dx,"_dx")
	HX_STACK_ARG(_dy,"_dy")
	HX_STACK_ARG(_dw,"_dw")
	HX_STACK_ARG(_dh,"_dh")
{
		HX_STACK_LINE(176)
		Float tmp = _dx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(176)
		Float tmp1 = _dy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(176)
		Float tmp2 = _dw;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(176)
		Float tmp3 = _dh;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(176)
		this->super::bounds_changed(tmp,tmp1,tmp2,tmp3);
		HX_STACK_LINE(178)
		::mint::List tmp4 = this->list;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(178)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(178)
		if ((tmp5)){
			HX_STACK_LINE(179)
			bool tmp6 = this->is_open;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(179)
			if ((tmp6)){
				HX_STACK_LINE(179)
				::mint::List tmp7 = this->list;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(179)
				Float tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(179)
				Float tmp9 = this->y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(179)
				Float tmp10 = this->h;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(179)
				Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(179)
				Float tmp12 = (tmp11 + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(179)
				tmp7->set_pos(tmp8,tmp12);
			}
			HX_STACK_LINE(180)
			::mint::List tmp7 = this->list;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(180)
			Float tmp8 = this->w;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(180)
			::mint::List tmp9 = this->list;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(180)
			Float tmp10 = tmp9->h;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(180)
			tmp7->set_size(tmp8,tmp10);
		}
		HX_STACK_LINE(183)
		::mint::Label tmp6 = this->label;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(183)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(183)
		if ((tmp7)){
			HX_STACK_LINE(183)
			::mint::Label tmp8 = this->label;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(183)
			Float tmp9 = this->w;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(183)
			Float tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(183)
			Float tmp11 = this->h;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(183)
			tmp8->set_size(tmp10,tmp11);
		}
	}
return null();
}



Dropdown_obj::Dropdown_obj()
{
}

void Dropdown_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Dropdown);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(label,"label");
	HX_MARK_MEMBER_NAME(is_open,"is_open");
	HX_MARK_MEMBER_NAME(onselect,"onselect");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(skip_mouse_up,"skip_mouse_up");
	::mint::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Dropdown_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(label,"label");
	HX_VISIT_MEMBER_NAME(is_open,"is_open");
	HX_VISIT_MEMBER_NAME(onselect,"onselect");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(skip_mouse_up,"skip_mouse_up");
	::mint::Control_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Dropdown_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return label; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"is_open") ) { return is_open; }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseup") ) { return mouseup_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onselect") ) { return onselect; }
		if (HX_FIELD_EQ(inName,"add_item") ) { return add_item_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"open_list") ) { return open_list_dyn(); }
		if (HX_FIELD_EQ(inName,"mousedown") ) { return mousedown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ondeselect") ) { return ondeselect_dyn(); }
		if (HX_FIELD_EQ(inName,"onselected") ) { return onselected_dyn(); }
		if (HX_FIELD_EQ(inName,"close_list") ) { return close_list_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"skip_mouse_up") ) { return skip_mouse_up; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bounds_changed") ) { return bounds_changed_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Dropdown_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::mint::List >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { label=inValue.Cast< ::mint::Label >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"is_open") ) { is_open=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onselect") ) { onselect=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"skip_mouse_up") ) { skip_mouse_up=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Dropdown_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	outFields->push(HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"));
	outFields->push(HX_HCSTRING("is_open","\x7f","\x53","\x1d","\x06"));
	outFields->push(HX_HCSTRING("onselect","\x5b","\x9d","\x4b","\x15"));
	outFields->push(HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"));
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	outFields->push(HX_HCSTRING("skip_mouse_up","\x75","\xa4","\x09","\xb8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::mint::List*/ ,(int)offsetof(Dropdown_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsObject /*::mint::Label*/ ,(int)offsetof(Dropdown_obj,label),HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f")},
	{hx::fsBool,(int)offsetof(Dropdown_obj,is_open),HX_HCSTRING("is_open","\x7f","\x53","\x1d","\x06")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Dropdown_obj,onselect),HX_HCSTRING("onselect","\x5b","\x9d","\x4b","\x15")},
	{hx::fsFloat,(int)offsetof(Dropdown_obj,_height),HX_HCSTRING("_height","\x86","\x19","\xc3","\x70")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Dropdown_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
	{hx::fsBool,(int)offsetof(Dropdown_obj,skip_mouse_up),HX_HCSTRING("skip_mouse_up","\x75","\xa4","\x09","\xb8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"),
	HX_HCSTRING("is_open","\x7f","\x53","\x1d","\x06"),
	HX_HCSTRING("onselect","\x5b","\x9d","\x4b","\x15"),
	HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"),
	HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"),
	HX_HCSTRING("ondeselect","\x5c","\xa1","\xe4","\x2d"),
	HX_HCSTRING("onselected","\x7a","\x42","\x72","\xb5"),
	HX_HCSTRING("add_item","\x31","\x97","\x00","\xdf"),
	HX_HCSTRING("close_list","\x85","\x25","\x78","\x32"),
	HX_HCSTRING("open_list","\x33","\x38","\xbc","\xda"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("skip_mouse_up","\x75","\xa4","\x09","\xb8"),
	HX_HCSTRING("mousedown","\x07","\x85","\xe9","\x03"),
	HX_HCSTRING("mouseup","\xc0","\x0f","\x73","\xc0"),
	HX_HCSTRING("bounds_changed","\xea","\x8d","\xed","\x16"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Dropdown_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Dropdown_obj::__mClass,"__mClass");
};

#endif

hx::Class Dropdown_obj::__mClass;

void Dropdown_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mint.Dropdown","\x7d","\xdb","\x0b","\xea");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Dropdown_obj >;
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
