#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_mint_Canvas
#include <mint/Canvas.h>
#endif
#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
#endif
#ifndef INCLUDED_mint_Label
#include <mint/Label.h>
#endif
#ifndef INCLUDED_mint_TextEdit
#include <mint/TextEdit.h>
#endif
#ifndef INCLUDED_mint_core_DebugError
#include <mint/core/DebugError.h>
#endif
#ifndef INCLUDED_mint_core_Signal
#include <mint/core/Signal.h>
#endif
#ifndef INCLUDED_mint_core_unifill__Utf8_Utf8Impl
#include <mint/core/unifill/_Utf8/Utf8Impl.h>
#endif
#ifndef INCLUDED_mint_core_unifill__Utf8_Utf8_Impl_
#include <mint/core/unifill/_Utf8/Utf8_Impl_.h>
#endif
#ifndef INCLUDED_mint_render_Renderer
#include <mint/render/Renderer.h>
#endif
#ifndef INCLUDED_mint_render_Rendering
#include <mint/render/Rendering.h>
#endif
#ifndef INCLUDED_mint_types_TextEventType
#include <mint/types/TextEventType.h>
#endif
namespace mint{

Void TextEdit_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("mint.TextEdit","new",0xe8574335,"mint.TextEdit.new","mint/TextEdit.hx",45,0x23cb477a)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(64)
	this->display = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(63)
	this->composition_length = (int)0;
	HX_STACK_LINE(62)
	this->composition_start = (int)0;
	HX_STACK_LINE(61)
	this->composition = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(60)
	this->edit = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(49)
	this->index = (int)0;
	HX_STACK_LINE(69)
	this->options = _options;
	HX_STACK_LINE(71)
	{
		HX_STACK_LINE(71)
		Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		::String tmp1 = tmp->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		if ((tmp2)){
			HX_STACK_LINE(71)
			Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(71)
			tmp3->__FieldRef(HX_HCSTRING("name","\x4b","\x72","\xff","\x48")) = HX_HCSTRING("textedit","\x37","\xf1","\x30","\x5b");
		}
		HX_STACK_LINE(71)
		Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(71)
		tmp3->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
	}
	HX_STACK_LINE(72)
	{
		HX_STACK_LINE(72)
		Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		Dynamic tmp1 = tmp->__Field(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		if ((tmp2)){
			HX_STACK_LINE(72)
			Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(72)
			tmp3->__FieldRef(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a")) = true;
		}
		HX_STACK_LINE(72)
		Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(72)
		tmp3->__Field(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a"), hx::paccDynamic );
	}
	HX_STACK_LINE(73)
	{
		HX_STACK_LINE(73)
		Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		Dynamic tmp1 = tmp->__Field(HX_HCSTRING("key_input","\x2a","\x16","\x78","\x1d"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(73)
		if ((tmp2)){
			HX_STACK_LINE(73)
			Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(73)
			tmp3->__FieldRef(HX_HCSTRING("key_input","\x2a","\x16","\x78","\x1d")) = true;
		}
		HX_STACK_LINE(73)
		Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(73)
		tmp3->__Field(HX_HCSTRING("key_input","\x2a","\x16","\x78","\x1d"), hx::paccDynamic );
	}
	HX_STACK_LINE(75)
	Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	super::__construct(tmp,null());
	HX_STACK_LINE(77)
	::mint::core::Signal tmp1 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	this->onchangeindex = tmp1;
	HX_STACK_LINE(78)
	::mint::core::Signal tmp2 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(78)
	this->onchange = tmp2;
	HX_STACK_LINE(80)
	Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(80)
	{
		HX_STACK_LINE(80)
		Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(80)
		Dynamic tmp5 = tmp4->__Field(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(80)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(80)
		if ((tmp6)){
			HX_STACK_LINE(80)
			Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(80)
			tmp7->__FieldRef(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85")) = null();
		}
		HX_STACK_LINE(80)
		Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(80)
		tmp3 = tmp7->__Field(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"), hx::paccDynamic );
	}
	HX_STACK_LINE(80)
	this->filter = tmp3;
	HX_STACK_LINE(82)
	{
		HX_STACK_LINE(82)
		Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		::String tmp5 = tmp4->__Field(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(82)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(82)
		if ((tmp6)){
			HX_STACK_LINE(82)
			Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(82)
			tmp7->__FieldRef(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")) = HX_HCSTRING("mint.TextEdit","\xc3","\x84","\xe6","\x32");
		}
		HX_STACK_LINE(82)
		Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(82)
		tmp7->__Field(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"), hx::paccDynamic );
	}
	HX_STACK_LINE(83)
	{
		HX_STACK_LINE(83)
		Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(83)
		Dynamic tmp5 = tmp4->__Field(HX_HCSTRING("text_size","\xd3","\xdc","\x24","\x05"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(83)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(83)
		if ((tmp6)){
			HX_STACK_LINE(83)
			Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(83)
			Dynamic tmp8 = tmp7->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(83)
			Float tmp9 = (tmp8 * ((Float)0.8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(83)
			Dynamic tmp10 = this->options;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(83)
			tmp10->__FieldRef(HX_HCSTRING("text_size","\xd3","\xdc","\x24","\x05")) = tmp9;
		}
		HX_STACK_LINE(83)
		Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(83)
		tmp7->__Field(HX_HCSTRING("text_size","\xd3","\xdc","\x24","\x05"), hx::paccDynamic );
	}
	HX_STACK_LINE(84)
	{
		HX_STACK_LINE(84)
		Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(84)
		Dynamic tmp5 = tmp4->__Field(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(84)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(84)
		if ((tmp6)){
			HX_STACK_LINE(84)
			Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(84)
			tmp7->__FieldRef(HX_HCSTRING("align","\xc5","\x56","\x91","\x21")) = (int)1;
		}
		HX_STACK_LINE(84)
		Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(84)
		tmp7->__Field(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"), hx::paccDynamic );
	}
	HX_STACK_LINE(88)
	Float tmp4 = this->w;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(88)
	Float tmp5 = this->h;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(89)
	Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(89)
	::String tmp7 = tmp6->__Field(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(90)
	Dynamic tmp8 = this->options;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(90)
	Dynamic tmp9 = tmp8->__Field(HX_HCSTRING("text_size","\xd3","\xdc","\x24","\x05"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(91)
	Dynamic tmp10 = this->options;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(91)
	Dynamic tmp11 = tmp10->__Field(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(92)
	Dynamic tmp12 = this->options;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(92)
	Dynamic tmp13 = tmp12->__Field(HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(93)
	Dynamic tmp14 = this->options;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(93)
	Dynamic tmp15 = tmp14->__Field(HX_HCSTRING("bounds_wrap","\x14","\x47","\xee","\xec"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(94)
	Dynamic tmp16 = this->options;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(95)
	::String tmp17 = this->name;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(95)
	::String tmp18 = (tmp17 + HX_HCSTRING(".label","\x06","\xa7","\x19","\xd4"));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(97)
	Dynamic tmp19 = this->options;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(97)
	Dynamic tmp20 = tmp19->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(97)
	Float tmp21 = (tmp20 + ((Float)0.001));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(98)
	Dynamic tmp22 = this->options;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(98)
	Dynamic tmp23 = tmp22->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
	struct _Function_1_1{
		inline static Dynamic Block( hx::ObjectPtr< ::mint::TextEdit_obj > __this,Float &tmp5,Dynamic &tmp13,Dynamic &tmp9,Dynamic &tmp11,Dynamic &tmp23,Float &tmp4,Float &tmp21,Dynamic &tmp15,::String &tmp7,Dynamic &tmp16,::String &tmp18){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/TextEdit.hx",86,0x23cb477a)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed") , ((::mint::Control)(__this)),false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , ((Dynamic)((int)2)),false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp4,false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp5,false);
				__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , tmp7,false);
				__result->Add(HX_HCSTRING("text_size","\xd3","\xdc","\x24","\x05") , tmp9,false);
				__result->Add(HX_HCSTRING("align","\xc5","\x56","\x91","\x21") , tmp11,false);
				__result->Add(HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53") , tmp13,false);
				__result->Add(HX_HCSTRING("bounds_wrap","\x14","\x47","\xee","\xec") , tmp15,false);
				__result->Add(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf") , tmp16->__Field(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"), hx::paccDynamic )->__Field(HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp18,false);
				__result->Add(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a") , false,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp21,false);
				__result->Add(HX_HCSTRING("internal_visible","\x30","\x3e","\x18","\xd0") , tmp23,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(86)
	Dynamic tmp24 = _Function_1_1::Block(this,tmp5,tmp13,tmp9,tmp11,tmp23,tmp4,tmp21,tmp15,tmp7,tmp16,tmp18);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(86)
	::mint::Label tmp25 = ::mint::Label_obj::__new(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(86)
	this->label = tmp25;
	HX_STACK_LINE(101)
	::mint::Label tmp26 = this->label;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(101)
	this->edit = tmp26->text;
	HX_STACK_LINE(102)
	int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(102)
	{
		HX_STACK_LINE(102)
		::String tmp28 = this->edit;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(102)
		::String s = tmp28;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(102)
		::String tmp29 = s;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(102)
		int tmp30 = s.length;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(102)
		tmp27 = ::mint::core::unifill::_Utf8::Utf8_Impl__obj::codePointCount(tmp29,(int)0,tmp30);
	}
	HX_STACK_LINE(102)
	this->index = tmp27;
	HX_STACK_LINE(104)
	::mint::render::Rendering tmp28 = this->rendering;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(104)
	::mint::render::Renderer tmp29 = tmp28->get(hx::ClassOf< ::mint::TextEdit >(),hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(104)
	this->renderer = tmp29;
	HX_STACK_LINE(106)
	Dynamic tmp30 = this->options;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(106)
	::String tmp31 = tmp30->__Field(HX_HCSTRING("display_char","\x33","\xe1","\xfb","\x6d"), hx::paccDynamic );		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(106)
	bool tmp32 = (tmp31 != null());		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(106)
	if ((tmp32)){
		HX_STACK_LINE(107)
		Dynamic tmp33 = this->options;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(107)
		::String v = tmp33->__Field(HX_HCSTRING("display_char","\x33","\xe1","\xfb","\x6d"), hx::paccDynamic );		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(107)
		bool tmp34 = (v != null());		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(107)
		if ((tmp34)){
			HX_STACK_LINE(107)
			::String tmp35;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(107)
			{
				HX_STACK_LINE(107)
				::String tmp36 = v;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(107)
				int tmp37 = ::haxe::Utf8_obj::charCodeAt(tmp36,(int)0);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(107)
				int codePoint = tmp37;		HX_STACK_VAR(codePoint,"codePoint");
				HX_STACK_LINE(107)
				{
					HX_STACK_LINE(107)
					::String tmp38;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(107)
					{
						HX_STACK_LINE(107)
						::haxe::io::BytesBuffer tmp39 = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(107)
						::haxe::io::BytesBuffer buf = tmp39;		HX_STACK_VAR(buf,"buf");
						HX_STACK_LINE(107)
						Dynamic tmp40 = buf->addByte_dyn();		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(107)
						int tmp41 = codePoint;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(107)
						::mint::core::unifill::_Utf8::Utf8Impl_obj::encode_code_point(tmp40,tmp41);
						HX_STACK_LINE(107)
						{
							HX_STACK_LINE(107)
							::String tmp42;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(107)
							{
								HX_STACK_LINE(107)
								::haxe::io::Bytes tmp43 = buf->getBytes();		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(107)
								::haxe::io::Bytes b = tmp43;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(107)
								{
									HX_STACK_LINE(107)
									::String tmp44 = b->toString();		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(107)
									::String s = tmp44;		HX_STACK_VAR(s,"s");
									HX_STACK_LINE(107)
									tmp42 = s;
								}
							}
							HX_STACK_LINE(107)
							::String s = tmp42;		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(107)
							tmp38 = s;
						}
					}
					HX_STACK_LINE(107)
					::String this1 = tmp38;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(107)
					tmp35 = this1;
				}
			}
			HX_STACK_LINE(107)
			this->display_char = tmp35;
		}
		else{
			HX_STACK_LINE(107)
			this->display_char = v;
		}
		HX_STACK_LINE(107)
		{
			HX_STACK_LINE(107)
			::String tmp35 = this->edit;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(107)
			::String str = tmp35;		HX_STACK_VAR(str,"str");
			HX_STACK_LINE(107)
			bool _emit = true;		HX_STACK_VAR(_emit,"_emit");
			HX_STACK_LINE(107)
			this->edit = str;
			HX_STACK_LINE(107)
			::String tmp36 = this->display_char;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(107)
			bool tmp37 = (tmp36 != null());		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(107)
			if ((tmp37)){
				HX_STACK_LINE(107)
				this->display = HX_HCSTRING("","\x00","\x00","\x00","\x00");
				HX_STACK_LINE(107)
				::String tmp38 = str;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(107)
				int tmp39 = str.length;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(107)
				int tmp40 = ::mint::core::unifill::_Utf8::Utf8_Impl__obj::codePointCount(tmp38,(int)0,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(107)
				int _l = tmp40;		HX_STACK_VAR(_l,"_l");
				HX_STACK_LINE(107)
				{
					HX_STACK_LINE(107)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(107)
					while((true)){
						HX_STACK_LINE(107)
						bool tmp41 = (_g < _l);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(107)
						bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(107)
						if ((tmp42)){
							HX_STACK_LINE(107)
							break;
						}
						HX_STACK_LINE(107)
						int tmp43 = (_g)++;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(107)
						int i = tmp43;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(107)
						::String tmp44 = this->display_char;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(107)
						hx::AddEq(this->display,tmp44);
					}
				}
			}
			else{
				HX_STACK_LINE(107)
				::String tmp38;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(107)
				{
					HX_STACK_LINE(107)
					int tmp39 = this->index;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(107)
					int cur = tmp39;		HX_STACK_VAR(cur,"cur");
					HX_STACK_LINE(107)
					{
						HX_STACK_LINE(107)
						::String tmp40 = this->edit;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(107)
						::String s = tmp40;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(107)
						int tmp41;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(107)
						{
							HX_STACK_LINE(107)
							bool tmp42 = true;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(107)
							int tmp43;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(107)
							if ((tmp42)){
								HX_STACK_LINE(107)
								tmp43 = (int)0;
							}
							else{
								HX_STACK_LINE(107)
								tmp43 = s.length;
							}
							HX_STACK_LINE(107)
							int index = tmp43;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(107)
							{
								HX_STACK_LINE(107)
								::String this1 = s;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(107)
								bool tmp44 = true;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(107)
								if ((tmp44)){
									HX_STACK_LINE(107)
									int index1 = index;		HX_STACK_VAR(index1,"index1");
									HX_STACK_LINE(107)
									int tmp45 = this1.length;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(107)
									int len = tmp45;		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(107)
									int i = (int)0;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(107)
									while((true)){
										HX_STACK_LINE(107)
										bool tmp46 = (i < (int)0);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(107)
										bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(107)
										if ((tmp46)){
											HX_STACK_LINE(107)
											tmp47 = (index1 < len);
										}
										else{
											HX_STACK_LINE(107)
											tmp47 = false;
										}
										HX_STACK_LINE(107)
										bool tmp48 = !(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(107)
										if ((tmp48)){
											HX_STACK_LINE(107)
											break;
										}
										HX_STACK_LINE(107)
										int tmp49;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(107)
										{
											HX_STACK_LINE(107)
											int tmp50 = index1;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(107)
											int tmp51 = this1.cca(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(107)
											int c = tmp51;		HX_STACK_VAR(c,"c");
											HX_STACK_LINE(107)
											bool tmp52 = (c < (int)192);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(107)
											if ((tmp52)){
												HX_STACK_LINE(107)
												tmp49 = (int)1;
											}
											else{
												HX_STACK_LINE(107)
												bool tmp53 = (c < (int)224);		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(107)
												if ((tmp53)){
													HX_STACK_LINE(107)
													tmp49 = (int)2;
												}
												else{
													HX_STACK_LINE(107)
													bool tmp54 = (c < (int)240);		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(107)
													if ((tmp54)){
														HX_STACK_LINE(107)
														tmp49 = (int)3;
													}
													else{
														HX_STACK_LINE(107)
														bool tmp55 = (c < (int)248);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(107)
														if ((tmp55)){
															HX_STACK_LINE(107)
															tmp49 = (int)4;
														}
														else{
															HX_STACK_LINE(107)
															tmp49 = (int)1;
														}
													}
												}
											}
										}
										HX_STACK_LINE(107)
										hx::AddEq(index1,tmp49);
										HX_STACK_LINE(107)
										++(i);
									}
									HX_STACK_LINE(107)
									tmp41 = index1;
								}
								else{
									HX_STACK_LINE(107)
									int index1 = index;		HX_STACK_VAR(index1,"index1");
									HX_STACK_LINE(107)
									int count = (int)0;		HX_STACK_VAR(count,"count");
									HX_STACK_LINE(107)
									while((true)){
										HX_STACK_LINE(107)
										int tmp45 = count;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(107)
										int tmp46 = (int)0;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(107)
										bool tmp47 = (tmp45 < tmp46);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(107)
										bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(107)
										if ((tmp47)){
											HX_STACK_LINE(107)
											tmp48 = ((int)0 < index1);
										}
										else{
											HX_STACK_LINE(107)
											tmp48 = false;
										}
										HX_STACK_LINE(107)
										bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(107)
										if ((tmp49)){
											HX_STACK_LINE(107)
											break;
										}
										HX_STACK_LINE(107)
										int tmp50;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(107)
										{
											HX_STACK_LINE(107)
											::String this2 = this1;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(107)
											{
												HX_STACK_LINE(107)
												int tmp51 = (index1 - (int)1);		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(107)
												int tmp52;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(107)
												{
													HX_STACK_LINE(107)
													int tmp53 = tmp51;		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(107)
													int tmp54 = this2.cca(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(107)
													tmp52 = tmp54;
												}
												HX_STACK_LINE(107)
												int c1 = tmp52;		HX_STACK_VAR(c1,"c1");
												HX_STACK_LINE(107)
												bool tmp53 = (c1 < (int)128);		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(107)
												bool tmp54 = !(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(107)
												bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(107)
												if ((tmp54)){
													HX_STACK_LINE(107)
													tmp55 = (c1 >= (int)192);
												}
												else{
													HX_STACK_LINE(107)
													tmp55 = true;
												}
												HX_STACK_LINE(107)
												if ((tmp55)){
													HX_STACK_LINE(107)
													tmp50 = (int)1;
												}
												else{
													HX_STACK_LINE(107)
													int tmp56 = (index1 - (int)2);		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(107)
													int tmp57;		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(107)
													{
														HX_STACK_LINE(107)
														int tmp58 = tmp56;		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(107)
														int tmp59 = this2.cca(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
														HX_STACK_LINE(107)
														tmp57 = tmp59;
													}
													HX_STACK_LINE(107)
													int tmp58 = (int(tmp57) & int((int)224));		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(107)
													bool tmp59 = (tmp58 == (int)192);		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(107)
													if ((tmp59)){
														HX_STACK_LINE(107)
														tmp50 = (int)2;
													}
													else{
														HX_STACK_LINE(107)
														int tmp60 = (index1 - (int)3);		HX_STACK_VAR(tmp60,"tmp60");
														HX_STACK_LINE(107)
														int tmp61;		HX_STACK_VAR(tmp61,"tmp61");
														HX_STACK_LINE(107)
														{
															HX_STACK_LINE(107)
															int tmp62 = tmp60;		HX_STACK_VAR(tmp62,"tmp62");
															HX_STACK_LINE(107)
															int tmp63 = this2.cca(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
															HX_STACK_LINE(107)
															tmp61 = tmp63;
														}
														HX_STACK_LINE(107)
														int tmp62 = (int(tmp61) & int((int)240));		HX_STACK_VAR(tmp62,"tmp62");
														HX_STACK_LINE(107)
														bool tmp63 = (tmp62 == (int)224);		HX_STACK_VAR(tmp63,"tmp63");
														HX_STACK_LINE(107)
														if ((tmp63)){
															HX_STACK_LINE(107)
															tmp50 = (int)3;
														}
														else{
															HX_STACK_LINE(107)
															int tmp64 = (index1 - (int)4);		HX_STACK_VAR(tmp64,"tmp64");
															HX_STACK_LINE(107)
															int tmp65;		HX_STACK_VAR(tmp65,"tmp65");
															HX_STACK_LINE(107)
															{
																HX_STACK_LINE(107)
																int tmp66 = tmp64;		HX_STACK_VAR(tmp66,"tmp66");
																HX_STACK_LINE(107)
																int tmp67 = this2.cca(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
																HX_STACK_LINE(107)
																tmp65 = tmp67;
															}
															HX_STACK_LINE(107)
															int tmp66 = (int(tmp65) & int((int)248));		HX_STACK_VAR(tmp66,"tmp66");
															HX_STACK_LINE(107)
															bool tmp67 = (tmp66 == (int)240);		HX_STACK_VAR(tmp67,"tmp67");
															HX_STACK_LINE(107)
															if ((tmp67)){
																HX_STACK_LINE(107)
																tmp50 = (int)4;
															}
															else{
																HX_STACK_LINE(107)
																tmp50 = (int)1;
															}
														}
													}
												}
											}
										}
										HX_STACK_LINE(107)
										hx::SubEq(index1,tmp50);
										HX_STACK_LINE(107)
										++(count);
									}
									HX_STACK_LINE(107)
									tmp41 = index1;
								}
							}
						}
						HX_STACK_LINE(107)
						int si = tmp41;		HX_STACK_VAR(si,"si");
						HX_STACK_LINE(107)
						bool tmp42 = (cur == null());		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(107)
						int tmp43;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(107)
						if ((tmp42)){
							HX_STACK_LINE(107)
							tmp43 = s.length;
						}
						else{
							HX_STACK_LINE(107)
							bool tmp44 = (cur < (int)0);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(107)
							if ((tmp44)){
								HX_STACK_LINE(107)
								tmp43 = si;
							}
							else{
								HX_STACK_LINE(107)
								int codePointOffset = cur;		HX_STACK_VAR(codePointOffset,"codePointOffset");
								HX_STACK_LINE(107)
								{
									HX_STACK_LINE(107)
									::String this1 = s;		HX_STACK_VAR(this1,"this1");
									HX_STACK_LINE(107)
									bool tmp45 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(107)
									if ((tmp45)){
										HX_STACK_LINE(107)
										int index = si;		HX_STACK_VAR(index,"index");
										HX_STACK_LINE(107)
										int tmp46 = this1.length;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(107)
										int len = tmp46;		HX_STACK_VAR(len,"len");
										HX_STACK_LINE(107)
										int i = (int)0;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(107)
										while((true)){
											HX_STACK_LINE(107)
											bool tmp47 = (i < codePointOffset);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(107)
											bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(107)
											if ((tmp47)){
												HX_STACK_LINE(107)
												tmp48 = (index < len);
											}
											else{
												HX_STACK_LINE(107)
												tmp48 = false;
											}
											HX_STACK_LINE(107)
											bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(107)
											if ((tmp49)){
												HX_STACK_LINE(107)
												break;
											}
											HX_STACK_LINE(107)
											int tmp50;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(107)
											{
												HX_STACK_LINE(107)
												int tmp51 = index;		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(107)
												int tmp52 = this1.cca(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(107)
												int c = tmp52;		HX_STACK_VAR(c,"c");
												HX_STACK_LINE(107)
												bool tmp53 = (c < (int)192);		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(107)
												if ((tmp53)){
													HX_STACK_LINE(107)
													tmp50 = (int)1;
												}
												else{
													HX_STACK_LINE(107)
													bool tmp54 = (c < (int)224);		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(107)
													if ((tmp54)){
														HX_STACK_LINE(107)
														tmp50 = (int)2;
													}
													else{
														HX_STACK_LINE(107)
														bool tmp55 = (c < (int)240);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(107)
														if ((tmp55)){
															HX_STACK_LINE(107)
															tmp50 = (int)3;
														}
														else{
															HX_STACK_LINE(107)
															bool tmp56 = (c < (int)248);		HX_STACK_VAR(tmp56,"tmp56");
															HX_STACK_LINE(107)
															if ((tmp56)){
																HX_STACK_LINE(107)
																tmp50 = (int)4;
															}
															else{
																HX_STACK_LINE(107)
																tmp50 = (int)1;
															}
														}
													}
												}
											}
											HX_STACK_LINE(107)
											hx::AddEq(index,tmp50);
											HX_STACK_LINE(107)
											++(i);
										}
										HX_STACK_LINE(107)
										tmp43 = index;
									}
									else{
										HX_STACK_LINE(107)
										int index = si;		HX_STACK_VAR(index,"index");
										HX_STACK_LINE(107)
										int count = (int)0;		HX_STACK_VAR(count,"count");
										HX_STACK_LINE(107)
										while((true)){
											HX_STACK_LINE(107)
											int tmp46 = count;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(107)
											int tmp47 = codePointOffset;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(107)
											int tmp48 = -(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(107)
											bool tmp49 = (tmp46 < tmp48);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(107)
											bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(107)
											if ((tmp49)){
												HX_STACK_LINE(107)
												tmp50 = ((int)0 < index);
											}
											else{
												HX_STACK_LINE(107)
												tmp50 = false;
											}
											HX_STACK_LINE(107)
											bool tmp51 = !(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(107)
											if ((tmp51)){
												HX_STACK_LINE(107)
												break;
											}
											HX_STACK_LINE(107)
											int tmp52;		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(107)
											{
												HX_STACK_LINE(107)
												::String this2 = this1;		HX_STACK_VAR(this2,"this2");
												HX_STACK_LINE(107)
												{
													HX_STACK_LINE(107)
													int tmp53 = (index - (int)1);		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(107)
													int tmp54;		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(107)
													{
														HX_STACK_LINE(107)
														int tmp55 = tmp53;		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(107)
														int tmp56 = this2.cca(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(107)
														tmp54 = tmp56;
													}
													HX_STACK_LINE(107)
													int c1 = tmp54;		HX_STACK_VAR(c1,"c1");
													HX_STACK_LINE(107)
													bool tmp55 = (c1 < (int)128);		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(107)
													bool tmp56 = !(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(107)
													bool tmp57;		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(107)
													if ((tmp56)){
														HX_STACK_LINE(107)
														tmp57 = (c1 >= (int)192);
													}
													else{
														HX_STACK_LINE(107)
														tmp57 = true;
													}
													HX_STACK_LINE(107)
													if ((tmp57)){
														HX_STACK_LINE(107)
														tmp52 = (int)1;
													}
													else{
														HX_STACK_LINE(107)
														int tmp58 = (index - (int)2);		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(107)
														int tmp59;		HX_STACK_VAR(tmp59,"tmp59");
														HX_STACK_LINE(107)
														{
															HX_STACK_LINE(107)
															int tmp60 = tmp58;		HX_STACK_VAR(tmp60,"tmp60");
															HX_STACK_LINE(107)
															int tmp61 = this2.cca(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
															HX_STACK_LINE(107)
															tmp59 = tmp61;
														}
														HX_STACK_LINE(107)
														int tmp60 = (int(tmp59) & int((int)224));		HX_STACK_VAR(tmp60,"tmp60");
														HX_STACK_LINE(107)
														bool tmp61 = (tmp60 == (int)192);		HX_STACK_VAR(tmp61,"tmp61");
														HX_STACK_LINE(107)
														if ((tmp61)){
															HX_STACK_LINE(107)
															tmp52 = (int)2;
														}
														else{
															HX_STACK_LINE(107)
															int tmp62 = (index - (int)3);		HX_STACK_VAR(tmp62,"tmp62");
															HX_STACK_LINE(107)
															int tmp63;		HX_STACK_VAR(tmp63,"tmp63");
															HX_STACK_LINE(107)
															{
																HX_STACK_LINE(107)
																int tmp64 = tmp62;		HX_STACK_VAR(tmp64,"tmp64");
																HX_STACK_LINE(107)
																int tmp65 = this2.cca(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
																HX_STACK_LINE(107)
																tmp63 = tmp65;
															}
															HX_STACK_LINE(107)
															int tmp64 = (int(tmp63) & int((int)240));		HX_STACK_VAR(tmp64,"tmp64");
															HX_STACK_LINE(107)
															bool tmp65 = (tmp64 == (int)224);		HX_STACK_VAR(tmp65,"tmp65");
															HX_STACK_LINE(107)
															if ((tmp65)){
																HX_STACK_LINE(107)
																tmp52 = (int)3;
															}
															else{
																HX_STACK_LINE(107)
																int tmp66 = (index - (int)4);		HX_STACK_VAR(tmp66,"tmp66");
																HX_STACK_LINE(107)
																int tmp67;		HX_STACK_VAR(tmp67,"tmp67");
																HX_STACK_LINE(107)
																{
																	HX_STACK_LINE(107)
																	int tmp68 = tmp66;		HX_STACK_VAR(tmp68,"tmp68");
																	HX_STACK_LINE(107)
																	int tmp69 = this2.cca(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
																	HX_STACK_LINE(107)
																	tmp67 = tmp69;
																}
																HX_STACK_LINE(107)
																int tmp68 = (int(tmp67) & int((int)248));		HX_STACK_VAR(tmp68,"tmp68");
																HX_STACK_LINE(107)
																bool tmp69 = (tmp68 == (int)240);		HX_STACK_VAR(tmp69,"tmp69");
																HX_STACK_LINE(107)
																if ((tmp69)){
																	HX_STACK_LINE(107)
																	tmp52 = (int)4;
																}
																else{
																	HX_STACK_LINE(107)
																	tmp52 = (int)1;
																}
															}
														}
													}
												}
											}
											HX_STACK_LINE(107)
											hx::SubEq(index,tmp52);
											HX_STACK_LINE(107)
											++(count);
										}
										HX_STACK_LINE(107)
										tmp43 = index;
									}
								}
							}
						}
						HX_STACK_LINE(107)
						int ei = tmp43;		HX_STACK_VAR(ei,"ei");
						HX_STACK_LINE(107)
						int tmp44 = si;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(107)
						int tmp45 = ei;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(107)
						tmp38 = s.substring(tmp44,tmp45);
					}
				}
				HX_STACK_LINE(107)
				::String tmp39 = this->composition;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(107)
				::String tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(107)
				::String tmp41;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(107)
				{
					HX_STACK_LINE(107)
					int tmp42 = this->index;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(107)
					int cur = tmp42;		HX_STACK_VAR(cur,"cur");
					HX_STACK_LINE(107)
					{
						HX_STACK_LINE(107)
						::String tmp43 = this->edit;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(107)
						::String s = tmp43;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(107)
						::String tmp44 = this->edit;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(107)
						Dynamic length = tmp44.length;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(107)
						int tmp45;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(107)
						{
							HX_STACK_LINE(107)
							bool tmp46 = (cur >= (int)0);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(107)
							int tmp47;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(107)
							if ((tmp46)){
								HX_STACK_LINE(107)
								tmp47 = (int)0;
							}
							else{
								HX_STACK_LINE(107)
								tmp47 = s.length;
							}
							HX_STACK_LINE(107)
							int index = tmp47;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(107)
							{
								HX_STACK_LINE(107)
								::String this1 = s;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(107)
								bool tmp48 = (cur >= (int)0);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(107)
								if ((tmp48)){
									HX_STACK_LINE(107)
									int index1 = index;		HX_STACK_VAR(index1,"index1");
									HX_STACK_LINE(107)
									int tmp49 = this1.length;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(107)
									int len = tmp49;		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(107)
									int i = (int)0;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(107)
									while((true)){
										HX_STACK_LINE(107)
										bool tmp50 = (i < cur);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(107)
										bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(107)
										if ((tmp50)){
											HX_STACK_LINE(107)
											tmp51 = (index1 < len);
										}
										else{
											HX_STACK_LINE(107)
											tmp51 = false;
										}
										HX_STACK_LINE(107)
										bool tmp52 = !(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(107)
										if ((tmp52)){
											HX_STACK_LINE(107)
											break;
										}
										HX_STACK_LINE(107)
										int tmp53;		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(107)
										{
											HX_STACK_LINE(107)
											int tmp54 = index1;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(107)
											int tmp55 = this1.cca(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(107)
											int c = tmp55;		HX_STACK_VAR(c,"c");
											HX_STACK_LINE(107)
											bool tmp56 = (c < (int)192);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(107)
											if ((tmp56)){
												HX_STACK_LINE(107)
												tmp53 = (int)1;
											}
											else{
												HX_STACK_LINE(107)
												bool tmp57 = (c < (int)224);		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(107)
												if ((tmp57)){
													HX_STACK_LINE(107)
													tmp53 = (int)2;
												}
												else{
													HX_STACK_LINE(107)
													bool tmp58 = (c < (int)240);		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(107)
													if ((tmp58)){
														HX_STACK_LINE(107)
														tmp53 = (int)3;
													}
													else{
														HX_STACK_LINE(107)
														bool tmp59 = (c < (int)248);		HX_STACK_VAR(tmp59,"tmp59");
														HX_STACK_LINE(107)
														if ((tmp59)){
															HX_STACK_LINE(107)
															tmp53 = (int)4;
														}
														else{
															HX_STACK_LINE(107)
															tmp53 = (int)1;
														}
													}
												}
											}
										}
										HX_STACK_LINE(107)
										hx::AddEq(index1,tmp53);
										HX_STACK_LINE(107)
										++(i);
									}
									HX_STACK_LINE(107)
									tmp45 = index1;
								}
								else{
									HX_STACK_LINE(107)
									int index1 = index;		HX_STACK_VAR(index1,"index1");
									HX_STACK_LINE(107)
									int count = (int)0;		HX_STACK_VAR(count,"count");
									HX_STACK_LINE(107)
									while((true)){
										HX_STACK_LINE(107)
										int tmp49 = count;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(107)
										int tmp50 = cur;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(107)
										int tmp51 = -(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(107)
										bool tmp52 = (tmp49 < tmp51);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(107)
										bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(107)
										if ((tmp52)){
											HX_STACK_LINE(107)
											tmp53 = ((int)0 < index1);
										}
										else{
											HX_STACK_LINE(107)
											tmp53 = false;
										}
										HX_STACK_LINE(107)
										bool tmp54 = !(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(107)
										if ((tmp54)){
											HX_STACK_LINE(107)
											break;
										}
										HX_STACK_LINE(107)
										int tmp55;		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(107)
										{
											HX_STACK_LINE(107)
											::String this2 = this1;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(107)
											{
												HX_STACK_LINE(107)
												int tmp56 = (index1 - (int)1);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(107)
												int tmp57;		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(107)
												{
													HX_STACK_LINE(107)
													int tmp58 = tmp56;		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(107)
													int tmp59 = this2.cca(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(107)
													tmp57 = tmp59;
												}
												HX_STACK_LINE(107)
												int c1 = tmp57;		HX_STACK_VAR(c1,"c1");
												HX_STACK_LINE(107)
												bool tmp58 = (c1 < (int)128);		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(107)
												bool tmp59 = !(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(107)
												bool tmp60;		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(107)
												if ((tmp59)){
													HX_STACK_LINE(107)
													tmp60 = (c1 >= (int)192);
												}
												else{
													HX_STACK_LINE(107)
													tmp60 = true;
												}
												HX_STACK_LINE(107)
												if ((tmp60)){
													HX_STACK_LINE(107)
													tmp55 = (int)1;
												}
												else{
													HX_STACK_LINE(107)
													int tmp61 = (index1 - (int)2);		HX_STACK_VAR(tmp61,"tmp61");
													HX_STACK_LINE(107)
													int tmp62;		HX_STACK_VAR(tmp62,"tmp62");
													HX_STACK_LINE(107)
													{
														HX_STACK_LINE(107)
														int tmp63 = tmp61;		HX_STACK_VAR(tmp63,"tmp63");
														HX_STACK_LINE(107)
														int tmp64 = this2.cca(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
														HX_STACK_LINE(107)
														tmp62 = tmp64;
													}
													HX_STACK_LINE(107)
													int tmp63 = (int(tmp62) & int((int)224));		HX_STACK_VAR(tmp63,"tmp63");
													HX_STACK_LINE(107)
													bool tmp64 = (tmp63 == (int)192);		HX_STACK_VAR(tmp64,"tmp64");
													HX_STACK_LINE(107)
													if ((tmp64)){
														HX_STACK_LINE(107)
														tmp55 = (int)2;
													}
													else{
														HX_STACK_LINE(107)
														int tmp65 = (index1 - (int)3);		HX_STACK_VAR(tmp65,"tmp65");
														HX_STACK_LINE(107)
														int tmp66;		HX_STACK_VAR(tmp66,"tmp66");
														HX_STACK_LINE(107)
														{
															HX_STACK_LINE(107)
															int tmp67 = tmp65;		HX_STACK_VAR(tmp67,"tmp67");
															HX_STACK_LINE(107)
															int tmp68 = this2.cca(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
															HX_STACK_LINE(107)
															tmp66 = tmp68;
														}
														HX_STACK_LINE(107)
														int tmp67 = (int(tmp66) & int((int)240));		HX_STACK_VAR(tmp67,"tmp67");
														HX_STACK_LINE(107)
														bool tmp68 = (tmp67 == (int)224);		HX_STACK_VAR(tmp68,"tmp68");
														HX_STACK_LINE(107)
														if ((tmp68)){
															HX_STACK_LINE(107)
															tmp55 = (int)3;
														}
														else{
															HX_STACK_LINE(107)
															int tmp69 = (index1 - (int)4);		HX_STACK_VAR(tmp69,"tmp69");
															HX_STACK_LINE(107)
															int tmp70;		HX_STACK_VAR(tmp70,"tmp70");
															HX_STACK_LINE(107)
															{
																HX_STACK_LINE(107)
																int tmp71 = tmp69;		HX_STACK_VAR(tmp71,"tmp71");
																HX_STACK_LINE(107)
																int tmp72 = this2.cca(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
																HX_STACK_LINE(107)
																tmp70 = tmp72;
															}
															HX_STACK_LINE(107)
															int tmp71 = (int(tmp70) & int((int)248));		HX_STACK_VAR(tmp71,"tmp71");
															HX_STACK_LINE(107)
															bool tmp72 = (tmp71 == (int)240);		HX_STACK_VAR(tmp72,"tmp72");
															HX_STACK_LINE(107)
															if ((tmp72)){
																HX_STACK_LINE(107)
																tmp55 = (int)4;
															}
															else{
																HX_STACK_LINE(107)
																tmp55 = (int)1;
															}
														}
													}
												}
											}
										}
										HX_STACK_LINE(107)
										hx::SubEq(index1,tmp55);
										HX_STACK_LINE(107)
										++(count);
									}
									HX_STACK_LINE(107)
									tmp45 = index1;
								}
							}
						}
						HX_STACK_LINE(107)
						int si = tmp45;		HX_STACK_VAR(si,"si");
						HX_STACK_LINE(107)
						bool tmp46 = (length == null());		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(107)
						int tmp47;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(107)
						if ((tmp46)){
							HX_STACK_LINE(107)
							tmp47 = s.length;
						}
						else{
							HX_STACK_LINE(107)
							bool tmp48 = (length < (int)0);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(107)
							if ((tmp48)){
								HX_STACK_LINE(107)
								tmp47 = si;
							}
							else{
								HX_STACK_LINE(107)
								int codePointOffset = length;		HX_STACK_VAR(codePointOffset,"codePointOffset");
								HX_STACK_LINE(107)
								{
									HX_STACK_LINE(107)
									::String this1 = s;		HX_STACK_VAR(this1,"this1");
									HX_STACK_LINE(107)
									bool tmp49 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(107)
									if ((tmp49)){
										HX_STACK_LINE(107)
										int index = si;		HX_STACK_VAR(index,"index");
										HX_STACK_LINE(107)
										int tmp50 = this1.length;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(107)
										int len = tmp50;		HX_STACK_VAR(len,"len");
										HX_STACK_LINE(107)
										int i = (int)0;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(107)
										while((true)){
											HX_STACK_LINE(107)
											bool tmp51 = (i < codePointOffset);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(107)
											bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(107)
											if ((tmp51)){
												HX_STACK_LINE(107)
												tmp52 = (index < len);
											}
											else{
												HX_STACK_LINE(107)
												tmp52 = false;
											}
											HX_STACK_LINE(107)
											bool tmp53 = !(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(107)
											if ((tmp53)){
												HX_STACK_LINE(107)
												break;
											}
											HX_STACK_LINE(107)
											int tmp54;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(107)
											{
												HX_STACK_LINE(107)
												int tmp55 = index;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(107)
												int tmp56 = this1.cca(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(107)
												int c = tmp56;		HX_STACK_VAR(c,"c");
												HX_STACK_LINE(107)
												bool tmp57 = (c < (int)192);		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(107)
												if ((tmp57)){
													HX_STACK_LINE(107)
													tmp54 = (int)1;
												}
												else{
													HX_STACK_LINE(107)
													bool tmp58 = (c < (int)224);		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(107)
													if ((tmp58)){
														HX_STACK_LINE(107)
														tmp54 = (int)2;
													}
													else{
														HX_STACK_LINE(107)
														bool tmp59 = (c < (int)240);		HX_STACK_VAR(tmp59,"tmp59");
														HX_STACK_LINE(107)
														if ((tmp59)){
															HX_STACK_LINE(107)
															tmp54 = (int)3;
														}
														else{
															HX_STACK_LINE(107)
															bool tmp60 = (c < (int)248);		HX_STACK_VAR(tmp60,"tmp60");
															HX_STACK_LINE(107)
															if ((tmp60)){
																HX_STACK_LINE(107)
																tmp54 = (int)4;
															}
															else{
																HX_STACK_LINE(107)
																tmp54 = (int)1;
															}
														}
													}
												}
											}
											HX_STACK_LINE(107)
											hx::AddEq(index,tmp54);
											HX_STACK_LINE(107)
											++(i);
										}
										HX_STACK_LINE(107)
										tmp47 = index;
									}
									else{
										HX_STACK_LINE(107)
										int index = si;		HX_STACK_VAR(index,"index");
										HX_STACK_LINE(107)
										int count = (int)0;		HX_STACK_VAR(count,"count");
										HX_STACK_LINE(107)
										while((true)){
											HX_STACK_LINE(107)
											int tmp50 = count;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(107)
											int tmp51 = codePointOffset;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(107)
											int tmp52 = -(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(107)
											bool tmp53 = (tmp50 < tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(107)
											bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(107)
											if ((tmp53)){
												HX_STACK_LINE(107)
												tmp54 = ((int)0 < index);
											}
											else{
												HX_STACK_LINE(107)
												tmp54 = false;
											}
											HX_STACK_LINE(107)
											bool tmp55 = !(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(107)
											if ((tmp55)){
												HX_STACK_LINE(107)
												break;
											}
											HX_STACK_LINE(107)
											int tmp56;		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(107)
											{
												HX_STACK_LINE(107)
												::String this2 = this1;		HX_STACK_VAR(this2,"this2");
												HX_STACK_LINE(107)
												{
													HX_STACK_LINE(107)
													int tmp57 = (index - (int)1);		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(107)
													int tmp58;		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(107)
													{
														HX_STACK_LINE(107)
														int tmp59 = tmp57;		HX_STACK_VAR(tmp59,"tmp59");
														HX_STACK_LINE(107)
														int tmp60 = this2.cca(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
														HX_STACK_LINE(107)
														tmp58 = tmp60;
													}
													HX_STACK_LINE(107)
													int c1 = tmp58;		HX_STACK_VAR(c1,"c1");
													HX_STACK_LINE(107)
													bool tmp59 = (c1 < (int)128);		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(107)
													bool tmp60 = !(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(107)
													bool tmp61;		HX_STACK_VAR(tmp61,"tmp61");
													HX_STACK_LINE(107)
													if ((tmp60)){
														HX_STACK_LINE(107)
														tmp61 = (c1 >= (int)192);
													}
													else{
														HX_STACK_LINE(107)
														tmp61 = true;
													}
													HX_STACK_LINE(107)
													if ((tmp61)){
														HX_STACK_LINE(107)
														tmp56 = (int)1;
													}
													else{
														HX_STACK_LINE(107)
														int tmp62 = (index - (int)2);		HX_STACK_VAR(tmp62,"tmp62");
														HX_STACK_LINE(107)
														int tmp63;		HX_STACK_VAR(tmp63,"tmp63");
														HX_STACK_LINE(107)
														{
															HX_STACK_LINE(107)
															int tmp64 = tmp62;		HX_STACK_VAR(tmp64,"tmp64");
															HX_STACK_LINE(107)
															int tmp65 = this2.cca(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
															HX_STACK_LINE(107)
															tmp63 = tmp65;
														}
														HX_STACK_LINE(107)
														int tmp64 = (int(tmp63) & int((int)224));		HX_STACK_VAR(tmp64,"tmp64");
														HX_STACK_LINE(107)
														bool tmp65 = (tmp64 == (int)192);		HX_STACK_VAR(tmp65,"tmp65");
														HX_STACK_LINE(107)
														if ((tmp65)){
															HX_STACK_LINE(107)
															tmp56 = (int)2;
														}
														else{
															HX_STACK_LINE(107)
															int tmp66 = (index - (int)3);		HX_STACK_VAR(tmp66,"tmp66");
															HX_STACK_LINE(107)
															int tmp67;		HX_STACK_VAR(tmp67,"tmp67");
															HX_STACK_LINE(107)
															{
																HX_STACK_LINE(107)
																int tmp68 = tmp66;		HX_STACK_VAR(tmp68,"tmp68");
																HX_STACK_LINE(107)
																int tmp69 = this2.cca(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
																HX_STACK_LINE(107)
																tmp67 = tmp69;
															}
															HX_STACK_LINE(107)
															int tmp68 = (int(tmp67) & int((int)240));		HX_STACK_VAR(tmp68,"tmp68");
															HX_STACK_LINE(107)
															bool tmp69 = (tmp68 == (int)224);		HX_STACK_VAR(tmp69,"tmp69");
															HX_STACK_LINE(107)
															if ((tmp69)){
																HX_STACK_LINE(107)
																tmp56 = (int)3;
															}
															else{
																HX_STACK_LINE(107)
																int tmp70 = (index - (int)4);		HX_STACK_VAR(tmp70,"tmp70");
																HX_STACK_LINE(107)
																int tmp71;		HX_STACK_VAR(tmp71,"tmp71");
																HX_STACK_LINE(107)
																{
																	HX_STACK_LINE(107)
																	int tmp72 = tmp70;		HX_STACK_VAR(tmp72,"tmp72");
																	HX_STACK_LINE(107)
																	int tmp73 = this2.cca(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
																	HX_STACK_LINE(107)
																	tmp71 = tmp73;
																}
																HX_STACK_LINE(107)
																int tmp72 = (int(tmp71) & int((int)248));		HX_STACK_VAR(tmp72,"tmp72");
																HX_STACK_LINE(107)
																bool tmp73 = (tmp72 == (int)240);		HX_STACK_VAR(tmp73,"tmp73");
																HX_STACK_LINE(107)
																if ((tmp73)){
																	HX_STACK_LINE(107)
																	tmp56 = (int)4;
																}
																else{
																	HX_STACK_LINE(107)
																	tmp56 = (int)1;
																}
															}
														}
													}
												}
											}
											HX_STACK_LINE(107)
											hx::SubEq(index,tmp56);
											HX_STACK_LINE(107)
											++(count);
										}
										HX_STACK_LINE(107)
										tmp47 = index;
									}
								}
							}
						}
						HX_STACK_LINE(107)
						int ei = tmp47;		HX_STACK_VAR(ei,"ei");
						HX_STACK_LINE(107)
						int tmp48 = si;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(107)
						int tmp49 = ei;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(107)
						tmp41 = s.substring(tmp48,tmp49);
					}
				}
				HX_STACK_LINE(107)
				::String tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(107)
				this->display = tmp42;
			}
			HX_STACK_LINE(107)
			::mint::Label tmp38 = this->label;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(107)
			::String tmp39 = this->display;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(107)
			tmp38->set_text(tmp39);
			HX_STACK_LINE(107)
			{
				HX_STACK_LINE(107)
				int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
				HX_STACK_LINE(107)
				::mint::core::Signal tmp40 = this->onchangeindex;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(107)
				int tmp41 = tmp40->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(107)
				int _count = tmp41;		HX_STACK_VAR(_count,"_count");
				HX_STACK_LINE(107)
				while((true)){
					HX_STACK_LINE(107)
					bool tmp42 = (_idx < _count);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(107)
					bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(107)
					if ((tmp43)){
						HX_STACK_LINE(107)
						break;
					}
					HX_STACK_LINE(107)
					::mint::core::Signal tmp44 = this->onchangeindex;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(107)
					Dynamic tmp45 = tmp44->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(107)
					Dynamic fn = tmp45;		HX_STACK_VAR(fn,"fn");
					HX_STACK_LINE(107)
					bool tmp46 = (fn != null());		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(107)
					if ((tmp46)){
						HX_STACK_LINE(107)
						int tmp47 = this->index;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(107)
						fn(tmp47).Cast< Void >();
					}
					HX_STACK_LINE(107)
					(_idx)++;
				}
				HX_STACK_LINE(107)
				while((true)){
					HX_STACK_LINE(107)
					bool tmp42 = (_count > (int)0);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(107)
					bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(107)
					if ((tmp43)){
						HX_STACK_LINE(107)
						break;
					}
					HX_STACK_LINE(107)
					::mint::core::Signal tmp44 = this->onchangeindex;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(107)
					int tmp45 = (_count - (int)1);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(107)
					Dynamic tmp46 = tmp44->listeners->__GetItem(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(107)
					Dynamic fn = tmp46;		HX_STACK_VAR(fn,"fn");
					HX_STACK_LINE(107)
					bool tmp47 = (fn == null());		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(107)
					if ((tmp47)){
						HX_STACK_LINE(107)
						::mint::core::Signal tmp48 = this->onchangeindex;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(107)
						int tmp49 = (_count - (int)1);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(107)
						tmp48->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp49,(int)1);
					}
					HX_STACK_LINE(107)
					(_count)--;
				}
			}
			HX_STACK_LINE(107)
			bool tmp40 = _emit;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(107)
			if ((tmp40)){
				HX_STACK_LINE(107)
				int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
				HX_STACK_LINE(107)
				::mint::core::Signal tmp41 = this->onchange;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(107)
				int tmp42 = tmp41->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(107)
				int _count = tmp42;		HX_STACK_VAR(_count,"_count");
				HX_STACK_LINE(107)
				while((true)){
					HX_STACK_LINE(107)
					bool tmp43 = (_idx < _count);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(107)
					bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(107)
					if ((tmp44)){
						HX_STACK_LINE(107)
						break;
					}
					HX_STACK_LINE(107)
					::mint::core::Signal tmp45 = this->onchange;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(107)
					Dynamic tmp46 = tmp45->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(107)
					Dynamic fn = tmp46;		HX_STACK_VAR(fn,"fn");
					HX_STACK_LINE(107)
					bool tmp47 = (fn != null());		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(107)
					if ((tmp47)){
						HX_STACK_LINE(107)
						::String tmp48 = this->edit;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(107)
						::String tmp49 = this->display;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(107)
						fn(tmp48,tmp49,false).Cast< Void >();
					}
					HX_STACK_LINE(107)
					(_idx)++;
				}
				HX_STACK_LINE(107)
				while((true)){
					HX_STACK_LINE(107)
					bool tmp43 = (_count > (int)0);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(107)
					bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(107)
					if ((tmp44)){
						HX_STACK_LINE(107)
						break;
					}
					HX_STACK_LINE(107)
					::mint::core::Signal tmp45 = this->onchange;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(107)
					int tmp46 = (_count - (int)1);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(107)
					Dynamic tmp47 = tmp45->listeners->__GetItem(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(107)
					Dynamic fn = tmp47;		HX_STACK_VAR(fn,"fn");
					HX_STACK_LINE(107)
					bool tmp48 = (fn == null());		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(107)
					if ((tmp48)){
						HX_STACK_LINE(107)
						::mint::core::Signal tmp49 = this->onchange;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(107)
						int tmp50 = (_count - (int)1);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(107)
						tmp49->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp50,(int)1);
					}
					HX_STACK_LINE(107)
					(_count)--;
				}
			}
			HX_STACK_LINE(107)
			this->edit;
		}
		HX_STACK_LINE(107)
		{
			HX_STACK_LINE(107)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(107)
			::mint::core::Signal tmp35 = this->onchangeindex;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(107)
			int tmp36 = tmp35->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(107)
			int _count = tmp36;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(107)
			while((true)){
				HX_STACK_LINE(107)
				bool tmp37 = (_idx < _count);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(107)
				bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(107)
				if ((tmp38)){
					HX_STACK_LINE(107)
					break;
				}
				HX_STACK_LINE(107)
				::mint::core::Signal tmp39 = this->onchangeindex;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(107)
				Dynamic tmp40 = tmp39->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(107)
				Dynamic fn = tmp40;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(107)
				bool tmp41 = (fn != null());		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(107)
				if ((tmp41)){
					HX_STACK_LINE(107)
					int tmp42 = this->index;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(107)
					fn(tmp42).Cast< Void >();
				}
				HX_STACK_LINE(107)
				(_idx)++;
			}
			HX_STACK_LINE(107)
			while((true)){
				HX_STACK_LINE(107)
				bool tmp37 = (_count > (int)0);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(107)
				bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(107)
				if ((tmp38)){
					HX_STACK_LINE(107)
					break;
				}
				HX_STACK_LINE(107)
				::mint::core::Signal tmp39 = this->onchangeindex;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(107)
				int tmp40 = (_count - (int)1);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(107)
				Dynamic tmp41 = tmp39->listeners->__GetItem(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(107)
				Dynamic fn = tmp41;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(107)
				bool tmp42 = (fn == null());		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(107)
				if ((tmp42)){
					HX_STACK_LINE(107)
					::mint::core::Signal tmp43 = this->onchangeindex;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(107)
					int tmp44 = (_count - (int)1);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(107)
					tmp43->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp44,(int)1);
				}
				HX_STACK_LINE(107)
				(_count)--;
			}
		}
		HX_STACK_LINE(107)
		this->display_char;
	}
	HX_STACK_LINE(110)
	{
		HX_STACK_LINE(110)
		::String tmp33 = this->edit;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(110)
		::String str = tmp33;		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(110)
		bool _emit = true;		HX_STACK_VAR(_emit,"_emit");
		HX_STACK_LINE(110)
		this->edit = str;
		HX_STACK_LINE(110)
		::String tmp34 = this->display_char;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(110)
		bool tmp35 = (tmp34 != null());		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(110)
		if ((tmp35)){
			HX_STACK_LINE(110)
			this->display = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			HX_STACK_LINE(110)
			::String tmp36 = str;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(110)
			int tmp37 = str.length;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(110)
			int tmp38 = ::mint::core::unifill::_Utf8::Utf8_Impl__obj::codePointCount(tmp36,(int)0,tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(110)
			int _l = tmp38;		HX_STACK_VAR(_l,"_l");
			HX_STACK_LINE(110)
			{
				HX_STACK_LINE(110)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(110)
				while((true)){
					HX_STACK_LINE(110)
					bool tmp39 = (_g < _l);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(110)
					bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(110)
					if ((tmp40)){
						HX_STACK_LINE(110)
						break;
					}
					HX_STACK_LINE(110)
					int tmp41 = (_g)++;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(110)
					int i = tmp41;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(110)
					::String tmp42 = this->display_char;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(110)
					hx::AddEq(this->display,tmp42);
				}
			}
		}
		else{
			HX_STACK_LINE(110)
			::String tmp36;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(110)
			{
				HX_STACK_LINE(110)
				int tmp37 = this->index;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(110)
				int cur = tmp37;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(110)
				{
					HX_STACK_LINE(110)
					::String tmp38 = this->edit;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(110)
					::String s = tmp38;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(110)
					int tmp39;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(110)
					{
						HX_STACK_LINE(110)
						bool tmp40 = true;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(110)
						int tmp41;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(110)
						if ((tmp40)){
							HX_STACK_LINE(110)
							tmp41 = (int)0;
						}
						else{
							HX_STACK_LINE(110)
							tmp41 = s.length;
						}
						HX_STACK_LINE(110)
						int index = tmp41;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(110)
						{
							HX_STACK_LINE(110)
							::String this1 = s;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(110)
							bool tmp42 = true;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(110)
							if ((tmp42)){
								HX_STACK_LINE(110)
								int index1 = index;		HX_STACK_VAR(index1,"index1");
								HX_STACK_LINE(110)
								int tmp43 = this1.length;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(110)
								int len = tmp43;		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(110)
								int i = (int)0;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(110)
								while((true)){
									HX_STACK_LINE(110)
									bool tmp44 = (i < (int)0);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(110)
									bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(110)
									if ((tmp44)){
										HX_STACK_LINE(110)
										tmp45 = (index1 < len);
									}
									else{
										HX_STACK_LINE(110)
										tmp45 = false;
									}
									HX_STACK_LINE(110)
									bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(110)
									if ((tmp46)){
										HX_STACK_LINE(110)
										break;
									}
									HX_STACK_LINE(110)
									int tmp47;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(110)
									{
										HX_STACK_LINE(110)
										int tmp48 = index1;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(110)
										int tmp49 = this1.cca(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(110)
										int c = tmp49;		HX_STACK_VAR(c,"c");
										HX_STACK_LINE(110)
										bool tmp50 = (c < (int)192);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(110)
										if ((tmp50)){
											HX_STACK_LINE(110)
											tmp47 = (int)1;
										}
										else{
											HX_STACK_LINE(110)
											bool tmp51 = (c < (int)224);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(110)
											if ((tmp51)){
												HX_STACK_LINE(110)
												tmp47 = (int)2;
											}
											else{
												HX_STACK_LINE(110)
												bool tmp52 = (c < (int)240);		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(110)
												if ((tmp52)){
													HX_STACK_LINE(110)
													tmp47 = (int)3;
												}
												else{
													HX_STACK_LINE(110)
													bool tmp53 = (c < (int)248);		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(110)
													if ((tmp53)){
														HX_STACK_LINE(110)
														tmp47 = (int)4;
													}
													else{
														HX_STACK_LINE(110)
														tmp47 = (int)1;
													}
												}
											}
										}
									}
									HX_STACK_LINE(110)
									hx::AddEq(index1,tmp47);
									HX_STACK_LINE(110)
									++(i);
								}
								HX_STACK_LINE(110)
								tmp39 = index1;
							}
							else{
								HX_STACK_LINE(110)
								int index1 = index;		HX_STACK_VAR(index1,"index1");
								HX_STACK_LINE(110)
								int count = (int)0;		HX_STACK_VAR(count,"count");
								HX_STACK_LINE(110)
								while((true)){
									HX_STACK_LINE(110)
									int tmp43 = count;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(110)
									int tmp44 = (int)0;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(110)
									bool tmp45 = (tmp43 < tmp44);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(110)
									bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(110)
									if ((tmp45)){
										HX_STACK_LINE(110)
										tmp46 = ((int)0 < index1);
									}
									else{
										HX_STACK_LINE(110)
										tmp46 = false;
									}
									HX_STACK_LINE(110)
									bool tmp47 = !(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(110)
									if ((tmp47)){
										HX_STACK_LINE(110)
										break;
									}
									HX_STACK_LINE(110)
									int tmp48;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(110)
									{
										HX_STACK_LINE(110)
										::String this2 = this1;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(110)
										{
											HX_STACK_LINE(110)
											int tmp49 = (index1 - (int)1);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(110)
											int tmp50;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(110)
											{
												HX_STACK_LINE(110)
												int tmp51 = tmp49;		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(110)
												int tmp52 = this2.cca(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(110)
												tmp50 = tmp52;
											}
											HX_STACK_LINE(110)
											int c1 = tmp50;		HX_STACK_VAR(c1,"c1");
											HX_STACK_LINE(110)
											bool tmp51 = (c1 < (int)128);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(110)
											bool tmp52 = !(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(110)
											bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(110)
											if ((tmp52)){
												HX_STACK_LINE(110)
												tmp53 = (c1 >= (int)192);
											}
											else{
												HX_STACK_LINE(110)
												tmp53 = true;
											}
											HX_STACK_LINE(110)
											if ((tmp53)){
												HX_STACK_LINE(110)
												tmp48 = (int)1;
											}
											else{
												HX_STACK_LINE(110)
												int tmp54 = (index1 - (int)2);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(110)
												int tmp55;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(110)
												{
													HX_STACK_LINE(110)
													int tmp56 = tmp54;		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(110)
													int tmp57 = this2.cca(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(110)
													tmp55 = tmp57;
												}
												HX_STACK_LINE(110)
												int tmp56 = (int(tmp55) & int((int)224));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(110)
												bool tmp57 = (tmp56 == (int)192);		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(110)
												if ((tmp57)){
													HX_STACK_LINE(110)
													tmp48 = (int)2;
												}
												else{
													HX_STACK_LINE(110)
													int tmp58 = (index1 - (int)3);		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(110)
													int tmp59;		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(110)
													{
														HX_STACK_LINE(110)
														int tmp60 = tmp58;		HX_STACK_VAR(tmp60,"tmp60");
														HX_STACK_LINE(110)
														int tmp61 = this2.cca(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
														HX_STACK_LINE(110)
														tmp59 = tmp61;
													}
													HX_STACK_LINE(110)
													int tmp60 = (int(tmp59) & int((int)240));		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(110)
													bool tmp61 = (tmp60 == (int)224);		HX_STACK_VAR(tmp61,"tmp61");
													HX_STACK_LINE(110)
													if ((tmp61)){
														HX_STACK_LINE(110)
														tmp48 = (int)3;
													}
													else{
														HX_STACK_LINE(110)
														int tmp62 = (index1 - (int)4);		HX_STACK_VAR(tmp62,"tmp62");
														HX_STACK_LINE(110)
														int tmp63;		HX_STACK_VAR(tmp63,"tmp63");
														HX_STACK_LINE(110)
														{
															HX_STACK_LINE(110)
															int tmp64 = tmp62;		HX_STACK_VAR(tmp64,"tmp64");
															HX_STACK_LINE(110)
															int tmp65 = this2.cca(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
															HX_STACK_LINE(110)
															tmp63 = tmp65;
														}
														HX_STACK_LINE(110)
														int tmp64 = (int(tmp63) & int((int)248));		HX_STACK_VAR(tmp64,"tmp64");
														HX_STACK_LINE(110)
														bool tmp65 = (tmp64 == (int)240);		HX_STACK_VAR(tmp65,"tmp65");
														HX_STACK_LINE(110)
														if ((tmp65)){
															HX_STACK_LINE(110)
															tmp48 = (int)4;
														}
														else{
															HX_STACK_LINE(110)
															tmp48 = (int)1;
														}
													}
												}
											}
										}
									}
									HX_STACK_LINE(110)
									hx::SubEq(index1,tmp48);
									HX_STACK_LINE(110)
									++(count);
								}
								HX_STACK_LINE(110)
								tmp39 = index1;
							}
						}
					}
					HX_STACK_LINE(110)
					int si = tmp39;		HX_STACK_VAR(si,"si");
					HX_STACK_LINE(110)
					bool tmp40 = (cur == null());		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(110)
					int tmp41;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(110)
					if ((tmp40)){
						HX_STACK_LINE(110)
						tmp41 = s.length;
					}
					else{
						HX_STACK_LINE(110)
						bool tmp42 = (cur < (int)0);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(110)
						if ((tmp42)){
							HX_STACK_LINE(110)
							tmp41 = si;
						}
						else{
							HX_STACK_LINE(110)
							int codePointOffset = cur;		HX_STACK_VAR(codePointOffset,"codePointOffset");
							HX_STACK_LINE(110)
							{
								HX_STACK_LINE(110)
								::String this1 = s;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(110)
								bool tmp43 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(110)
								if ((tmp43)){
									HX_STACK_LINE(110)
									int index = si;		HX_STACK_VAR(index,"index");
									HX_STACK_LINE(110)
									int tmp44 = this1.length;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(110)
									int len = tmp44;		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(110)
									int i = (int)0;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(110)
									while((true)){
										HX_STACK_LINE(110)
										bool tmp45 = (i < codePointOffset);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(110)
										bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(110)
										if ((tmp45)){
											HX_STACK_LINE(110)
											tmp46 = (index < len);
										}
										else{
											HX_STACK_LINE(110)
											tmp46 = false;
										}
										HX_STACK_LINE(110)
										bool tmp47 = !(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(110)
										if ((tmp47)){
											HX_STACK_LINE(110)
											break;
										}
										HX_STACK_LINE(110)
										int tmp48;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(110)
										{
											HX_STACK_LINE(110)
											int tmp49 = index;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(110)
											int tmp50 = this1.cca(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(110)
											int c = tmp50;		HX_STACK_VAR(c,"c");
											HX_STACK_LINE(110)
											bool tmp51 = (c < (int)192);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(110)
											if ((tmp51)){
												HX_STACK_LINE(110)
												tmp48 = (int)1;
											}
											else{
												HX_STACK_LINE(110)
												bool tmp52 = (c < (int)224);		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(110)
												if ((tmp52)){
													HX_STACK_LINE(110)
													tmp48 = (int)2;
												}
												else{
													HX_STACK_LINE(110)
													bool tmp53 = (c < (int)240);		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(110)
													if ((tmp53)){
														HX_STACK_LINE(110)
														tmp48 = (int)3;
													}
													else{
														HX_STACK_LINE(110)
														bool tmp54 = (c < (int)248);		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(110)
														if ((tmp54)){
															HX_STACK_LINE(110)
															tmp48 = (int)4;
														}
														else{
															HX_STACK_LINE(110)
															tmp48 = (int)1;
														}
													}
												}
											}
										}
										HX_STACK_LINE(110)
										hx::AddEq(index,tmp48);
										HX_STACK_LINE(110)
										++(i);
									}
									HX_STACK_LINE(110)
									tmp41 = index;
								}
								else{
									HX_STACK_LINE(110)
									int index = si;		HX_STACK_VAR(index,"index");
									HX_STACK_LINE(110)
									int count = (int)0;		HX_STACK_VAR(count,"count");
									HX_STACK_LINE(110)
									while((true)){
										HX_STACK_LINE(110)
										int tmp44 = count;		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(110)
										int tmp45 = codePointOffset;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(110)
										int tmp46 = -(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(110)
										bool tmp47 = (tmp44 < tmp46);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(110)
										bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(110)
										if ((tmp47)){
											HX_STACK_LINE(110)
											tmp48 = ((int)0 < index);
										}
										else{
											HX_STACK_LINE(110)
											tmp48 = false;
										}
										HX_STACK_LINE(110)
										bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(110)
										if ((tmp49)){
											HX_STACK_LINE(110)
											break;
										}
										HX_STACK_LINE(110)
										int tmp50;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(110)
										{
											HX_STACK_LINE(110)
											::String this2 = this1;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(110)
											{
												HX_STACK_LINE(110)
												int tmp51 = (index - (int)1);		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(110)
												int tmp52;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(110)
												{
													HX_STACK_LINE(110)
													int tmp53 = tmp51;		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(110)
													int tmp54 = this2.cca(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(110)
													tmp52 = tmp54;
												}
												HX_STACK_LINE(110)
												int c1 = tmp52;		HX_STACK_VAR(c1,"c1");
												HX_STACK_LINE(110)
												bool tmp53 = (c1 < (int)128);		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(110)
												bool tmp54 = !(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(110)
												bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(110)
												if ((tmp54)){
													HX_STACK_LINE(110)
													tmp55 = (c1 >= (int)192);
												}
												else{
													HX_STACK_LINE(110)
													tmp55 = true;
												}
												HX_STACK_LINE(110)
												if ((tmp55)){
													HX_STACK_LINE(110)
													tmp50 = (int)1;
												}
												else{
													HX_STACK_LINE(110)
													int tmp56 = (index - (int)2);		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(110)
													int tmp57;		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(110)
													{
														HX_STACK_LINE(110)
														int tmp58 = tmp56;		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(110)
														int tmp59 = this2.cca(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
														HX_STACK_LINE(110)
														tmp57 = tmp59;
													}
													HX_STACK_LINE(110)
													int tmp58 = (int(tmp57) & int((int)224));		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(110)
													bool tmp59 = (tmp58 == (int)192);		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(110)
													if ((tmp59)){
														HX_STACK_LINE(110)
														tmp50 = (int)2;
													}
													else{
														HX_STACK_LINE(110)
														int tmp60 = (index - (int)3);		HX_STACK_VAR(tmp60,"tmp60");
														HX_STACK_LINE(110)
														int tmp61;		HX_STACK_VAR(tmp61,"tmp61");
														HX_STACK_LINE(110)
														{
															HX_STACK_LINE(110)
															int tmp62 = tmp60;		HX_STACK_VAR(tmp62,"tmp62");
															HX_STACK_LINE(110)
															int tmp63 = this2.cca(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
															HX_STACK_LINE(110)
															tmp61 = tmp63;
														}
														HX_STACK_LINE(110)
														int tmp62 = (int(tmp61) & int((int)240));		HX_STACK_VAR(tmp62,"tmp62");
														HX_STACK_LINE(110)
														bool tmp63 = (tmp62 == (int)224);		HX_STACK_VAR(tmp63,"tmp63");
														HX_STACK_LINE(110)
														if ((tmp63)){
															HX_STACK_LINE(110)
															tmp50 = (int)3;
														}
														else{
															HX_STACK_LINE(110)
															int tmp64 = (index - (int)4);		HX_STACK_VAR(tmp64,"tmp64");
															HX_STACK_LINE(110)
															int tmp65;		HX_STACK_VAR(tmp65,"tmp65");
															HX_STACK_LINE(110)
															{
																HX_STACK_LINE(110)
																int tmp66 = tmp64;		HX_STACK_VAR(tmp66,"tmp66");
																HX_STACK_LINE(110)
																int tmp67 = this2.cca(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
																HX_STACK_LINE(110)
																tmp65 = tmp67;
															}
															HX_STACK_LINE(110)
															int tmp66 = (int(tmp65) & int((int)248));		HX_STACK_VAR(tmp66,"tmp66");
															HX_STACK_LINE(110)
															bool tmp67 = (tmp66 == (int)240);		HX_STACK_VAR(tmp67,"tmp67");
															HX_STACK_LINE(110)
															if ((tmp67)){
																HX_STACK_LINE(110)
																tmp50 = (int)4;
															}
															else{
																HX_STACK_LINE(110)
																tmp50 = (int)1;
															}
														}
													}
												}
											}
										}
										HX_STACK_LINE(110)
										hx::SubEq(index,tmp50);
										HX_STACK_LINE(110)
										++(count);
									}
									HX_STACK_LINE(110)
									tmp41 = index;
								}
							}
						}
					}
					HX_STACK_LINE(110)
					int ei = tmp41;		HX_STACK_VAR(ei,"ei");
					HX_STACK_LINE(110)
					int tmp42 = si;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(110)
					int tmp43 = ei;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(110)
					tmp36 = s.substring(tmp42,tmp43);
				}
			}
			HX_STACK_LINE(110)
			::String tmp37 = this->composition;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(110)
			::String tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(110)
			::String tmp39;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(110)
			{
				HX_STACK_LINE(110)
				int tmp40 = this->index;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(110)
				int cur = tmp40;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(110)
				{
					HX_STACK_LINE(110)
					::String tmp41 = this->edit;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(110)
					::String s = tmp41;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(110)
					::String tmp42 = this->edit;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(110)
					Dynamic length = tmp42.length;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(110)
					int tmp43;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(110)
					{
						HX_STACK_LINE(110)
						bool tmp44 = (cur >= (int)0);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(110)
						int tmp45;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(110)
						if ((tmp44)){
							HX_STACK_LINE(110)
							tmp45 = (int)0;
						}
						else{
							HX_STACK_LINE(110)
							tmp45 = s.length;
						}
						HX_STACK_LINE(110)
						int index = tmp45;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(110)
						{
							HX_STACK_LINE(110)
							::String this1 = s;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(110)
							bool tmp46 = (cur >= (int)0);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(110)
							if ((tmp46)){
								HX_STACK_LINE(110)
								int index1 = index;		HX_STACK_VAR(index1,"index1");
								HX_STACK_LINE(110)
								int tmp47 = this1.length;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(110)
								int len = tmp47;		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(110)
								int i = (int)0;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(110)
								while((true)){
									HX_STACK_LINE(110)
									bool tmp48 = (i < cur);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(110)
									bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(110)
									if ((tmp48)){
										HX_STACK_LINE(110)
										tmp49 = (index1 < len);
									}
									else{
										HX_STACK_LINE(110)
										tmp49 = false;
									}
									HX_STACK_LINE(110)
									bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(110)
									if ((tmp50)){
										HX_STACK_LINE(110)
										break;
									}
									HX_STACK_LINE(110)
									int tmp51;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(110)
									{
										HX_STACK_LINE(110)
										int tmp52 = index1;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(110)
										int tmp53 = this1.cca(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(110)
										int c = tmp53;		HX_STACK_VAR(c,"c");
										HX_STACK_LINE(110)
										bool tmp54 = (c < (int)192);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(110)
										if ((tmp54)){
											HX_STACK_LINE(110)
											tmp51 = (int)1;
										}
										else{
											HX_STACK_LINE(110)
											bool tmp55 = (c < (int)224);		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(110)
											if ((tmp55)){
												HX_STACK_LINE(110)
												tmp51 = (int)2;
											}
											else{
												HX_STACK_LINE(110)
												bool tmp56 = (c < (int)240);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(110)
												if ((tmp56)){
													HX_STACK_LINE(110)
													tmp51 = (int)3;
												}
												else{
													HX_STACK_LINE(110)
													bool tmp57 = (c < (int)248);		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(110)
													if ((tmp57)){
														HX_STACK_LINE(110)
														tmp51 = (int)4;
													}
													else{
														HX_STACK_LINE(110)
														tmp51 = (int)1;
													}
												}
											}
										}
									}
									HX_STACK_LINE(110)
									hx::AddEq(index1,tmp51);
									HX_STACK_LINE(110)
									++(i);
								}
								HX_STACK_LINE(110)
								tmp43 = index1;
							}
							else{
								HX_STACK_LINE(110)
								int index1 = index;		HX_STACK_VAR(index1,"index1");
								HX_STACK_LINE(110)
								int count = (int)0;		HX_STACK_VAR(count,"count");
								HX_STACK_LINE(110)
								while((true)){
									HX_STACK_LINE(110)
									int tmp47 = count;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(110)
									int tmp48 = cur;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(110)
									int tmp49 = -(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(110)
									bool tmp50 = (tmp47 < tmp49);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(110)
									bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(110)
									if ((tmp50)){
										HX_STACK_LINE(110)
										tmp51 = ((int)0 < index1);
									}
									else{
										HX_STACK_LINE(110)
										tmp51 = false;
									}
									HX_STACK_LINE(110)
									bool tmp52 = !(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(110)
									if ((tmp52)){
										HX_STACK_LINE(110)
										break;
									}
									HX_STACK_LINE(110)
									int tmp53;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(110)
									{
										HX_STACK_LINE(110)
										::String this2 = this1;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(110)
										{
											HX_STACK_LINE(110)
											int tmp54 = (index1 - (int)1);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(110)
											int tmp55;		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(110)
											{
												HX_STACK_LINE(110)
												int tmp56 = tmp54;		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(110)
												int tmp57 = this2.cca(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(110)
												tmp55 = tmp57;
											}
											HX_STACK_LINE(110)
											int c1 = tmp55;		HX_STACK_VAR(c1,"c1");
											HX_STACK_LINE(110)
											bool tmp56 = (c1 < (int)128);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(110)
											bool tmp57 = !(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(110)
											bool tmp58;		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(110)
											if ((tmp57)){
												HX_STACK_LINE(110)
												tmp58 = (c1 >= (int)192);
											}
											else{
												HX_STACK_LINE(110)
												tmp58 = true;
											}
											HX_STACK_LINE(110)
											if ((tmp58)){
												HX_STACK_LINE(110)
												tmp53 = (int)1;
											}
											else{
												HX_STACK_LINE(110)
												int tmp59 = (index1 - (int)2);		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(110)
												int tmp60;		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(110)
												{
													HX_STACK_LINE(110)
													int tmp61 = tmp59;		HX_STACK_VAR(tmp61,"tmp61");
													HX_STACK_LINE(110)
													int tmp62 = this2.cca(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
													HX_STACK_LINE(110)
													tmp60 = tmp62;
												}
												HX_STACK_LINE(110)
												int tmp61 = (int(tmp60) & int((int)224));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(110)
												bool tmp62 = (tmp61 == (int)192);		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(110)
												if ((tmp62)){
													HX_STACK_LINE(110)
													tmp53 = (int)2;
												}
												else{
													HX_STACK_LINE(110)
													int tmp63 = (index1 - (int)3);		HX_STACK_VAR(tmp63,"tmp63");
													HX_STACK_LINE(110)
													int tmp64;		HX_STACK_VAR(tmp64,"tmp64");
													HX_STACK_LINE(110)
													{
														HX_STACK_LINE(110)
														int tmp65 = tmp63;		HX_STACK_VAR(tmp65,"tmp65");
														HX_STACK_LINE(110)
														int tmp66 = this2.cca(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
														HX_STACK_LINE(110)
														tmp64 = tmp66;
													}
													HX_STACK_LINE(110)
													int tmp65 = (int(tmp64) & int((int)240));		HX_STACK_VAR(tmp65,"tmp65");
													HX_STACK_LINE(110)
													bool tmp66 = (tmp65 == (int)224);		HX_STACK_VAR(tmp66,"tmp66");
													HX_STACK_LINE(110)
													if ((tmp66)){
														HX_STACK_LINE(110)
														tmp53 = (int)3;
													}
													else{
														HX_STACK_LINE(110)
														int tmp67 = (index1 - (int)4);		HX_STACK_VAR(tmp67,"tmp67");
														HX_STACK_LINE(110)
														int tmp68;		HX_STACK_VAR(tmp68,"tmp68");
														HX_STACK_LINE(110)
														{
															HX_STACK_LINE(110)
															int tmp69 = tmp67;		HX_STACK_VAR(tmp69,"tmp69");
															HX_STACK_LINE(110)
															int tmp70 = this2.cca(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
															HX_STACK_LINE(110)
															tmp68 = tmp70;
														}
														HX_STACK_LINE(110)
														int tmp69 = (int(tmp68) & int((int)248));		HX_STACK_VAR(tmp69,"tmp69");
														HX_STACK_LINE(110)
														bool tmp70 = (tmp69 == (int)240);		HX_STACK_VAR(tmp70,"tmp70");
														HX_STACK_LINE(110)
														if ((tmp70)){
															HX_STACK_LINE(110)
															tmp53 = (int)4;
														}
														else{
															HX_STACK_LINE(110)
															tmp53 = (int)1;
														}
													}
												}
											}
										}
									}
									HX_STACK_LINE(110)
									hx::SubEq(index1,tmp53);
									HX_STACK_LINE(110)
									++(count);
								}
								HX_STACK_LINE(110)
								tmp43 = index1;
							}
						}
					}
					HX_STACK_LINE(110)
					int si = tmp43;		HX_STACK_VAR(si,"si");
					HX_STACK_LINE(110)
					bool tmp44 = (length == null());		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(110)
					int tmp45;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(110)
					if ((tmp44)){
						HX_STACK_LINE(110)
						tmp45 = s.length;
					}
					else{
						HX_STACK_LINE(110)
						bool tmp46 = (length < (int)0);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(110)
						if ((tmp46)){
							HX_STACK_LINE(110)
							tmp45 = si;
						}
						else{
							HX_STACK_LINE(110)
							int codePointOffset = length;		HX_STACK_VAR(codePointOffset,"codePointOffset");
							HX_STACK_LINE(110)
							{
								HX_STACK_LINE(110)
								::String this1 = s;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(110)
								bool tmp47 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(110)
								if ((tmp47)){
									HX_STACK_LINE(110)
									int index = si;		HX_STACK_VAR(index,"index");
									HX_STACK_LINE(110)
									int tmp48 = this1.length;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(110)
									int len = tmp48;		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(110)
									int i = (int)0;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(110)
									while((true)){
										HX_STACK_LINE(110)
										bool tmp49 = (i < codePointOffset);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(110)
										bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(110)
										if ((tmp49)){
											HX_STACK_LINE(110)
											tmp50 = (index < len);
										}
										else{
											HX_STACK_LINE(110)
											tmp50 = false;
										}
										HX_STACK_LINE(110)
										bool tmp51 = !(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(110)
										if ((tmp51)){
											HX_STACK_LINE(110)
											break;
										}
										HX_STACK_LINE(110)
										int tmp52;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(110)
										{
											HX_STACK_LINE(110)
											int tmp53 = index;		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(110)
											int tmp54 = this1.cca(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(110)
											int c = tmp54;		HX_STACK_VAR(c,"c");
											HX_STACK_LINE(110)
											bool tmp55 = (c < (int)192);		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(110)
											if ((tmp55)){
												HX_STACK_LINE(110)
												tmp52 = (int)1;
											}
											else{
												HX_STACK_LINE(110)
												bool tmp56 = (c < (int)224);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(110)
												if ((tmp56)){
													HX_STACK_LINE(110)
													tmp52 = (int)2;
												}
												else{
													HX_STACK_LINE(110)
													bool tmp57 = (c < (int)240);		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(110)
													if ((tmp57)){
														HX_STACK_LINE(110)
														tmp52 = (int)3;
													}
													else{
														HX_STACK_LINE(110)
														bool tmp58 = (c < (int)248);		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(110)
														if ((tmp58)){
															HX_STACK_LINE(110)
															tmp52 = (int)4;
														}
														else{
															HX_STACK_LINE(110)
															tmp52 = (int)1;
														}
													}
												}
											}
										}
										HX_STACK_LINE(110)
										hx::AddEq(index,tmp52);
										HX_STACK_LINE(110)
										++(i);
									}
									HX_STACK_LINE(110)
									tmp45 = index;
								}
								else{
									HX_STACK_LINE(110)
									int index = si;		HX_STACK_VAR(index,"index");
									HX_STACK_LINE(110)
									int count = (int)0;		HX_STACK_VAR(count,"count");
									HX_STACK_LINE(110)
									while((true)){
										HX_STACK_LINE(110)
										int tmp48 = count;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(110)
										int tmp49 = codePointOffset;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(110)
										int tmp50 = -(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(110)
										bool tmp51 = (tmp48 < tmp50);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(110)
										bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(110)
										if ((tmp51)){
											HX_STACK_LINE(110)
											tmp52 = ((int)0 < index);
										}
										else{
											HX_STACK_LINE(110)
											tmp52 = false;
										}
										HX_STACK_LINE(110)
										bool tmp53 = !(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(110)
										if ((tmp53)){
											HX_STACK_LINE(110)
											break;
										}
										HX_STACK_LINE(110)
										int tmp54;		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(110)
										{
											HX_STACK_LINE(110)
											::String this2 = this1;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(110)
											{
												HX_STACK_LINE(110)
												int tmp55 = (index - (int)1);		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(110)
												int tmp56;		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(110)
												{
													HX_STACK_LINE(110)
													int tmp57 = tmp55;		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(110)
													int tmp58 = this2.cca(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(110)
													tmp56 = tmp58;
												}
												HX_STACK_LINE(110)
												int c1 = tmp56;		HX_STACK_VAR(c1,"c1");
												HX_STACK_LINE(110)
												bool tmp57 = (c1 < (int)128);		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(110)
												bool tmp58 = !(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(110)
												bool tmp59;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(110)
												if ((tmp58)){
													HX_STACK_LINE(110)
													tmp59 = (c1 >= (int)192);
												}
												else{
													HX_STACK_LINE(110)
													tmp59 = true;
												}
												HX_STACK_LINE(110)
												if ((tmp59)){
													HX_STACK_LINE(110)
													tmp54 = (int)1;
												}
												else{
													HX_STACK_LINE(110)
													int tmp60 = (index - (int)2);		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(110)
													int tmp61;		HX_STACK_VAR(tmp61,"tmp61");
													HX_STACK_LINE(110)
													{
														HX_STACK_LINE(110)
														int tmp62 = tmp60;		HX_STACK_VAR(tmp62,"tmp62");
														HX_STACK_LINE(110)
														int tmp63 = this2.cca(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
														HX_STACK_LINE(110)
														tmp61 = tmp63;
													}
													HX_STACK_LINE(110)
													int tmp62 = (int(tmp61) & int((int)224));		HX_STACK_VAR(tmp62,"tmp62");
													HX_STACK_LINE(110)
													bool tmp63 = (tmp62 == (int)192);		HX_STACK_VAR(tmp63,"tmp63");
													HX_STACK_LINE(110)
													if ((tmp63)){
														HX_STACK_LINE(110)
														tmp54 = (int)2;
													}
													else{
														HX_STACK_LINE(110)
														int tmp64 = (index - (int)3);		HX_STACK_VAR(tmp64,"tmp64");
														HX_STACK_LINE(110)
														int tmp65;		HX_STACK_VAR(tmp65,"tmp65");
														HX_STACK_LINE(110)
														{
															HX_STACK_LINE(110)
															int tmp66 = tmp64;		HX_STACK_VAR(tmp66,"tmp66");
															HX_STACK_LINE(110)
															int tmp67 = this2.cca(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
															HX_STACK_LINE(110)
															tmp65 = tmp67;
														}
														HX_STACK_LINE(110)
														int tmp66 = (int(tmp65) & int((int)240));		HX_STACK_VAR(tmp66,"tmp66");
														HX_STACK_LINE(110)
														bool tmp67 = (tmp66 == (int)224);		HX_STACK_VAR(tmp67,"tmp67");
														HX_STACK_LINE(110)
														if ((tmp67)){
															HX_STACK_LINE(110)
															tmp54 = (int)3;
														}
														else{
															HX_STACK_LINE(110)
															int tmp68 = (index - (int)4);		HX_STACK_VAR(tmp68,"tmp68");
															HX_STACK_LINE(110)
															int tmp69;		HX_STACK_VAR(tmp69,"tmp69");
															HX_STACK_LINE(110)
															{
																HX_STACK_LINE(110)
																int tmp70 = tmp68;		HX_STACK_VAR(tmp70,"tmp70");
																HX_STACK_LINE(110)
																int tmp71 = this2.cca(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
																HX_STACK_LINE(110)
																tmp69 = tmp71;
															}
															HX_STACK_LINE(110)
															int tmp70 = (int(tmp69) & int((int)248));		HX_STACK_VAR(tmp70,"tmp70");
															HX_STACK_LINE(110)
															bool tmp71 = (tmp70 == (int)240);		HX_STACK_VAR(tmp71,"tmp71");
															HX_STACK_LINE(110)
															if ((tmp71)){
																HX_STACK_LINE(110)
																tmp54 = (int)4;
															}
															else{
																HX_STACK_LINE(110)
																tmp54 = (int)1;
															}
														}
													}
												}
											}
										}
										HX_STACK_LINE(110)
										hx::SubEq(index,tmp54);
										HX_STACK_LINE(110)
										++(count);
									}
									HX_STACK_LINE(110)
									tmp45 = index;
								}
							}
						}
					}
					HX_STACK_LINE(110)
					int ei = tmp45;		HX_STACK_VAR(ei,"ei");
					HX_STACK_LINE(110)
					int tmp46 = si;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(110)
					int tmp47 = ei;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(110)
					tmp39 = s.substring(tmp46,tmp47);
				}
			}
			HX_STACK_LINE(110)
			::String tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(110)
			this->display = tmp40;
		}
		HX_STACK_LINE(110)
		::mint::Label tmp36 = this->label;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(110)
		::String tmp37 = this->display;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(110)
		tmp36->set_text(tmp37);
		HX_STACK_LINE(110)
		{
			HX_STACK_LINE(110)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(110)
			::mint::core::Signal tmp38 = this->onchangeindex;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(110)
			int tmp39 = tmp38->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(110)
			int _count = tmp39;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(110)
			while((true)){
				HX_STACK_LINE(110)
				bool tmp40 = (_idx < _count);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(110)
				bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(110)
				if ((tmp41)){
					HX_STACK_LINE(110)
					break;
				}
				HX_STACK_LINE(110)
				::mint::core::Signal tmp42 = this->onchangeindex;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(110)
				Dynamic tmp43 = tmp42->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(110)
				Dynamic fn = tmp43;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(110)
				bool tmp44 = (fn != null());		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(110)
				if ((tmp44)){
					HX_STACK_LINE(110)
					int tmp45 = this->index;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(110)
					fn(tmp45).Cast< Void >();
				}
				HX_STACK_LINE(110)
				(_idx)++;
			}
			HX_STACK_LINE(110)
			while((true)){
				HX_STACK_LINE(110)
				bool tmp40 = (_count > (int)0);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(110)
				bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(110)
				if ((tmp41)){
					HX_STACK_LINE(110)
					break;
				}
				HX_STACK_LINE(110)
				::mint::core::Signal tmp42 = this->onchangeindex;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(110)
				int tmp43 = (_count - (int)1);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(110)
				Dynamic tmp44 = tmp42->listeners->__GetItem(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(110)
				Dynamic fn = tmp44;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(110)
				bool tmp45 = (fn == null());		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(110)
				if ((tmp45)){
					HX_STACK_LINE(110)
					::mint::core::Signal tmp46 = this->onchangeindex;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(110)
					int tmp47 = (_count - (int)1);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(110)
					tmp46->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp47,(int)1);
				}
				HX_STACK_LINE(110)
				(_count)--;
			}
		}
		HX_STACK_LINE(110)
		bool tmp38 = _emit;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(110)
		if ((tmp38)){
			HX_STACK_LINE(110)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(110)
			::mint::core::Signal tmp39 = this->onchange;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(110)
			int tmp40 = tmp39->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(110)
			int _count = tmp40;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(110)
			while((true)){
				HX_STACK_LINE(110)
				bool tmp41 = (_idx < _count);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(110)
				bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(110)
				if ((tmp42)){
					HX_STACK_LINE(110)
					break;
				}
				HX_STACK_LINE(110)
				::mint::core::Signal tmp43 = this->onchange;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(110)
				Dynamic tmp44 = tmp43->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(110)
				Dynamic fn = tmp44;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(110)
				bool tmp45 = (fn != null());		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(110)
				if ((tmp45)){
					HX_STACK_LINE(110)
					::String tmp46 = this->edit;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(110)
					::String tmp47 = this->display;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(110)
					fn(tmp46,tmp47,false).Cast< Void >();
				}
				HX_STACK_LINE(110)
				(_idx)++;
			}
			HX_STACK_LINE(110)
			while((true)){
				HX_STACK_LINE(110)
				bool tmp41 = (_count > (int)0);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(110)
				bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(110)
				if ((tmp42)){
					HX_STACK_LINE(110)
					break;
				}
				HX_STACK_LINE(110)
				::mint::core::Signal tmp43 = this->onchange;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(110)
				int tmp44 = (_count - (int)1);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(110)
				Dynamic tmp45 = tmp43->listeners->__GetItem(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(110)
				Dynamic fn = tmp45;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(110)
				bool tmp46 = (fn == null());		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(110)
				if ((tmp46)){
					HX_STACK_LINE(110)
					::mint::core::Signal tmp47 = this->onchange;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(110)
					int tmp48 = (_count - (int)1);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(110)
					tmp47->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp48,(int)1);
				}
				HX_STACK_LINE(110)
				(_count)--;
			}
		}
		HX_STACK_LINE(110)
		this->edit;
	}
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(112)
		::mint::core::Signal tmp33 = this->oncreate;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(51)
		int tmp34 = tmp33->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(51)
		int _count = tmp34;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			bool tmp35 = (_idx < _count);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(52)
			bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(52)
			if ((tmp36)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(112)
			::mint::core::Signal tmp37 = this->oncreate;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(53)
			Dynamic tmp38 = tmp37->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(53)
			Dynamic fn = tmp38;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp39 = (fn != null());		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(54)
			if ((tmp39)){
				HX_STACK_LINE(55)
				fn().Cast< Void >();
			}
			HX_STACK_LINE(57)
			(_idx)++;
		}
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp35 = (_count > (int)0);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(60)
			bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(60)
			if ((tmp36)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(112)
			::mint::core::Signal tmp37 = this->oncreate;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(61)
			int tmp38 = (_count - (int)1);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(61)
			Dynamic tmp39 = tmp37->listeners->__GetItem(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(61)
			Dynamic fn = tmp39;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(62)
			bool tmp40 = (fn == null());		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(62)
			if ((tmp40)){
				HX_STACK_LINE(112)
				::mint::core::Signal tmp41 = this->oncreate;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(62)
				int tmp42 = (_count - (int)1);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(62)
				tmp41->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp42,(int)1);
			}
			HX_STACK_LINE(63)
			(_count)--;
		}
	}
}
;
	return null();
}

//TextEdit_obj::~TextEdit_obj() { }

Dynamic TextEdit_obj::__CreateEmpty() { return  new TextEdit_obj; }
hx::ObjectPtr< TextEdit_obj > TextEdit_obj::__new(Dynamic _options)
{  hx::ObjectPtr< TextEdit_obj > _result_ = new TextEdit_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic TextEdit_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextEdit_obj > _result_ = new TextEdit_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void TextEdit_obj::destroy( ){
{
		HX_STACK_FRAME("mint.TextEdit","destroy",0x1c842e4f,"mint.TextEdit.destroy","mint/TextEdit.hx",116,0x23cb477a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(118)
		this->super::destroy();
		HX_STACK_LINE(120)
		{
			HX_STACK_LINE(120)
			::mint::core::Signal tmp = this->onchange;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(120)
			::mint::core::Signal _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(120)
			_this->listeners = null();
			HX_STACK_LINE(120)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(121)
		this->onchange = null();
		HX_STACK_LINE(122)
		{
			HX_STACK_LINE(122)
			::mint::core::Signal tmp = this->onchangeindex;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(122)
			::mint::core::Signal _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(122)
			_this->listeners = null();
			HX_STACK_LINE(122)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(123)
		this->onchangeindex = null();
	}
return null();
}


Void TextEdit_obj::mousedown( Dynamic event){
{
		HX_STACK_FRAME("mint.TextEdit","mousedown",0x786a459c,"mint.TextEdit.mousedown","mint/TextEdit.hx",127,0x23cb477a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(129)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(129)
		this->super::mousedown(tmp);
		HX_STACK_LINE(131)
		int tmp1 = event->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(131)
		int tmp2 = event->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(131)
		bool tmp3 = this->contains(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(131)
		if ((tmp3)){
			HX_STACK_LINE(132)
			{
				HX_STACK_LINE(132)
				bool tmp4 = this->destroyed;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(132)
				bool tmp5 = (tmp4 == false);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(132)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(132)
				if ((tmp6)){
					HX_STACK_LINE(132)
					::String tmp7 = this->name;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(132)
					::String tmp8 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(132)
					::String tmp9 = (tmp8 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(132)
					::String tmp10 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(132)
					::String tmp11 = (tmp10 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(132)
					::String tmp12 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(132)
					::mint::core::DebugError tmp13 = ::mint::core::DebugError_obj::assertion(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(132)
					HX_STACK_DO_THROW(tmp13);
				}
			}
			HX_STACK_LINE(132)
			::mint::Canvas tmp4 = this->canvas;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(132)
			bool tmp5 = (tmp4 == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(132)
			if ((tmp5)){
				HX_STACK_LINE(132)
				Dynamic();
			}
			else{
				HX_STACK_LINE(132)
				::mint::Canvas tmp6 = this->canvas;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(132)
				::mint::Control tmp7 = tmp6->get_focused();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(132)
				bool tmp8 = (tmp7 == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(132)
				bool _pre = tmp8;		HX_STACK_VAR(_pre,"_pre");
				HX_STACK_LINE(132)
				::mint::Canvas tmp9 = this->canvas;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(132)
				tmp9->set_focused(hx::ObjectPtr<OBJ_>(this));
				HX_STACK_LINE(132)
				bool tmp10 = _pre;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(132)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(132)
				if ((tmp11)){
					HX_STACK_LINE(132)
					int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
					HX_STACK_LINE(132)
					::mint::core::Signal tmp12 = this->onfocused;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(132)
					int tmp13 = tmp12->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(132)
					int _count = tmp13;		HX_STACK_VAR(_count,"_count");
					HX_STACK_LINE(132)
					while((true)){
						HX_STACK_LINE(132)
						bool tmp14 = (_idx < _count);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(132)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(132)
						if ((tmp15)){
							HX_STACK_LINE(132)
							break;
						}
						HX_STACK_LINE(132)
						::mint::core::Signal tmp16 = this->onfocused;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(132)
						Dynamic tmp17 = tmp16->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(132)
						Dynamic fn = tmp17;		HX_STACK_VAR(fn,"fn");
						HX_STACK_LINE(132)
						bool tmp18 = (fn != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(132)
						if ((tmp18)){
							HX_STACK_LINE(132)
							fn(true).Cast< Void >();
						}
						HX_STACK_LINE(132)
						(_idx)++;
					}
					HX_STACK_LINE(132)
					while((true)){
						HX_STACK_LINE(132)
						bool tmp14 = (_count > (int)0);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(132)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(132)
						if ((tmp15)){
							HX_STACK_LINE(132)
							break;
						}
						HX_STACK_LINE(132)
						::mint::core::Signal tmp16 = this->onfocused;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(132)
						int tmp17 = (_count - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(132)
						Dynamic tmp18 = tmp16->listeners->__GetItem(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(132)
						Dynamic fn = tmp18;		HX_STACK_VAR(fn,"fn");
						HX_STACK_LINE(132)
						bool tmp19 = (fn == null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(132)
						if ((tmp19)){
							HX_STACK_LINE(132)
							::mint::core::Signal tmp20 = this->onfocused;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(132)
							int tmp21 = (_count - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(132)
							tmp20->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp21,(int)1);
						}
						HX_STACK_LINE(132)
						(_count)--;
					}
				}
			}
		}
		else{
			HX_STACK_LINE(134)
			this->unfocus();
		}
	}
return null();
}


Void TextEdit_obj::unfocus( ){
{
		HX_STACK_FRAME("mint.TextEdit","unfocus",0xf9185834,"mint.TextEdit.unfocus","mint/TextEdit.hx",139,0x23cb477a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(141)
		this->super::unfocus();
		HX_STACK_LINE(143)
		this->composition = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		HX_STACK_LINE(144)
		int tmp = this->composition_length = (int)0;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(144)
		this->composition_start = tmp;
	}
return null();
}


Void TextEdit_obj::textinput( Dynamic event){
{
		HX_STACK_FRAME("mint.TextEdit","textinput",0x385ea4d2,"mint.TextEdit.textinput","mint/TextEdit.hx",148,0x23cb477a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(150)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		this->super::textinput(tmp);
		HX_STACK_LINE(152)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(152)
		{
			HX_STACK_LINE(152)
			int tmp2 = this->index;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(152)
			int cur = tmp2;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(152)
			{
				HX_STACK_LINE(152)
				::String tmp3 = this->edit;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(152)
				::String s = tmp3;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(152)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(152)
				{
					HX_STACK_LINE(152)
					bool tmp5 = true;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(152)
					int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(152)
					if ((tmp5)){
						HX_STACK_LINE(152)
						tmp6 = (int)0;
					}
					else{
						HX_STACK_LINE(152)
						tmp6 = s.length;
					}
					HX_STACK_LINE(152)
					int index = tmp6;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(152)
					{
						HX_STACK_LINE(152)
						::String this1 = s;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(152)
						bool tmp7 = true;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(152)
						if ((tmp7)){
							HX_STACK_LINE(152)
							int index1 = index;		HX_STACK_VAR(index1,"index1");
							HX_STACK_LINE(152)
							int tmp8 = this1.length;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(152)
							int len = tmp8;		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(152)
							int i = (int)0;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(152)
							while((true)){
								HX_STACK_LINE(152)
								bool tmp9 = (i < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(152)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(152)
								if ((tmp9)){
									HX_STACK_LINE(152)
									tmp10 = (index1 < len);
								}
								else{
									HX_STACK_LINE(152)
									tmp10 = false;
								}
								HX_STACK_LINE(152)
								bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(152)
								if ((tmp11)){
									HX_STACK_LINE(152)
									break;
								}
								HX_STACK_LINE(152)
								int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(152)
								{
									HX_STACK_LINE(152)
									int tmp13 = index1;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(152)
									int tmp14 = this1.cca(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(152)
									int c = tmp14;		HX_STACK_VAR(c,"c");
									HX_STACK_LINE(152)
									bool tmp15 = (c < (int)192);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(152)
									if ((tmp15)){
										HX_STACK_LINE(152)
										tmp12 = (int)1;
									}
									else{
										HX_STACK_LINE(152)
										bool tmp16 = (c < (int)224);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(152)
										if ((tmp16)){
											HX_STACK_LINE(152)
											tmp12 = (int)2;
										}
										else{
											HX_STACK_LINE(152)
											bool tmp17 = (c < (int)240);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(152)
											if ((tmp17)){
												HX_STACK_LINE(152)
												tmp12 = (int)3;
											}
											else{
												HX_STACK_LINE(152)
												bool tmp18 = (c < (int)248);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(152)
												if ((tmp18)){
													HX_STACK_LINE(152)
													tmp12 = (int)4;
												}
												else{
													HX_STACK_LINE(152)
													tmp12 = (int)1;
												}
											}
										}
									}
								}
								HX_STACK_LINE(152)
								hx::AddEq(index1,tmp12);
								HX_STACK_LINE(152)
								++(i);
							}
							HX_STACK_LINE(152)
							tmp4 = index1;
						}
						else{
							HX_STACK_LINE(152)
							int index1 = index;		HX_STACK_VAR(index1,"index1");
							HX_STACK_LINE(152)
							int count = (int)0;		HX_STACK_VAR(count,"count");
							HX_STACK_LINE(152)
							while((true)){
								HX_STACK_LINE(152)
								int tmp8 = count;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(152)
								int tmp9 = (int)0;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(152)
								bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(152)
								bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(152)
								if ((tmp10)){
									HX_STACK_LINE(152)
									tmp11 = ((int)0 < index1);
								}
								else{
									HX_STACK_LINE(152)
									tmp11 = false;
								}
								HX_STACK_LINE(152)
								bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(152)
								if ((tmp12)){
									HX_STACK_LINE(152)
									break;
								}
								HX_STACK_LINE(152)
								int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(152)
								{
									HX_STACK_LINE(152)
									::String this2 = this1;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(152)
									{
										HX_STACK_LINE(152)
										int tmp14 = (index1 - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(152)
										int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(152)
										{
											HX_STACK_LINE(152)
											int tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(152)
											int tmp17 = this2.cca(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(152)
											tmp15 = tmp17;
										}
										HX_STACK_LINE(152)
										int c1 = tmp15;		HX_STACK_VAR(c1,"c1");
										HX_STACK_LINE(152)
										bool tmp16 = (c1 < (int)128);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(152)
										bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(152)
										bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(152)
										if ((tmp17)){
											HX_STACK_LINE(152)
											tmp18 = (c1 >= (int)192);
										}
										else{
											HX_STACK_LINE(152)
											tmp18 = true;
										}
										HX_STACK_LINE(152)
										if ((tmp18)){
											HX_STACK_LINE(152)
											tmp13 = (int)1;
										}
										else{
											HX_STACK_LINE(152)
											int tmp19 = (index1 - (int)2);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(152)
											int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(152)
											{
												HX_STACK_LINE(152)
												int tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(152)
												int tmp22 = this2.cca(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(152)
												tmp20 = tmp22;
											}
											HX_STACK_LINE(152)
											int tmp21 = (int(tmp20) & int((int)224));		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(152)
											bool tmp22 = (tmp21 == (int)192);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(152)
											if ((tmp22)){
												HX_STACK_LINE(152)
												tmp13 = (int)2;
											}
											else{
												HX_STACK_LINE(152)
												int tmp23 = (index1 - (int)3);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(152)
												int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(152)
												{
													HX_STACK_LINE(152)
													int tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(152)
													int tmp26 = this2.cca(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(152)
													tmp24 = tmp26;
												}
												HX_STACK_LINE(152)
												int tmp25 = (int(tmp24) & int((int)240));		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(152)
												bool tmp26 = (tmp25 == (int)224);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(152)
												if ((tmp26)){
													HX_STACK_LINE(152)
													tmp13 = (int)3;
												}
												else{
													HX_STACK_LINE(152)
													int tmp27 = (index1 - (int)4);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(152)
													int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(152)
													{
														HX_STACK_LINE(152)
														int tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(152)
														int tmp30 = this2.cca(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(152)
														tmp28 = tmp30;
													}
													HX_STACK_LINE(152)
													int tmp29 = (int(tmp28) & int((int)248));		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(152)
													bool tmp30 = (tmp29 == (int)240);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(152)
													if ((tmp30)){
														HX_STACK_LINE(152)
														tmp13 = (int)4;
													}
													else{
														HX_STACK_LINE(152)
														tmp13 = (int)1;
													}
												}
											}
										}
									}
								}
								HX_STACK_LINE(152)
								hx::SubEq(index1,tmp13);
								HX_STACK_LINE(152)
								++(count);
							}
							HX_STACK_LINE(152)
							tmp4 = index1;
						}
					}
				}
				HX_STACK_LINE(152)
				int si = tmp4;		HX_STACK_VAR(si,"si");
				HX_STACK_LINE(152)
				bool tmp5 = (cur == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(152)
				int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(152)
				if ((tmp5)){
					HX_STACK_LINE(152)
					tmp6 = s.length;
				}
				else{
					HX_STACK_LINE(152)
					bool tmp7 = (cur < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(152)
					if ((tmp7)){
						HX_STACK_LINE(152)
						tmp6 = si;
					}
					else{
						HX_STACK_LINE(152)
						int codePointOffset = cur;		HX_STACK_VAR(codePointOffset,"codePointOffset");
						HX_STACK_LINE(152)
						{
							HX_STACK_LINE(152)
							::String this1 = s;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(152)
							bool tmp8 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(152)
							if ((tmp8)){
								HX_STACK_LINE(152)
								int index = si;		HX_STACK_VAR(index,"index");
								HX_STACK_LINE(152)
								int tmp9 = this1.length;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(152)
								int len = tmp9;		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(152)
								int i = (int)0;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(152)
								while((true)){
									HX_STACK_LINE(152)
									bool tmp10 = (i < codePointOffset);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(152)
									bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(152)
									if ((tmp10)){
										HX_STACK_LINE(152)
										tmp11 = (index < len);
									}
									else{
										HX_STACK_LINE(152)
										tmp11 = false;
									}
									HX_STACK_LINE(152)
									bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(152)
									if ((tmp12)){
										HX_STACK_LINE(152)
										break;
									}
									HX_STACK_LINE(152)
									int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(152)
									{
										HX_STACK_LINE(152)
										int tmp14 = index;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(152)
										int tmp15 = this1.cca(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(152)
										int c = tmp15;		HX_STACK_VAR(c,"c");
										HX_STACK_LINE(152)
										bool tmp16 = (c < (int)192);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(152)
										if ((tmp16)){
											HX_STACK_LINE(152)
											tmp13 = (int)1;
										}
										else{
											HX_STACK_LINE(152)
											bool tmp17 = (c < (int)224);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(152)
											if ((tmp17)){
												HX_STACK_LINE(152)
												tmp13 = (int)2;
											}
											else{
												HX_STACK_LINE(152)
												bool tmp18 = (c < (int)240);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(152)
												if ((tmp18)){
													HX_STACK_LINE(152)
													tmp13 = (int)3;
												}
												else{
													HX_STACK_LINE(152)
													bool tmp19 = (c < (int)248);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(152)
													if ((tmp19)){
														HX_STACK_LINE(152)
														tmp13 = (int)4;
													}
													else{
														HX_STACK_LINE(152)
														tmp13 = (int)1;
													}
												}
											}
										}
									}
									HX_STACK_LINE(152)
									hx::AddEq(index,tmp13);
									HX_STACK_LINE(152)
									++(i);
								}
								HX_STACK_LINE(152)
								tmp6 = index;
							}
							else{
								HX_STACK_LINE(152)
								int index = si;		HX_STACK_VAR(index,"index");
								HX_STACK_LINE(152)
								int count = (int)0;		HX_STACK_VAR(count,"count");
								HX_STACK_LINE(152)
								while((true)){
									HX_STACK_LINE(152)
									int tmp9 = count;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(152)
									int tmp10 = codePointOffset;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(152)
									int tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(152)
									bool tmp12 = (tmp9 < tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(152)
									bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(152)
									if ((tmp12)){
										HX_STACK_LINE(152)
										tmp13 = ((int)0 < index);
									}
									else{
										HX_STACK_LINE(152)
										tmp13 = false;
									}
									HX_STACK_LINE(152)
									bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(152)
									if ((tmp14)){
										HX_STACK_LINE(152)
										break;
									}
									HX_STACK_LINE(152)
									int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(152)
									{
										HX_STACK_LINE(152)
										::String this2 = this1;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(152)
										{
											HX_STACK_LINE(152)
											int tmp16 = (index - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(152)
											int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(152)
											{
												HX_STACK_LINE(152)
												int tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(152)
												int tmp19 = this2.cca(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(152)
												tmp17 = tmp19;
											}
											HX_STACK_LINE(152)
											int c1 = tmp17;		HX_STACK_VAR(c1,"c1");
											HX_STACK_LINE(152)
											bool tmp18 = (c1 < (int)128);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(152)
											bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(152)
											bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(152)
											if ((tmp19)){
												HX_STACK_LINE(152)
												tmp20 = (c1 >= (int)192);
											}
											else{
												HX_STACK_LINE(152)
												tmp20 = true;
											}
											HX_STACK_LINE(152)
											if ((tmp20)){
												HX_STACK_LINE(152)
												tmp15 = (int)1;
											}
											else{
												HX_STACK_LINE(152)
												int tmp21 = (index - (int)2);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(152)
												int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(152)
												{
													HX_STACK_LINE(152)
													int tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(152)
													int tmp24 = this2.cca(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(152)
													tmp22 = tmp24;
												}
												HX_STACK_LINE(152)
												int tmp23 = (int(tmp22) & int((int)224));		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(152)
												bool tmp24 = (tmp23 == (int)192);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(152)
												if ((tmp24)){
													HX_STACK_LINE(152)
													tmp15 = (int)2;
												}
												else{
													HX_STACK_LINE(152)
													int tmp25 = (index - (int)3);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(152)
													int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(152)
													{
														HX_STACK_LINE(152)
														int tmp27 = tmp25;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(152)
														int tmp28 = this2.cca(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(152)
														tmp26 = tmp28;
													}
													HX_STACK_LINE(152)
													int tmp27 = (int(tmp26) & int((int)240));		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(152)
													bool tmp28 = (tmp27 == (int)224);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(152)
													if ((tmp28)){
														HX_STACK_LINE(152)
														tmp15 = (int)3;
													}
													else{
														HX_STACK_LINE(152)
														int tmp29 = (index - (int)4);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(152)
														int tmp30;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(152)
														{
															HX_STACK_LINE(152)
															int tmp31 = tmp29;		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(152)
															int tmp32 = this2.cca(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(152)
															tmp30 = tmp32;
														}
														HX_STACK_LINE(152)
														int tmp31 = (int(tmp30) & int((int)248));		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(152)
														bool tmp32 = (tmp31 == (int)240);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(152)
														if ((tmp32)){
															HX_STACK_LINE(152)
															tmp15 = (int)4;
														}
														else{
															HX_STACK_LINE(152)
															tmp15 = (int)1;
														}
													}
												}
											}
										}
									}
									HX_STACK_LINE(152)
									hx::SubEq(index,tmp15);
									HX_STACK_LINE(152)
									++(count);
								}
								HX_STACK_LINE(152)
								tmp6 = index;
							}
						}
					}
				}
				HX_STACK_LINE(152)
				int ei = tmp6;		HX_STACK_VAR(ei,"ei");
				HX_STACK_LINE(152)
				int tmp7 = si;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(152)
				int tmp8 = ei;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(152)
				tmp1 = s.substring(tmp7,tmp8);
			}
		}
		HX_STACK_LINE(152)
		::String _bef = tmp1;		HX_STACK_VAR(_bef,"_bef");
		HX_STACK_LINE(153)
		::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(153)
		{
			HX_STACK_LINE(153)
			int tmp3 = this->index;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(153)
			int cur = tmp3;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(153)
			{
				HX_STACK_LINE(153)
				::String tmp4 = this->edit;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(153)
				::String s = tmp4;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(153)
				::String tmp5 = this->edit;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(153)
				Dynamic length = tmp5.length;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(153)
				int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(153)
				{
					HX_STACK_LINE(153)
					bool tmp7 = (cur >= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(153)
					int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(153)
					if ((tmp7)){
						HX_STACK_LINE(153)
						tmp8 = (int)0;
					}
					else{
						HX_STACK_LINE(153)
						tmp8 = s.length;
					}
					HX_STACK_LINE(153)
					int index = tmp8;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(153)
					{
						HX_STACK_LINE(153)
						::String this1 = s;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(153)
						bool tmp9 = (cur >= (int)0);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(153)
						if ((tmp9)){
							HX_STACK_LINE(153)
							int index1 = index;		HX_STACK_VAR(index1,"index1");
							HX_STACK_LINE(153)
							int tmp10 = this1.length;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(153)
							int len = tmp10;		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(153)
							int i = (int)0;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(153)
							while((true)){
								HX_STACK_LINE(153)
								bool tmp11 = (i < cur);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(153)
								bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(153)
								if ((tmp11)){
									HX_STACK_LINE(153)
									tmp12 = (index1 < len);
								}
								else{
									HX_STACK_LINE(153)
									tmp12 = false;
								}
								HX_STACK_LINE(153)
								bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(153)
								if ((tmp13)){
									HX_STACK_LINE(153)
									break;
								}
								HX_STACK_LINE(153)
								int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(153)
								{
									HX_STACK_LINE(153)
									int tmp15 = index1;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(153)
									int tmp16 = this1.cca(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(153)
									int c = tmp16;		HX_STACK_VAR(c,"c");
									HX_STACK_LINE(153)
									bool tmp17 = (c < (int)192);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(153)
									if ((tmp17)){
										HX_STACK_LINE(153)
										tmp14 = (int)1;
									}
									else{
										HX_STACK_LINE(153)
										bool tmp18 = (c < (int)224);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(153)
										if ((tmp18)){
											HX_STACK_LINE(153)
											tmp14 = (int)2;
										}
										else{
											HX_STACK_LINE(153)
											bool tmp19 = (c < (int)240);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(153)
											if ((tmp19)){
												HX_STACK_LINE(153)
												tmp14 = (int)3;
											}
											else{
												HX_STACK_LINE(153)
												bool tmp20 = (c < (int)248);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(153)
												if ((tmp20)){
													HX_STACK_LINE(153)
													tmp14 = (int)4;
												}
												else{
													HX_STACK_LINE(153)
													tmp14 = (int)1;
												}
											}
										}
									}
								}
								HX_STACK_LINE(153)
								hx::AddEq(index1,tmp14);
								HX_STACK_LINE(153)
								++(i);
							}
							HX_STACK_LINE(153)
							tmp6 = index1;
						}
						else{
							HX_STACK_LINE(153)
							int index1 = index;		HX_STACK_VAR(index1,"index1");
							HX_STACK_LINE(153)
							int count = (int)0;		HX_STACK_VAR(count,"count");
							HX_STACK_LINE(153)
							while((true)){
								HX_STACK_LINE(153)
								int tmp10 = count;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(153)
								int tmp11 = cur;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(153)
								int tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(153)
								bool tmp13 = (tmp10 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(153)
								bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(153)
								if ((tmp13)){
									HX_STACK_LINE(153)
									tmp14 = ((int)0 < index1);
								}
								else{
									HX_STACK_LINE(153)
									tmp14 = false;
								}
								HX_STACK_LINE(153)
								bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(153)
								if ((tmp15)){
									HX_STACK_LINE(153)
									break;
								}
								HX_STACK_LINE(153)
								int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(153)
								{
									HX_STACK_LINE(153)
									::String this2 = this1;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(153)
									{
										HX_STACK_LINE(153)
										int tmp17 = (index1 - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(153)
										int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(153)
										{
											HX_STACK_LINE(153)
											int tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(153)
											int tmp20 = this2.cca(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(153)
											tmp18 = tmp20;
										}
										HX_STACK_LINE(153)
										int c1 = tmp18;		HX_STACK_VAR(c1,"c1");
										HX_STACK_LINE(153)
										bool tmp19 = (c1 < (int)128);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(153)
										bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(153)
										bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(153)
										if ((tmp20)){
											HX_STACK_LINE(153)
											tmp21 = (c1 >= (int)192);
										}
										else{
											HX_STACK_LINE(153)
											tmp21 = true;
										}
										HX_STACK_LINE(153)
										if ((tmp21)){
											HX_STACK_LINE(153)
											tmp16 = (int)1;
										}
										else{
											HX_STACK_LINE(153)
											int tmp22 = (index1 - (int)2);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(153)
											int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(153)
											{
												HX_STACK_LINE(153)
												int tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(153)
												int tmp25 = this2.cca(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(153)
												tmp23 = tmp25;
											}
											HX_STACK_LINE(153)
											int tmp24 = (int(tmp23) & int((int)224));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(153)
											bool tmp25 = (tmp24 == (int)192);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(153)
											if ((tmp25)){
												HX_STACK_LINE(153)
												tmp16 = (int)2;
											}
											else{
												HX_STACK_LINE(153)
												int tmp26 = (index1 - (int)3);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(153)
												int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(153)
												{
													HX_STACK_LINE(153)
													int tmp28 = tmp26;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(153)
													int tmp29 = this2.cca(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(153)
													tmp27 = tmp29;
												}
												HX_STACK_LINE(153)
												int tmp28 = (int(tmp27) & int((int)240));		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(153)
												bool tmp29 = (tmp28 == (int)224);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(153)
												if ((tmp29)){
													HX_STACK_LINE(153)
													tmp16 = (int)3;
												}
												else{
													HX_STACK_LINE(153)
													int tmp30 = (index1 - (int)4);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(153)
													int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(153)
													{
														HX_STACK_LINE(153)
														int tmp32 = tmp30;		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(153)
														int tmp33 = this2.cca(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(153)
														tmp31 = tmp33;
													}
													HX_STACK_LINE(153)
													int tmp32 = (int(tmp31) & int((int)248));		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(153)
													bool tmp33 = (tmp32 == (int)240);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(153)
													if ((tmp33)){
														HX_STACK_LINE(153)
														tmp16 = (int)4;
													}
													else{
														HX_STACK_LINE(153)
														tmp16 = (int)1;
													}
												}
											}
										}
									}
								}
								HX_STACK_LINE(153)
								hx::SubEq(index1,tmp16);
								HX_STACK_LINE(153)
								++(count);
							}
							HX_STACK_LINE(153)
							tmp6 = index1;
						}
					}
				}
				HX_STACK_LINE(153)
				int si = tmp6;		HX_STACK_VAR(si,"si");
				HX_STACK_LINE(153)
				bool tmp7 = (length == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(153)
				int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(153)
				if ((tmp7)){
					HX_STACK_LINE(153)
					tmp8 = s.length;
				}
				else{
					HX_STACK_LINE(153)
					bool tmp9 = (length < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(153)
					if ((tmp9)){
						HX_STACK_LINE(153)
						tmp8 = si;
					}
					else{
						HX_STACK_LINE(153)
						int codePointOffset = length;		HX_STACK_VAR(codePointOffset,"codePointOffset");
						HX_STACK_LINE(153)
						{
							HX_STACK_LINE(153)
							::String this1 = s;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(153)
							bool tmp10 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(153)
							if ((tmp10)){
								HX_STACK_LINE(153)
								int index = si;		HX_STACK_VAR(index,"index");
								HX_STACK_LINE(153)
								int tmp11 = this1.length;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(153)
								int len = tmp11;		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(153)
								int i = (int)0;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(153)
								while((true)){
									HX_STACK_LINE(153)
									bool tmp12 = (i < codePointOffset);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(153)
									bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(153)
									if ((tmp12)){
										HX_STACK_LINE(153)
										tmp13 = (index < len);
									}
									else{
										HX_STACK_LINE(153)
										tmp13 = false;
									}
									HX_STACK_LINE(153)
									bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(153)
									if ((tmp14)){
										HX_STACK_LINE(153)
										break;
									}
									HX_STACK_LINE(153)
									int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(153)
									{
										HX_STACK_LINE(153)
										int tmp16 = index;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(153)
										int tmp17 = this1.cca(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(153)
										int c = tmp17;		HX_STACK_VAR(c,"c");
										HX_STACK_LINE(153)
										bool tmp18 = (c < (int)192);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(153)
										if ((tmp18)){
											HX_STACK_LINE(153)
											tmp15 = (int)1;
										}
										else{
											HX_STACK_LINE(153)
											bool tmp19 = (c < (int)224);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(153)
											if ((tmp19)){
												HX_STACK_LINE(153)
												tmp15 = (int)2;
											}
											else{
												HX_STACK_LINE(153)
												bool tmp20 = (c < (int)240);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(153)
												if ((tmp20)){
													HX_STACK_LINE(153)
													tmp15 = (int)3;
												}
												else{
													HX_STACK_LINE(153)
													bool tmp21 = (c < (int)248);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(153)
													if ((tmp21)){
														HX_STACK_LINE(153)
														tmp15 = (int)4;
													}
													else{
														HX_STACK_LINE(153)
														tmp15 = (int)1;
													}
												}
											}
										}
									}
									HX_STACK_LINE(153)
									hx::AddEq(index,tmp15);
									HX_STACK_LINE(153)
									++(i);
								}
								HX_STACK_LINE(153)
								tmp8 = index;
							}
							else{
								HX_STACK_LINE(153)
								int index = si;		HX_STACK_VAR(index,"index");
								HX_STACK_LINE(153)
								int count = (int)0;		HX_STACK_VAR(count,"count");
								HX_STACK_LINE(153)
								while((true)){
									HX_STACK_LINE(153)
									int tmp11 = count;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(153)
									int tmp12 = codePointOffset;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(153)
									int tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(153)
									bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(153)
									bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(153)
									if ((tmp14)){
										HX_STACK_LINE(153)
										tmp15 = ((int)0 < index);
									}
									else{
										HX_STACK_LINE(153)
										tmp15 = false;
									}
									HX_STACK_LINE(153)
									bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(153)
									if ((tmp16)){
										HX_STACK_LINE(153)
										break;
									}
									HX_STACK_LINE(153)
									int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(153)
									{
										HX_STACK_LINE(153)
										::String this2 = this1;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(153)
										{
											HX_STACK_LINE(153)
											int tmp18 = (index - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(153)
											int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(153)
											{
												HX_STACK_LINE(153)
												int tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(153)
												int tmp21 = this2.cca(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(153)
												tmp19 = tmp21;
											}
											HX_STACK_LINE(153)
											int c1 = tmp19;		HX_STACK_VAR(c1,"c1");
											HX_STACK_LINE(153)
											bool tmp20 = (c1 < (int)128);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(153)
											bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(153)
											bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(153)
											if ((tmp21)){
												HX_STACK_LINE(153)
												tmp22 = (c1 >= (int)192);
											}
											else{
												HX_STACK_LINE(153)
												tmp22 = true;
											}
											HX_STACK_LINE(153)
											if ((tmp22)){
												HX_STACK_LINE(153)
												tmp17 = (int)1;
											}
											else{
												HX_STACK_LINE(153)
												int tmp23 = (index - (int)2);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(153)
												int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(153)
												{
													HX_STACK_LINE(153)
													int tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(153)
													int tmp26 = this2.cca(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(153)
													tmp24 = tmp26;
												}
												HX_STACK_LINE(153)
												int tmp25 = (int(tmp24) & int((int)224));		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(153)
												bool tmp26 = (tmp25 == (int)192);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(153)
												if ((tmp26)){
													HX_STACK_LINE(153)
													tmp17 = (int)2;
												}
												else{
													HX_STACK_LINE(153)
													int tmp27 = (index - (int)3);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(153)
													int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(153)
													{
														HX_STACK_LINE(153)
														int tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(153)
														int tmp30 = this2.cca(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(153)
														tmp28 = tmp30;
													}
													HX_STACK_LINE(153)
													int tmp29 = (int(tmp28) & int((int)240));		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(153)
													bool tmp30 = (tmp29 == (int)224);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(153)
													if ((tmp30)){
														HX_STACK_LINE(153)
														tmp17 = (int)3;
													}
													else{
														HX_STACK_LINE(153)
														int tmp31 = (index - (int)4);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(153)
														int tmp32;		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(153)
														{
															HX_STACK_LINE(153)
															int tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(153)
															int tmp34 = this2.cca(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(153)
															tmp32 = tmp34;
														}
														HX_STACK_LINE(153)
														int tmp33 = (int(tmp32) & int((int)248));		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(153)
														bool tmp34 = (tmp33 == (int)240);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(153)
														if ((tmp34)){
															HX_STACK_LINE(153)
															tmp17 = (int)4;
														}
														else{
															HX_STACK_LINE(153)
															tmp17 = (int)1;
														}
													}
												}
											}
										}
									}
									HX_STACK_LINE(153)
									hx::SubEq(index,tmp17);
									HX_STACK_LINE(153)
									++(count);
								}
								HX_STACK_LINE(153)
								tmp8 = index;
							}
						}
					}
				}
				HX_STACK_LINE(153)
				int ei = tmp8;		HX_STACK_VAR(ei,"ei");
				HX_STACK_LINE(153)
				int tmp9 = si;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(153)
				int tmp10 = ei;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(153)
				tmp2 = s.substring(tmp9,tmp10);
			}
		}
		HX_STACK_LINE(153)
		::String _aft = tmp2;		HX_STACK_VAR(_aft,"_aft");
		HX_STACK_LINE(154)
		::String tmp3 = (_bef + event->__Field(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(154)
		::String tmp4 = _aft;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(154)
		::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(154)
		::String _new = tmp5;		HX_STACK_VAR(_new,"_new");
		HX_STACK_LINE(156)
		{
			HX_STACK_LINE(156)
			::mint::types::TextEventType _g = event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(156)
			switch( (int)(_g->__Index())){
				case (int)1: {
					HX_STACK_LINE(160)
					this->composition = event->__Field(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"), hx::paccDynamic );
					HX_STACK_LINE(161)
					this->composition_start = event->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );
					HX_STACK_LINE(162)
					this->composition_length = event->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
					HX_STACK_LINE(164)
					{
						HX_STACK_LINE(164)
						::String tmp6 = this->edit;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(164)
						::String str = tmp6;		HX_STACK_VAR(str,"str");
						HX_STACK_LINE(164)
						this->edit = str;
						HX_STACK_LINE(164)
						::String tmp7 = this->display_char;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(164)
						bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(164)
						if ((tmp8)){
							HX_STACK_LINE(164)
							this->display = HX_HCSTRING("","\x00","\x00","\x00","\x00");
							HX_STACK_LINE(164)
							::String tmp9 = str;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(164)
							int tmp10 = str.length;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(164)
							int tmp11 = ::mint::core::unifill::_Utf8::Utf8_Impl__obj::codePointCount(tmp9,(int)0,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(164)
							int _l = tmp11;		HX_STACK_VAR(_l,"_l");
							HX_STACK_LINE(164)
							{
								HX_STACK_LINE(164)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(164)
								while((true)){
									HX_STACK_LINE(164)
									bool tmp12 = (_g1 < _l);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(164)
									bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(164)
									if ((tmp13)){
										HX_STACK_LINE(164)
										break;
									}
									HX_STACK_LINE(164)
									int tmp14 = (_g1)++;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(164)
									int i = tmp14;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(164)
									::String tmp15 = this->display_char;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(164)
									hx::AddEq(this->display,tmp15);
								}
							}
						}
						else{
							HX_STACK_LINE(164)
							::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(164)
							{
								HX_STACK_LINE(164)
								int tmp10 = this->index;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(164)
								int cur = tmp10;		HX_STACK_VAR(cur,"cur");
								HX_STACK_LINE(164)
								{
									HX_STACK_LINE(164)
									::String tmp11 = this->edit;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(164)
									::String s = tmp11;		HX_STACK_VAR(s,"s");
									HX_STACK_LINE(164)
									int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(164)
									{
										HX_STACK_LINE(164)
										bool tmp13 = true;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(164)
										int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(164)
										if ((tmp13)){
											HX_STACK_LINE(164)
											tmp14 = (int)0;
										}
										else{
											HX_STACK_LINE(164)
											tmp14 = s.length;
										}
										HX_STACK_LINE(164)
										int index = tmp14;		HX_STACK_VAR(index,"index");
										HX_STACK_LINE(164)
										{
											HX_STACK_LINE(164)
											::String this1 = s;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(164)
											bool tmp15 = true;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(164)
											if ((tmp15)){
												HX_STACK_LINE(164)
												int index1 = index;		HX_STACK_VAR(index1,"index1");
												HX_STACK_LINE(164)
												int tmp16 = this1.length;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(164)
												int len = tmp16;		HX_STACK_VAR(len,"len");
												HX_STACK_LINE(164)
												int i = (int)0;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(164)
												while((true)){
													HX_STACK_LINE(164)
													bool tmp17 = (i < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(164)
													bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(164)
													if ((tmp17)){
														HX_STACK_LINE(164)
														tmp18 = (index1 < len);
													}
													else{
														HX_STACK_LINE(164)
														tmp18 = false;
													}
													HX_STACK_LINE(164)
													bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(164)
													if ((tmp19)){
														HX_STACK_LINE(164)
														break;
													}
													HX_STACK_LINE(164)
													int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(164)
													{
														HX_STACK_LINE(164)
														int tmp21 = index1;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(164)
														int tmp22 = this1.cca(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(164)
														int c = tmp22;		HX_STACK_VAR(c,"c");
														HX_STACK_LINE(164)
														bool tmp23 = (c < (int)192);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(164)
														if ((tmp23)){
															HX_STACK_LINE(164)
															tmp20 = (int)1;
														}
														else{
															HX_STACK_LINE(164)
															bool tmp24 = (c < (int)224);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(164)
															if ((tmp24)){
																HX_STACK_LINE(164)
																tmp20 = (int)2;
															}
															else{
																HX_STACK_LINE(164)
																bool tmp25 = (c < (int)240);		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(164)
																if ((tmp25)){
																	HX_STACK_LINE(164)
																	tmp20 = (int)3;
																}
																else{
																	HX_STACK_LINE(164)
																	bool tmp26 = (c < (int)248);		HX_STACK_VAR(tmp26,"tmp26");
																	HX_STACK_LINE(164)
																	if ((tmp26)){
																		HX_STACK_LINE(164)
																		tmp20 = (int)4;
																	}
																	else{
																		HX_STACK_LINE(164)
																		tmp20 = (int)1;
																	}
																}
															}
														}
													}
													HX_STACK_LINE(164)
													hx::AddEq(index1,tmp20);
													HX_STACK_LINE(164)
													++(i);
												}
												HX_STACK_LINE(164)
												tmp12 = index1;
											}
											else{
												HX_STACK_LINE(164)
												int index1 = index;		HX_STACK_VAR(index1,"index1");
												HX_STACK_LINE(164)
												int count = (int)0;		HX_STACK_VAR(count,"count");
												HX_STACK_LINE(164)
												while((true)){
													HX_STACK_LINE(164)
													int tmp16 = count;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(164)
													int tmp17 = (int)0;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(164)
													bool tmp18 = (tmp16 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(164)
													bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(164)
													if ((tmp18)){
														HX_STACK_LINE(164)
														tmp19 = ((int)0 < index1);
													}
													else{
														HX_STACK_LINE(164)
														tmp19 = false;
													}
													HX_STACK_LINE(164)
													bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(164)
													if ((tmp20)){
														HX_STACK_LINE(164)
														break;
													}
													HX_STACK_LINE(164)
													int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(164)
													{
														HX_STACK_LINE(164)
														::String this2 = this1;		HX_STACK_VAR(this2,"this2");
														HX_STACK_LINE(164)
														{
															HX_STACK_LINE(164)
															int tmp22 = (index1 - (int)1);		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(164)
															int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(164)
															{
																HX_STACK_LINE(164)
																int tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(164)
																int tmp25 = this2.cca(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(164)
																tmp23 = tmp25;
															}
															HX_STACK_LINE(164)
															int c1 = tmp23;		HX_STACK_VAR(c1,"c1");
															HX_STACK_LINE(164)
															bool tmp24 = (c1 < (int)128);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(164)
															bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(164)
															bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(164)
															if ((tmp25)){
																HX_STACK_LINE(164)
																tmp26 = (c1 >= (int)192);
															}
															else{
																HX_STACK_LINE(164)
																tmp26 = true;
															}
															HX_STACK_LINE(164)
															if ((tmp26)){
																HX_STACK_LINE(164)
																tmp21 = (int)1;
															}
															else{
																HX_STACK_LINE(164)
																int tmp27 = (index1 - (int)2);		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(164)
																int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(164)
																{
																	HX_STACK_LINE(164)
																	int tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(164)
																	int tmp30 = this2.cca(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(164)
																	tmp28 = tmp30;
																}
																HX_STACK_LINE(164)
																int tmp29 = (int(tmp28) & int((int)224));		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(164)
																bool tmp30 = (tmp29 == (int)192);		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(164)
																if ((tmp30)){
																	HX_STACK_LINE(164)
																	tmp21 = (int)2;
																}
																else{
																	HX_STACK_LINE(164)
																	int tmp31 = (index1 - (int)3);		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(164)
																	int tmp32;		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(164)
																	{
																		HX_STACK_LINE(164)
																		int tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
																		HX_STACK_LINE(164)
																		int tmp34 = this2.cca(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
																		HX_STACK_LINE(164)
																		tmp32 = tmp34;
																	}
																	HX_STACK_LINE(164)
																	int tmp33 = (int(tmp32) & int((int)240));		HX_STACK_VAR(tmp33,"tmp33");
																	HX_STACK_LINE(164)
																	bool tmp34 = (tmp33 == (int)224);		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(164)
																	if ((tmp34)){
																		HX_STACK_LINE(164)
																		tmp21 = (int)3;
																	}
																	else{
																		HX_STACK_LINE(164)
																		int tmp35 = (index1 - (int)4);		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(164)
																		int tmp36;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(164)
																		{
																			HX_STACK_LINE(164)
																			int tmp37 = tmp35;		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(164)
																			int tmp38 = this2.cca(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																			HX_STACK_LINE(164)
																			tmp36 = tmp38;
																		}
																		HX_STACK_LINE(164)
																		int tmp37 = (int(tmp36) & int((int)248));		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(164)
																		bool tmp38 = (tmp37 == (int)240);		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(164)
																		if ((tmp38)){
																			HX_STACK_LINE(164)
																			tmp21 = (int)4;
																		}
																		else{
																			HX_STACK_LINE(164)
																			tmp21 = (int)1;
																		}
																	}
																}
															}
														}
													}
													HX_STACK_LINE(164)
													hx::SubEq(index1,tmp21);
													HX_STACK_LINE(164)
													++(count);
												}
												HX_STACK_LINE(164)
												tmp12 = index1;
											}
										}
									}
									HX_STACK_LINE(164)
									int si = tmp12;		HX_STACK_VAR(si,"si");
									HX_STACK_LINE(164)
									bool tmp13 = (cur == null());		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(164)
									int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(164)
									if ((tmp13)){
										HX_STACK_LINE(164)
										tmp14 = s.length;
									}
									else{
										HX_STACK_LINE(164)
										bool tmp15 = (cur < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(164)
										if ((tmp15)){
											HX_STACK_LINE(164)
											tmp14 = si;
										}
										else{
											HX_STACK_LINE(164)
											int codePointOffset = cur;		HX_STACK_VAR(codePointOffset,"codePointOffset");
											HX_STACK_LINE(164)
											{
												HX_STACK_LINE(164)
												::String this1 = s;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(164)
												bool tmp16 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(164)
												if ((tmp16)){
													HX_STACK_LINE(164)
													int index = si;		HX_STACK_VAR(index,"index");
													HX_STACK_LINE(164)
													int tmp17 = this1.length;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(164)
													int len = tmp17;		HX_STACK_VAR(len,"len");
													HX_STACK_LINE(164)
													int i = (int)0;		HX_STACK_VAR(i,"i");
													HX_STACK_LINE(164)
													while((true)){
														HX_STACK_LINE(164)
														bool tmp18 = (i < codePointOffset);		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(164)
														bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(164)
														if ((tmp18)){
															HX_STACK_LINE(164)
															tmp19 = (index < len);
														}
														else{
															HX_STACK_LINE(164)
															tmp19 = false;
														}
														HX_STACK_LINE(164)
														bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(164)
														if ((tmp20)){
															HX_STACK_LINE(164)
															break;
														}
														HX_STACK_LINE(164)
														int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(164)
														{
															HX_STACK_LINE(164)
															int tmp22 = index;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(164)
															int tmp23 = this1.cca(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(164)
															int c = tmp23;		HX_STACK_VAR(c,"c");
															HX_STACK_LINE(164)
															bool tmp24 = (c < (int)192);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(164)
															if ((tmp24)){
																HX_STACK_LINE(164)
																tmp21 = (int)1;
															}
															else{
																HX_STACK_LINE(164)
																bool tmp25 = (c < (int)224);		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(164)
																if ((tmp25)){
																	HX_STACK_LINE(164)
																	tmp21 = (int)2;
																}
																else{
																	HX_STACK_LINE(164)
																	bool tmp26 = (c < (int)240);		HX_STACK_VAR(tmp26,"tmp26");
																	HX_STACK_LINE(164)
																	if ((tmp26)){
																		HX_STACK_LINE(164)
																		tmp21 = (int)3;
																	}
																	else{
																		HX_STACK_LINE(164)
																		bool tmp27 = (c < (int)248);		HX_STACK_VAR(tmp27,"tmp27");
																		HX_STACK_LINE(164)
																		if ((tmp27)){
																			HX_STACK_LINE(164)
																			tmp21 = (int)4;
																		}
																		else{
																			HX_STACK_LINE(164)
																			tmp21 = (int)1;
																		}
																	}
																}
															}
														}
														HX_STACK_LINE(164)
														hx::AddEq(index,tmp21);
														HX_STACK_LINE(164)
														++(i);
													}
													HX_STACK_LINE(164)
													tmp14 = index;
												}
												else{
													HX_STACK_LINE(164)
													int index = si;		HX_STACK_VAR(index,"index");
													HX_STACK_LINE(164)
													int count = (int)0;		HX_STACK_VAR(count,"count");
													HX_STACK_LINE(164)
													while((true)){
														HX_STACK_LINE(164)
														int tmp17 = count;		HX_STACK_VAR(tmp17,"tmp17");
														HX_STACK_LINE(164)
														int tmp18 = codePointOffset;		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(164)
														int tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(164)
														bool tmp20 = (tmp17 < tmp19);		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(164)
														bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(164)
														if ((tmp20)){
															HX_STACK_LINE(164)
															tmp21 = ((int)0 < index);
														}
														else{
															HX_STACK_LINE(164)
															tmp21 = false;
														}
														HX_STACK_LINE(164)
														bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(164)
														if ((tmp22)){
															HX_STACK_LINE(164)
															break;
														}
														HX_STACK_LINE(164)
														int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(164)
														{
															HX_STACK_LINE(164)
															::String this2 = this1;		HX_STACK_VAR(this2,"this2");
															HX_STACK_LINE(164)
															{
																HX_STACK_LINE(164)
																int tmp24 = (index - (int)1);		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(164)
																int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(164)
																{
																	HX_STACK_LINE(164)
																	int tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
																	HX_STACK_LINE(164)
																	int tmp27 = this2.cca(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
																	HX_STACK_LINE(164)
																	tmp25 = tmp27;
																}
																HX_STACK_LINE(164)
																int c1 = tmp25;		HX_STACK_VAR(c1,"c1");
																HX_STACK_LINE(164)
																bool tmp26 = (c1 < (int)128);		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(164)
																bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(164)
																bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(164)
																if ((tmp27)){
																	HX_STACK_LINE(164)
																	tmp28 = (c1 >= (int)192);
																}
																else{
																	HX_STACK_LINE(164)
																	tmp28 = true;
																}
																HX_STACK_LINE(164)
																if ((tmp28)){
																	HX_STACK_LINE(164)
																	tmp23 = (int)1;
																}
																else{
																	HX_STACK_LINE(164)
																	int tmp29 = (index - (int)2);		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(164)
																	int tmp30;		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(164)
																	{
																		HX_STACK_LINE(164)
																		int tmp31 = tmp29;		HX_STACK_VAR(tmp31,"tmp31");
																		HX_STACK_LINE(164)
																		int tmp32 = this2.cca(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
																		HX_STACK_LINE(164)
																		tmp30 = tmp32;
																	}
																	HX_STACK_LINE(164)
																	int tmp31 = (int(tmp30) & int((int)224));		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(164)
																	bool tmp32 = (tmp31 == (int)192);		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(164)
																	if ((tmp32)){
																		HX_STACK_LINE(164)
																		tmp23 = (int)2;
																	}
																	else{
																		HX_STACK_LINE(164)
																		int tmp33 = (index - (int)3);		HX_STACK_VAR(tmp33,"tmp33");
																		HX_STACK_LINE(164)
																		int tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																		HX_STACK_LINE(164)
																		{
																			HX_STACK_LINE(164)
																			int tmp35 = tmp33;		HX_STACK_VAR(tmp35,"tmp35");
																			HX_STACK_LINE(164)
																			int tmp36 = this2.cca(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																			HX_STACK_LINE(164)
																			tmp34 = tmp36;
																		}
																		HX_STACK_LINE(164)
																		int tmp35 = (int(tmp34) & int((int)240));		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(164)
																		bool tmp36 = (tmp35 == (int)224);		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(164)
																		if ((tmp36)){
																			HX_STACK_LINE(164)
																			tmp23 = (int)3;
																		}
																		else{
																			HX_STACK_LINE(164)
																			int tmp37 = (index - (int)4);		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(164)
																			int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
																			HX_STACK_LINE(164)
																			{
																				HX_STACK_LINE(164)
																				int tmp39 = tmp37;		HX_STACK_VAR(tmp39,"tmp39");
																				HX_STACK_LINE(164)
																				int tmp40 = this2.cca(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																				HX_STACK_LINE(164)
																				tmp38 = tmp40;
																			}
																			HX_STACK_LINE(164)
																			int tmp39 = (int(tmp38) & int((int)248));		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(164)
																			bool tmp40 = (tmp39 == (int)240);		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(164)
																			if ((tmp40)){
																				HX_STACK_LINE(164)
																				tmp23 = (int)4;
																			}
																			else{
																				HX_STACK_LINE(164)
																				tmp23 = (int)1;
																			}
																		}
																	}
																}
															}
														}
														HX_STACK_LINE(164)
														hx::SubEq(index,tmp23);
														HX_STACK_LINE(164)
														++(count);
													}
													HX_STACK_LINE(164)
													tmp14 = index;
												}
											}
										}
									}
									HX_STACK_LINE(164)
									int ei = tmp14;		HX_STACK_VAR(ei,"ei");
									HX_STACK_LINE(164)
									int tmp15 = si;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(164)
									int tmp16 = ei;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(164)
									tmp9 = s.substring(tmp15,tmp16);
								}
							}
							HX_STACK_LINE(164)
							::String tmp10 = this->composition;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(164)
							::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(164)
							::String tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(164)
							{
								HX_STACK_LINE(164)
								int tmp13 = this->index;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(164)
								int cur = tmp13;		HX_STACK_VAR(cur,"cur");
								HX_STACK_LINE(164)
								{
									HX_STACK_LINE(164)
									::String tmp14 = this->edit;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(164)
									::String s = tmp14;		HX_STACK_VAR(s,"s");
									HX_STACK_LINE(164)
									::String tmp15 = this->edit;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(164)
									Dynamic length = tmp15.length;		HX_STACK_VAR(length,"length");
									HX_STACK_LINE(164)
									int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(164)
									{
										HX_STACK_LINE(164)
										bool tmp17 = (cur >= (int)0);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(164)
										int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(164)
										if ((tmp17)){
											HX_STACK_LINE(164)
											tmp18 = (int)0;
										}
										else{
											HX_STACK_LINE(164)
											tmp18 = s.length;
										}
										HX_STACK_LINE(164)
										int index = tmp18;		HX_STACK_VAR(index,"index");
										HX_STACK_LINE(164)
										{
											HX_STACK_LINE(164)
											::String this1 = s;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(164)
											bool tmp19 = (cur >= (int)0);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(164)
											if ((tmp19)){
												HX_STACK_LINE(164)
												int index1 = index;		HX_STACK_VAR(index1,"index1");
												HX_STACK_LINE(164)
												int tmp20 = this1.length;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(164)
												int len = tmp20;		HX_STACK_VAR(len,"len");
												HX_STACK_LINE(164)
												int i = (int)0;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(164)
												while((true)){
													HX_STACK_LINE(164)
													bool tmp21 = (i < cur);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(164)
													bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(164)
													if ((tmp21)){
														HX_STACK_LINE(164)
														tmp22 = (index1 < len);
													}
													else{
														HX_STACK_LINE(164)
														tmp22 = false;
													}
													HX_STACK_LINE(164)
													bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(164)
													if ((tmp23)){
														HX_STACK_LINE(164)
														break;
													}
													HX_STACK_LINE(164)
													int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(164)
													{
														HX_STACK_LINE(164)
														int tmp25 = index1;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(164)
														int tmp26 = this1.cca(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(164)
														int c = tmp26;		HX_STACK_VAR(c,"c");
														HX_STACK_LINE(164)
														bool tmp27 = (c < (int)192);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(164)
														if ((tmp27)){
															HX_STACK_LINE(164)
															tmp24 = (int)1;
														}
														else{
															HX_STACK_LINE(164)
															bool tmp28 = (c < (int)224);		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(164)
															if ((tmp28)){
																HX_STACK_LINE(164)
																tmp24 = (int)2;
															}
															else{
																HX_STACK_LINE(164)
																bool tmp29 = (c < (int)240);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(164)
																if ((tmp29)){
																	HX_STACK_LINE(164)
																	tmp24 = (int)3;
																}
																else{
																	HX_STACK_LINE(164)
																	bool tmp30 = (c < (int)248);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(164)
																	if ((tmp30)){
																		HX_STACK_LINE(164)
																		tmp24 = (int)4;
																	}
																	else{
																		HX_STACK_LINE(164)
																		tmp24 = (int)1;
																	}
																}
															}
														}
													}
													HX_STACK_LINE(164)
													hx::AddEq(index1,tmp24);
													HX_STACK_LINE(164)
													++(i);
												}
												HX_STACK_LINE(164)
												tmp16 = index1;
											}
											else{
												HX_STACK_LINE(164)
												int index1 = index;		HX_STACK_VAR(index1,"index1");
												HX_STACK_LINE(164)
												int count = (int)0;		HX_STACK_VAR(count,"count");
												HX_STACK_LINE(164)
												while((true)){
													HX_STACK_LINE(164)
													int tmp20 = count;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(164)
													int tmp21 = cur;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(164)
													int tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(164)
													bool tmp23 = (tmp20 < tmp22);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(164)
													bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(164)
													if ((tmp23)){
														HX_STACK_LINE(164)
														tmp24 = ((int)0 < index1);
													}
													else{
														HX_STACK_LINE(164)
														tmp24 = false;
													}
													HX_STACK_LINE(164)
													bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(164)
													if ((tmp25)){
														HX_STACK_LINE(164)
														break;
													}
													HX_STACK_LINE(164)
													int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(164)
													{
														HX_STACK_LINE(164)
														::String this2 = this1;		HX_STACK_VAR(this2,"this2");
														HX_STACK_LINE(164)
														{
															HX_STACK_LINE(164)
															int tmp27 = (index1 - (int)1);		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(164)
															int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(164)
															{
																HX_STACK_LINE(164)
																int tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(164)
																int tmp30 = this2.cca(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(164)
																tmp28 = tmp30;
															}
															HX_STACK_LINE(164)
															int c1 = tmp28;		HX_STACK_VAR(c1,"c1");
															HX_STACK_LINE(164)
															bool tmp29 = (c1 < (int)128);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(164)
															bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(164)
															bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(164)
															if ((tmp30)){
																HX_STACK_LINE(164)
																tmp31 = (c1 >= (int)192);
															}
															else{
																HX_STACK_LINE(164)
																tmp31 = true;
															}
															HX_STACK_LINE(164)
															if ((tmp31)){
																HX_STACK_LINE(164)
																tmp26 = (int)1;
															}
															else{
																HX_STACK_LINE(164)
																int tmp32 = (index1 - (int)2);		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(164)
																int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(164)
																{
																	HX_STACK_LINE(164)
																	int tmp34 = tmp32;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(164)
																	int tmp35 = this2.cca(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(164)
																	tmp33 = tmp35;
																}
																HX_STACK_LINE(164)
																int tmp34 = (int(tmp33) & int((int)224));		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(164)
																bool tmp35 = (tmp34 == (int)192);		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(164)
																if ((tmp35)){
																	HX_STACK_LINE(164)
																	tmp26 = (int)2;
																}
																else{
																	HX_STACK_LINE(164)
																	int tmp36 = (index1 - (int)3);		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(164)
																	int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(164)
																	{
																		HX_STACK_LINE(164)
																		int tmp38 = tmp36;		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(164)
																		int tmp39 = this2.cca(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(164)
																		tmp37 = tmp39;
																	}
																	HX_STACK_LINE(164)
																	int tmp38 = (int(tmp37) & int((int)240));		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(164)
																	bool tmp39 = (tmp38 == (int)224);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(164)
																	if ((tmp39)){
																		HX_STACK_LINE(164)
																		tmp26 = (int)3;
																	}
																	else{
																		HX_STACK_LINE(164)
																		int tmp40 = (index1 - (int)4);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(164)
																		int tmp41;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(164)
																		{
																			HX_STACK_LINE(164)
																			int tmp42 = tmp40;		HX_STACK_VAR(tmp42,"tmp42");
																			HX_STACK_LINE(164)
																			int tmp43 = this2.cca(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(164)
																			tmp41 = tmp43;
																		}
																		HX_STACK_LINE(164)
																		int tmp42 = (int(tmp41) & int((int)248));		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(164)
																		bool tmp43 = (tmp42 == (int)240);		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(164)
																		if ((tmp43)){
																			HX_STACK_LINE(164)
																			tmp26 = (int)4;
																		}
																		else{
																			HX_STACK_LINE(164)
																			tmp26 = (int)1;
																		}
																	}
																}
															}
														}
													}
													HX_STACK_LINE(164)
													hx::SubEq(index1,tmp26);
													HX_STACK_LINE(164)
													++(count);
												}
												HX_STACK_LINE(164)
												tmp16 = index1;
											}
										}
									}
									HX_STACK_LINE(164)
									int si = tmp16;		HX_STACK_VAR(si,"si");
									HX_STACK_LINE(164)
									bool tmp17 = (length == null());		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(164)
									int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(164)
									if ((tmp17)){
										HX_STACK_LINE(164)
										tmp18 = s.length;
									}
									else{
										HX_STACK_LINE(164)
										bool tmp19 = (length < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(164)
										if ((tmp19)){
											HX_STACK_LINE(164)
											tmp18 = si;
										}
										else{
											HX_STACK_LINE(164)
											int codePointOffset = length;		HX_STACK_VAR(codePointOffset,"codePointOffset");
											HX_STACK_LINE(164)
											{
												HX_STACK_LINE(164)
												::String this1 = s;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(164)
												bool tmp20 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(164)
												if ((tmp20)){
													HX_STACK_LINE(164)
													int index = si;		HX_STACK_VAR(index,"index");
													HX_STACK_LINE(164)
													int tmp21 = this1.length;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(164)
													int len = tmp21;		HX_STACK_VAR(len,"len");
													HX_STACK_LINE(164)
													int i = (int)0;		HX_STACK_VAR(i,"i");
													HX_STACK_LINE(164)
													while((true)){
														HX_STACK_LINE(164)
														bool tmp22 = (i < codePointOffset);		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(164)
														bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(164)
														if ((tmp22)){
															HX_STACK_LINE(164)
															tmp23 = (index < len);
														}
														else{
															HX_STACK_LINE(164)
															tmp23 = false;
														}
														HX_STACK_LINE(164)
														bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(164)
														if ((tmp24)){
															HX_STACK_LINE(164)
															break;
														}
														HX_STACK_LINE(164)
														int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(164)
														{
															HX_STACK_LINE(164)
															int tmp26 = index;		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(164)
															int tmp27 = this1.cca(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(164)
															int c = tmp27;		HX_STACK_VAR(c,"c");
															HX_STACK_LINE(164)
															bool tmp28 = (c < (int)192);		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(164)
															if ((tmp28)){
																HX_STACK_LINE(164)
																tmp25 = (int)1;
															}
															else{
																HX_STACK_LINE(164)
																bool tmp29 = (c < (int)224);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(164)
																if ((tmp29)){
																	HX_STACK_LINE(164)
																	tmp25 = (int)2;
																}
																else{
																	HX_STACK_LINE(164)
																	bool tmp30 = (c < (int)240);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(164)
																	if ((tmp30)){
																		HX_STACK_LINE(164)
																		tmp25 = (int)3;
																	}
																	else{
																		HX_STACK_LINE(164)
																		bool tmp31 = (c < (int)248);		HX_STACK_VAR(tmp31,"tmp31");
																		HX_STACK_LINE(164)
																		if ((tmp31)){
																			HX_STACK_LINE(164)
																			tmp25 = (int)4;
																		}
																		else{
																			HX_STACK_LINE(164)
																			tmp25 = (int)1;
																		}
																	}
																}
															}
														}
														HX_STACK_LINE(164)
														hx::AddEq(index,tmp25);
														HX_STACK_LINE(164)
														++(i);
													}
													HX_STACK_LINE(164)
													tmp18 = index;
												}
												else{
													HX_STACK_LINE(164)
													int index = si;		HX_STACK_VAR(index,"index");
													HX_STACK_LINE(164)
													int count = (int)0;		HX_STACK_VAR(count,"count");
													HX_STACK_LINE(164)
													while((true)){
														HX_STACK_LINE(164)
														int tmp21 = count;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(164)
														int tmp22 = codePointOffset;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(164)
														int tmp23 = -(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(164)
														bool tmp24 = (tmp21 < tmp23);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(164)
														bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(164)
														if ((tmp24)){
															HX_STACK_LINE(164)
															tmp25 = ((int)0 < index);
														}
														else{
															HX_STACK_LINE(164)
															tmp25 = false;
														}
														HX_STACK_LINE(164)
														bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(164)
														if ((tmp26)){
															HX_STACK_LINE(164)
															break;
														}
														HX_STACK_LINE(164)
														int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(164)
														{
															HX_STACK_LINE(164)
															::String this2 = this1;		HX_STACK_VAR(this2,"this2");
															HX_STACK_LINE(164)
															{
																HX_STACK_LINE(164)
																int tmp28 = (index - (int)1);		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(164)
																int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(164)
																{
																	HX_STACK_LINE(164)
																	int tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(164)
																	int tmp31 = this2.cca(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(164)
																	tmp29 = tmp31;
																}
																HX_STACK_LINE(164)
																int c1 = tmp29;		HX_STACK_VAR(c1,"c1");
																HX_STACK_LINE(164)
																bool tmp30 = (c1 < (int)128);		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(164)
																bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(164)
																bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(164)
																if ((tmp31)){
																	HX_STACK_LINE(164)
																	tmp32 = (c1 >= (int)192);
																}
																else{
																	HX_STACK_LINE(164)
																	tmp32 = true;
																}
																HX_STACK_LINE(164)
																if ((tmp32)){
																	HX_STACK_LINE(164)
																	tmp27 = (int)1;
																}
																else{
																	HX_STACK_LINE(164)
																	int tmp33 = (index - (int)2);		HX_STACK_VAR(tmp33,"tmp33");
																	HX_STACK_LINE(164)
																	int tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(164)
																	{
																		HX_STACK_LINE(164)
																		int tmp35 = tmp33;		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(164)
																		int tmp36 = this2.cca(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(164)
																		tmp34 = tmp36;
																	}
																	HX_STACK_LINE(164)
																	int tmp35 = (int(tmp34) & int((int)224));		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(164)
																	bool tmp36 = (tmp35 == (int)192);		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(164)
																	if ((tmp36)){
																		HX_STACK_LINE(164)
																		tmp27 = (int)2;
																	}
																	else{
																		HX_STACK_LINE(164)
																		int tmp37 = (index - (int)3);		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(164)
																		int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(164)
																		{
																			HX_STACK_LINE(164)
																			int tmp39 = tmp37;		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(164)
																			int tmp40 = this2.cca(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(164)
																			tmp38 = tmp40;
																		}
																		HX_STACK_LINE(164)
																		int tmp39 = (int(tmp38) & int((int)240));		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(164)
																		bool tmp40 = (tmp39 == (int)224);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(164)
																		if ((tmp40)){
																			HX_STACK_LINE(164)
																			tmp27 = (int)3;
																		}
																		else{
																			HX_STACK_LINE(164)
																			int tmp41 = (index - (int)4);		HX_STACK_VAR(tmp41,"tmp41");
																			HX_STACK_LINE(164)
																			int tmp42;		HX_STACK_VAR(tmp42,"tmp42");
																			HX_STACK_LINE(164)
																			{
																				HX_STACK_LINE(164)
																				int tmp43 = tmp41;		HX_STACK_VAR(tmp43,"tmp43");
																				HX_STACK_LINE(164)
																				int tmp44 = this2.cca(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
																				HX_STACK_LINE(164)
																				tmp42 = tmp44;
																			}
																			HX_STACK_LINE(164)
																			int tmp43 = (int(tmp42) & int((int)248));		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(164)
																			bool tmp44 = (tmp43 == (int)240);		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(164)
																			if ((tmp44)){
																				HX_STACK_LINE(164)
																				tmp27 = (int)4;
																			}
																			else{
																				HX_STACK_LINE(164)
																				tmp27 = (int)1;
																			}
																		}
																	}
																}
															}
														}
														HX_STACK_LINE(164)
														hx::SubEq(index,tmp27);
														HX_STACK_LINE(164)
														++(count);
													}
													HX_STACK_LINE(164)
													tmp18 = index;
												}
											}
										}
									}
									HX_STACK_LINE(164)
									int ei = tmp18;		HX_STACK_VAR(ei,"ei");
									HX_STACK_LINE(164)
									int tmp19 = si;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(164)
									int tmp20 = ei;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(164)
									tmp12 = s.substring(tmp19,tmp20);
								}
							}
							HX_STACK_LINE(164)
							::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(164)
							this->display = tmp13;
						}
						HX_STACK_LINE(164)
						::mint::Label tmp9 = this->label;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(164)
						::String tmp10 = this->display;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(164)
						tmp9->set_text(tmp10);
						HX_STACK_LINE(164)
						{
							HX_STACK_LINE(164)
							int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
							HX_STACK_LINE(164)
							::mint::core::Signal tmp11 = this->onchangeindex;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(164)
							int tmp12 = tmp11->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(164)
							int _count = tmp12;		HX_STACK_VAR(_count,"_count");
							HX_STACK_LINE(164)
							while((true)){
								HX_STACK_LINE(164)
								bool tmp13 = (_idx < _count);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(164)
								bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(164)
								if ((tmp14)){
									HX_STACK_LINE(164)
									break;
								}
								HX_STACK_LINE(164)
								::mint::core::Signal tmp15 = this->onchangeindex;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(164)
								Dynamic tmp16 = tmp15->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(164)
								Dynamic fn = tmp16;		HX_STACK_VAR(fn,"fn");
								HX_STACK_LINE(164)
								bool tmp17 = (fn != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(164)
								if ((tmp17)){
									HX_STACK_LINE(164)
									int tmp18 = this->index;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(164)
									fn(tmp18).Cast< Void >();
								}
								HX_STACK_LINE(164)
								(_idx)++;
							}
							HX_STACK_LINE(164)
							while((true)){
								HX_STACK_LINE(164)
								bool tmp13 = (_count > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(164)
								bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(164)
								if ((tmp14)){
									HX_STACK_LINE(164)
									break;
								}
								HX_STACK_LINE(164)
								::mint::core::Signal tmp15 = this->onchangeindex;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(164)
								int tmp16 = (_count - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(164)
								Dynamic tmp17 = tmp15->listeners->__GetItem(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(164)
								Dynamic fn = tmp17;		HX_STACK_VAR(fn,"fn");
								HX_STACK_LINE(164)
								bool tmp18 = (fn == null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(164)
								if ((tmp18)){
									HX_STACK_LINE(164)
									::mint::core::Signal tmp19 = this->onchangeindex;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(164)
									int tmp20 = (_count - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(164)
									tmp19->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp20,(int)1);
								}
								HX_STACK_LINE(164)
								(_count)--;
							}
						}
						HX_STACK_LINE(164)
						this->edit;
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(168)
					this->composition = HX_HCSTRING("","\x00","\x00","\x00","\x00");
					HX_STACK_LINE(169)
					int tmp6 = this->composition_length = (int)0;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(169)
					this->composition_start = tmp6;
					HX_STACK_LINE(171)
					Dynamic tmp7 = this->filter_dyn();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(171)
					bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(171)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(171)
					if ((tmp8)){
						HX_STACK_LINE(171)
						::String tmp10 = event->__Field(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(171)
						::String tmp11 = _new;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(171)
						::String tmp12 = this->edit;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(171)
						::String tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(171)
						::String tmp14 = tmp10;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(171)
						::String tmp15 = tmp11;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(171)
						::String tmp16 = tmp13;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(171)
						bool tmp17 = this->filter(tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(171)
						bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(171)
						bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(171)
						tmp9 = !(tmp19);
					}
					else{
						HX_STACK_LINE(171)
						tmp9 = false;
					}
					HX_STACK_LINE(171)
					if ((tmp9)){
						HX_STACK_LINE(172)
						return null();
					}
					HX_STACK_LINE(175)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(175)
					{
						HX_STACK_LINE(175)
						::String s = event->__Field(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"), hx::paccDynamic );		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(175)
						::String tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(175)
						int tmp12 = s.length;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(175)
						tmp10 = ::mint::core::unifill::_Utf8::Utf8_Impl__obj::codePointCount(tmp11,(int)0,tmp12);
					}
					HX_STACK_LINE(175)
					hx::AddEq(this->index,tmp10);
					HX_STACK_LINE(176)
					{
						HX_STACK_LINE(176)
						bool _from_typing = true;		HX_STACK_VAR(_from_typing,"_from_typing");
						HX_STACK_LINE(176)
						bool _emit = true;		HX_STACK_VAR(_emit,"_emit");
						HX_STACK_LINE(176)
						this->edit = _new;
						HX_STACK_LINE(176)
						::String tmp11 = this->display_char;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(176)
						bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(176)
						if ((tmp12)){
							HX_STACK_LINE(176)
							this->display = HX_HCSTRING("","\x00","\x00","\x00","\x00");
							HX_STACK_LINE(176)
							::String tmp13 = _new;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(176)
							int tmp14 = _new.length;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(176)
							int tmp15 = ::mint::core::unifill::_Utf8::Utf8_Impl__obj::codePointCount(tmp13,(int)0,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(176)
							int _l = tmp15;		HX_STACK_VAR(_l,"_l");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(176)
								while((true)){
									HX_STACK_LINE(176)
									bool tmp16 = (_g1 < _l);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(176)
									bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(176)
									if ((tmp17)){
										HX_STACK_LINE(176)
										break;
									}
									HX_STACK_LINE(176)
									int tmp18 = (_g1)++;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(176)
									int i = tmp18;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(176)
									::String tmp19 = this->display_char;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(176)
									hx::AddEq(this->display,tmp19);
								}
							}
						}
						else{
							HX_STACK_LINE(176)
							::String tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								int tmp14 = this->index;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(176)
								int cur = tmp14;		HX_STACK_VAR(cur,"cur");
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									::String tmp15 = this->edit;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(176)
									::String s = tmp15;		HX_STACK_VAR(s,"s");
									HX_STACK_LINE(176)
									int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(176)
									{
										HX_STACK_LINE(176)
										bool tmp17 = true;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(176)
										int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(176)
										if ((tmp17)){
											HX_STACK_LINE(176)
											tmp18 = (int)0;
										}
										else{
											HX_STACK_LINE(176)
											tmp18 = s.length;
										}
										HX_STACK_LINE(176)
										int index = tmp18;		HX_STACK_VAR(index,"index");
										HX_STACK_LINE(176)
										{
											HX_STACK_LINE(176)
											::String this1 = s;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(176)
											bool tmp19 = true;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(176)
											if ((tmp19)){
												HX_STACK_LINE(176)
												int index1 = index;		HX_STACK_VAR(index1,"index1");
												HX_STACK_LINE(176)
												int tmp20 = this1.length;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(176)
												int len = tmp20;		HX_STACK_VAR(len,"len");
												HX_STACK_LINE(176)
												int i = (int)0;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(176)
												while((true)){
													HX_STACK_LINE(176)
													bool tmp21 = (i < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(176)
													bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(176)
													if ((tmp21)){
														HX_STACK_LINE(176)
														tmp22 = (index1 < len);
													}
													else{
														HX_STACK_LINE(176)
														tmp22 = false;
													}
													HX_STACK_LINE(176)
													bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(176)
													if ((tmp23)){
														HX_STACK_LINE(176)
														break;
													}
													HX_STACK_LINE(176)
													int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(176)
													{
														HX_STACK_LINE(176)
														int tmp25 = index1;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(176)
														int tmp26 = this1.cca(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(176)
														int c = tmp26;		HX_STACK_VAR(c,"c");
														HX_STACK_LINE(176)
														bool tmp27 = (c < (int)192);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(176)
														if ((tmp27)){
															HX_STACK_LINE(176)
															tmp24 = (int)1;
														}
														else{
															HX_STACK_LINE(176)
															bool tmp28 = (c < (int)224);		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(176)
															if ((tmp28)){
																HX_STACK_LINE(176)
																tmp24 = (int)2;
															}
															else{
																HX_STACK_LINE(176)
																bool tmp29 = (c < (int)240);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(176)
																if ((tmp29)){
																	HX_STACK_LINE(176)
																	tmp24 = (int)3;
																}
																else{
																	HX_STACK_LINE(176)
																	bool tmp30 = (c < (int)248);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(176)
																	if ((tmp30)){
																		HX_STACK_LINE(176)
																		tmp24 = (int)4;
																	}
																	else{
																		HX_STACK_LINE(176)
																		tmp24 = (int)1;
																	}
																}
															}
														}
													}
													HX_STACK_LINE(176)
													hx::AddEq(index1,tmp24);
													HX_STACK_LINE(176)
													++(i);
												}
												HX_STACK_LINE(176)
												tmp16 = index1;
											}
											else{
												HX_STACK_LINE(176)
												int index1 = index;		HX_STACK_VAR(index1,"index1");
												HX_STACK_LINE(176)
												int count = (int)0;		HX_STACK_VAR(count,"count");
												HX_STACK_LINE(176)
												while((true)){
													HX_STACK_LINE(176)
													int tmp20 = count;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(176)
													int tmp21 = (int)0;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(176)
													bool tmp22 = (tmp20 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(176)
													bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(176)
													if ((tmp22)){
														HX_STACK_LINE(176)
														tmp23 = ((int)0 < index1);
													}
													else{
														HX_STACK_LINE(176)
														tmp23 = false;
													}
													HX_STACK_LINE(176)
													bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(176)
													if ((tmp24)){
														HX_STACK_LINE(176)
														break;
													}
													HX_STACK_LINE(176)
													int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(176)
													{
														HX_STACK_LINE(176)
														::String this2 = this1;		HX_STACK_VAR(this2,"this2");
														HX_STACK_LINE(176)
														{
															HX_STACK_LINE(176)
															int tmp26 = (index1 - (int)1);		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(176)
															int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(176)
															{
																HX_STACK_LINE(176)
																int tmp28 = tmp26;		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(176)
																int tmp29 = this2.cca(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(176)
																tmp27 = tmp29;
															}
															HX_STACK_LINE(176)
															int c1 = tmp27;		HX_STACK_VAR(c1,"c1");
															HX_STACK_LINE(176)
															bool tmp28 = (c1 < (int)128);		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(176)
															bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(176)
															bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(176)
															if ((tmp29)){
																HX_STACK_LINE(176)
																tmp30 = (c1 >= (int)192);
															}
															else{
																HX_STACK_LINE(176)
																tmp30 = true;
															}
															HX_STACK_LINE(176)
															if ((tmp30)){
																HX_STACK_LINE(176)
																tmp25 = (int)1;
															}
															else{
																HX_STACK_LINE(176)
																int tmp31 = (index1 - (int)2);		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(176)
																int tmp32;		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(176)
																{
																	HX_STACK_LINE(176)
																	int tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
																	HX_STACK_LINE(176)
																	int tmp34 = this2.cca(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(176)
																	tmp32 = tmp34;
																}
																HX_STACK_LINE(176)
																int tmp33 = (int(tmp32) & int((int)224));		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(176)
																bool tmp34 = (tmp33 == (int)192);		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(176)
																if ((tmp34)){
																	HX_STACK_LINE(176)
																	tmp25 = (int)2;
																}
																else{
																	HX_STACK_LINE(176)
																	int tmp35 = (index1 - (int)3);		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(176)
																	int tmp36;		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(176)
																	{
																		HX_STACK_LINE(176)
																		int tmp37 = tmp35;		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(176)
																		int tmp38 = this2.cca(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(176)
																		tmp36 = tmp38;
																	}
																	HX_STACK_LINE(176)
																	int tmp37 = (int(tmp36) & int((int)240));		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(176)
																	bool tmp38 = (tmp37 == (int)224);		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(176)
																	if ((tmp38)){
																		HX_STACK_LINE(176)
																		tmp25 = (int)3;
																	}
																	else{
																		HX_STACK_LINE(176)
																		int tmp39 = (index1 - (int)4);		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(176)
																		int tmp40;		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(176)
																		{
																			HX_STACK_LINE(176)
																			int tmp41 = tmp39;		HX_STACK_VAR(tmp41,"tmp41");
																			HX_STACK_LINE(176)
																			int tmp42 = this2.cca(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																			HX_STACK_LINE(176)
																			tmp40 = tmp42;
																		}
																		HX_STACK_LINE(176)
																		int tmp41 = (int(tmp40) & int((int)248));		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(176)
																		bool tmp42 = (tmp41 == (int)240);		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(176)
																		if ((tmp42)){
																			HX_STACK_LINE(176)
																			tmp25 = (int)4;
																		}
																		else{
																			HX_STACK_LINE(176)
																			tmp25 = (int)1;
																		}
																	}
																}
															}
														}
													}
													HX_STACK_LINE(176)
													hx::SubEq(index1,tmp25);
													HX_STACK_LINE(176)
													++(count);
												}
												HX_STACK_LINE(176)
												tmp16 = index1;
											}
										}
									}
									HX_STACK_LINE(176)
									int si = tmp16;		HX_STACK_VAR(si,"si");
									HX_STACK_LINE(176)
									bool tmp17 = (cur == null());		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(176)
									int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(176)
									if ((tmp17)){
										HX_STACK_LINE(176)
										tmp18 = s.length;
									}
									else{
										HX_STACK_LINE(176)
										bool tmp19 = (cur < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(176)
										if ((tmp19)){
											HX_STACK_LINE(176)
											tmp18 = si;
										}
										else{
											HX_STACK_LINE(176)
											int codePointOffset = cur;		HX_STACK_VAR(codePointOffset,"codePointOffset");
											HX_STACK_LINE(176)
											{
												HX_STACK_LINE(176)
												::String this1 = s;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(176)
												bool tmp20 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(176)
												if ((tmp20)){
													HX_STACK_LINE(176)
													int index = si;		HX_STACK_VAR(index,"index");
													HX_STACK_LINE(176)
													int tmp21 = this1.length;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(176)
													int len = tmp21;		HX_STACK_VAR(len,"len");
													HX_STACK_LINE(176)
													int i = (int)0;		HX_STACK_VAR(i,"i");
													HX_STACK_LINE(176)
													while((true)){
														HX_STACK_LINE(176)
														bool tmp22 = (i < codePointOffset);		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(176)
														bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(176)
														if ((tmp22)){
															HX_STACK_LINE(176)
															tmp23 = (index < len);
														}
														else{
															HX_STACK_LINE(176)
															tmp23 = false;
														}
														HX_STACK_LINE(176)
														bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(176)
														if ((tmp24)){
															HX_STACK_LINE(176)
															break;
														}
														HX_STACK_LINE(176)
														int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(176)
														{
															HX_STACK_LINE(176)
															int tmp26 = index;		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(176)
															int tmp27 = this1.cca(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(176)
															int c = tmp27;		HX_STACK_VAR(c,"c");
															HX_STACK_LINE(176)
															bool tmp28 = (c < (int)192);		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(176)
															if ((tmp28)){
																HX_STACK_LINE(176)
																tmp25 = (int)1;
															}
															else{
																HX_STACK_LINE(176)
																bool tmp29 = (c < (int)224);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(176)
																if ((tmp29)){
																	HX_STACK_LINE(176)
																	tmp25 = (int)2;
																}
																else{
																	HX_STACK_LINE(176)
																	bool tmp30 = (c < (int)240);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(176)
																	if ((tmp30)){
																		HX_STACK_LINE(176)
																		tmp25 = (int)3;
																	}
																	else{
																		HX_STACK_LINE(176)
																		bool tmp31 = (c < (int)248);		HX_STACK_VAR(tmp31,"tmp31");
																		HX_STACK_LINE(176)
																		if ((tmp31)){
																			HX_STACK_LINE(176)
																			tmp25 = (int)4;
																		}
																		else{
																			HX_STACK_LINE(176)
																			tmp25 = (int)1;
																		}
																	}
																}
															}
														}
														HX_STACK_LINE(176)
														hx::AddEq(index,tmp25);
														HX_STACK_LINE(176)
														++(i);
													}
													HX_STACK_LINE(176)
													tmp18 = index;
												}
												else{
													HX_STACK_LINE(176)
													int index = si;		HX_STACK_VAR(index,"index");
													HX_STACK_LINE(176)
													int count = (int)0;		HX_STACK_VAR(count,"count");
													HX_STACK_LINE(176)
													while((true)){
														HX_STACK_LINE(176)
														int tmp21 = count;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(176)
														int tmp22 = codePointOffset;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(176)
														int tmp23 = -(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(176)
														bool tmp24 = (tmp21 < tmp23);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(176)
														bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(176)
														if ((tmp24)){
															HX_STACK_LINE(176)
															tmp25 = ((int)0 < index);
														}
														else{
															HX_STACK_LINE(176)
															tmp25 = false;
														}
														HX_STACK_LINE(176)
														bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(176)
														if ((tmp26)){
															HX_STACK_LINE(176)
															break;
														}
														HX_STACK_LINE(176)
														int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(176)
														{
															HX_STACK_LINE(176)
															::String this2 = this1;		HX_STACK_VAR(this2,"this2");
															HX_STACK_LINE(176)
															{
																HX_STACK_LINE(176)
																int tmp28 = (index - (int)1);		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(176)
																int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(176)
																{
																	HX_STACK_LINE(176)
																	int tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(176)
																	int tmp31 = this2.cca(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(176)
																	tmp29 = tmp31;
																}
																HX_STACK_LINE(176)
																int c1 = tmp29;		HX_STACK_VAR(c1,"c1");
																HX_STACK_LINE(176)
																bool tmp30 = (c1 < (int)128);		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(176)
																bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(176)
																bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(176)
																if ((tmp31)){
																	HX_STACK_LINE(176)
																	tmp32 = (c1 >= (int)192);
																}
																else{
																	HX_STACK_LINE(176)
																	tmp32 = true;
																}
																HX_STACK_LINE(176)
																if ((tmp32)){
																	HX_STACK_LINE(176)
																	tmp27 = (int)1;
																}
																else{
																	HX_STACK_LINE(176)
																	int tmp33 = (index - (int)2);		HX_STACK_VAR(tmp33,"tmp33");
																	HX_STACK_LINE(176)
																	int tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(176)
																	{
																		HX_STACK_LINE(176)
																		int tmp35 = tmp33;		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(176)
																		int tmp36 = this2.cca(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(176)
																		tmp34 = tmp36;
																	}
																	HX_STACK_LINE(176)
																	int tmp35 = (int(tmp34) & int((int)224));		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(176)
																	bool tmp36 = (tmp35 == (int)192);		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(176)
																	if ((tmp36)){
																		HX_STACK_LINE(176)
																		tmp27 = (int)2;
																	}
																	else{
																		HX_STACK_LINE(176)
																		int tmp37 = (index - (int)3);		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(176)
																		int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(176)
																		{
																			HX_STACK_LINE(176)
																			int tmp39 = tmp37;		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(176)
																			int tmp40 = this2.cca(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(176)
																			tmp38 = tmp40;
																		}
																		HX_STACK_LINE(176)
																		int tmp39 = (int(tmp38) & int((int)240));		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(176)
																		bool tmp40 = (tmp39 == (int)224);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(176)
																		if ((tmp40)){
																			HX_STACK_LINE(176)
																			tmp27 = (int)3;
																		}
																		else{
																			HX_STACK_LINE(176)
																			int tmp41 = (index - (int)4);		HX_STACK_VAR(tmp41,"tmp41");
																			HX_STACK_LINE(176)
																			int tmp42;		HX_STACK_VAR(tmp42,"tmp42");
																			HX_STACK_LINE(176)
																			{
																				HX_STACK_LINE(176)
																				int tmp43 = tmp41;		HX_STACK_VAR(tmp43,"tmp43");
																				HX_STACK_LINE(176)
																				int tmp44 = this2.cca(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
																				HX_STACK_LINE(176)
																				tmp42 = tmp44;
																			}
																			HX_STACK_LINE(176)
																			int tmp43 = (int(tmp42) & int((int)248));		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(176)
																			bool tmp44 = (tmp43 == (int)240);		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(176)
																			if ((tmp44)){
																				HX_STACK_LINE(176)
																				tmp27 = (int)4;
																			}
																			else{
																				HX_STACK_LINE(176)
																				tmp27 = (int)1;
																			}
																		}
																	}
																}
															}
														}
														HX_STACK_LINE(176)
														hx::SubEq(index,tmp27);
														HX_STACK_LINE(176)
														++(count);
													}
													HX_STACK_LINE(176)
													tmp18 = index;
												}
											}
										}
									}
									HX_STACK_LINE(176)
									int ei = tmp18;		HX_STACK_VAR(ei,"ei");
									HX_STACK_LINE(176)
									int tmp19 = si;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(176)
									int tmp20 = ei;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(176)
									tmp13 = s.substring(tmp19,tmp20);
								}
							}
							HX_STACK_LINE(176)
							::String tmp14 = this->composition;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(176)
							::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(176)
							::String tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								int tmp17 = this->index;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(176)
								int cur = tmp17;		HX_STACK_VAR(cur,"cur");
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									::String tmp18 = this->edit;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(176)
									::String s = tmp18;		HX_STACK_VAR(s,"s");
									HX_STACK_LINE(176)
									::String tmp19 = this->edit;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(176)
									Dynamic length = tmp19.length;		HX_STACK_VAR(length,"length");
									HX_STACK_LINE(176)
									int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(176)
									{
										HX_STACK_LINE(176)
										bool tmp21 = (cur >= (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(176)
										int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(176)
										if ((tmp21)){
											HX_STACK_LINE(176)
											tmp22 = (int)0;
										}
										else{
											HX_STACK_LINE(176)
											tmp22 = s.length;
										}
										HX_STACK_LINE(176)
										int index = tmp22;		HX_STACK_VAR(index,"index");
										HX_STACK_LINE(176)
										{
											HX_STACK_LINE(176)
											::String this1 = s;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(176)
											bool tmp23 = (cur >= (int)0);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(176)
											if ((tmp23)){
												HX_STACK_LINE(176)
												int index1 = index;		HX_STACK_VAR(index1,"index1");
												HX_STACK_LINE(176)
												int tmp24 = this1.length;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(176)
												int len = tmp24;		HX_STACK_VAR(len,"len");
												HX_STACK_LINE(176)
												int i = (int)0;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(176)
												while((true)){
													HX_STACK_LINE(176)
													bool tmp25 = (i < cur);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(176)
													bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(176)
													if ((tmp25)){
														HX_STACK_LINE(176)
														tmp26 = (index1 < len);
													}
													else{
														HX_STACK_LINE(176)
														tmp26 = false;
													}
													HX_STACK_LINE(176)
													bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(176)
													if ((tmp27)){
														HX_STACK_LINE(176)
														break;
													}
													HX_STACK_LINE(176)
													int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(176)
													{
														HX_STACK_LINE(176)
														int tmp29 = index1;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(176)
														int tmp30 = this1.cca(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(176)
														int c = tmp30;		HX_STACK_VAR(c,"c");
														HX_STACK_LINE(176)
														bool tmp31 = (c < (int)192);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(176)
														if ((tmp31)){
															HX_STACK_LINE(176)
															tmp28 = (int)1;
														}
														else{
															HX_STACK_LINE(176)
															bool tmp32 = (c < (int)224);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(176)
															if ((tmp32)){
																HX_STACK_LINE(176)
																tmp28 = (int)2;
															}
															else{
																HX_STACK_LINE(176)
																bool tmp33 = (c < (int)240);		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(176)
																if ((tmp33)){
																	HX_STACK_LINE(176)
																	tmp28 = (int)3;
																}
																else{
																	HX_STACK_LINE(176)
																	bool tmp34 = (c < (int)248);		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(176)
																	if ((tmp34)){
																		HX_STACK_LINE(176)
																		tmp28 = (int)4;
																	}
																	else{
																		HX_STACK_LINE(176)
																		tmp28 = (int)1;
																	}
																}
															}
														}
													}
													HX_STACK_LINE(176)
													hx::AddEq(index1,tmp28);
													HX_STACK_LINE(176)
													++(i);
												}
												HX_STACK_LINE(176)
												tmp20 = index1;
											}
											else{
												HX_STACK_LINE(176)
												int index1 = index;		HX_STACK_VAR(index1,"index1");
												HX_STACK_LINE(176)
												int count = (int)0;		HX_STACK_VAR(count,"count");
												HX_STACK_LINE(176)
												while((true)){
													HX_STACK_LINE(176)
													int tmp24 = count;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(176)
													int tmp25 = cur;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(176)
													int tmp26 = -(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(176)
													bool tmp27 = (tmp24 < tmp26);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(176)
													bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(176)
													if ((tmp27)){
														HX_STACK_LINE(176)
														tmp28 = ((int)0 < index1);
													}
													else{
														HX_STACK_LINE(176)
														tmp28 = false;
													}
													HX_STACK_LINE(176)
													bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(176)
													if ((tmp29)){
														HX_STACK_LINE(176)
														break;
													}
													HX_STACK_LINE(176)
													int tmp30;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(176)
													{
														HX_STACK_LINE(176)
														::String this2 = this1;		HX_STACK_VAR(this2,"this2");
														HX_STACK_LINE(176)
														{
															HX_STACK_LINE(176)
															int tmp31 = (index1 - (int)1);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(176)
															int tmp32;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(176)
															{
																HX_STACK_LINE(176)
																int tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(176)
																int tmp34 = this2.cca(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(176)
																tmp32 = tmp34;
															}
															HX_STACK_LINE(176)
															int c1 = tmp32;		HX_STACK_VAR(c1,"c1");
															HX_STACK_LINE(176)
															bool tmp33 = (c1 < (int)128);		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(176)
															bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(176)
															bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(176)
															if ((tmp34)){
																HX_STACK_LINE(176)
																tmp35 = (c1 >= (int)192);
															}
															else{
																HX_STACK_LINE(176)
																tmp35 = true;
															}
															HX_STACK_LINE(176)
															if ((tmp35)){
																HX_STACK_LINE(176)
																tmp30 = (int)1;
															}
															else{
																HX_STACK_LINE(176)
																int tmp36 = (index1 - (int)2);		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(176)
																int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(176)
																{
																	HX_STACK_LINE(176)
																	int tmp38 = tmp36;		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(176)
																	int tmp39 = this2.cca(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(176)
																	tmp37 = tmp39;
																}
																HX_STACK_LINE(176)
																int tmp38 = (int(tmp37) & int((int)224));		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(176)
																bool tmp39 = (tmp38 == (int)192);		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(176)
																if ((tmp39)){
																	HX_STACK_LINE(176)
																	tmp30 = (int)2;
																}
																else{
																	HX_STACK_LINE(176)
																	int tmp40 = (index1 - (int)3);		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(176)
																	int tmp41;		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(176)
																	{
																		HX_STACK_LINE(176)
																		int tmp42 = tmp40;		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(176)
																		int tmp43 = this2.cca(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(176)
																		tmp41 = tmp43;
																	}
																	HX_STACK_LINE(176)
																	int tmp42 = (int(tmp41) & int((int)240));		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(176)
																	bool tmp43 = (tmp42 == (int)224);		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(176)
																	if ((tmp43)){
																		HX_STACK_LINE(176)
																		tmp30 = (int)3;
																	}
																	else{
																		HX_STACK_LINE(176)
																		int tmp44 = (index1 - (int)4);		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(176)
																		int tmp45;		HX_STACK_VAR(tmp45,"tmp45");
																		HX_STACK_LINE(176)
																		{
																			HX_STACK_LINE(176)
																			int tmp46 = tmp44;		HX_STACK_VAR(tmp46,"tmp46");
																			HX_STACK_LINE(176)
																			int tmp47 = this2.cca(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
																			HX_STACK_LINE(176)
																			tmp45 = tmp47;
																		}
																		HX_STACK_LINE(176)
																		int tmp46 = (int(tmp45) & int((int)248));		HX_STACK_VAR(tmp46,"tmp46");
																		HX_STACK_LINE(176)
																		bool tmp47 = (tmp46 == (int)240);		HX_STACK_VAR(tmp47,"tmp47");
																		HX_STACK_LINE(176)
																		if ((tmp47)){
																			HX_STACK_LINE(176)
																			tmp30 = (int)4;
																		}
																		else{
																			HX_STACK_LINE(176)
																			tmp30 = (int)1;
																		}
																	}
																}
															}
														}
													}
													HX_STACK_LINE(176)
													hx::SubEq(index1,tmp30);
													HX_STACK_LINE(176)
													++(count);
												}
												HX_STACK_LINE(176)
												tmp20 = index1;
											}
										}
									}
									HX_STACK_LINE(176)
									int si = tmp20;		HX_STACK_VAR(si,"si");
									HX_STACK_LINE(176)
									bool tmp21 = (length == null());		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(176)
									int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(176)
									if ((tmp21)){
										HX_STACK_LINE(176)
										tmp22 = s.length;
									}
									else{
										HX_STACK_LINE(176)
										bool tmp23 = (length < (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(176)
										if ((tmp23)){
											HX_STACK_LINE(176)
											tmp22 = si;
										}
										else{
											HX_STACK_LINE(176)
											int codePointOffset = length;		HX_STACK_VAR(codePointOffset,"codePointOffset");
											HX_STACK_LINE(176)
											{
												HX_STACK_LINE(176)
												::String this1 = s;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(176)
												bool tmp24 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(176)
												if ((tmp24)){
													HX_STACK_LINE(176)
													int index = si;		HX_STACK_VAR(index,"index");
													HX_STACK_LINE(176)
													int tmp25 = this1.length;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(176)
													int len = tmp25;		HX_STACK_VAR(len,"len");
													HX_STACK_LINE(176)
													int i = (int)0;		HX_STACK_VAR(i,"i");
													HX_STACK_LINE(176)
													while((true)){
														HX_STACK_LINE(176)
														bool tmp26 = (i < codePointOffset);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(176)
														bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(176)
														if ((tmp26)){
															HX_STACK_LINE(176)
															tmp27 = (index < len);
														}
														else{
															HX_STACK_LINE(176)
															tmp27 = false;
														}
														HX_STACK_LINE(176)
														bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(176)
														if ((tmp28)){
															HX_STACK_LINE(176)
															break;
														}
														HX_STACK_LINE(176)
														int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(176)
														{
															HX_STACK_LINE(176)
															int tmp30 = index;		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(176)
															int tmp31 = this1.cca(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(176)
															int c = tmp31;		HX_STACK_VAR(c,"c");
															HX_STACK_LINE(176)
															bool tmp32 = (c < (int)192);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(176)
															if ((tmp32)){
																HX_STACK_LINE(176)
																tmp29 = (int)1;
															}
															else{
																HX_STACK_LINE(176)
																bool tmp33 = (c < (int)224);		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(176)
																if ((tmp33)){
																	HX_STACK_LINE(176)
																	tmp29 = (int)2;
																}
																else{
																	HX_STACK_LINE(176)
																	bool tmp34 = (c < (int)240);		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(176)
																	if ((tmp34)){
																		HX_STACK_LINE(176)
																		tmp29 = (int)3;
																	}
																	else{
																		HX_STACK_LINE(176)
																		bool tmp35 = (c < (int)248);		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(176)
																		if ((tmp35)){
																			HX_STACK_LINE(176)
																			tmp29 = (int)4;
																		}
																		else{
																			HX_STACK_LINE(176)
																			tmp29 = (int)1;
																		}
																	}
																}
															}
														}
														HX_STACK_LINE(176)
														hx::AddEq(index,tmp29);
														HX_STACK_LINE(176)
														++(i);
													}
													HX_STACK_LINE(176)
													tmp22 = index;
												}
												else{
													HX_STACK_LINE(176)
													int index = si;		HX_STACK_VAR(index,"index");
													HX_STACK_LINE(176)
													int count = (int)0;		HX_STACK_VAR(count,"count");
													HX_STACK_LINE(176)
													while((true)){
														HX_STACK_LINE(176)
														int tmp25 = count;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(176)
														int tmp26 = codePointOffset;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(176)
														int tmp27 = -(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(176)
														bool tmp28 = (tmp25 < tmp27);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(176)
														bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(176)
														if ((tmp28)){
															HX_STACK_LINE(176)
															tmp29 = ((int)0 < index);
														}
														else{
															HX_STACK_LINE(176)
															tmp29 = false;
														}
														HX_STACK_LINE(176)
														bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(176)
														if ((tmp30)){
															HX_STACK_LINE(176)
															break;
														}
														HX_STACK_LINE(176)
														int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(176)
														{
															HX_STACK_LINE(176)
															::String this2 = this1;		HX_STACK_VAR(this2,"this2");
															HX_STACK_LINE(176)
															{
																HX_STACK_LINE(176)
																int tmp32 = (index - (int)1);		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(176)
																int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(176)
																{
																	HX_STACK_LINE(176)
																	int tmp34 = tmp32;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(176)
																	int tmp35 = this2.cca(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(176)
																	tmp33 = tmp35;
																}
																HX_STACK_LINE(176)
																int c1 = tmp33;		HX_STACK_VAR(c1,"c1");
																HX_STACK_LINE(176)
																bool tmp34 = (c1 < (int)128);		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(176)
																bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(176)
																bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(176)
																if ((tmp35)){
																	HX_STACK_LINE(176)
																	tmp36 = (c1 >= (int)192);
																}
																else{
																	HX_STACK_LINE(176)
																	tmp36 = true;
																}
																HX_STACK_LINE(176)
																if ((tmp36)){
																	HX_STACK_LINE(176)
																	tmp31 = (int)1;
																}
																else{
																	HX_STACK_LINE(176)
																	int tmp37 = (index - (int)2);		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(176)
																	int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(176)
																	{
																		HX_STACK_LINE(176)
																		int tmp39 = tmp37;		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(176)
																		int tmp40 = this2.cca(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(176)
																		tmp38 = tmp40;
																	}
																	HX_STACK_LINE(176)
																	int tmp39 = (int(tmp38) & int((int)224));		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(176)
																	bool tmp40 = (tmp39 == (int)192);		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(176)
																	if ((tmp40)){
																		HX_STACK_LINE(176)
																		tmp31 = (int)2;
																	}
																	else{
																		HX_STACK_LINE(176)
																		int tmp41 = (index - (int)3);		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(176)
																		int tmp42;		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(176)
																		{
																			HX_STACK_LINE(176)
																			int tmp43 = tmp41;		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(176)
																			int tmp44 = this2.cca(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(176)
																			tmp42 = tmp44;
																		}
																		HX_STACK_LINE(176)
																		int tmp43 = (int(tmp42) & int((int)240));		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(176)
																		bool tmp44 = (tmp43 == (int)224);		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(176)
																		if ((tmp44)){
																			HX_STACK_LINE(176)
																			tmp31 = (int)3;
																		}
																		else{
																			HX_STACK_LINE(176)
																			int tmp45 = (index - (int)4);		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(176)
																			int tmp46;		HX_STACK_VAR(tmp46,"tmp46");
																			HX_STACK_LINE(176)
																			{
																				HX_STACK_LINE(176)
																				int tmp47 = tmp45;		HX_STACK_VAR(tmp47,"tmp47");
																				HX_STACK_LINE(176)
																				int tmp48 = this2.cca(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
																				HX_STACK_LINE(176)
																				tmp46 = tmp48;
																			}
																			HX_STACK_LINE(176)
																			int tmp47 = (int(tmp46) & int((int)248));		HX_STACK_VAR(tmp47,"tmp47");
																			HX_STACK_LINE(176)
																			bool tmp48 = (tmp47 == (int)240);		HX_STACK_VAR(tmp48,"tmp48");
																			HX_STACK_LINE(176)
																			if ((tmp48)){
																				HX_STACK_LINE(176)
																				tmp31 = (int)4;
																			}
																			else{
																				HX_STACK_LINE(176)
																				tmp31 = (int)1;
																			}
																		}
																	}
																}
															}
														}
														HX_STACK_LINE(176)
														hx::SubEq(index,tmp31);
														HX_STACK_LINE(176)
														++(count);
													}
													HX_STACK_LINE(176)
													tmp22 = index;
												}
											}
										}
									}
									HX_STACK_LINE(176)
									int ei = tmp22;		HX_STACK_VAR(ei,"ei");
									HX_STACK_LINE(176)
									int tmp23 = si;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(176)
									int tmp24 = ei;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(176)
									tmp16 = s.substring(tmp23,tmp24);
								}
							}
							HX_STACK_LINE(176)
							::String tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(176)
							this->display = tmp17;
						}
						HX_STACK_LINE(176)
						::mint::Label tmp13 = this->label;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(176)
						::String tmp14 = this->display;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(176)
						tmp13->set_text(tmp14);
						HX_STACK_LINE(176)
						{
							HX_STACK_LINE(176)
							int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
							HX_STACK_LINE(176)
							::mint::core::Signal tmp15 = this->onchangeindex;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(176)
							int tmp16 = tmp15->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(176)
							int _count = tmp16;		HX_STACK_VAR(_count,"_count");
							HX_STACK_LINE(176)
							while((true)){
								HX_STACK_LINE(176)
								bool tmp17 = (_idx < _count);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(176)
								bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(176)
								if ((tmp18)){
									HX_STACK_LINE(176)
									break;
								}
								HX_STACK_LINE(176)
								::mint::core::Signal tmp19 = this->onchangeindex;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(176)
								Dynamic tmp20 = tmp19->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(176)
								Dynamic fn = tmp20;		HX_STACK_VAR(fn,"fn");
								HX_STACK_LINE(176)
								bool tmp21 = (fn != null());		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(176)
								if ((tmp21)){
									HX_STACK_LINE(176)
									int tmp22 = this->index;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(176)
									fn(tmp22).Cast< Void >();
								}
								HX_STACK_LINE(176)
								(_idx)++;
							}
							HX_STACK_LINE(176)
							while((true)){
								HX_STACK_LINE(176)
								bool tmp17 = (_count > (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(176)
								bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(176)
								if ((tmp18)){
									HX_STACK_LINE(176)
									break;
								}
								HX_STACK_LINE(176)
								::mint::core::Signal tmp19 = this->onchangeindex;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(176)
								int tmp20 = (_count - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(176)
								Dynamic tmp21 = tmp19->listeners->__GetItem(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(176)
								Dynamic fn = tmp21;		HX_STACK_VAR(fn,"fn");
								HX_STACK_LINE(176)
								bool tmp22 = (fn == null());		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(176)
								if ((tmp22)){
									HX_STACK_LINE(176)
									::mint::core::Signal tmp23 = this->onchangeindex;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(176)
									int tmp24 = (_count - (int)1);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(176)
									tmp23->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp24,(int)1);
								}
								HX_STACK_LINE(176)
								(_count)--;
							}
						}
						HX_STACK_LINE(176)
						bool tmp15 = _emit;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(176)
						if ((tmp15)){
							HX_STACK_LINE(176)
							int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
							HX_STACK_LINE(176)
							::mint::core::Signal tmp16 = this->onchange;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(176)
							int tmp17 = tmp16->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(176)
							int _count = tmp17;		HX_STACK_VAR(_count,"_count");
							HX_STACK_LINE(176)
							while((true)){
								HX_STACK_LINE(176)
								bool tmp18 = (_idx < _count);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(176)
								bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(176)
								if ((tmp19)){
									HX_STACK_LINE(176)
									break;
								}
								HX_STACK_LINE(176)
								::mint::core::Signal tmp20 = this->onchange;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(176)
								Dynamic tmp21 = tmp20->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(176)
								Dynamic fn = tmp21;		HX_STACK_VAR(fn,"fn");
								HX_STACK_LINE(176)
								bool tmp22 = (fn != null());		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(176)
								if ((tmp22)){
									HX_STACK_LINE(176)
									::String tmp23 = this->edit;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(176)
									::String tmp24 = this->display;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(176)
									bool tmp25 = _from_typing;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(176)
									fn(tmp23,tmp24,tmp25).Cast< Void >();
								}
								HX_STACK_LINE(176)
								(_idx)++;
							}
							HX_STACK_LINE(176)
							while((true)){
								HX_STACK_LINE(176)
								bool tmp18 = (_count > (int)0);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(176)
								bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(176)
								if ((tmp19)){
									HX_STACK_LINE(176)
									break;
								}
								HX_STACK_LINE(176)
								::mint::core::Signal tmp20 = this->onchange;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(176)
								int tmp21 = (_count - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(176)
								Dynamic tmp22 = tmp20->listeners->__GetItem(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(176)
								Dynamic fn = tmp22;		HX_STACK_VAR(fn,"fn");
								HX_STACK_LINE(176)
								bool tmp23 = (fn == null());		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(176)
								if ((tmp23)){
									HX_STACK_LINE(176)
									::mint::core::Signal tmp24 = this->onchange;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(176)
									int tmp25 = (_count - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(176)
									tmp24->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp25,(int)1);
								}
								HX_STACK_LINE(176)
								(_count)--;
							}
						}
						HX_STACK_LINE(176)
						this->edit;
					}
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


Void TextEdit_obj::keydown( Dynamic event){
{
		HX_STACK_FRAME("mint.TextEdit","keydown",0xa96c3ed6,"mint.TextEdit.keydown","mint/TextEdit.hx",184,0x23cb477a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(186)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(186)
		this->super::keydown(tmp);
		HX_STACK_LINE(188)
		{
			HX_STACK_LINE(188)
			int _g = event->__Field(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(188)
			int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(188)
			switch( (int)(tmp1)){
				case (int)4: {
					HX_STACK_LINE(190)
					this->move((int)-1);
					HX_STACK_LINE(191)
					{
						HX_STACK_LINE(191)
						int tmp2 = this->index;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(191)
						int start = tmp2;		HX_STACK_VAR(start,"start");
						HX_STACK_LINE(191)
						::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(191)
						{
							HX_STACK_LINE(191)
							::String tmp4 = this->edit;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(191)
							::String s = tmp4;		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(191)
							::String tmp5 = this->edit;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(191)
							Dynamic length = tmp5.length;		HX_STACK_VAR(length,"length");
							HX_STACK_LINE(191)
							int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(191)
							{
								HX_STACK_LINE(191)
								bool tmp7 = (start >= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(191)
								int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(191)
								if ((tmp7)){
									HX_STACK_LINE(191)
									tmp8 = (int)0;
								}
								else{
									HX_STACK_LINE(191)
									tmp8 = s.length;
								}
								HX_STACK_LINE(191)
								int index = tmp8;		HX_STACK_VAR(index,"index");
								HX_STACK_LINE(191)
								{
									HX_STACK_LINE(191)
									::String this1 = s;		HX_STACK_VAR(this1,"this1");
									HX_STACK_LINE(191)
									bool tmp9 = (start >= (int)0);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(191)
									if ((tmp9)){
										HX_STACK_LINE(191)
										int index1 = index;		HX_STACK_VAR(index1,"index1");
										HX_STACK_LINE(191)
										int tmp10 = this1.length;		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(191)
										int len = tmp10;		HX_STACK_VAR(len,"len");
										HX_STACK_LINE(191)
										int i = (int)0;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(191)
										while((true)){
											HX_STACK_LINE(191)
											bool tmp11 = (i < start);		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(191)
											bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(191)
											if ((tmp11)){
												HX_STACK_LINE(191)
												tmp12 = (index1 < len);
											}
											else{
												HX_STACK_LINE(191)
												tmp12 = false;
											}
											HX_STACK_LINE(191)
											bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(191)
											if ((tmp13)){
												HX_STACK_LINE(191)
												break;
											}
											HX_STACK_LINE(191)
											int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(191)
											{
												HX_STACK_LINE(191)
												int tmp15 = index1;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(191)
												int tmp16 = this1.cca(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(191)
												int c = tmp16;		HX_STACK_VAR(c,"c");
												HX_STACK_LINE(191)
												bool tmp17 = (c < (int)192);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(191)
												if ((tmp17)){
													HX_STACK_LINE(191)
													tmp14 = (int)1;
												}
												else{
													HX_STACK_LINE(191)
													bool tmp18 = (c < (int)224);		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(191)
													if ((tmp18)){
														HX_STACK_LINE(191)
														tmp14 = (int)2;
													}
													else{
														HX_STACK_LINE(191)
														bool tmp19 = (c < (int)240);		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(191)
														if ((tmp19)){
															HX_STACK_LINE(191)
															tmp14 = (int)3;
														}
														else{
															HX_STACK_LINE(191)
															bool tmp20 = (c < (int)248);		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(191)
															if ((tmp20)){
																HX_STACK_LINE(191)
																tmp14 = (int)4;
															}
															else{
																HX_STACK_LINE(191)
																tmp14 = (int)1;
															}
														}
													}
												}
											}
											HX_STACK_LINE(191)
											hx::AddEq(index1,tmp14);
											HX_STACK_LINE(191)
											++(i);
										}
										HX_STACK_LINE(191)
										tmp6 = index1;
									}
									else{
										HX_STACK_LINE(191)
										int index1 = index;		HX_STACK_VAR(index1,"index1");
										HX_STACK_LINE(191)
										int count = (int)0;		HX_STACK_VAR(count,"count");
										HX_STACK_LINE(191)
										while((true)){
											HX_STACK_LINE(191)
											int tmp10 = count;		HX_STACK_VAR(tmp10,"tmp10");
											HX_STACK_LINE(191)
											int tmp11 = start;		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(191)
											int tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(191)
											bool tmp13 = (tmp10 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(191)
											bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(191)
											if ((tmp13)){
												HX_STACK_LINE(191)
												tmp14 = ((int)0 < index1);
											}
											else{
												HX_STACK_LINE(191)
												tmp14 = false;
											}
											HX_STACK_LINE(191)
											bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(191)
											if ((tmp15)){
												HX_STACK_LINE(191)
												break;
											}
											HX_STACK_LINE(191)
											int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(191)
											{
												HX_STACK_LINE(191)
												::String this2 = this1;		HX_STACK_VAR(this2,"this2");
												HX_STACK_LINE(191)
												{
													HX_STACK_LINE(191)
													int tmp17 = (index1 - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(191)
													int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(191)
													{
														HX_STACK_LINE(191)
														int tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(191)
														int tmp20 = this2.cca(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(191)
														tmp18 = tmp20;
													}
													HX_STACK_LINE(191)
													int c1 = tmp18;		HX_STACK_VAR(c1,"c1");
													HX_STACK_LINE(191)
													bool tmp19 = (c1 < (int)128);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(191)
													bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(191)
													bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(191)
													if ((tmp20)){
														HX_STACK_LINE(191)
														tmp21 = (c1 >= (int)192);
													}
													else{
														HX_STACK_LINE(191)
														tmp21 = true;
													}
													HX_STACK_LINE(191)
													if ((tmp21)){
														HX_STACK_LINE(191)
														tmp16 = (int)1;
													}
													else{
														HX_STACK_LINE(191)
														int tmp22 = (index1 - (int)2);		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(191)
														int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(191)
														{
															HX_STACK_LINE(191)
															int tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(191)
															int tmp25 = this2.cca(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(191)
															tmp23 = tmp25;
														}
														HX_STACK_LINE(191)
														int tmp24 = (int(tmp23) & int((int)224));		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(191)
														bool tmp25 = (tmp24 == (int)192);		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(191)
														if ((tmp25)){
															HX_STACK_LINE(191)
															tmp16 = (int)2;
														}
														else{
															HX_STACK_LINE(191)
															int tmp26 = (index1 - (int)3);		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(191)
															int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(191)
															{
																HX_STACK_LINE(191)
																int tmp28 = tmp26;		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(191)
																int tmp29 = this2.cca(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(191)
																tmp27 = tmp29;
															}
															HX_STACK_LINE(191)
															int tmp28 = (int(tmp27) & int((int)240));		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(191)
															bool tmp29 = (tmp28 == (int)224);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(191)
															if ((tmp29)){
																HX_STACK_LINE(191)
																tmp16 = (int)3;
															}
															else{
																HX_STACK_LINE(191)
																int tmp30 = (index1 - (int)4);		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(191)
																int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(191)
																{
																	HX_STACK_LINE(191)
																	int tmp32 = tmp30;		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(191)
																	int tmp33 = this2.cca(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
																	HX_STACK_LINE(191)
																	tmp31 = tmp33;
																}
																HX_STACK_LINE(191)
																int tmp32 = (int(tmp31) & int((int)248));		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(191)
																bool tmp33 = (tmp32 == (int)240);		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(191)
																if ((tmp33)){
																	HX_STACK_LINE(191)
																	tmp16 = (int)4;
																}
																else{
																	HX_STACK_LINE(191)
																	tmp16 = (int)1;
																}
															}
														}
													}
												}
											}
											HX_STACK_LINE(191)
											hx::SubEq(index1,tmp16);
											HX_STACK_LINE(191)
											++(count);
										}
										HX_STACK_LINE(191)
										tmp6 = index1;
									}
								}
							}
							HX_STACK_LINE(191)
							int si = tmp6;		HX_STACK_VAR(si,"si");
							HX_STACK_LINE(191)
							bool tmp7 = (length == null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(191)
							int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(191)
							if ((tmp7)){
								HX_STACK_LINE(191)
								tmp8 = s.length;
							}
							else{
								HX_STACK_LINE(191)
								bool tmp9 = (length < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(191)
								if ((tmp9)){
									HX_STACK_LINE(191)
									tmp8 = si;
								}
								else{
									HX_STACK_LINE(191)
									int codePointOffset = length;		HX_STACK_VAR(codePointOffset,"codePointOffset");
									HX_STACK_LINE(191)
									{
										HX_STACK_LINE(191)
										::String this1 = s;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(191)
										bool tmp10 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(191)
										if ((tmp10)){
											HX_STACK_LINE(191)
											int index = si;		HX_STACK_VAR(index,"index");
											HX_STACK_LINE(191)
											int tmp11 = this1.length;		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(191)
											int len = tmp11;		HX_STACK_VAR(len,"len");
											HX_STACK_LINE(191)
											int i = (int)0;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(191)
											while((true)){
												HX_STACK_LINE(191)
												bool tmp12 = (i < codePointOffset);		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(191)
												bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(191)
												if ((tmp12)){
													HX_STACK_LINE(191)
													tmp13 = (index < len);
												}
												else{
													HX_STACK_LINE(191)
													tmp13 = false;
												}
												HX_STACK_LINE(191)
												bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(191)
												if ((tmp14)){
													HX_STACK_LINE(191)
													break;
												}
												HX_STACK_LINE(191)
												int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(191)
												{
													HX_STACK_LINE(191)
													int tmp16 = index;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(191)
													int tmp17 = this1.cca(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(191)
													int c = tmp17;		HX_STACK_VAR(c,"c");
													HX_STACK_LINE(191)
													bool tmp18 = (c < (int)192);		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(191)
													if ((tmp18)){
														HX_STACK_LINE(191)
														tmp15 = (int)1;
													}
													else{
														HX_STACK_LINE(191)
														bool tmp19 = (c < (int)224);		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(191)
														if ((tmp19)){
															HX_STACK_LINE(191)
															tmp15 = (int)2;
														}
														else{
															HX_STACK_LINE(191)
															bool tmp20 = (c < (int)240);		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(191)
															if ((tmp20)){
																HX_STACK_LINE(191)
																tmp15 = (int)3;
															}
															else{
																HX_STACK_LINE(191)
																bool tmp21 = (c < (int)248);		HX_STACK_VAR(tmp21,"tmp21");
																HX_STACK_LINE(191)
																if ((tmp21)){
																	HX_STACK_LINE(191)
																	tmp15 = (int)4;
																}
																else{
																	HX_STACK_LINE(191)
																	tmp15 = (int)1;
																}
															}
														}
													}
												}
												HX_STACK_LINE(191)
												hx::AddEq(index,tmp15);
												HX_STACK_LINE(191)
												++(i);
											}
											HX_STACK_LINE(191)
											tmp8 = index;
										}
										else{
											HX_STACK_LINE(191)
											int index = si;		HX_STACK_VAR(index,"index");
											HX_STACK_LINE(191)
											int count = (int)0;		HX_STACK_VAR(count,"count");
											HX_STACK_LINE(191)
											while((true)){
												HX_STACK_LINE(191)
												int tmp11 = count;		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(191)
												int tmp12 = codePointOffset;		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(191)
												int tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(191)
												bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(191)
												bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(191)
												if ((tmp14)){
													HX_STACK_LINE(191)
													tmp15 = ((int)0 < index);
												}
												else{
													HX_STACK_LINE(191)
													tmp15 = false;
												}
												HX_STACK_LINE(191)
												bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(191)
												if ((tmp16)){
													HX_STACK_LINE(191)
													break;
												}
												HX_STACK_LINE(191)
												int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(191)
												{
													HX_STACK_LINE(191)
													::String this2 = this1;		HX_STACK_VAR(this2,"this2");
													HX_STACK_LINE(191)
													{
														HX_STACK_LINE(191)
														int tmp18 = (index - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(191)
														int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(191)
														{
															HX_STACK_LINE(191)
															int tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(191)
															int tmp21 = this2.cca(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(191)
															tmp19 = tmp21;
														}
														HX_STACK_LINE(191)
														int c1 = tmp19;		HX_STACK_VAR(c1,"c1");
														HX_STACK_LINE(191)
														bool tmp20 = (c1 < (int)128);		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(191)
														bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(191)
														bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(191)
														if ((tmp21)){
															HX_STACK_LINE(191)
															tmp22 = (c1 >= (int)192);
														}
														else{
															HX_STACK_LINE(191)
															tmp22 = true;
														}
														HX_STACK_LINE(191)
														if ((tmp22)){
															HX_STACK_LINE(191)
															tmp17 = (int)1;
														}
														else{
															HX_STACK_LINE(191)
															int tmp23 = (index - (int)2);		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(191)
															int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(191)
															{
																HX_STACK_LINE(191)
																int tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(191)
																int tmp26 = this2.cca(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(191)
																tmp24 = tmp26;
															}
															HX_STACK_LINE(191)
															int tmp25 = (int(tmp24) & int((int)224));		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(191)
															bool tmp26 = (tmp25 == (int)192);		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(191)
															if ((tmp26)){
																HX_STACK_LINE(191)
																tmp17 = (int)2;
															}
															else{
																HX_STACK_LINE(191)
																int tmp27 = (index - (int)3);		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(191)
																int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(191)
																{
																	HX_STACK_LINE(191)
																	int tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(191)
																	int tmp30 = this2.cca(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(191)
																	tmp28 = tmp30;
																}
																HX_STACK_LINE(191)
																int tmp29 = (int(tmp28) & int((int)240));		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(191)
																bool tmp30 = (tmp29 == (int)224);		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(191)
																if ((tmp30)){
																	HX_STACK_LINE(191)
																	tmp17 = (int)3;
																}
																else{
																	HX_STACK_LINE(191)
																	int tmp31 = (index - (int)4);		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(191)
																	int tmp32;		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(191)
																	{
																		HX_STACK_LINE(191)
																		int tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
																		HX_STACK_LINE(191)
																		int tmp34 = this2.cca(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
																		HX_STACK_LINE(191)
																		tmp32 = tmp34;
																	}
																	HX_STACK_LINE(191)
																	int tmp33 = (int(tmp32) & int((int)248));		HX_STACK_VAR(tmp33,"tmp33");
																	HX_STACK_LINE(191)
																	bool tmp34 = (tmp33 == (int)240);		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(191)
																	if ((tmp34)){
																		HX_STACK_LINE(191)
																		tmp17 = (int)4;
																	}
																	else{
																		HX_STACK_LINE(191)
																		tmp17 = (int)1;
																	}
																}
															}
														}
													}
												}
												HX_STACK_LINE(191)
												hx::SubEq(index,tmp17);
												HX_STACK_LINE(191)
												++(count);
											}
											HX_STACK_LINE(191)
											tmp8 = index;
										}
									}
								}
							}
							HX_STACK_LINE(191)
							int ei = tmp8;		HX_STACK_VAR(ei,"ei");
							HX_STACK_LINE(191)
							int tmp9 = si;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(191)
							int tmp10 = ei;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(191)
							tmp3 = s.substring(tmp9,tmp10);
						}
						HX_STACK_LINE(191)
						::String a = tmp3;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(191)
						{
							HX_STACK_LINE(191)
							::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(191)
							{
								HX_STACK_LINE(191)
								::String tmp5 = this->edit;		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(191)
								::String s = tmp5;		HX_STACK_VAR(s,"s");
								HX_STACK_LINE(191)
								int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(191)
								{
									HX_STACK_LINE(191)
									int index = (int)0;		HX_STACK_VAR(index,"index");
									HX_STACK_LINE(191)
									{
										HX_STACK_LINE(191)
										::String this1 = s;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(191)
										{
											HX_STACK_LINE(191)
											int index1 = index;		HX_STACK_VAR(index1,"index1");
											HX_STACK_LINE(191)
											int tmp7 = this1.length;		HX_STACK_VAR(tmp7,"tmp7");
											HX_STACK_LINE(191)
											int len = tmp7;		HX_STACK_VAR(len,"len");
											HX_STACK_LINE(191)
											int i = (int)0;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(191)
											while((true)){
												HX_STACK_LINE(191)
												bool tmp8 = (i < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
												HX_STACK_LINE(191)
												bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
												HX_STACK_LINE(191)
												if ((tmp8)){
													HX_STACK_LINE(191)
													tmp9 = (index1 < len);
												}
												else{
													HX_STACK_LINE(191)
													tmp9 = false;
												}
												HX_STACK_LINE(191)
												bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
												HX_STACK_LINE(191)
												if ((tmp10)){
													HX_STACK_LINE(191)
													break;
												}
												HX_STACK_LINE(191)
												int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(191)
												{
													HX_STACK_LINE(191)
													int tmp12 = index1;		HX_STACK_VAR(tmp12,"tmp12");
													HX_STACK_LINE(191)
													int tmp13 = this1.cca(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
													HX_STACK_LINE(191)
													int c = tmp13;		HX_STACK_VAR(c,"c");
													HX_STACK_LINE(191)
													bool tmp14 = (c < (int)192);		HX_STACK_VAR(tmp14,"tmp14");
													HX_STACK_LINE(191)
													if ((tmp14)){
														HX_STACK_LINE(191)
														tmp11 = (int)1;
													}
													else{
														HX_STACK_LINE(191)
														bool tmp15 = (c < (int)224);		HX_STACK_VAR(tmp15,"tmp15");
														HX_STACK_LINE(191)
														if ((tmp15)){
															HX_STACK_LINE(191)
															tmp11 = (int)2;
														}
														else{
															HX_STACK_LINE(191)
															bool tmp16 = (c < (int)240);		HX_STACK_VAR(tmp16,"tmp16");
															HX_STACK_LINE(191)
															if ((tmp16)){
																HX_STACK_LINE(191)
																tmp11 = (int)3;
															}
															else{
																HX_STACK_LINE(191)
																bool tmp17 = (c < (int)248);		HX_STACK_VAR(tmp17,"tmp17");
																HX_STACK_LINE(191)
																if ((tmp17)){
																	HX_STACK_LINE(191)
																	tmp11 = (int)4;
																}
																else{
																	HX_STACK_LINE(191)
																	tmp11 = (int)1;
																}
															}
														}
													}
												}
												HX_STACK_LINE(191)
												hx::AddEq(index1,tmp11);
												HX_STACK_LINE(191)
												++(i);
											}
											HX_STACK_LINE(191)
											tmp6 = index1;
										}
									}
								}
								HX_STACK_LINE(191)
								int si = tmp6;		HX_STACK_VAR(si,"si");
								HX_STACK_LINE(191)
								bool tmp7 = (start == null());		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(191)
								int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(191)
								if ((tmp7)){
									HX_STACK_LINE(191)
									tmp8 = s.length;
								}
								else{
									HX_STACK_LINE(191)
									bool tmp9 = (start < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(191)
									if ((tmp9)){
										HX_STACK_LINE(191)
										tmp8 = si;
									}
									else{
										HX_STACK_LINE(191)
										int codePointOffset = start;		HX_STACK_VAR(codePointOffset,"codePointOffset");
										HX_STACK_LINE(191)
										{
											HX_STACK_LINE(191)
											::String this1 = s;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(191)
											bool tmp10 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp10,"tmp10");
											HX_STACK_LINE(191)
											if ((tmp10)){
												HX_STACK_LINE(191)
												int index = si;		HX_STACK_VAR(index,"index");
												HX_STACK_LINE(191)
												int tmp11 = this1.length;		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(191)
												int len = tmp11;		HX_STACK_VAR(len,"len");
												HX_STACK_LINE(191)
												int i = (int)0;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(191)
												while((true)){
													HX_STACK_LINE(191)
													bool tmp12 = (i < codePointOffset);		HX_STACK_VAR(tmp12,"tmp12");
													HX_STACK_LINE(191)
													bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
													HX_STACK_LINE(191)
													if ((tmp12)){
														HX_STACK_LINE(191)
														tmp13 = (index < len);
													}
													else{
														HX_STACK_LINE(191)
														tmp13 = false;
													}
													HX_STACK_LINE(191)
													bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
													HX_STACK_LINE(191)
													if ((tmp14)){
														HX_STACK_LINE(191)
														break;
													}
													HX_STACK_LINE(191)
													int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(191)
													{
														HX_STACK_LINE(191)
														int tmp16 = index;		HX_STACK_VAR(tmp16,"tmp16");
														HX_STACK_LINE(191)
														int tmp17 = this1.cca(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
														HX_STACK_LINE(191)
														int c = tmp17;		HX_STACK_VAR(c,"c");
														HX_STACK_LINE(191)
														bool tmp18 = (c < (int)192);		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(191)
														if ((tmp18)){
															HX_STACK_LINE(191)
															tmp15 = (int)1;
														}
														else{
															HX_STACK_LINE(191)
															bool tmp19 = (c < (int)224);		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(191)
															if ((tmp19)){
																HX_STACK_LINE(191)
																tmp15 = (int)2;
															}
															else{
																HX_STACK_LINE(191)
																bool tmp20 = (c < (int)240);		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(191)
																if ((tmp20)){
																	HX_STACK_LINE(191)
																	tmp15 = (int)3;
																}
																else{
																	HX_STACK_LINE(191)
																	bool tmp21 = (c < (int)248);		HX_STACK_VAR(tmp21,"tmp21");
																	HX_STACK_LINE(191)
																	if ((tmp21)){
																		HX_STACK_LINE(191)
																		tmp15 = (int)4;
																	}
																	else{
																		HX_STACK_LINE(191)
																		tmp15 = (int)1;
																	}
																}
															}
														}
													}
													HX_STACK_LINE(191)
													hx::AddEq(index,tmp15);
													HX_STACK_LINE(191)
													++(i);
												}
												HX_STACK_LINE(191)
												tmp8 = index;
											}
											else{
												HX_STACK_LINE(191)
												int index = si;		HX_STACK_VAR(index,"index");
												HX_STACK_LINE(191)
												int count = (int)0;		HX_STACK_VAR(count,"count");
												HX_STACK_LINE(191)
												while((true)){
													HX_STACK_LINE(191)
													int tmp11 = count;		HX_STACK_VAR(tmp11,"tmp11");
													HX_STACK_LINE(191)
													int tmp12 = codePointOffset;		HX_STACK_VAR(tmp12,"tmp12");
													HX_STACK_LINE(191)
													int tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
													HX_STACK_LINE(191)
													bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
													HX_STACK_LINE(191)
													bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(191)
													if ((tmp14)){
														HX_STACK_LINE(191)
														tmp15 = ((int)0 < index);
													}
													else{
														HX_STACK_LINE(191)
														tmp15 = false;
													}
													HX_STACK_LINE(191)
													bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(191)
													if ((tmp16)){
														HX_STACK_LINE(191)
														break;
													}
													HX_STACK_LINE(191)
													int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(191)
													{
														HX_STACK_LINE(191)
														::String this2 = this1;		HX_STACK_VAR(this2,"this2");
														HX_STACK_LINE(191)
														{
															HX_STACK_LINE(191)
															int tmp18 = (index - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
															HX_STACK_LINE(191)
															int tmp19 = this2.cca(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(191)
															int c1 = tmp19;		HX_STACK_VAR(c1,"c1");
															HX_STACK_LINE(191)
															bool tmp20 = (c1 < (int)128);		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(191)
															bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(191)
															bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(191)
															if ((tmp21)){
																HX_STACK_LINE(191)
																tmp22 = (c1 >= (int)192);
															}
															else{
																HX_STACK_LINE(191)
																tmp22 = true;
															}
															HX_STACK_LINE(191)
															if ((tmp22)){
																HX_STACK_LINE(191)
																tmp17 = (int)1;
															}
															else{
																HX_STACK_LINE(191)
																int tmp23 = (index - (int)2);		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(191)
																int tmp24 = this2.cca(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(191)
																int tmp25 = (int(tmp24) & int((int)224));		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(191)
																bool tmp26 = (tmp25 == (int)192);		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(191)
																if ((tmp26)){
																	HX_STACK_LINE(191)
																	tmp17 = (int)2;
																}
																else{
																	HX_STACK_LINE(191)
																	int tmp27 = (index - (int)3);		HX_STACK_VAR(tmp27,"tmp27");
																	HX_STACK_LINE(191)
																	int tmp28 = this2.cca(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
																	HX_STACK_LINE(191)
																	int tmp29 = (int(tmp28) & int((int)240));		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(191)
																	bool tmp30 = (tmp29 == (int)224);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(191)
																	if ((tmp30)){
																		HX_STACK_LINE(191)
																		tmp17 = (int)3;
																	}
																	else{
																		HX_STACK_LINE(191)
																		int tmp31 = (index - (int)4);		HX_STACK_VAR(tmp31,"tmp31");
																		HX_STACK_LINE(191)
																		int tmp32 = this2.cca(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
																		HX_STACK_LINE(191)
																		int tmp33 = (int(tmp32) & int((int)248));		HX_STACK_VAR(tmp33,"tmp33");
																		HX_STACK_LINE(191)
																		bool tmp34 = (tmp33 == (int)240);		HX_STACK_VAR(tmp34,"tmp34");
																		HX_STACK_LINE(191)
																		if ((tmp34)){
																			HX_STACK_LINE(191)
																			tmp17 = (int)4;
																		}
																		else{
																			HX_STACK_LINE(191)
																			tmp17 = (int)1;
																		}
																	}
																}
															}
														}
													}
													HX_STACK_LINE(191)
													hx::SubEq(index,tmp17);
													HX_STACK_LINE(191)
													++(count);
												}
												HX_STACK_LINE(191)
												tmp8 = index;
											}
										}
									}
								}
								HX_STACK_LINE(191)
								int ei = tmp8;		HX_STACK_VAR(ei,"ei");
								HX_STACK_LINE(191)
								int tmp9 = si;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(191)
								int tmp10 = ei;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(191)
								tmp4 = s.substring(tmp9,tmp10);
							}
							HX_STACK_LINE(191)
							::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(191)
							{
								HX_STACK_LINE(191)
								::String tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(191)
								int tmp7 = a.length;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(191)
								int tmp8 = ::mint::core::unifill::_Utf8::Utf8_Impl__obj::codePointCount(tmp6,(int)0,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(191)
								Dynamic length = tmp8;		HX_STACK_VAR(length,"length");
								HX_STACK_LINE(191)
								int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(191)
								{
									HX_STACK_LINE(191)
									bool tmp10 = true;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(191)
									int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(191)
									if ((tmp10)){
										HX_STACK_LINE(191)
										tmp11 = (int)0;
									}
									else{
										HX_STACK_LINE(191)
										tmp11 = a.length;
									}
									HX_STACK_LINE(191)
									int index = tmp11;		HX_STACK_VAR(index,"index");
									HX_STACK_LINE(191)
									{
										HX_STACK_LINE(191)
										::String this1 = a;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(191)
										bool tmp12 = true;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(191)
										if ((tmp12)){
											HX_STACK_LINE(191)
											int index1 = index;		HX_STACK_VAR(index1,"index1");
											HX_STACK_LINE(191)
											int tmp13 = this1.length;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(191)
											int len = tmp13;		HX_STACK_VAR(len,"len");
											HX_STACK_LINE(191)
											int i = (int)0;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(191)
											while((true)){
												HX_STACK_LINE(191)
												bool tmp14 = (i < (int)1);		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(191)
												bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(191)
												if ((tmp14)){
													HX_STACK_LINE(191)
													tmp15 = (index1 < len);
												}
												else{
													HX_STACK_LINE(191)
													tmp15 = false;
												}
												HX_STACK_LINE(191)
												bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(191)
												if ((tmp16)){
													HX_STACK_LINE(191)
													break;
												}
												HX_STACK_LINE(191)
												int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(191)
												{
													HX_STACK_LINE(191)
													int tmp18 = index1;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(191)
													int tmp19 = this1.cca(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(191)
													int c = tmp19;		HX_STACK_VAR(c,"c");
													HX_STACK_LINE(191)
													bool tmp20 = (c < (int)192);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(191)
													if ((tmp20)){
														HX_STACK_LINE(191)
														tmp17 = (int)1;
													}
													else{
														HX_STACK_LINE(191)
														bool tmp21 = (c < (int)224);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(191)
														if ((tmp21)){
															HX_STACK_LINE(191)
															tmp17 = (int)2;
														}
														else{
															HX_STACK_LINE(191)
															bool tmp22 = (c < (int)240);		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(191)
															if ((tmp22)){
																HX_STACK_LINE(191)
																tmp17 = (int)3;
															}
															else{
																HX_STACK_LINE(191)
																bool tmp23 = (c < (int)248);		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(191)
																if ((tmp23)){
																	HX_STACK_LINE(191)
																	tmp17 = (int)4;
																}
																else{
																	HX_STACK_LINE(191)
																	tmp17 = (int)1;
																}
															}
														}
													}
												}
												HX_STACK_LINE(191)
												hx::AddEq(index1,tmp17);
												HX_STACK_LINE(191)
												++(i);
											}
											HX_STACK_LINE(191)
											tmp9 = index1;
										}
										else{
											HX_STACK_LINE(191)
											int index1 = index;		HX_STACK_VAR(index1,"index1");
											HX_STACK_LINE(191)
											int count = (int)0;		HX_STACK_VAR(count,"count");
											HX_STACK_LINE(191)
											while((true)){
												HX_STACK_LINE(191)
												int tmp13 = count;		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(191)
												int tmp14 = (int)-1;		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(191)
												bool tmp15 = (tmp13 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(191)
												bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(191)
												if ((tmp15)){
													HX_STACK_LINE(191)
													tmp16 = ((int)0 < index1);
												}
												else{
													HX_STACK_LINE(191)
													tmp16 = false;
												}
												HX_STACK_LINE(191)
												bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(191)
												if ((tmp17)){
													HX_STACK_LINE(191)
													break;
												}
												HX_STACK_LINE(191)
												int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(191)
												{
													HX_STACK_LINE(191)
													::String this2 = this1;		HX_STACK_VAR(this2,"this2");
													HX_STACK_LINE(191)
													{
														HX_STACK_LINE(191)
														int tmp19 = (index1 - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(191)
														int tmp20 = this2.cca(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(191)
														int c1 = tmp20;		HX_STACK_VAR(c1,"c1");
														HX_STACK_LINE(191)
														bool tmp21 = (c1 < (int)128);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(191)
														bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(191)
														bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(191)
														if ((tmp22)){
															HX_STACK_LINE(191)
															tmp23 = (c1 >= (int)192);
														}
														else{
															HX_STACK_LINE(191)
															tmp23 = true;
														}
														HX_STACK_LINE(191)
														if ((tmp23)){
															HX_STACK_LINE(191)
															tmp18 = (int)1;
														}
														else{
															HX_STACK_LINE(191)
															int tmp24 = (index1 - (int)2);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(191)
															int tmp25 = this2.cca(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(191)
															int tmp26 = (int(tmp25) & int((int)224));		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(191)
															bool tmp27 = (tmp26 == (int)192);		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(191)
															if ((tmp27)){
																HX_STACK_LINE(191)
																tmp18 = (int)2;
															}
															else{
																HX_STACK_LINE(191)
																int tmp28 = (index1 - (int)3);		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(191)
																int tmp29 = this2.cca(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(191)
																int tmp30 = (int(tmp29) & int((int)240));		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(191)
																bool tmp31 = (tmp30 == (int)224);		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(191)
																if ((tmp31)){
																	HX_STACK_LINE(191)
																	tmp18 = (int)3;
																}
																else{
																	HX_STACK_LINE(191)
																	int tmp32 = (index1 - (int)4);		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(191)
																	int tmp33 = this2.cca(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
																	HX_STACK_LINE(191)
																	int tmp34 = (int(tmp33) & int((int)248));		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(191)
																	bool tmp35 = (tmp34 == (int)240);		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(191)
																	if ((tmp35)){
																		HX_STACK_LINE(191)
																		tmp18 = (int)4;
																	}
																	else{
																		HX_STACK_LINE(191)
																		tmp18 = (int)1;
																	}
																}
															}
														}
													}
												}
												HX_STACK_LINE(191)
												hx::SubEq(index1,tmp18);
												HX_STACK_LINE(191)
												++(count);
											}
											HX_STACK_LINE(191)
											tmp9 = index1;
										}
									}
								}
								HX_STACK_LINE(191)
								int si = tmp9;		HX_STACK_VAR(si,"si");
								HX_STACK_LINE(191)
								bool tmp10 = (length == null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(191)
								int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(191)
								if ((tmp10)){
									HX_STACK_LINE(191)
									tmp11 = a.length;
								}
								else{
									HX_STACK_LINE(191)
									bool tmp12 = (length < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(191)
									if ((tmp12)){
										HX_STACK_LINE(191)
										tmp11 = si;
									}
									else{
										HX_STACK_LINE(191)
										int codePointOffset = length;		HX_STACK_VAR(codePointOffset,"codePointOffset");
										HX_STACK_LINE(191)
										{
											HX_STACK_LINE(191)
											::String this1 = a;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(191)
											bool tmp13 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(191)
											if ((tmp13)){
												HX_STACK_LINE(191)
												int index = si;		HX_STACK_VAR(index,"index");
												HX_STACK_LINE(191)
												int tmp14 = this1.length;		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(191)
												int len = tmp14;		HX_STACK_VAR(len,"len");
												HX_STACK_LINE(191)
												int i = (int)0;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(191)
												while((true)){
													HX_STACK_LINE(191)
													bool tmp15 = (i < codePointOffset);		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(191)
													bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(191)
													if ((tmp15)){
														HX_STACK_LINE(191)
														tmp16 = (index < len);
													}
													else{
														HX_STACK_LINE(191)
														tmp16 = false;
													}
													HX_STACK_LINE(191)
													bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(191)
													if ((tmp17)){
														HX_STACK_LINE(191)
														break;
													}
													HX_STACK_LINE(191)
													int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(191)
													{
														HX_STACK_LINE(191)
														int tmp19 = index;		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(191)
														int tmp20 = this1.cca(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(191)
														int c = tmp20;		HX_STACK_VAR(c,"c");
														HX_STACK_LINE(191)
														bool tmp21 = (c < (int)192);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(191)
														if ((tmp21)){
															HX_STACK_LINE(191)
															tmp18 = (int)1;
														}
														else{
															HX_STACK_LINE(191)
															bool tmp22 = (c < (int)224);		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(191)
															if ((tmp22)){
																HX_STACK_LINE(191)
																tmp18 = (int)2;
															}
															else{
																HX_STACK_LINE(191)
																bool tmp23 = (c < (int)240);		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(191)
																if ((tmp23)){
																	HX_STACK_LINE(191)
																	tmp18 = (int)3;
																}
																else{
																	HX_STACK_LINE(191)
																	bool tmp24 = (c < (int)248);		HX_STACK_VAR(tmp24,"tmp24");
																	HX_STACK_LINE(191)
																	if ((tmp24)){
																		HX_STACK_LINE(191)
																		tmp18 = (int)4;
																	}
																	else{
																		HX_STACK_LINE(191)
																		tmp18 = (int)1;
																	}
																}
															}
														}
													}
													HX_STACK_LINE(191)
													hx::AddEq(index,tmp18);
													HX_STACK_LINE(191)
													++(i);
												}
												HX_STACK_LINE(191)
												tmp11 = index;
											}
											else{
												HX_STACK_LINE(191)
												int index = si;		HX_STACK_VAR(index,"index");
												HX_STACK_LINE(191)
												int count = (int)0;		HX_STACK_VAR(count,"count");
												HX_STACK_LINE(191)
												while((true)){
													HX_STACK_LINE(191)
													int tmp14 = count;		HX_STACK_VAR(tmp14,"tmp14");
													HX_STACK_LINE(191)
													int tmp15 = codePointOffset;		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(191)
													int tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(191)
													bool tmp17 = (tmp14 < tmp16);		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(191)
													bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(191)
													if ((tmp17)){
														HX_STACK_LINE(191)
														tmp18 = ((int)0 < index);
													}
													else{
														HX_STACK_LINE(191)
														tmp18 = false;
													}
													HX_STACK_LINE(191)
													bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(191)
													if ((tmp19)){
														HX_STACK_LINE(191)
														break;
													}
													HX_STACK_LINE(191)
													int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(191)
													{
														HX_STACK_LINE(191)
														::String this2 = this1;		HX_STACK_VAR(this2,"this2");
														HX_STACK_LINE(191)
														{
															HX_STACK_LINE(191)
															int tmp21 = (index - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(191)
															int tmp22 = this2.cca(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(191)
															int c1 = tmp22;		HX_STACK_VAR(c1,"c1");
															HX_STACK_LINE(191)
															bool tmp23 = (c1 < (int)128);		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(191)
															bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(191)
															bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(191)
															if ((tmp24)){
																HX_STACK_LINE(191)
																tmp25 = (c1 >= (int)192);
															}
															else{
																HX_STACK_LINE(191)
																tmp25 = true;
															}
															HX_STACK_LINE(191)
															if ((tmp25)){
																HX_STACK_LINE(191)
																tmp20 = (int)1;
															}
															else{
																HX_STACK_LINE(191)
																int tmp26 = (index - (int)2);		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(191)
																int tmp27 = this2.cca(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(191)
																int tmp28 = (int(tmp27) & int((int)224));		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(191)
																bool tmp29 = (tmp28 == (int)192);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(191)
																if ((tmp29)){
																	HX_STACK_LINE(191)
																	tmp20 = (int)2;
																}
																else{
																	HX_STACK_LINE(191)
																	int tmp30 = (index - (int)3);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(191)
																	int tmp31 = this2.cca(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(191)
																	int tmp32 = (int(tmp31) & int((int)240));		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(191)
																	bool tmp33 = (tmp32 == (int)224);		HX_STACK_VAR(tmp33,"tmp33");
																	HX_STACK_LINE(191)
																	if ((tmp33)){
																		HX_STACK_LINE(191)
																		tmp20 = (int)3;
																	}
																	else{
																		HX_STACK_LINE(191)
																		int tmp34 = (index - (int)4);		HX_STACK_VAR(tmp34,"tmp34");
																		HX_STACK_LINE(191)
																		int tmp35 = this2.cca(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(191)
																		int tmp36 = (int(tmp35) & int((int)248));		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(191)
																		bool tmp37 = (tmp36 == (int)240);		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(191)
																		if ((tmp37)){
																			HX_STACK_LINE(191)
																			tmp20 = (int)4;
																		}
																		else{
																			HX_STACK_LINE(191)
																			tmp20 = (int)1;
																		}
																	}
																}
															}
														}
													}
													HX_STACK_LINE(191)
													hx::SubEq(index,tmp20);
													HX_STACK_LINE(191)
													++(count);
												}
												HX_STACK_LINE(191)
												tmp11 = index;
											}
										}
									}
								}
								HX_STACK_LINE(191)
								int ei = tmp11;		HX_STACK_VAR(ei,"ei");
								HX_STACK_LINE(191)
								int tmp12 = si;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(191)
								int tmp13 = ei;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(191)
								tmp5 = a.substring(tmp12,tmp13);
							}
							HX_STACK_LINE(191)
							::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(191)
							::String str = tmp6;		HX_STACK_VAR(str,"str");
							HX_STACK_LINE(191)
							bool _from_typing = true;		HX_STACK_VAR(_from_typing,"_from_typing");
							HX_STACK_LINE(191)
							bool _emit = true;		HX_STACK_VAR(_emit,"_emit");
							HX_STACK_LINE(191)
							this->edit = str;
							HX_STACK_LINE(191)
							::String tmp7 = this->display_char;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(191)
							bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(191)
							if ((tmp8)){
								HX_STACK_LINE(191)
								this->display = HX_HCSTRING("","\x00","\x00","\x00","\x00");
								HX_STACK_LINE(191)
								::String tmp9 = str;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(191)
								int tmp10 = str.length;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(191)
								int tmp11 = ::mint::core::unifill::_Utf8::Utf8_Impl__obj::codePointCount(tmp9,(int)0,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(191)
								int _l = tmp11;		HX_STACK_VAR(_l,"_l");
								HX_STACK_LINE(191)
								{
									HX_STACK_LINE(191)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(191)
									while((true)){
										HX_STACK_LINE(191)
										bool tmp12 = (_g1 < _l);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(191)
										bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(191)
										if ((tmp13)){
											HX_STACK_LINE(191)
											break;
										}
										HX_STACK_LINE(191)
										int tmp14 = (_g1)++;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(191)
										int i = tmp14;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(191)
										::String tmp15 = this->display_char;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(191)
										hx::AddEq(this->display,tmp15);
									}
								}
							}
							else{
								HX_STACK_LINE(191)
								::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(191)
								{
									HX_STACK_LINE(191)
									int tmp10 = this->index;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(191)
									int cur = tmp10;		HX_STACK_VAR(cur,"cur");
									HX_STACK_LINE(191)
									{
										HX_STACK_LINE(191)
										::String tmp11 = this->edit;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(191)
										::String s = tmp11;		HX_STACK_VAR(s,"s");
										HX_STACK_LINE(191)
										int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(191)
										{
											HX_STACK_LINE(191)
											bool tmp13 = true;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(191)
											int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(191)
											if ((tmp13)){
												HX_STACK_LINE(191)
												tmp14 = (int)0;
											}
											else{
												HX_STACK_LINE(191)
												tmp14 = s.length;
											}
											HX_STACK_LINE(191)
											int index = tmp14;		HX_STACK_VAR(index,"index");
											HX_STACK_LINE(191)
											{
												HX_STACK_LINE(191)
												::String this1 = s;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(191)
												bool tmp15 = true;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(191)
												if ((tmp15)){
													HX_STACK_LINE(191)
													int index1 = index;		HX_STACK_VAR(index1,"index1");
													HX_STACK_LINE(191)
													int tmp16 = this1.length;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(191)
													int len = tmp16;		HX_STACK_VAR(len,"len");
													HX_STACK_LINE(191)
													int i = (int)0;		HX_STACK_VAR(i,"i");
													HX_STACK_LINE(191)
													while((true)){
														HX_STACK_LINE(191)
														bool tmp17 = (i < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
														HX_STACK_LINE(191)
														bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(191)
														if ((tmp17)){
															HX_STACK_LINE(191)
															tmp18 = (index1 < len);
														}
														else{
															HX_STACK_LINE(191)
															tmp18 = false;
														}
														HX_STACK_LINE(191)
														bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(191)
														if ((tmp19)){
															HX_STACK_LINE(191)
															break;
														}
														HX_STACK_LINE(191)
														int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(191)
														{
															HX_STACK_LINE(191)
															int tmp21 = index1;		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(191)
															int tmp22 = this1.cca(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(191)
															int c = tmp22;		HX_STACK_VAR(c,"c");
															HX_STACK_LINE(191)
															bool tmp23 = (c < (int)192);		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(191)
															if ((tmp23)){
																HX_STACK_LINE(191)
																tmp20 = (int)1;
															}
															else{
																HX_STACK_LINE(191)
																bool tmp24 = (c < (int)224);		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(191)
																if ((tmp24)){
																	HX_STACK_LINE(191)
																	tmp20 = (int)2;
																}
																else{
																	HX_STACK_LINE(191)
																	bool tmp25 = (c < (int)240);		HX_STACK_VAR(tmp25,"tmp25");
																	HX_STACK_LINE(191)
																	if ((tmp25)){
																		HX_STACK_LINE(191)
																		tmp20 = (int)3;
																	}
																	else{
																		HX_STACK_LINE(191)
																		bool tmp26 = (c < (int)248);		HX_STACK_VAR(tmp26,"tmp26");
																		HX_STACK_LINE(191)
																		if ((tmp26)){
																			HX_STACK_LINE(191)
																			tmp20 = (int)4;
																		}
																		else{
																			HX_STACK_LINE(191)
																			tmp20 = (int)1;
																		}
																	}
																}
															}
														}
														HX_STACK_LINE(191)
														hx::AddEq(index1,tmp20);
														HX_STACK_LINE(191)
														++(i);
													}
													HX_STACK_LINE(191)
													tmp12 = index1;
												}
												else{
													HX_STACK_LINE(191)
													int index1 = index;		HX_STACK_VAR(index1,"index1");
													HX_STACK_LINE(191)
													int count = (int)0;		HX_STACK_VAR(count,"count");
													HX_STACK_LINE(191)
													while((true)){
														HX_STACK_LINE(191)
														int tmp16 = count;		HX_STACK_VAR(tmp16,"tmp16");
														HX_STACK_LINE(191)
														int tmp17 = (int)0;		HX_STACK_VAR(tmp17,"tmp17");
														HX_STACK_LINE(191)
														bool tmp18 = (tmp16 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(191)
														bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(191)
														if ((tmp18)){
															HX_STACK_LINE(191)
															tmp19 = ((int)0 < index1);
														}
														else{
															HX_STACK_LINE(191)
															tmp19 = false;
														}
														HX_STACK_LINE(191)
														bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(191)
														if ((tmp20)){
															HX_STACK_LINE(191)
															break;
														}
														HX_STACK_LINE(191)
														int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(191)
														{
															HX_STACK_LINE(191)
															::String this2 = this1;		HX_STACK_VAR(this2,"this2");
															HX_STACK_LINE(191)
															{
																HX_STACK_LINE(191)
																int tmp22 = (index1 - (int)1);		HX_STACK_VAR(tmp22,"tmp22");
																HX_STACK_LINE(191)
																int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(191)
																{
																	HX_STACK_LINE(191)
																	int tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
																	HX_STACK_LINE(191)
																	int tmp25 = this2.cca(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
																	HX_STACK_LINE(191)
																	tmp23 = tmp25;
																}
																HX_STACK_LINE(191)
																int c1 = tmp23;		HX_STACK_VAR(c1,"c1");
																HX_STACK_LINE(191)
																bool tmp24 = (c1 < (int)128);		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(191)
																bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(191)
																bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(191)
																if ((tmp25)){
																	HX_STACK_LINE(191)
																	tmp26 = (c1 >= (int)192);
																}
																else{
																	HX_STACK_LINE(191)
																	tmp26 = true;
																}
																HX_STACK_LINE(191)
																if ((tmp26)){
																	HX_STACK_LINE(191)
																	tmp21 = (int)1;
																}
																else{
																	HX_STACK_LINE(191)
																	int tmp27 = (index1 - (int)2);		HX_STACK_VAR(tmp27,"tmp27");
																	HX_STACK_LINE(191)
																	int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
																	HX_STACK_LINE(191)
																	{
																		HX_STACK_LINE(191)
																		int tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
																		HX_STACK_LINE(191)
																		int tmp30 = this2.cca(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
																		HX_STACK_LINE(191)
																		tmp28 = tmp30;
																	}
																	HX_STACK_LINE(191)
																	int tmp29 = (int(tmp28) & int((int)224));		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(191)
																	bool tmp30 = (tmp29 == (int)192);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(191)
																	if ((tmp30)){
																		HX_STACK_LINE(191)
																		tmp21 = (int)2;
																	}
																	else{
																		HX_STACK_LINE(191)
																		int tmp31 = (index1 - (int)3);		HX_STACK_VAR(tmp31,"tmp31");
																		HX_STACK_LINE(191)
																		int tmp32;		HX_STACK_VAR(tmp32,"tmp32");
																		HX_STACK_LINE(191)
																		{
																			HX_STACK_LINE(191)
																			int tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
																			HX_STACK_LINE(191)
																			int tmp34 = this2.cca(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
																			HX_STACK_LINE(191)
																			tmp32 = tmp34;
																		}
																		HX_STACK_LINE(191)
																		int tmp33 = (int(tmp32) & int((int)240));		HX_STACK_VAR(tmp33,"tmp33");
																		HX_STACK_LINE(191)
																		bool tmp34 = (tmp33 == (int)224);		HX_STACK_VAR(tmp34,"tmp34");
																		HX_STACK_LINE(191)
																		if ((tmp34)){
																			HX_STACK_LINE(191)
																			tmp21 = (int)3;
																		}
																		else{
																			HX_STACK_LINE(191)
																			int tmp35 = (index1 - (int)4);		HX_STACK_VAR(tmp35,"tmp35");
																			HX_STACK_LINE(191)
																			int tmp36;		HX_STACK_VAR(tmp36,"tmp36");
																			HX_STACK_LINE(191)
																			{
																				HX_STACK_LINE(191)
																				int tmp37 = tmp35;		HX_STACK_VAR(tmp37,"tmp37");
																				HX_STACK_LINE(191)
																				int tmp38 = this2.cca(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(191)
																				tmp36 = tmp38;
																			}
																			HX_STACK_LINE(191)
																			int tmp37 = (int(tmp36) & int((int)248));		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(191)
																			bool tmp38 = (tmp37 == (int)240);		HX_STACK_VAR(tmp38,"tmp38");
																			HX_STACK_LINE(191)
																			if ((tmp38)){
																				HX_STACK_LINE(191)
																				tmp21 = (int)4;
																			}
																			else{
																				HX_STACK_LINE(191)
																				tmp21 = (int)1;
																			}
																		}
																	}
																}
															}
														}
														HX_STACK_LINE(191)
														hx::SubEq(index1,tmp21);
														HX_STACK_LINE(191)
														++(count);
													}
													HX_STACK_LINE(191)
													tmp12 = index1;
												}
											}
										}
										HX_STACK_LINE(191)
										int si = tmp12;		HX_STACK_VAR(si,"si");
										HX_STACK_LINE(191)
										bool tmp13 = (cur == null());		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(191)
										int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(191)
										if ((tmp13)){
											HX_STACK_LINE(191)
											tmp14 = s.length;
										}
										else{
											HX_STACK_LINE(191)
											bool tmp15 = (cur < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(191)
											if ((tmp15)){
												HX_STACK_LINE(191)
												tmp14 = si;
											}
											else{
												HX_STACK_LINE(191)
												int codePointOffset = cur;		HX_STACK_VAR(codePointOffset,"codePointOffset");
												HX_STACK_LINE(191)
												{
													HX_STACK_LINE(191)
													::String this1 = s;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(191)
													bool tmp16 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(191)
													if ((tmp16)){
														HX_STACK_LINE(191)
														int index = si;		HX_STACK_VAR(index,"index");
														HX_STACK_LINE(191)
														int tmp17 = this1.length;		HX_STACK_VAR(tmp17,"tmp17");
														HX_STACK_LINE(191)
														int len = tmp17;		HX_STACK_VAR(len,"len");
														HX_STACK_LINE(191)
														int i = (int)0;		HX_STACK_VAR(i,"i");
														HX_STACK_LINE(191)
														while((true)){
															HX_STACK_LINE(191)
															bool tmp18 = (i < codePointOffset);		HX_STACK_VAR(tmp18,"tmp18");
															HX_STACK_LINE(191)
															bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(191)
															if ((tmp18)){
																HX_STACK_LINE(191)
																tmp19 = (index < len);
															}
															else{
																HX_STACK_LINE(191)
																tmp19 = false;
															}
															HX_STACK_LINE(191)
															bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(191)
															if ((tmp20)){
																HX_STACK_LINE(191)
																break;
															}
															HX_STACK_LINE(191)
															int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(191)
															{
																HX_STACK_LINE(191)
																int tmp22 = index;		HX_STACK_VAR(tmp22,"tmp22");
																HX_STACK_LINE(191)
																int tmp23 = this1.cca(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(191)
																int c = tmp23;		HX_STACK_VAR(c,"c");
																HX_STACK_LINE(191)
																bool tmp24 = (c < (int)192);		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(191)
																if ((tmp24)){
																	HX_STACK_LINE(191)
																	tmp21 = (int)1;
																}
																else{
																	HX_STACK_LINE(191)
																	bool tmp25 = (c < (int)224);		HX_STACK_VAR(tmp25,"tmp25");
																	HX_STACK_LINE(191)
																	if ((tmp25)){
																		HX_STACK_LINE(191)
																		tmp21 = (int)2;
																	}
																	else{
																		HX_STACK_LINE(191)
																		bool tmp26 = (c < (int)240);		HX_STACK_VAR(tmp26,"tmp26");
																		HX_STACK_LINE(191)
																		if ((tmp26)){
																			HX_STACK_LINE(191)
																			tmp21 = (int)3;
																		}
																		else{
																			HX_STACK_LINE(191)
																			bool tmp27 = (c < (int)248);		HX_STACK_VAR(tmp27,"tmp27");
																			HX_STACK_LINE(191)
																			if ((tmp27)){
																				HX_STACK_LINE(191)
																				tmp21 = (int)4;
																			}
																			else{
																				HX_STACK_LINE(191)
																				tmp21 = (int)1;
																			}
																		}
																	}
																}
															}
															HX_STACK_LINE(191)
															hx::AddEq(index,tmp21);
															HX_STACK_LINE(191)
															++(i);
														}
														HX_STACK_LINE(191)
														tmp14 = index;
													}
													else{
														HX_STACK_LINE(191)
														int index = si;		HX_STACK_VAR(index,"index");
														HX_STACK_LINE(191)
														int count = (int)0;		HX_STACK_VAR(count,"count");
														HX_STACK_LINE(191)
														while((true)){
															HX_STACK_LINE(191)
															int tmp17 = count;		HX_STACK_VAR(tmp17,"tmp17");
															HX_STACK_LINE(191)
															int tmp18 = codePointOffset;		HX_STACK_VAR(tmp18,"tmp18");
															HX_STACK_LINE(191)
															int tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(191)
															bool tmp20 = (tmp17 < tmp19);		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(191)
															bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(191)
															if ((tmp20)){
																HX_STACK_LINE(191)
																tmp21 = ((int)0 < index);
															}
															else{
																HX_STACK_LINE(191)
																tmp21 = false;
															}
															HX_STACK_LINE(191)
															bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(191)
															if ((tmp22)){
																HX_STACK_LINE(191)
																break;
															}
															HX_STACK_LINE(191)
															int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(191)
															{
																HX_STACK_LINE(191)
																::String this2 = this1;		HX_STACK_VAR(this2,"this2");
																HX_STACK_LINE(191)
																{
																	HX_STACK_LINE(191)
																	int tmp24 = (index - (int)1);		HX_STACK_VAR(tmp24,"tmp24");
																	HX_STACK_LINE(191)
																	int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
																	HX_STACK_LINE(191)
																	{
																		HX_STACK_LINE(191)
																		int tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
																		HX_STACK_LINE(191)
																		int tmp27 = this2.cca(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
																		HX_STACK_LINE(191)
																		tmp25 = tmp27;
																	}
																	HX_STACK_LINE(191)
																	int c1 = tmp25;		HX_STACK_VAR(c1,"c1");
																	HX_STACK_LINE(191)
																	bool tmp26 = (c1 < (int)128);		HX_STACK_VAR(tmp26,"tmp26");
																	HX_STACK_LINE(191)
																	bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
																	HX_STACK_LINE(191)
																	bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
																	HX_STACK_LINE(191)
																	if ((tmp27)){
																		HX_STACK_LINE(191)
																		tmp28 = (c1 >= (int)192);
																	}
																	else{
																		HX_STACK_LINE(191)
																		tmp28 = true;
																	}
																	HX_STACK_LINE(191)
																	if ((tmp28)){
																		HX_STACK_LINE(191)
																		tmp23 = (int)1;
																	}
																	else{
																		HX_STACK_LINE(191)
																		int tmp29 = (index - (int)2);		HX_STACK_VAR(tmp29,"tmp29");
																		HX_STACK_LINE(191)
																		int tmp30;		HX_STACK_VAR(tmp30,"tmp30");
																		HX_STACK_LINE(191)
																		{
																			HX_STACK_LINE(191)
																			int tmp31 = tmp29;		HX_STACK_VAR(tmp31,"tmp31");
																			HX_STACK_LINE(191)
																			int tmp32 = this2.cca(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
																			HX_STACK_LINE(191)
																			tmp30 = tmp32;
																		}
																		HX_STACK_LINE(191)
																		int tmp31 = (int(tmp30) & int((int)224));		HX_STACK_VAR(tmp31,"tmp31");
																		HX_STACK_LINE(191)
																		bool tmp32 = (tmp31 == (int)192);		HX_STACK_VAR(tmp32,"tmp32");
																		HX_STACK_LINE(191)
																		if ((tmp32)){
																			HX_STACK_LINE(191)
																			tmp23 = (int)2;
																		}
																		else{
																			HX_STACK_LINE(191)
																			int tmp33 = (index - (int)3);		HX_STACK_VAR(tmp33,"tmp33");
																			HX_STACK_LINE(191)
																			int tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																			HX_STACK_LINE(191)
																			{
																				HX_STACK_LINE(191)
																				int tmp35 = tmp33;		HX_STACK_VAR(tmp35,"tmp35");
																				HX_STACK_LINE(191)
																				int tmp36 = this2.cca(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																				HX_STACK_LINE(191)
																				tmp34 = tmp36;
																			}
																			HX_STACK_LINE(191)
																			int tmp35 = (int(tmp34) & int((int)240));		HX_STACK_VAR(tmp35,"tmp35");
																			HX_STACK_LINE(191)
																			bool tmp36 = (tmp35 == (int)224);		HX_STACK_VAR(tmp36,"tmp36");
																			HX_STACK_LINE(191)
																			if ((tmp36)){
																				HX_STACK_LINE(191)
																				tmp23 = (int)3;
																			}
																			else{
																				HX_STACK_LINE(191)
																				int tmp37 = (index - (int)4);		HX_STACK_VAR(tmp37,"tmp37");
																				HX_STACK_LINE(191)
																				int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(191)
																				{
																					HX_STACK_LINE(191)
																					int tmp39 = tmp37;		HX_STACK_VAR(tmp39,"tmp39");
																					HX_STACK_LINE(191)
																					int tmp40 = this2.cca(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																					HX_STACK_LINE(191)
																					tmp38 = tmp40;
																				}
																				HX_STACK_LINE(191)
																				int tmp39 = (int(tmp38) & int((int)248));		HX_STACK_VAR(tmp39,"tmp39");
																				HX_STACK_LINE(191)
																				bool tmp40 = (tmp39 == (int)240);		HX_STACK_VAR(tmp40,"tmp40");
																				HX_STACK_LINE(191)
																				if ((tmp40)){
																					HX_STACK_LINE(191)
																					tmp23 = (int)4;
																				}
																				else{
																					HX_STACK_LINE(191)
																					tmp23 = (int)1;
																				}
																			}
																		}
																	}
																}
															}
															HX_STACK_LINE(191)
															hx::SubEq(index,tmp23);
															HX_STACK_LINE(191)
															++(count);
														}
														HX_STACK_LINE(191)
														tmp14 = index;
													}
												}
											}
										}
										HX_STACK_LINE(191)
										int ei = tmp14;		HX_STACK_VAR(ei,"ei");
										HX_STACK_LINE(191)
										int tmp15 = si;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(191)
										int tmp16 = ei;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(191)
										tmp9 = s.substring(tmp15,tmp16);
									}
								}
								HX_STACK_LINE(191)
								::String tmp10 = this->composition;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(191)
								::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(191)
								::String tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(191)
								{
									HX_STACK_LINE(191)
									int tmp13 = this->index;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(191)
									int cur = tmp13;		HX_STACK_VAR(cur,"cur");
									HX_STACK_LINE(191)
									{
										HX_STACK_LINE(191)
										::String tmp14 = this->edit;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(191)
										::String s = tmp14;		HX_STACK_VAR(s,"s");
										HX_STACK_LINE(191)
										::String tmp15 = this->edit;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(191)
										Dynamic length = tmp15.length;		HX_STACK_VAR(length,"length");
										HX_STACK_LINE(191)
										int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(191)
										{
											HX_STACK_LINE(191)
											bool tmp17 = (cur >= (int)0);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(191)
											int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(191)
											if ((tmp17)){
												HX_STACK_LINE(191)
												tmp18 = (int)0;
											}
											else{
												HX_STACK_LINE(191)
												tmp18 = s.length;
											}
											HX_STACK_LINE(191)
											int index = tmp18;		HX_STACK_VAR(index,"index");
											HX_STACK_LINE(191)
											{
												HX_STACK_LINE(191)
												::String this1 = s;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(191)
												bool tmp19 = (cur >= (int)0);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(191)
												if ((tmp19)){
													HX_STACK_LINE(191)
													int index1 = index;		HX_STACK_VAR(index1,"index1");
													HX_STACK_LINE(191)
													int tmp20 = this1.length;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(191)
													int len = tmp20;		HX_STACK_VAR(len,"len");
													HX_STACK_LINE(191)
													int i = (int)0;		HX_STACK_VAR(i,"i");
													HX_STACK_LINE(191)
													while((true)){
														HX_STACK_LINE(191)
														bool tmp21 = (i < cur);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(191)
														bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(191)
														if ((tmp21)){
															HX_STACK_LINE(191)
															tmp22 = (index1 < len);
														}
														else{
															HX_STACK_LINE(191)
															tmp22 = false;
														}
														HX_STACK_LINE(191)
														bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(191)
														if ((tmp23)){
															HX_STACK_LINE(191)
															break;
														}
														HX_STACK_LINE(191)
														int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(191)
														{
															HX_STACK_LINE(191)
															int tmp25 = index1;		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(191)
															int tmp26 = this1.cca(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(191)
															int c = tmp26;		HX_STACK_VAR(c,"c");
															HX_STACK_LINE(191)
															bool tmp27 = (c < (int)192);		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(191)
															if ((tmp27)){
																HX_STACK_LINE(191)
																tmp24 = (int)1;
															}
															else{
																HX_STACK_LINE(191)
																bool tmp28 = (c < (int)224);		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(191)
																if ((tmp28)){
																	HX_STACK_LINE(191)
																	tmp24 = (int)2;
																}
																else{
																	HX_STACK_LINE(191)
																	bool tmp29 = (c < (int)240);		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(191)
																	if ((tmp29)){
																		HX_STACK_LINE(191)
																		tmp24 = (int)3;
																	}
																	else{
																		HX_STACK_LINE(191)
																		bool tmp30 = (c < (int)248);		HX_STACK_VAR(tmp30,"tmp30");
																		HX_STACK_LINE(191)
																		if ((tmp30)){
																			HX_STACK_LINE(191)
																			tmp24 = (int)4;
																		}
																		else{
																			HX_STACK_LINE(191)
																			tmp24 = (int)1;
																		}
																	}
																}
															}
														}
														HX_STACK_LINE(191)
														hx::AddEq(index1,tmp24);
														HX_STACK_LINE(191)
														++(i);
													}
													HX_STACK_LINE(191)
													tmp16 = index1;
												}
												else{
													HX_STACK_LINE(191)
													int index1 = index;		HX_STACK_VAR(index1,"index1");
													HX_STACK_LINE(191)
													int count = (int)0;		HX_STACK_VAR(count,"count");
													HX_STACK_LINE(191)
													while((true)){
														HX_STACK_LINE(191)
														int tmp20 = count;		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(191)
														int tmp21 = cur;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(191)
														int tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(191)
														bool tmp23 = (tmp20 < tmp22);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(191)
														bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(191)
														if ((tmp23)){
															HX_STACK_LINE(191)
															tmp24 = ((int)0 < index1);
														}
														else{
															HX_STACK_LINE(191)
															tmp24 = false;
														}
														HX_STACK_LINE(191)
														bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(191)
														if ((tmp25)){
															HX_STACK_LINE(191)
															break;
														}
														HX_STACK_LINE(191)
														int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(191)
														{
															HX_STACK_LINE(191)
															::String this2 = this1;		HX_STACK_VAR(this2,"this2");
															HX_STACK_LINE(191)
															{
																HX_STACK_LINE(191)
																int tmp27 = (index1 - (int)1);		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(191)
																int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(191)
																{
																	HX_STACK_LINE(191)
																	int tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(191)
																	int tmp30 = this2.cca(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(191)
																	tmp28 = tmp30;
																}
																HX_STACK_LINE(191)
																int c1 = tmp28;		HX_STACK_VAR(c1,"c1");
																HX_STACK_LINE(191)
																bool tmp29 = (c1 < (int)128);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(191)
																bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(191)
																bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(191)
																if ((tmp30)){
																	HX_STACK_LINE(191)
																	tmp31 = (c1 >= (int)192);
																}
																else{
																	HX_STACK_LINE(191)
																	tmp31 = true;
																}
																HX_STACK_LINE(191)
																if ((tmp31)){
																	HX_STACK_LINE(191)
																	tmp26 = (int)1;
																}
																else{
																	HX_STACK_LINE(191)
																	int tmp32 = (index1 - (int)2);		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(191)
																	int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
																	HX_STACK_LINE(191)
																	{
																		HX_STACK_LINE(191)
																		int tmp34 = tmp32;		HX_STACK_VAR(tmp34,"tmp34");
																		HX_STACK_LINE(191)
																		int tmp35 = this2.cca(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(191)
																		tmp33 = tmp35;
																	}
																	HX_STACK_LINE(191)
																	int tmp34 = (int(tmp33) & int((int)224));		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(191)
																	bool tmp35 = (tmp34 == (int)192);		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(191)
																	if ((tmp35)){
																		HX_STACK_LINE(191)
																		tmp26 = (int)2;
																	}
																	else{
																		HX_STACK_LINE(191)
																		int tmp36 = (index1 - (int)3);		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(191)
																		int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(191)
																		{
																			HX_STACK_LINE(191)
																			int tmp38 = tmp36;		HX_STACK_VAR(tmp38,"tmp38");
																			HX_STACK_LINE(191)
																			int tmp39 = this2.cca(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(191)
																			tmp37 = tmp39;
																		}
																		HX_STACK_LINE(191)
																		int tmp38 = (int(tmp37) & int((int)240));		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(191)
																		bool tmp39 = (tmp38 == (int)224);		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(191)
																		if ((tmp39)){
																			HX_STACK_LINE(191)
																			tmp26 = (int)3;
																		}
																		else{
																			HX_STACK_LINE(191)
																			int tmp40 = (index1 - (int)4);		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(191)
																			int tmp41;		HX_STACK_VAR(tmp41,"tmp41");
																			HX_STACK_LINE(191)
																			{
																				HX_STACK_LINE(191)
																				int tmp42 = tmp40;		HX_STACK_VAR(tmp42,"tmp42");
																				HX_STACK_LINE(191)
																				int tmp43 = this2.cca(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																				HX_STACK_LINE(191)
																				tmp41 = tmp43;
																			}
																			HX_STACK_LINE(191)
																			int tmp42 = (int(tmp41) & int((int)248));		HX_STACK_VAR(tmp42,"tmp42");
																			HX_STACK_LINE(191)
																			bool tmp43 = (tmp42 == (int)240);		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(191)
																			if ((tmp43)){
																				HX_STACK_LINE(191)
																				tmp26 = (int)4;
																			}
																			else{
																				HX_STACK_LINE(191)
																				tmp26 = (int)1;
																			}
																		}
																	}
																}
															}
														}
														HX_STACK_LINE(191)
														hx::SubEq(index1,tmp26);
														HX_STACK_LINE(191)
														++(count);
													}
													HX_STACK_LINE(191)
													tmp16 = index1;
												}
											}
										}
										HX_STACK_LINE(191)
										int si = tmp16;		HX_STACK_VAR(si,"si");
										HX_STACK_LINE(191)
										bool tmp17 = (length == null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(191)
										int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(191)
										if ((tmp17)){
											HX_STACK_LINE(191)
											tmp18 = s.length;
										}
										else{
											HX_STACK_LINE(191)
											bool tmp19 = (length < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(191)
											if ((tmp19)){
												HX_STACK_LINE(191)
												tmp18 = si;
											}
											else{
												HX_STACK_LINE(191)
												int codePointOffset = length;		HX_STACK_VAR(codePointOffset,"codePointOffset");
												HX_STACK_LINE(191)
												{
													HX_STACK_LINE(191)
													::String this1 = s;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(191)
													bool tmp20 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(191)
													if ((tmp20)){
														HX_STACK_LINE(191)
														int index = si;		HX_STACK_VAR(index,"index");
														HX_STACK_LINE(191)
														int tmp21 = this1.length;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(191)
														int len = tmp21;		HX_STACK_VAR(len,"len");
														HX_STACK_LINE(191)
														int i = (int)0;		HX_STACK_VAR(i,"i");
														HX_STACK_LINE(191)
														while((true)){
															HX_STACK_LINE(191)
															bool tmp22 = (i < codePointOffset);		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(191)
															bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(191)
															if ((tmp22)){
																HX_STACK_LINE(191)
																tmp23 = (index < len);
															}
															else{
																HX_STACK_LINE(191)
																tmp23 = false;
															}
															HX_STACK_LINE(191)
															bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(191)
															if ((tmp24)){
																HX_STACK_LINE(191)
																break;
															}
															HX_STACK_LINE(191)
															int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(191)
															{
																HX_STACK_LINE(191)
																int tmp26 = index;		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(191)
																int tmp27 = this1.cca(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(191)
																int c = tmp27;		HX_STACK_VAR(c,"c");
																HX_STACK_LINE(191)
																bool tmp28 = (c < (int)192);		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(191)
																if ((tmp28)){
																	HX_STACK_LINE(191)
																	tmp25 = (int)1;
																}
																else{
																	HX_STACK_LINE(191)
																	bool tmp29 = (c < (int)224);		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(191)
																	if ((tmp29)){
																		HX_STACK_LINE(191)
																		tmp25 = (int)2;
																	}
																	else{
																		HX_STACK_LINE(191)
																		bool tmp30 = (c < (int)240);		HX_STACK_VAR(tmp30,"tmp30");
																		HX_STACK_LINE(191)
																		if ((tmp30)){
																			HX_STACK_LINE(191)
																			tmp25 = (int)3;
																		}
																		else{
																			HX_STACK_LINE(191)
																			bool tmp31 = (c < (int)248);		HX_STACK_VAR(tmp31,"tmp31");
																			HX_STACK_LINE(191)
																			if ((tmp31)){
																				HX_STACK_LINE(191)
																				tmp25 = (int)4;
																			}
																			else{
																				HX_STACK_LINE(191)
																				tmp25 = (int)1;
																			}
																		}
																	}
																}
															}
															HX_STACK_LINE(191)
															hx::AddEq(index,tmp25);
															HX_STACK_LINE(191)
															++(i);
														}
														HX_STACK_LINE(191)
														tmp18 = index;
													}
													else{
														HX_STACK_LINE(191)
														int index = si;		HX_STACK_VAR(index,"index");
														HX_STACK_LINE(191)
														int count = (int)0;		HX_STACK_VAR(count,"count");
														HX_STACK_LINE(191)
														while((true)){
															HX_STACK_LINE(191)
															int tmp21 = count;		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(191)
															int tmp22 = codePointOffset;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(191)
															int tmp23 = -(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(191)
															bool tmp24 = (tmp21 < tmp23);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(191)
															bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(191)
															if ((tmp24)){
																HX_STACK_LINE(191)
																tmp25 = ((int)0 < index);
															}
															else{
																HX_STACK_LINE(191)
																tmp25 = false;
															}
															HX_STACK_LINE(191)
															bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(191)
															if ((tmp26)){
																HX_STACK_LINE(191)
																break;
															}
															HX_STACK_LINE(191)
															int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(191)
															{
																HX_STACK_LINE(191)
																::String this2 = this1;		HX_STACK_VAR(this2,"this2");
																HX_STACK_LINE(191)
																{
																	HX_STACK_LINE(191)
																	int tmp28 = (index - (int)1);		HX_STACK_VAR(tmp28,"tmp28");
																	HX_STACK_LINE(191)
																	int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(191)
																	{
																		HX_STACK_LINE(191)
																		int tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
																		HX_STACK_LINE(191)
																		int tmp31 = this2.cca(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
																		HX_STACK_LINE(191)
																		tmp29 = tmp31;
																	}
																	HX_STACK_LINE(191)
																	int c1 = tmp29;		HX_STACK_VAR(c1,"c1");
																	HX_STACK_LINE(191)
																	bool tmp30 = (c1 < (int)128);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(191)
																	bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(191)
																	bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(191)
																	if ((tmp31)){
																		HX_STACK_LINE(191)
																		tmp32 = (c1 >= (int)192);
																	}
																	else{
																		HX_STACK_LINE(191)
																		tmp32 = true;
																	}
																	HX_STACK_LINE(191)
																	if ((tmp32)){
																		HX_STACK_LINE(191)
																		tmp27 = (int)1;
																	}
																	else{
																		HX_STACK_LINE(191)
																		int tmp33 = (index - (int)2);		HX_STACK_VAR(tmp33,"tmp33");
																		HX_STACK_LINE(191)
																		int tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																		HX_STACK_LINE(191)
																		{
																			HX_STACK_LINE(191)
																			int tmp35 = tmp33;		HX_STACK_VAR(tmp35,"tmp35");
																			HX_STACK_LINE(191)
																			int tmp36 = this2.cca(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																			HX_STACK_LINE(191)
																			tmp34 = tmp36;
																		}
																		HX_STACK_LINE(191)
																		int tmp35 = (int(tmp34) & int((int)224));		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(191)
																		bool tmp36 = (tmp35 == (int)192);		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(191)
																		if ((tmp36)){
																			HX_STACK_LINE(191)
																			tmp27 = (int)2;
																		}
																		else{
																			HX_STACK_LINE(191)
																			int tmp37 = (index - (int)3);		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(191)
																			int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
																			HX_STACK_LINE(191)
																			{
																				HX_STACK_LINE(191)
																				int tmp39 = tmp37;		HX_STACK_VAR(tmp39,"tmp39");
																				HX_STACK_LINE(191)
																				int tmp40 = this2.cca(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																				HX_STACK_LINE(191)
																				tmp38 = tmp40;
																			}
																			HX_STACK_LINE(191)
																			int tmp39 = (int(tmp38) & int((int)240));		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(191)
																			bool tmp40 = (tmp39 == (int)224);		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(191)
																			if ((tmp40)){
																				HX_STACK_LINE(191)
																				tmp27 = (int)3;
																			}
																			else{
																				HX_STACK_LINE(191)
																				int tmp41 = (index - (int)4);		HX_STACK_VAR(tmp41,"tmp41");
																				HX_STACK_LINE(191)
																				int tmp42;		HX_STACK_VAR(tmp42,"tmp42");
																				HX_STACK_LINE(191)
																				{
																					HX_STACK_LINE(191)
																					int tmp43 = tmp41;		HX_STACK_VAR(tmp43,"tmp43");
																					HX_STACK_LINE(191)
																					int tmp44 = this2.cca(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
																					HX_STACK_LINE(191)
																					tmp42 = tmp44;
																				}
																				HX_STACK_LINE(191)
																				int tmp43 = (int(tmp42) & int((int)248));		HX_STACK_VAR(tmp43,"tmp43");
																				HX_STACK_LINE(191)
																				bool tmp44 = (tmp43 == (int)240);		HX_STACK_VAR(tmp44,"tmp44");
																				HX_STACK_LINE(191)
																				if ((tmp44)){
																					HX_STACK_LINE(191)
																					tmp27 = (int)4;
																				}
																				else{
																					HX_STACK_LINE(191)
																					tmp27 = (int)1;
																				}
																			}
																		}
																	}
																}
															}
															HX_STACK_LINE(191)
															hx::SubEq(index,tmp27);
															HX_STACK_LINE(191)
															++(count);
														}
														HX_STACK_LINE(191)
														tmp18 = index;
													}
												}
											}
										}
										HX_STACK_LINE(191)
										int ei = tmp18;		HX_STACK_VAR(ei,"ei");
										HX_STACK_LINE(191)
										int tmp19 = si;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(191)
										int tmp20 = ei;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(191)
										tmp12 = s.substring(tmp19,tmp20);
									}
								}
								HX_STACK_LINE(191)
								::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(191)
								this->display = tmp13;
							}
							HX_STACK_LINE(191)
							::mint::Label tmp9 = this->label;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(191)
							::String tmp10 = this->display;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(191)
							tmp9->set_text(tmp10);
							HX_STACK_LINE(191)
							{
								HX_STACK_LINE(191)
								int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
								HX_STACK_LINE(191)
								::mint::core::Signal tmp11 = this->onchangeindex;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(191)
								int tmp12 = tmp11->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(191)
								int _count = tmp12;		HX_STACK_VAR(_count,"_count");
								HX_STACK_LINE(191)
								while((true)){
									HX_STACK_LINE(191)
									bool tmp13 = (_idx < _count);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(191)
									bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(191)
									if ((tmp14)){
										HX_STACK_LINE(191)
										break;
									}
									HX_STACK_LINE(191)
									::mint::core::Signal tmp15 = this->onchangeindex;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(191)
									Dynamic tmp16 = tmp15->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(191)
									Dynamic fn = tmp16;		HX_STACK_VAR(fn,"fn");
									HX_STACK_LINE(191)
									bool tmp17 = (fn != null());		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(191)
									if ((tmp17)){
										HX_STACK_LINE(191)
										int tmp18 = this->index;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(191)
										fn(tmp18).Cast< Void >();
									}
									HX_STACK_LINE(191)
									(_idx)++;
								}
								HX_STACK_LINE(191)
								while((true)){
									HX_STACK_LINE(191)
									bool tmp13 = (_count > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(191)
									bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(191)
									if ((tmp14)){
										HX_STACK_LINE(191)
										break;
									}
									HX_STACK_LINE(191)
									::mint::core::Signal tmp15 = this->onchangeindex;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(191)
									int tmp16 = (_count - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(191)
									Dynamic tmp17 = tmp15->listeners->__GetItem(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(191)
									Dynamic fn = tmp17;		HX_STACK_VAR(fn,"fn");
									HX_STACK_LINE(191)
									bool tmp18 = (fn == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(191)
									if ((tmp18)){
										HX_STACK_LINE(191)
										::mint::core::Signal tmp19 = this->onchangeindex;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(191)
										int tmp20 = (_count - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(191)
										tmp19->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp20,(int)1);
									}
									HX_STACK_LINE(191)
									(_count)--;
								}
							}
							HX_STACK_LINE(191)
							bool tmp11 = _emit;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(191)
							if ((tmp11)){
								HX_STACK_LINE(191)
								int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
								HX_STACK_LINE(191)
								::mint::core::Signal tmp12 = this->onchange;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(191)
								int tmp13 = tmp12->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(191)
								int _count = tmp13;		HX_STACK_VAR(_count,"_count");
								HX_STACK_LINE(191)
								while((true)){
									HX_STACK_LINE(191)
									bool tmp14 = (_idx < _count);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(191)
									bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(191)
									if ((tmp15)){
										HX_STACK_LINE(191)
										break;
									}
									HX_STACK_LINE(191)
									::mint::core::Signal tmp16 = this->onchange;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(191)
									Dynamic tmp17 = tmp16->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(191)
									Dynamic fn = tmp17;		HX_STACK_VAR(fn,"fn");
									HX_STACK_LINE(191)
									bool tmp18 = (fn != null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(191)
									if ((tmp18)){
										HX_STACK_LINE(191)
										::String tmp19 = this->edit;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(191)
										::String tmp20 = this->display;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(191)
										bool tmp21 = _from_typing;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(191)
										fn(tmp19,tmp20,tmp21).Cast< Void >();
									}
									HX_STACK_LINE(191)
									(_idx)++;
								}
								HX_STACK_LINE(191)
								while((true)){
									HX_STACK_LINE(191)
									bool tmp14 = (_count > (int)0);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(191)
									bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(191)
									if ((tmp15)){
										HX_STACK_LINE(191)
										break;
									}
									HX_STACK_LINE(191)
									::mint::core::Signal tmp16 = this->onchange;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(191)
									int tmp17 = (_count - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(191)
									Dynamic tmp18 = tmp16->listeners->__GetItem(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(191)
									Dynamic fn = tmp18;		HX_STACK_VAR(fn,"fn");
									HX_STACK_LINE(191)
									bool tmp19 = (fn == null());		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(191)
									if ((tmp19)){
										HX_STACK_LINE(191)
										::mint::core::Signal tmp20 = this->onchange;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(191)
										int tmp21 = (_count - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(191)
										tmp20->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp21,(int)1);
									}
									HX_STACK_LINE(191)
									(_count)--;
								}
							}
							HX_STACK_LINE(191)
							this->edit;
						}
					}
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(193)
					int tmp2 = this->index;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(193)
					int start = tmp2;		HX_STACK_VAR(start,"start");
					HX_STACK_LINE(193)
					::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(193)
					{
						HX_STACK_LINE(193)
						::String tmp4 = this->edit;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(193)
						::String s = tmp4;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(193)
						::String tmp5 = this->edit;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(193)
						Dynamic length = tmp5.length;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(193)
						int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(193)
						{
							HX_STACK_LINE(193)
							bool tmp7 = (start >= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(193)
							int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(193)
							if ((tmp7)){
								HX_STACK_LINE(193)
								tmp8 = (int)0;
							}
							else{
								HX_STACK_LINE(193)
								tmp8 = s.length;
							}
							HX_STACK_LINE(193)
							int index = tmp8;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::String this1 = s;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(193)
								bool tmp9 = (start >= (int)0);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(193)
								if ((tmp9)){
									HX_STACK_LINE(193)
									int index1 = index;		HX_STACK_VAR(index1,"index1");
									HX_STACK_LINE(193)
									int tmp10 = this1.length;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(193)
									int len = tmp10;		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(193)
									int i = (int)0;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(193)
									while((true)){
										HX_STACK_LINE(193)
										bool tmp11 = (i < start);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(193)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(193)
										if ((tmp11)){
											HX_STACK_LINE(193)
											tmp12 = (index1 < len);
										}
										else{
											HX_STACK_LINE(193)
											tmp12 = false;
										}
										HX_STACK_LINE(193)
										bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(193)
										if ((tmp13)){
											HX_STACK_LINE(193)
											break;
										}
										HX_STACK_LINE(193)
										int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(193)
										{
											HX_STACK_LINE(193)
											int tmp15 = index1;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(193)
											int tmp16 = this1.cca(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(193)
											int c = tmp16;		HX_STACK_VAR(c,"c");
											HX_STACK_LINE(193)
											bool tmp17 = (c < (int)192);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(193)
											if ((tmp17)){
												HX_STACK_LINE(193)
												tmp14 = (int)1;
											}
											else{
												HX_STACK_LINE(193)
												bool tmp18 = (c < (int)224);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(193)
												if ((tmp18)){
													HX_STACK_LINE(193)
													tmp14 = (int)2;
												}
												else{
													HX_STACK_LINE(193)
													bool tmp19 = (c < (int)240);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(193)
													if ((tmp19)){
														HX_STACK_LINE(193)
														tmp14 = (int)3;
													}
													else{
														HX_STACK_LINE(193)
														bool tmp20 = (c < (int)248);		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(193)
														if ((tmp20)){
															HX_STACK_LINE(193)
															tmp14 = (int)4;
														}
														else{
															HX_STACK_LINE(193)
															tmp14 = (int)1;
														}
													}
												}
											}
										}
										HX_STACK_LINE(193)
										hx::AddEq(index1,tmp14);
										HX_STACK_LINE(193)
										++(i);
									}
									HX_STACK_LINE(193)
									tmp6 = index1;
								}
								else{
									HX_STACK_LINE(193)
									int index1 = index;		HX_STACK_VAR(index1,"index1");
									HX_STACK_LINE(193)
									int count = (int)0;		HX_STACK_VAR(count,"count");
									HX_STACK_LINE(193)
									while((true)){
										HX_STACK_LINE(193)
										int tmp10 = count;		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(193)
										int tmp11 = start;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(193)
										int tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(193)
										bool tmp13 = (tmp10 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(193)
										bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(193)
										if ((tmp13)){
											HX_STACK_LINE(193)
											tmp14 = ((int)0 < index1);
										}
										else{
											HX_STACK_LINE(193)
											tmp14 = false;
										}
										HX_STACK_LINE(193)
										bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(193)
										if ((tmp15)){
											HX_STACK_LINE(193)
											break;
										}
										HX_STACK_LINE(193)
										int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(193)
										{
											HX_STACK_LINE(193)
											::String this2 = this1;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(193)
											{
												HX_STACK_LINE(193)
												int tmp17 = (index1 - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(193)
												int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(193)
												{
													HX_STACK_LINE(193)
													int tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(193)
													int tmp20 = this2.cca(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(193)
													tmp18 = tmp20;
												}
												HX_STACK_LINE(193)
												int c1 = tmp18;		HX_STACK_VAR(c1,"c1");
												HX_STACK_LINE(193)
												bool tmp19 = (c1 < (int)128);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(193)
												bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(193)
												bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(193)
												if ((tmp20)){
													HX_STACK_LINE(193)
													tmp21 = (c1 >= (int)192);
												}
												else{
													HX_STACK_LINE(193)
													tmp21 = true;
												}
												HX_STACK_LINE(193)
												if ((tmp21)){
													HX_STACK_LINE(193)
													tmp16 = (int)1;
												}
												else{
													HX_STACK_LINE(193)
													int tmp22 = (index1 - (int)2);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(193)
													int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(193)
													{
														HX_STACK_LINE(193)
														int tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(193)
														int tmp25 = this2.cca(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(193)
														tmp23 = tmp25;
													}
													HX_STACK_LINE(193)
													int tmp24 = (int(tmp23) & int((int)224));		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(193)
													bool tmp25 = (tmp24 == (int)192);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(193)
													if ((tmp25)){
														HX_STACK_LINE(193)
														tmp16 = (int)2;
													}
													else{
														HX_STACK_LINE(193)
														int tmp26 = (index1 - (int)3);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(193)
														int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(193)
														{
															HX_STACK_LINE(193)
															int tmp28 = tmp26;		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(193)
															int tmp29 = this2.cca(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(193)
															tmp27 = tmp29;
														}
														HX_STACK_LINE(193)
														int tmp28 = (int(tmp27) & int((int)240));		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(193)
														bool tmp29 = (tmp28 == (int)224);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(193)
														if ((tmp29)){
															HX_STACK_LINE(193)
															tmp16 = (int)3;
														}
														else{
															HX_STACK_LINE(193)
															int tmp30 = (index1 - (int)4);		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(193)
															int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(193)
															{
																HX_STACK_LINE(193)
																int tmp32 = tmp30;		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(193)
																int tmp33 = this2.cca(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(193)
																tmp31 = tmp33;
															}
															HX_STACK_LINE(193)
															int tmp32 = (int(tmp31) & int((int)248));		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(193)
															bool tmp33 = (tmp32 == (int)240);		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(193)
															if ((tmp33)){
																HX_STACK_LINE(193)
																tmp16 = (int)4;
															}
															else{
																HX_STACK_LINE(193)
																tmp16 = (int)1;
															}
														}
													}
												}
											}
										}
										HX_STACK_LINE(193)
										hx::SubEq(index1,tmp16);
										HX_STACK_LINE(193)
										++(count);
									}
									HX_STACK_LINE(193)
									tmp6 = index1;
								}
							}
						}
						HX_STACK_LINE(193)
						int si = tmp6;		HX_STACK_VAR(si,"si");
						HX_STACK_LINE(193)
						bool tmp7 = (length == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(193)
						int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(193)
						if ((tmp7)){
							HX_STACK_LINE(193)
							tmp8 = s.length;
						}
						else{
							HX_STACK_LINE(193)
							bool tmp9 = (length < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(193)
							if ((tmp9)){
								HX_STACK_LINE(193)
								tmp8 = si;
							}
							else{
								HX_STACK_LINE(193)
								int codePointOffset = length;		HX_STACK_VAR(codePointOffset,"codePointOffset");
								HX_STACK_LINE(193)
								{
									HX_STACK_LINE(193)
									::String this1 = s;		HX_STACK_VAR(this1,"this1");
									HX_STACK_LINE(193)
									bool tmp10 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(193)
									if ((tmp10)){
										HX_STACK_LINE(193)
										int index = si;		HX_STACK_VAR(index,"index");
										HX_STACK_LINE(193)
										int tmp11 = this1.length;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(193)
										int len = tmp11;		HX_STACK_VAR(len,"len");
										HX_STACK_LINE(193)
										int i = (int)0;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(193)
										while((true)){
											HX_STACK_LINE(193)
											bool tmp12 = (i < codePointOffset);		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(193)
											bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(193)
											if ((tmp12)){
												HX_STACK_LINE(193)
												tmp13 = (index < len);
											}
											else{
												HX_STACK_LINE(193)
												tmp13 = false;
											}
											HX_STACK_LINE(193)
											bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(193)
											if ((tmp14)){
												HX_STACK_LINE(193)
												break;
											}
											HX_STACK_LINE(193)
											int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(193)
											{
												HX_STACK_LINE(193)
												int tmp16 = index;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(193)
												int tmp17 = this1.cca(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(193)
												int c = tmp17;		HX_STACK_VAR(c,"c");
												HX_STACK_LINE(193)
												bool tmp18 = (c < (int)192);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(193)
												if ((tmp18)){
													HX_STACK_LINE(193)
													tmp15 = (int)1;
												}
												else{
													HX_STACK_LINE(193)
													bool tmp19 = (c < (int)224);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(193)
													if ((tmp19)){
														HX_STACK_LINE(193)
														tmp15 = (int)2;
													}
													else{
														HX_STACK_LINE(193)
														bool tmp20 = (c < (int)240);		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(193)
														if ((tmp20)){
															HX_STACK_LINE(193)
															tmp15 = (int)3;
														}
														else{
															HX_STACK_LINE(193)
															bool tmp21 = (c < (int)248);		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(193)
															if ((tmp21)){
																HX_STACK_LINE(193)
																tmp15 = (int)4;
															}
															else{
																HX_STACK_LINE(193)
																tmp15 = (int)1;
															}
														}
													}
												}
											}
											HX_STACK_LINE(193)
											hx::AddEq(index,tmp15);
											HX_STACK_LINE(193)
											++(i);
										}
										HX_STACK_LINE(193)
										tmp8 = index;
									}
									else{
										HX_STACK_LINE(193)
										int index = si;		HX_STACK_VAR(index,"index");
										HX_STACK_LINE(193)
										int count = (int)0;		HX_STACK_VAR(count,"count");
										HX_STACK_LINE(193)
										while((true)){
											HX_STACK_LINE(193)
											int tmp11 = count;		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(193)
											int tmp12 = codePointOffset;		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(193)
											int tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(193)
											bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(193)
											bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(193)
											if ((tmp14)){
												HX_STACK_LINE(193)
												tmp15 = ((int)0 < index);
											}
											else{
												HX_STACK_LINE(193)
												tmp15 = false;
											}
											HX_STACK_LINE(193)
											bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(193)
											if ((tmp16)){
												HX_STACK_LINE(193)
												break;
											}
											HX_STACK_LINE(193)
											int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(193)
											{
												HX_STACK_LINE(193)
												::String this2 = this1;		HX_STACK_VAR(this2,"this2");
												HX_STACK_LINE(193)
												{
													HX_STACK_LINE(193)
													int tmp18 = (index - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(193)
													int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(193)
													{
														HX_STACK_LINE(193)
														int tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(193)
														int tmp21 = this2.cca(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(193)
														tmp19 = tmp21;
													}
													HX_STACK_LINE(193)
													int c1 = tmp19;		HX_STACK_VAR(c1,"c1");
													HX_STACK_LINE(193)
													bool tmp20 = (c1 < (int)128);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(193)
													bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(193)
													bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(193)
													if ((tmp21)){
														HX_STACK_LINE(193)
														tmp22 = (c1 >= (int)192);
													}
													else{
														HX_STACK_LINE(193)
														tmp22 = true;
													}
													HX_STACK_LINE(193)
													if ((tmp22)){
														HX_STACK_LINE(193)
														tmp17 = (int)1;
													}
													else{
														HX_STACK_LINE(193)
														int tmp23 = (index - (int)2);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(193)
														int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(193)
														{
															HX_STACK_LINE(193)
															int tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(193)
															int tmp26 = this2.cca(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(193)
															tmp24 = tmp26;
														}
														HX_STACK_LINE(193)
														int tmp25 = (int(tmp24) & int((int)224));		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(193)
														bool tmp26 = (tmp25 == (int)192);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(193)
														if ((tmp26)){
															HX_STACK_LINE(193)
															tmp17 = (int)2;
														}
														else{
															HX_STACK_LINE(193)
															int tmp27 = (index - (int)3);		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(193)
															int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(193)
															{
																HX_STACK_LINE(193)
																int tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(193)
																int tmp30 = this2.cca(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(193)
																tmp28 = tmp30;
															}
															HX_STACK_LINE(193)
															int tmp29 = (int(tmp28) & int((int)240));		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(193)
															bool tmp30 = (tmp29 == (int)224);		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(193)
															if ((tmp30)){
																HX_STACK_LINE(193)
																tmp17 = (int)3;
															}
															else{
																HX_STACK_LINE(193)
																int tmp31 = (index - (int)4);		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(193)
																int tmp32;		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(193)
																{
																	HX_STACK_LINE(193)
																	int tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
																	HX_STACK_LINE(193)
																	int tmp34 = this2.cca(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(193)
																	tmp32 = tmp34;
																}
																HX_STACK_LINE(193)
																int tmp33 = (int(tmp32) & int((int)248));		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(193)
																bool tmp34 = (tmp33 == (int)240);		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(193)
																if ((tmp34)){
																	HX_STACK_LINE(193)
																	tmp17 = (int)4;
																}
																else{
																	HX_STACK_LINE(193)
																	tmp17 = (int)1;
																}
															}
														}
													}
												}
											}
											HX_STACK_LINE(193)
											hx::SubEq(index,tmp17);
											HX_STACK_LINE(193)
											++(count);
										}
										HX_STACK_LINE(193)
										tmp8 = index;
									}
								}
							}
						}
						HX_STACK_LINE(193)
						int ei = tmp8;		HX_STACK_VAR(ei,"ei");
						HX_STACK_LINE(193)
						int tmp9 = si;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(193)
						int tmp10 = ei;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(193)
						tmp3 = s.substring(tmp9,tmp10);
					}
					HX_STACK_LINE(193)
					::String a = tmp3;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(193)
					{
						HX_STACK_LINE(193)
						::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(193)
						{
							HX_STACK_LINE(193)
							::String tmp5 = this->edit;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(193)
							::String s = tmp5;		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(193)
							int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								int index = (int)0;		HX_STACK_VAR(index,"index");
								HX_STACK_LINE(193)
								{
									HX_STACK_LINE(193)
									::String this1 = s;		HX_STACK_VAR(this1,"this1");
									HX_STACK_LINE(193)
									{
										HX_STACK_LINE(193)
										int index1 = index;		HX_STACK_VAR(index1,"index1");
										HX_STACK_LINE(193)
										int tmp7 = this1.length;		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(193)
										int len = tmp7;		HX_STACK_VAR(len,"len");
										HX_STACK_LINE(193)
										int i = (int)0;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(193)
										while((true)){
											HX_STACK_LINE(193)
											bool tmp8 = (i < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
											HX_STACK_LINE(193)
											bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
											HX_STACK_LINE(193)
											if ((tmp8)){
												HX_STACK_LINE(193)
												tmp9 = (index1 < len);
											}
											else{
												HX_STACK_LINE(193)
												tmp9 = false;
											}
											HX_STACK_LINE(193)
											bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
											HX_STACK_LINE(193)
											if ((tmp10)){
												HX_STACK_LINE(193)
												break;
											}
											HX_STACK_LINE(193)
											int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(193)
											{
												HX_STACK_LINE(193)
												int tmp12 = index1;		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(193)
												int tmp13 = this1.cca(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(193)
												int c = tmp13;		HX_STACK_VAR(c,"c");
												HX_STACK_LINE(193)
												bool tmp14 = (c < (int)192);		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(193)
												if ((tmp14)){
													HX_STACK_LINE(193)
													tmp11 = (int)1;
												}
												else{
													HX_STACK_LINE(193)
													bool tmp15 = (c < (int)224);		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(193)
													if ((tmp15)){
														HX_STACK_LINE(193)
														tmp11 = (int)2;
													}
													else{
														HX_STACK_LINE(193)
														bool tmp16 = (c < (int)240);		HX_STACK_VAR(tmp16,"tmp16");
														HX_STACK_LINE(193)
														if ((tmp16)){
															HX_STACK_LINE(193)
															tmp11 = (int)3;
														}
														else{
															HX_STACK_LINE(193)
															bool tmp17 = (c < (int)248);		HX_STACK_VAR(tmp17,"tmp17");
															HX_STACK_LINE(193)
															if ((tmp17)){
																HX_STACK_LINE(193)
																tmp11 = (int)4;
															}
															else{
																HX_STACK_LINE(193)
																tmp11 = (int)1;
															}
														}
													}
												}
											}
											HX_STACK_LINE(193)
											hx::AddEq(index1,tmp11);
											HX_STACK_LINE(193)
											++(i);
										}
										HX_STACK_LINE(193)
										tmp6 = index1;
									}
								}
							}
							HX_STACK_LINE(193)
							int si = tmp6;		HX_STACK_VAR(si,"si");
							HX_STACK_LINE(193)
							bool tmp7 = (start == null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(193)
							int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(193)
							if ((tmp7)){
								HX_STACK_LINE(193)
								tmp8 = s.length;
							}
							else{
								HX_STACK_LINE(193)
								bool tmp9 = (start < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(193)
								if ((tmp9)){
									HX_STACK_LINE(193)
									tmp8 = si;
								}
								else{
									HX_STACK_LINE(193)
									int codePointOffset = start;		HX_STACK_VAR(codePointOffset,"codePointOffset");
									HX_STACK_LINE(193)
									{
										HX_STACK_LINE(193)
										::String this1 = s;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(193)
										bool tmp10 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(193)
										if ((tmp10)){
											HX_STACK_LINE(193)
											int index = si;		HX_STACK_VAR(index,"index");
											HX_STACK_LINE(193)
											int tmp11 = this1.length;		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(193)
											int len = tmp11;		HX_STACK_VAR(len,"len");
											HX_STACK_LINE(193)
											int i = (int)0;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(193)
											while((true)){
												HX_STACK_LINE(193)
												bool tmp12 = (i < codePointOffset);		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(193)
												bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(193)
												if ((tmp12)){
													HX_STACK_LINE(193)
													tmp13 = (index < len);
												}
												else{
													HX_STACK_LINE(193)
													tmp13 = false;
												}
												HX_STACK_LINE(193)
												bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(193)
												if ((tmp14)){
													HX_STACK_LINE(193)
													break;
												}
												HX_STACK_LINE(193)
												int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(193)
												{
													HX_STACK_LINE(193)
													int tmp16 = index;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(193)
													int tmp17 = this1.cca(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(193)
													int c = tmp17;		HX_STACK_VAR(c,"c");
													HX_STACK_LINE(193)
													bool tmp18 = (c < (int)192);		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(193)
													if ((tmp18)){
														HX_STACK_LINE(193)
														tmp15 = (int)1;
													}
													else{
														HX_STACK_LINE(193)
														bool tmp19 = (c < (int)224);		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(193)
														if ((tmp19)){
															HX_STACK_LINE(193)
															tmp15 = (int)2;
														}
														else{
															HX_STACK_LINE(193)
															bool tmp20 = (c < (int)240);		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(193)
															if ((tmp20)){
																HX_STACK_LINE(193)
																tmp15 = (int)3;
															}
															else{
																HX_STACK_LINE(193)
																bool tmp21 = (c < (int)248);		HX_STACK_VAR(tmp21,"tmp21");
																HX_STACK_LINE(193)
																if ((tmp21)){
																	HX_STACK_LINE(193)
																	tmp15 = (int)4;
																}
																else{
																	HX_STACK_LINE(193)
																	tmp15 = (int)1;
																}
															}
														}
													}
												}
												HX_STACK_LINE(193)
												hx::AddEq(index,tmp15);
												HX_STACK_LINE(193)
												++(i);
											}
											HX_STACK_LINE(193)
											tmp8 = index;
										}
										else{
											HX_STACK_LINE(193)
											int index = si;		HX_STACK_VAR(index,"index");
											HX_STACK_LINE(193)
											int count = (int)0;		HX_STACK_VAR(count,"count");
											HX_STACK_LINE(193)
											while((true)){
												HX_STACK_LINE(193)
												int tmp11 = count;		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(193)
												int tmp12 = codePointOffset;		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(193)
												int tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(193)
												bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(193)
												bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(193)
												if ((tmp14)){
													HX_STACK_LINE(193)
													tmp15 = ((int)0 < index);
												}
												else{
													HX_STACK_LINE(193)
													tmp15 = false;
												}
												HX_STACK_LINE(193)
												bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(193)
												if ((tmp16)){
													HX_STACK_LINE(193)
													break;
												}
												HX_STACK_LINE(193)
												int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(193)
												{
													HX_STACK_LINE(193)
													::String this2 = this1;		HX_STACK_VAR(this2,"this2");
													HX_STACK_LINE(193)
													{
														HX_STACK_LINE(193)
														int tmp18 = (index - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(193)
														int tmp19 = this2.cca(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(193)
														int c1 = tmp19;		HX_STACK_VAR(c1,"c1");
														HX_STACK_LINE(193)
														bool tmp20 = (c1 < (int)128);		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(193)
														bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(193)
														bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(193)
														if ((tmp21)){
															HX_STACK_LINE(193)
															tmp22 = (c1 >= (int)192);
														}
														else{
															HX_STACK_LINE(193)
															tmp22 = true;
														}
														HX_STACK_LINE(193)
														if ((tmp22)){
															HX_STACK_LINE(193)
															tmp17 = (int)1;
														}
														else{
															HX_STACK_LINE(193)
															int tmp23 = (index - (int)2);		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(193)
															int tmp24 = this2.cca(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(193)
															int tmp25 = (int(tmp24) & int((int)224));		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(193)
															bool tmp26 = (tmp25 == (int)192);		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(193)
															if ((tmp26)){
																HX_STACK_LINE(193)
																tmp17 = (int)2;
															}
															else{
																HX_STACK_LINE(193)
																int tmp27 = (index - (int)3);		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(193)
																int tmp28 = this2.cca(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(193)
																int tmp29 = (int(tmp28) & int((int)240));		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(193)
																bool tmp30 = (tmp29 == (int)224);		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(193)
																if ((tmp30)){
																	HX_STACK_LINE(193)
																	tmp17 = (int)3;
																}
																else{
																	HX_STACK_LINE(193)
																	int tmp31 = (index - (int)4);		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(193)
																	int tmp32 = this2.cca(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(193)
																	int tmp33 = (int(tmp32) & int((int)248));		HX_STACK_VAR(tmp33,"tmp33");
																	HX_STACK_LINE(193)
																	bool tmp34 = (tmp33 == (int)240);		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(193)
																	if ((tmp34)){
																		HX_STACK_LINE(193)
																		tmp17 = (int)4;
																	}
																	else{
																		HX_STACK_LINE(193)
																		tmp17 = (int)1;
																	}
																}
															}
														}
													}
												}
												HX_STACK_LINE(193)
												hx::SubEq(index,tmp17);
												HX_STACK_LINE(193)
												++(count);
											}
											HX_STACK_LINE(193)
											tmp8 = index;
										}
									}
								}
							}
							HX_STACK_LINE(193)
							int ei = tmp8;		HX_STACK_VAR(ei,"ei");
							HX_STACK_LINE(193)
							int tmp9 = si;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(193)
							int tmp10 = ei;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(193)
							tmp4 = s.substring(tmp9,tmp10);
						}
						HX_STACK_LINE(193)
						::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(193)
						{
							HX_STACK_LINE(193)
							::String tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(193)
							int tmp7 = a.length;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(193)
							int tmp8 = ::mint::core::unifill::_Utf8::Utf8_Impl__obj::codePointCount(tmp6,(int)0,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(193)
							Dynamic length = tmp8;		HX_STACK_VAR(length,"length");
							HX_STACK_LINE(193)
							int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								bool tmp10 = true;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(193)
								int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(193)
								if ((tmp10)){
									HX_STACK_LINE(193)
									tmp11 = (int)0;
								}
								else{
									HX_STACK_LINE(193)
									tmp11 = a.length;
								}
								HX_STACK_LINE(193)
								int index = tmp11;		HX_STACK_VAR(index,"index");
								HX_STACK_LINE(193)
								{
									HX_STACK_LINE(193)
									::String this1 = a;		HX_STACK_VAR(this1,"this1");
									HX_STACK_LINE(193)
									bool tmp12 = true;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(193)
									if ((tmp12)){
										HX_STACK_LINE(193)
										int index1 = index;		HX_STACK_VAR(index1,"index1");
										HX_STACK_LINE(193)
										int tmp13 = this1.length;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(193)
										int len = tmp13;		HX_STACK_VAR(len,"len");
										HX_STACK_LINE(193)
										int i = (int)0;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(193)
										while((true)){
											HX_STACK_LINE(193)
											bool tmp14 = (i < (int)1);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(193)
											bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(193)
											if ((tmp14)){
												HX_STACK_LINE(193)
												tmp15 = (index1 < len);
											}
											else{
												HX_STACK_LINE(193)
												tmp15 = false;
											}
											HX_STACK_LINE(193)
											bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(193)
											if ((tmp16)){
												HX_STACK_LINE(193)
												break;
											}
											HX_STACK_LINE(193)
											int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(193)
											{
												HX_STACK_LINE(193)
												int tmp18 = index1;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(193)
												int tmp19 = this1.cca(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(193)
												int c = tmp19;		HX_STACK_VAR(c,"c");
												HX_STACK_LINE(193)
												bool tmp20 = (c < (int)192);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(193)
												if ((tmp20)){
													HX_STACK_LINE(193)
													tmp17 = (int)1;
												}
												else{
													HX_STACK_LINE(193)
													bool tmp21 = (c < (int)224);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(193)
													if ((tmp21)){
														HX_STACK_LINE(193)
														tmp17 = (int)2;
													}
													else{
														HX_STACK_LINE(193)
														bool tmp22 = (c < (int)240);		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(193)
														if ((tmp22)){
															HX_STACK_LINE(193)
															tmp17 = (int)3;
														}
														else{
															HX_STACK_LINE(193)
															bool tmp23 = (c < (int)248);		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(193)
															if ((tmp23)){
																HX_STACK_LINE(193)
																tmp17 = (int)4;
															}
															else{
																HX_STACK_LINE(193)
																tmp17 = (int)1;
															}
														}
													}
												}
											}
											HX_STACK_LINE(193)
											hx::AddEq(index1,tmp17);
											HX_STACK_LINE(193)
											++(i);
										}
										HX_STACK_LINE(193)
										tmp9 = index1;
									}
									else{
										HX_STACK_LINE(193)
										int index1 = index;		HX_STACK_VAR(index1,"index1");
										HX_STACK_LINE(193)
										int count = (int)0;		HX_STACK_VAR(count,"count");
										HX_STACK_LINE(193)
										while((true)){
											HX_STACK_LINE(193)
											int tmp13 = count;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(193)
											int tmp14 = (int)-1;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(193)
											bool tmp15 = (tmp13 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(193)
											bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(193)
											if ((tmp15)){
												HX_STACK_LINE(193)
												tmp16 = ((int)0 < index1);
											}
											else{
												HX_STACK_LINE(193)
												tmp16 = false;
											}
											HX_STACK_LINE(193)
											bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(193)
											if ((tmp17)){
												HX_STACK_LINE(193)
												break;
											}
											HX_STACK_LINE(193)
											int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(193)
											{
												HX_STACK_LINE(193)
												::String this2 = this1;		HX_STACK_VAR(this2,"this2");
												HX_STACK_LINE(193)
												{
													HX_STACK_LINE(193)
													int tmp19 = (index1 - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(193)
													int tmp20 = this2.cca(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(193)
													int c1 = tmp20;		HX_STACK_VAR(c1,"c1");
													HX_STACK_LINE(193)
													bool tmp21 = (c1 < (int)128);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(193)
													bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(193)
													bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(193)
													if ((tmp22)){
														HX_STACK_LINE(193)
														tmp23 = (c1 >= (int)192);
													}
													else{
														HX_STACK_LINE(193)
														tmp23 = true;
													}
													HX_STACK_LINE(193)
													if ((tmp23)){
														HX_STACK_LINE(193)
														tmp18 = (int)1;
													}
													else{
														HX_STACK_LINE(193)
														int tmp24 = (index1 - (int)2);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(193)
														int tmp25 = this2.cca(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(193)
														int tmp26 = (int(tmp25) & int((int)224));		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(193)
														bool tmp27 = (tmp26 == (int)192);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(193)
														if ((tmp27)){
															HX_STACK_LINE(193)
															tmp18 = (int)2;
														}
														else{
															HX_STACK_LINE(193)
															int tmp28 = (index1 - (int)3);		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(193)
															int tmp29 = this2.cca(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(193)
															int tmp30 = (int(tmp29) & int((int)240));		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(193)
															bool tmp31 = (tmp30 == (int)224);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(193)
															if ((tmp31)){
																HX_STACK_LINE(193)
																tmp18 = (int)3;
															}
															else{
																HX_STACK_LINE(193)
																int tmp32 = (index1 - (int)4);		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(193)
																int tmp33 = this2.cca(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(193)
																int tmp34 = (int(tmp33) & int((int)248));		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(193)
																bool tmp35 = (tmp34 == (int)240);		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(193)
																if ((tmp35)){
																	HX_STACK_LINE(193)
																	tmp18 = (int)4;
																}
																else{
																	HX_STACK_LINE(193)
																	tmp18 = (int)1;
																}
															}
														}
													}
												}
											}
											HX_STACK_LINE(193)
											hx::SubEq(index1,tmp18);
											HX_STACK_LINE(193)
											++(count);
										}
										HX_STACK_LINE(193)
										tmp9 = index1;
									}
								}
							}
							HX_STACK_LINE(193)
							int si = tmp9;		HX_STACK_VAR(si,"si");
							HX_STACK_LINE(193)
							bool tmp10 = (length == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(193)
							int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(193)
							if ((tmp10)){
								HX_STACK_LINE(193)
								tmp11 = a.length;
							}
							else{
								HX_STACK_LINE(193)
								bool tmp12 = (length < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(193)
								if ((tmp12)){
									HX_STACK_LINE(193)
									tmp11 = si;
								}
								else{
									HX_STACK_LINE(193)
									int codePointOffset = length;		HX_STACK_VAR(codePointOffset,"codePointOffset");
									HX_STACK_LINE(193)
									{
										HX_STACK_LINE(193)
										::String this1 = a;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(193)
										bool tmp13 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(193)
										if ((tmp13)){
											HX_STACK_LINE(193)
											int index = si;		HX_STACK_VAR(index,"index");
											HX_STACK_LINE(193)
											int tmp14 = this1.length;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(193)
											int len = tmp14;		HX_STACK_VAR(len,"len");
											HX_STACK_LINE(193)
											int i = (int)0;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(193)
											while((true)){
												HX_STACK_LINE(193)
												bool tmp15 = (i < codePointOffset);		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(193)
												bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(193)
												if ((tmp15)){
													HX_STACK_LINE(193)
													tmp16 = (index < len);
												}
												else{
													HX_STACK_LINE(193)
													tmp16 = false;
												}
												HX_STACK_LINE(193)
												bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(193)
												if ((tmp17)){
													HX_STACK_LINE(193)
													break;
												}
												HX_STACK_LINE(193)
												int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(193)
												{
													HX_STACK_LINE(193)
													int tmp19 = index;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(193)
													int tmp20 = this1.cca(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(193)
													int c = tmp20;		HX_STACK_VAR(c,"c");
													HX_STACK_LINE(193)
													bool tmp21 = (c < (int)192);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(193)
													if ((tmp21)){
														HX_STACK_LINE(193)
														tmp18 = (int)1;
													}
													else{
														HX_STACK_LINE(193)
														bool tmp22 = (c < (int)224);		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(193)
														if ((tmp22)){
															HX_STACK_LINE(193)
															tmp18 = (int)2;
														}
														else{
															HX_STACK_LINE(193)
															bool tmp23 = (c < (int)240);		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(193)
															if ((tmp23)){
																HX_STACK_LINE(193)
																tmp18 = (int)3;
															}
															else{
																HX_STACK_LINE(193)
																bool tmp24 = (c < (int)248);		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(193)
																if ((tmp24)){
																	HX_STACK_LINE(193)
																	tmp18 = (int)4;
																}
																else{
																	HX_STACK_LINE(193)
																	tmp18 = (int)1;
																}
															}
														}
													}
												}
												HX_STACK_LINE(193)
												hx::AddEq(index,tmp18);
												HX_STACK_LINE(193)
												++(i);
											}
											HX_STACK_LINE(193)
											tmp11 = index;
										}
										else{
											HX_STACK_LINE(193)
											int index = si;		HX_STACK_VAR(index,"index");
											HX_STACK_LINE(193)
											int count = (int)0;		HX_STACK_VAR(count,"count");
											HX_STACK_LINE(193)
											while((true)){
												HX_STACK_LINE(193)
												int tmp14 = count;		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(193)
												int tmp15 = codePointOffset;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(193)
												int tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(193)
												bool tmp17 = (tmp14 < tmp16);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(193)
												bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(193)
												if ((tmp17)){
													HX_STACK_LINE(193)
													tmp18 = ((int)0 < index);
												}
												else{
													HX_STACK_LINE(193)
													tmp18 = false;
												}
												HX_STACK_LINE(193)
												bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(193)
												if ((tmp19)){
													HX_STACK_LINE(193)
													break;
												}
												HX_STACK_LINE(193)
												int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(193)
												{
													HX_STACK_LINE(193)
													::String this2 = this1;		HX_STACK_VAR(this2,"this2");
													HX_STACK_LINE(193)
													{
														HX_STACK_LINE(193)
														int tmp21 = (index - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(193)
														int tmp22 = this2.cca(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(193)
														int c1 = tmp22;		HX_STACK_VAR(c1,"c1");
														HX_STACK_LINE(193)
														bool tmp23 = (c1 < (int)128);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(193)
														bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(193)
														bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(193)
														if ((tmp24)){
															HX_STACK_LINE(193)
															tmp25 = (c1 >= (int)192);
														}
														else{
															HX_STACK_LINE(193)
															tmp25 = true;
														}
														HX_STACK_LINE(193)
														if ((tmp25)){
															HX_STACK_LINE(193)
															tmp20 = (int)1;
														}
														else{
															HX_STACK_LINE(193)
															int tmp26 = (index - (int)2);		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(193)
															int tmp27 = this2.cca(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(193)
															int tmp28 = (int(tmp27) & int((int)224));		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(193)
															bool tmp29 = (tmp28 == (int)192);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(193)
															if ((tmp29)){
																HX_STACK_LINE(193)
																tmp20 = (int)2;
															}
															else{
																HX_STACK_LINE(193)
																int tmp30 = (index - (int)3);		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(193)
																int tmp31 = this2.cca(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(193)
																int tmp32 = (int(tmp31) & int((int)240));		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(193)
																bool tmp33 = (tmp32 == (int)224);		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(193)
																if ((tmp33)){
																	HX_STACK_LINE(193)
																	tmp20 = (int)3;
																}
																else{
																	HX_STACK_LINE(193)
																	int tmp34 = (index - (int)4);		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(193)
																	int tmp35 = this2.cca(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(193)
																	int tmp36 = (int(tmp35) & int((int)248));		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(193)
																	bool tmp37 = (tmp36 == (int)240);		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(193)
																	if ((tmp37)){
																		HX_STACK_LINE(193)
																		tmp20 = (int)4;
																	}
																	else{
																		HX_STACK_LINE(193)
																		tmp20 = (int)1;
																	}
																}
															}
														}
													}
												}
												HX_STACK_LINE(193)
												hx::SubEq(index,tmp20);
												HX_STACK_LINE(193)
												++(count);
											}
											HX_STACK_LINE(193)
											tmp11 = index;
										}
									}
								}
							}
							HX_STACK_LINE(193)
							int ei = tmp11;		HX_STACK_VAR(ei,"ei");
							HX_STACK_LINE(193)
							int tmp12 = si;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(193)
							int tmp13 = ei;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(193)
							tmp5 = a.substring(tmp12,tmp13);
						}
						HX_STACK_LINE(193)
						::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(193)
						::String str = tmp6;		HX_STACK_VAR(str,"str");
						HX_STACK_LINE(193)
						bool _from_typing = true;		HX_STACK_VAR(_from_typing,"_from_typing");
						HX_STACK_LINE(193)
						bool _emit = true;		HX_STACK_VAR(_emit,"_emit");
						HX_STACK_LINE(193)
						this->edit = str;
						HX_STACK_LINE(193)
						::String tmp7 = this->display_char;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(193)
						bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(193)
						if ((tmp8)){
							HX_STACK_LINE(193)
							this->display = HX_HCSTRING("","\x00","\x00","\x00","\x00");
							HX_STACK_LINE(193)
							::String tmp9 = str;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(193)
							int tmp10 = str.length;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(193)
							int tmp11 = ::mint::core::unifill::_Utf8::Utf8_Impl__obj::codePointCount(tmp9,(int)0,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(193)
							int _l = tmp11;		HX_STACK_VAR(_l,"_l");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(193)
								while((true)){
									HX_STACK_LINE(193)
									bool tmp12 = (_g1 < _l);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(193)
									bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(193)
									if ((tmp13)){
										HX_STACK_LINE(193)
										break;
									}
									HX_STACK_LINE(193)
									int tmp14 = (_g1)++;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(193)
									int i = tmp14;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(193)
									::String tmp15 = this->display_char;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(193)
									hx::AddEq(this->display,tmp15);
								}
							}
						}
						else{
							HX_STACK_LINE(193)
							::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								int tmp10 = this->index;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(193)
								int cur = tmp10;		HX_STACK_VAR(cur,"cur");
								HX_STACK_LINE(193)
								{
									HX_STACK_LINE(193)
									::String tmp11 = this->edit;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(193)
									::String s = tmp11;		HX_STACK_VAR(s,"s");
									HX_STACK_LINE(193)
									int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(193)
									{
										HX_STACK_LINE(193)
										bool tmp13 = true;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(193)
										int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(193)
										if ((tmp13)){
											HX_STACK_LINE(193)
											tmp14 = (int)0;
										}
										else{
											HX_STACK_LINE(193)
											tmp14 = s.length;
										}
										HX_STACK_LINE(193)
										int index = tmp14;		HX_STACK_VAR(index,"index");
										HX_STACK_LINE(193)
										{
											HX_STACK_LINE(193)
											::String this1 = s;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(193)
											bool tmp15 = true;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(193)
											if ((tmp15)){
												HX_STACK_LINE(193)
												int index1 = index;		HX_STACK_VAR(index1,"index1");
												HX_STACK_LINE(193)
												int tmp16 = this1.length;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(193)
												int len = tmp16;		HX_STACK_VAR(len,"len");
												HX_STACK_LINE(193)
												int i = (int)0;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(193)
												while((true)){
													HX_STACK_LINE(193)
													bool tmp17 = (i < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(193)
													bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(193)
													if ((tmp17)){
														HX_STACK_LINE(193)
														tmp18 = (index1 < len);
													}
													else{
														HX_STACK_LINE(193)
														tmp18 = false;
													}
													HX_STACK_LINE(193)
													bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(193)
													if ((tmp19)){
														HX_STACK_LINE(193)
														break;
													}
													HX_STACK_LINE(193)
													int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(193)
													{
														HX_STACK_LINE(193)
														int tmp21 = index1;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(193)
														int tmp22 = this1.cca(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(193)
														int c = tmp22;		HX_STACK_VAR(c,"c");
														HX_STACK_LINE(193)
														bool tmp23 = (c < (int)192);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(193)
														if ((tmp23)){
															HX_STACK_LINE(193)
															tmp20 = (int)1;
														}
														else{
															HX_STACK_LINE(193)
															bool tmp24 = (c < (int)224);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(193)
															if ((tmp24)){
																HX_STACK_LINE(193)
																tmp20 = (int)2;
															}
															else{
																HX_STACK_LINE(193)
																bool tmp25 = (c < (int)240);		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(193)
																if ((tmp25)){
																	HX_STACK_LINE(193)
																	tmp20 = (int)3;
																}
																else{
																	HX_STACK_LINE(193)
																	bool tmp26 = (c < (int)248);		HX_STACK_VAR(tmp26,"tmp26");
																	HX_STACK_LINE(193)
																	if ((tmp26)){
																		HX_STACK_LINE(193)
																		tmp20 = (int)4;
																	}
																	else{
																		HX_STACK_LINE(193)
																		tmp20 = (int)1;
																	}
																}
															}
														}
													}
													HX_STACK_LINE(193)
													hx::AddEq(index1,tmp20);
													HX_STACK_LINE(193)
													++(i);
												}
												HX_STACK_LINE(193)
												tmp12 = index1;
											}
											else{
												HX_STACK_LINE(193)
												int index1 = index;		HX_STACK_VAR(index1,"index1");
												HX_STACK_LINE(193)
												int count = (int)0;		HX_STACK_VAR(count,"count");
												HX_STACK_LINE(193)
												while((true)){
													HX_STACK_LINE(193)
													int tmp16 = count;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(193)
													int tmp17 = (int)0;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(193)
													bool tmp18 = (tmp16 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(193)
													bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(193)
													if ((tmp18)){
														HX_STACK_LINE(193)
														tmp19 = ((int)0 < index1);
													}
													else{
														HX_STACK_LINE(193)
														tmp19 = false;
													}
													HX_STACK_LINE(193)
													bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(193)
													if ((tmp20)){
														HX_STACK_LINE(193)
														break;
													}
													HX_STACK_LINE(193)
													int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(193)
													{
														HX_STACK_LINE(193)
														::String this2 = this1;		HX_STACK_VAR(this2,"this2");
														HX_STACK_LINE(193)
														{
															HX_STACK_LINE(193)
															int tmp22 = (index1 - (int)1);		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(193)
															int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(193)
															{
																HX_STACK_LINE(193)
																int tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(193)
																int tmp25 = this2.cca(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(193)
																tmp23 = tmp25;
															}
															HX_STACK_LINE(193)
															int c1 = tmp23;		HX_STACK_VAR(c1,"c1");
															HX_STACK_LINE(193)
															bool tmp24 = (c1 < (int)128);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(193)
															bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(193)
															bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(193)
															if ((tmp25)){
																HX_STACK_LINE(193)
																tmp26 = (c1 >= (int)192);
															}
															else{
																HX_STACK_LINE(193)
																tmp26 = true;
															}
															HX_STACK_LINE(193)
															if ((tmp26)){
																HX_STACK_LINE(193)
																tmp21 = (int)1;
															}
															else{
																HX_STACK_LINE(193)
																int tmp27 = (index1 - (int)2);		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(193)
																int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(193)
																{
																	HX_STACK_LINE(193)
																	int tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(193)
																	int tmp30 = this2.cca(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(193)
																	tmp28 = tmp30;
																}
																HX_STACK_LINE(193)
																int tmp29 = (int(tmp28) & int((int)224));		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(193)
																bool tmp30 = (tmp29 == (int)192);		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(193)
																if ((tmp30)){
																	HX_STACK_LINE(193)
																	tmp21 = (int)2;
																}
																else{
																	HX_STACK_LINE(193)
																	int tmp31 = (index1 - (int)3);		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(193)
																	int tmp32;		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(193)
																	{
																		HX_STACK_LINE(193)
																		int tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
																		HX_STACK_LINE(193)
																		int tmp34 = this2.cca(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
																		HX_STACK_LINE(193)
																		tmp32 = tmp34;
																	}
																	HX_STACK_LINE(193)
																	int tmp33 = (int(tmp32) & int((int)240));		HX_STACK_VAR(tmp33,"tmp33");
																	HX_STACK_LINE(193)
																	bool tmp34 = (tmp33 == (int)224);		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(193)
																	if ((tmp34)){
																		HX_STACK_LINE(193)
																		tmp21 = (int)3;
																	}
																	else{
																		HX_STACK_LINE(193)
																		int tmp35 = (index1 - (int)4);		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(193)
																		int tmp36;		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(193)
																		{
																			HX_STACK_LINE(193)
																			int tmp37 = tmp35;		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(193)
																			int tmp38 = this2.cca(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																			HX_STACK_LINE(193)
																			tmp36 = tmp38;
																		}
																		HX_STACK_LINE(193)
																		int tmp37 = (int(tmp36) & int((int)248));		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(193)
																		bool tmp38 = (tmp37 == (int)240);		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(193)
																		if ((tmp38)){
																			HX_STACK_LINE(193)
																			tmp21 = (int)4;
																		}
																		else{
																			HX_STACK_LINE(193)
																			tmp21 = (int)1;
																		}
																	}
																}
															}
														}
													}
													HX_STACK_LINE(193)
													hx::SubEq(index1,tmp21);
													HX_STACK_LINE(193)
													++(count);
												}
												HX_STACK_LINE(193)
												tmp12 = index1;
											}
										}
									}
									HX_STACK_LINE(193)
									int si = tmp12;		HX_STACK_VAR(si,"si");
									HX_STACK_LINE(193)
									bool tmp13 = (cur == null());		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(193)
									int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(193)
									if ((tmp13)){
										HX_STACK_LINE(193)
										tmp14 = s.length;
									}
									else{
										HX_STACK_LINE(193)
										bool tmp15 = (cur < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(193)
										if ((tmp15)){
											HX_STACK_LINE(193)
											tmp14 = si;
										}
										else{
											HX_STACK_LINE(193)
											int codePointOffset = cur;		HX_STACK_VAR(codePointOffset,"codePointOffset");
											HX_STACK_LINE(193)
											{
												HX_STACK_LINE(193)
												::String this1 = s;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(193)
												bool tmp16 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(193)
												if ((tmp16)){
													HX_STACK_LINE(193)
													int index = si;		HX_STACK_VAR(index,"index");
													HX_STACK_LINE(193)
													int tmp17 = this1.length;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(193)
													int len = tmp17;		HX_STACK_VAR(len,"len");
													HX_STACK_LINE(193)
													int i = (int)0;		HX_STACK_VAR(i,"i");
													HX_STACK_LINE(193)
													while((true)){
														HX_STACK_LINE(193)
														bool tmp18 = (i < codePointOffset);		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(193)
														bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(193)
														if ((tmp18)){
															HX_STACK_LINE(193)
															tmp19 = (index < len);
														}
														else{
															HX_STACK_LINE(193)
															tmp19 = false;
														}
														HX_STACK_LINE(193)
														bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(193)
														if ((tmp20)){
															HX_STACK_LINE(193)
															break;
														}
														HX_STACK_LINE(193)
														int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(193)
														{
															HX_STACK_LINE(193)
															int tmp22 = index;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(193)
															int tmp23 = this1.cca(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(193)
															int c = tmp23;		HX_STACK_VAR(c,"c");
															HX_STACK_LINE(193)
															bool tmp24 = (c < (int)192);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(193)
															if ((tmp24)){
																HX_STACK_LINE(193)
																tmp21 = (int)1;
															}
															else{
																HX_STACK_LINE(193)
																bool tmp25 = (c < (int)224);		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(193)
																if ((tmp25)){
																	HX_STACK_LINE(193)
																	tmp21 = (int)2;
																}
																else{
																	HX_STACK_LINE(193)
																	bool tmp26 = (c < (int)240);		HX_STACK_VAR(tmp26,"tmp26");
																	HX_STACK_LINE(193)
																	if ((tmp26)){
																		HX_STACK_LINE(193)
																		tmp21 = (int)3;
																	}
																	else{
																		HX_STACK_LINE(193)
																		bool tmp27 = (c < (int)248);		HX_STACK_VAR(tmp27,"tmp27");
																		HX_STACK_LINE(193)
																		if ((tmp27)){
																			HX_STACK_LINE(193)
																			tmp21 = (int)4;
																		}
																		else{
																			HX_STACK_LINE(193)
																			tmp21 = (int)1;
																		}
																	}
																}
															}
														}
														HX_STACK_LINE(193)
														hx::AddEq(index,tmp21);
														HX_STACK_LINE(193)
														++(i);
													}
													HX_STACK_LINE(193)
													tmp14 = index;
												}
												else{
													HX_STACK_LINE(193)
													int index = si;		HX_STACK_VAR(index,"index");
													HX_STACK_LINE(193)
													int count = (int)0;		HX_STACK_VAR(count,"count");
													HX_STACK_LINE(193)
													while((true)){
														HX_STACK_LINE(193)
														int tmp17 = count;		HX_STACK_VAR(tmp17,"tmp17");
														HX_STACK_LINE(193)
														int tmp18 = codePointOffset;		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(193)
														int tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(193)
														bool tmp20 = (tmp17 < tmp19);		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(193)
														bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(193)
														if ((tmp20)){
															HX_STACK_LINE(193)
															tmp21 = ((int)0 < index);
														}
														else{
															HX_STACK_LINE(193)
															tmp21 = false;
														}
														HX_STACK_LINE(193)
														bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(193)
														if ((tmp22)){
															HX_STACK_LINE(193)
															break;
														}
														HX_STACK_LINE(193)
														int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(193)
														{
															HX_STACK_LINE(193)
															::String this2 = this1;		HX_STACK_VAR(this2,"this2");
															HX_STACK_LINE(193)
															{
																HX_STACK_LINE(193)
																int tmp24 = (index - (int)1);		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(193)
																int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(193)
																{
																	HX_STACK_LINE(193)
																	int tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
																	HX_STACK_LINE(193)
																	int tmp27 = this2.cca(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
																	HX_STACK_LINE(193)
																	tmp25 = tmp27;
																}
																HX_STACK_LINE(193)
																int c1 = tmp25;		HX_STACK_VAR(c1,"c1");
																HX_STACK_LINE(193)
																bool tmp26 = (c1 < (int)128);		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(193)
																bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(193)
																bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(193)
																if ((tmp27)){
																	HX_STACK_LINE(193)
																	tmp28 = (c1 >= (int)192);
																}
																else{
																	HX_STACK_LINE(193)
																	tmp28 = true;
																}
																HX_STACK_LINE(193)
																if ((tmp28)){
																	HX_STACK_LINE(193)
																	tmp23 = (int)1;
																}
																else{
																	HX_STACK_LINE(193)
																	int tmp29 = (index - (int)2);		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(193)
																	int tmp30;		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(193)
																	{
																		HX_STACK_LINE(193)
																		int tmp31 = tmp29;		HX_STACK_VAR(tmp31,"tmp31");
																		HX_STACK_LINE(193)
																		int tmp32 = this2.cca(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
																		HX_STACK_LINE(193)
																		tmp30 = tmp32;
																	}
																	HX_STACK_LINE(193)
																	int tmp31 = (int(tmp30) & int((int)224));		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(193)
																	bool tmp32 = (tmp31 == (int)192);		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(193)
																	if ((tmp32)){
																		HX_STACK_LINE(193)
																		tmp23 = (int)2;
																	}
																	else{
																		HX_STACK_LINE(193)
																		int tmp33 = (index - (int)3);		HX_STACK_VAR(tmp33,"tmp33");
																		HX_STACK_LINE(193)
																		int tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																		HX_STACK_LINE(193)
																		{
																			HX_STACK_LINE(193)
																			int tmp35 = tmp33;		HX_STACK_VAR(tmp35,"tmp35");
																			HX_STACK_LINE(193)
																			int tmp36 = this2.cca(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																			HX_STACK_LINE(193)
																			tmp34 = tmp36;
																		}
																		HX_STACK_LINE(193)
																		int tmp35 = (int(tmp34) & int((int)240));		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(193)
																		bool tmp36 = (tmp35 == (int)224);		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(193)
																		if ((tmp36)){
																			HX_STACK_LINE(193)
																			tmp23 = (int)3;
																		}
																		else{
																			HX_STACK_LINE(193)
																			int tmp37 = (index - (int)4);		HX_STACK_VAR(tmp37,"tmp37");
																			HX_STACK_LINE(193)
																			int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
																			HX_STACK_LINE(193)
																			{
																				HX_STACK_LINE(193)
																				int tmp39 = tmp37;		HX_STACK_VAR(tmp39,"tmp39");
																				HX_STACK_LINE(193)
																				int tmp40 = this2.cca(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																				HX_STACK_LINE(193)
																				tmp38 = tmp40;
																			}
																			HX_STACK_LINE(193)
																			int tmp39 = (int(tmp38) & int((int)248));		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(193)
																			bool tmp40 = (tmp39 == (int)240);		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(193)
																			if ((tmp40)){
																				HX_STACK_LINE(193)
																				tmp23 = (int)4;
																			}
																			else{
																				HX_STACK_LINE(193)
																				tmp23 = (int)1;
																			}
																		}
																	}
																}
															}
														}
														HX_STACK_LINE(193)
														hx::SubEq(index,tmp23);
														HX_STACK_LINE(193)
														++(count);
													}
													HX_STACK_LINE(193)
													tmp14 = index;
												}
											}
										}
									}
									HX_STACK_LINE(193)
									int ei = tmp14;		HX_STACK_VAR(ei,"ei");
									HX_STACK_LINE(193)
									int tmp15 = si;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(193)
									int tmp16 = ei;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(193)
									tmp9 = s.substring(tmp15,tmp16);
								}
							}
							HX_STACK_LINE(193)
							::String tmp10 = this->composition;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(193)
							::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(193)
							::String tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								int tmp13 = this->index;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(193)
								int cur = tmp13;		HX_STACK_VAR(cur,"cur");
								HX_STACK_LINE(193)
								{
									HX_STACK_LINE(193)
									::String tmp14 = this->edit;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(193)
									::String s = tmp14;		HX_STACK_VAR(s,"s");
									HX_STACK_LINE(193)
									::String tmp15 = this->edit;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(193)
									Dynamic length = tmp15.length;		HX_STACK_VAR(length,"length");
									HX_STACK_LINE(193)
									int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(193)
									{
										HX_STACK_LINE(193)
										bool tmp17 = (cur >= (int)0);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(193)
										int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(193)
										if ((tmp17)){
											HX_STACK_LINE(193)
											tmp18 = (int)0;
										}
										else{
											HX_STACK_LINE(193)
											tmp18 = s.length;
										}
										HX_STACK_LINE(193)
										int index = tmp18;		HX_STACK_VAR(index,"index");
										HX_STACK_LINE(193)
										{
											HX_STACK_LINE(193)
											::String this1 = s;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(193)
											bool tmp19 = (cur >= (int)0);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(193)
											if ((tmp19)){
												HX_STACK_LINE(193)
												int index1 = index;		HX_STACK_VAR(index1,"index1");
												HX_STACK_LINE(193)
												int tmp20 = this1.length;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(193)
												int len = tmp20;		HX_STACK_VAR(len,"len");
												HX_STACK_LINE(193)
												int i = (int)0;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(193)
												while((true)){
													HX_STACK_LINE(193)
													bool tmp21 = (i < cur);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(193)
													bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(193)
													if ((tmp21)){
														HX_STACK_LINE(193)
														tmp22 = (index1 < len);
													}
													else{
														HX_STACK_LINE(193)
														tmp22 = false;
													}
													HX_STACK_LINE(193)
													bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(193)
													if ((tmp23)){
														HX_STACK_LINE(193)
														break;
													}
													HX_STACK_LINE(193)
													int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(193)
													{
														HX_STACK_LINE(193)
														int tmp25 = index1;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(193)
														int tmp26 = this1.cca(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(193)
														int c = tmp26;		HX_STACK_VAR(c,"c");
														HX_STACK_LINE(193)
														bool tmp27 = (c < (int)192);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(193)
														if ((tmp27)){
															HX_STACK_LINE(193)
															tmp24 = (int)1;
														}
														else{
															HX_STACK_LINE(193)
															bool tmp28 = (c < (int)224);		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(193)
															if ((tmp28)){
																HX_STACK_LINE(193)
																tmp24 = (int)2;
															}
															else{
																HX_STACK_LINE(193)
																bool tmp29 = (c < (int)240);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(193)
																if ((tmp29)){
																	HX_STACK_LINE(193)
																	tmp24 = (int)3;
																}
																else{
																	HX_STACK_LINE(193)
																	bool tmp30 = (c < (int)248);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(193)
																	if ((tmp30)){
																		HX_STACK_LINE(193)
																		tmp24 = (int)4;
																	}
																	else{
																		HX_STACK_LINE(193)
																		tmp24 = (int)1;
																	}
																}
															}
														}
													}
													HX_STACK_LINE(193)
													hx::AddEq(index1,tmp24);
													HX_STACK_LINE(193)
													++(i);
												}
												HX_STACK_LINE(193)
												tmp16 = index1;
											}
											else{
												HX_STACK_LINE(193)
												int index1 = index;		HX_STACK_VAR(index1,"index1");
												HX_STACK_LINE(193)
												int count = (int)0;		HX_STACK_VAR(count,"count");
												HX_STACK_LINE(193)
												while((true)){
													HX_STACK_LINE(193)
													int tmp20 = count;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(193)
													int tmp21 = cur;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(193)
													int tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(193)
													bool tmp23 = (tmp20 < tmp22);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(193)
													bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(193)
													if ((tmp23)){
														HX_STACK_LINE(193)
														tmp24 = ((int)0 < index1);
													}
													else{
														HX_STACK_LINE(193)
														tmp24 = false;
													}
													HX_STACK_LINE(193)
													bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(193)
													if ((tmp25)){
														HX_STACK_LINE(193)
														break;
													}
													HX_STACK_LINE(193)
													int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(193)
													{
														HX_STACK_LINE(193)
														::String this2 = this1;		HX_STACK_VAR(this2,"this2");
														HX_STACK_LINE(193)
														{
															HX_STACK_LINE(193)
															int tmp27 = (index1 - (int)1);		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(193)
															int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(193)
															{
																HX_STACK_LINE(193)
																int tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(193)
																int tmp30 = this2.cca(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(193)
																tmp28 = tmp30;
															}
															HX_STACK_LINE(193)
															int c1 = tmp28;		HX_STACK_VAR(c1,"c1");
															HX_STACK_LINE(193)
															bool tmp29 = (c1 < (int)128);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(193)
															bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(193)
															bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(193)
															if ((tmp30)){
																HX_STACK_LINE(193)
																tmp31 = (c1 >= (int)192);
															}
															else{
																HX_STACK_LINE(193)
																tmp31 = true;
															}
															HX_STACK_LINE(193)
															if ((tmp31)){
																HX_STACK_LINE(193)
																tmp26 = (int)1;
															}
															else{
																HX_STACK_LINE(193)
																int tmp32 = (index1 - (int)2);		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(193)
																int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(193)
																{
																	HX_STACK_LINE(193)
																	int tmp34 = tmp32;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(193)
																	int tmp35 = this2.cca(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(193)
																	tmp33 = tmp35;
																}
																HX_STACK_LINE(193)
																int tmp34 = (int(tmp33) & int((int)224));		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(193)
																bool tmp35 = (tmp34 == (int)192);		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(193)
																if ((tmp35)){
																	HX_STACK_LINE(193)
																	tmp26 = (int)2;
																}
																else{
																	HX_STACK_LINE(193)
																	int tmp36 = (index1 - (int)3);		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(193)
																	int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(193)
																	{
																		HX_STACK_LINE(193)
																		int tmp38 = tmp36;		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(193)
																		int tmp39 = this2.cca(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(193)
																		tmp37 = tmp39;
																	}
																	HX_STACK_LINE(193)
																	int tmp38 = (int(tmp37) & int((int)240));		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(193)
																	bool tmp39 = (tmp38 == (int)224);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(193)
																	if ((tmp39)){
																		HX_STACK_LINE(193)
																		tmp26 = (int)3;
																	}
																	else{
																		HX_STACK_LINE(193)
																		int tmp40 = (index1 - (int)4);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(193)
																		int tmp41;		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(193)
																		{
																			HX_STACK_LINE(193)
																			int tmp42 = tmp40;		HX_STACK_VAR(tmp42,"tmp42");
																			HX_STACK_LINE(193)
																			int tmp43 = this2.cca(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(193)
																			tmp41 = tmp43;
																		}
																		HX_STACK_LINE(193)
																		int tmp42 = (int(tmp41) & int((int)248));		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(193)
																		bool tmp43 = (tmp42 == (int)240);		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(193)
																		if ((tmp43)){
																			HX_STACK_LINE(193)
																			tmp26 = (int)4;
																		}
																		else{
																			HX_STACK_LINE(193)
																			tmp26 = (int)1;
																		}
																	}
																}
															}
														}
													}
													HX_STACK_LINE(193)
													hx::SubEq(index1,tmp26);
													HX_STACK_LINE(193)
													++(count);
												}
												HX_STACK_LINE(193)
												tmp16 = index1;
											}
										}
									}
									HX_STACK_LINE(193)
									int si = tmp16;		HX_STACK_VAR(si,"si");
									HX_STACK_LINE(193)
									bool tmp17 = (length == null());		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(193)
									int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(193)
									if ((tmp17)){
										HX_STACK_LINE(193)
										tmp18 = s.length;
									}
									else{
										HX_STACK_LINE(193)
										bool tmp19 = (length < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(193)
										if ((tmp19)){
											HX_STACK_LINE(193)
											tmp18 = si;
										}
										else{
											HX_STACK_LINE(193)
											int codePointOffset = length;		HX_STACK_VAR(codePointOffset,"codePointOffset");
											HX_STACK_LINE(193)
											{
												HX_STACK_LINE(193)
												::String this1 = s;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(193)
												bool tmp20 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(193)
												if ((tmp20)){
													HX_STACK_LINE(193)
													int index = si;		HX_STACK_VAR(index,"index");
													HX_STACK_LINE(193)
													int tmp21 = this1.length;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(193)
													int len = tmp21;		HX_STACK_VAR(len,"len");
													HX_STACK_LINE(193)
													int i = (int)0;		HX_STACK_VAR(i,"i");
													HX_STACK_LINE(193)
													while((true)){
														HX_STACK_LINE(193)
														bool tmp22 = (i < codePointOffset);		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(193)
														bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(193)
														if ((tmp22)){
															HX_STACK_LINE(193)
															tmp23 = (index < len);
														}
														else{
															HX_STACK_LINE(193)
															tmp23 = false;
														}
														HX_STACK_LINE(193)
														bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(193)
														if ((tmp24)){
															HX_STACK_LINE(193)
															break;
														}
														HX_STACK_LINE(193)
														int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(193)
														{
															HX_STACK_LINE(193)
															int tmp26 = index;		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(193)
															int tmp27 = this1.cca(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(193)
															int c = tmp27;		HX_STACK_VAR(c,"c");
															HX_STACK_LINE(193)
															bool tmp28 = (c < (int)192);		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(193)
															if ((tmp28)){
																HX_STACK_LINE(193)
																tmp25 = (int)1;
															}
															else{
																HX_STACK_LINE(193)
																bool tmp29 = (c < (int)224);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(193)
																if ((tmp29)){
																	HX_STACK_LINE(193)
																	tmp25 = (int)2;
																}
																else{
																	HX_STACK_LINE(193)
																	bool tmp30 = (c < (int)240);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(193)
																	if ((tmp30)){
																		HX_STACK_LINE(193)
																		tmp25 = (int)3;
																	}
																	else{
																		HX_STACK_LINE(193)
																		bool tmp31 = (c < (int)248);		HX_STACK_VAR(tmp31,"tmp31");
																		HX_STACK_LINE(193)
																		if ((tmp31)){
																			HX_STACK_LINE(193)
																			tmp25 = (int)4;
																		}
																		else{
																			HX_STACK_LINE(193)
																			tmp25 = (int)1;
																		}
																	}
																}
															}
														}
														HX_STACK_LINE(193)
														hx::AddEq(index,tmp25);
														HX_STACK_LINE(193)
														++(i);
													}
													HX_STACK_LINE(193)
													tmp18 = index;
												}
												else{
													HX_STACK_LINE(193)
													int index = si;		HX_STACK_VAR(index,"index");
													HX_STACK_LINE(193)
													int count = (int)0;		HX_STACK_VAR(count,"count");
													HX_STACK_LINE(193)
													while((true)){
														HX_STACK_LINE(193)
														int tmp21 = count;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(193)
														int tmp22 = codePointOffset;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(193)
														int tmp23 = -(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(193)
														bool tmp24 = (tmp21 < tmp23);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(193)
														bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(193)
														if ((tmp24)){
															HX_STACK_LINE(193)
															tmp25 = ((int)0 < index);
														}
														else{
															HX_STACK_LINE(193)
															tmp25 = false;
														}
														HX_STACK_LINE(193)
														bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(193)
														if ((tmp26)){
															HX_STACK_LINE(193)
															break;
														}
														HX_STACK_LINE(193)
														int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(193)
														{
															HX_STACK_LINE(193)
															::String this2 = this1;		HX_STACK_VAR(this2,"this2");
															HX_STACK_LINE(193)
															{
																HX_STACK_LINE(193)
																int tmp28 = (index - (int)1);		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(193)
																int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(193)
																{
																	HX_STACK_LINE(193)
																	int tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(193)
																	int tmp31 = this2.cca(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(193)
																	tmp29 = tmp31;
																}
																HX_STACK_LINE(193)
																int c1 = tmp29;		HX_STACK_VAR(c1,"c1");
																HX_STACK_LINE(193)
																bool tmp30 = (c1 < (int)128);		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(193)
																bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(193)
																bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(193)
																if ((tmp31)){
																	HX_STACK_LINE(193)
																	tmp32 = (c1 >= (int)192);
																}
																else{
																	HX_STACK_LINE(193)
																	tmp32 = true;
																}
																HX_STACK_LINE(193)
																if ((tmp32)){
																	HX_STACK_LINE(193)
																	tmp27 = (int)1;
																}
																else{
																	HX_STACK_LINE(193)
																	int tmp33 = (index - (int)2);		HX_STACK_VAR(tmp33,"tmp33");
																	HX_STACK_LINE(193)
																	int tmp34;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(193)
																	{
																		HX_STACK_LINE(193)
																		int tmp35 = tmp33;		HX_STACK_VAR(tmp35,"tmp35");
																		HX_STACK_LINE(193)
																		int tmp36 = this2.cca(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																		HX_STACK_LINE(193)
																		tmp34 = tmp36;
																	}
																	HX_STACK_LINE(193)
																	int tmp35 = (int(tmp34) & int((int)224));		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(193)
																	bool tmp36 = (tmp35 == (int)192);		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(193)
																	if ((tmp36)){
																		HX_STACK_LINE(193)
																		tmp27 = (int)2;
																	}
																	else{
																		HX_STACK_LINE(193)
																		int tmp37 = (index - (int)3);		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(193)
																		int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(193)
																		{
																			HX_STACK_LINE(193)
																			int tmp39 = tmp37;		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(193)
																			int tmp40 = this2.cca(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(193)
																			tmp38 = tmp40;
																		}
																		HX_STACK_LINE(193)
																		int tmp39 = (int(tmp38) & int((int)240));		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(193)
																		bool tmp40 = (tmp39 == (int)224);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(193)
																		if ((tmp40)){
																			HX_STACK_LINE(193)
																			tmp27 = (int)3;
																		}
																		else{
																			HX_STACK_LINE(193)
																			int tmp41 = (index - (int)4);		HX_STACK_VAR(tmp41,"tmp41");
																			HX_STACK_LINE(193)
																			int tmp42;		HX_STACK_VAR(tmp42,"tmp42");
																			HX_STACK_LINE(193)
																			{
																				HX_STACK_LINE(193)
																				int tmp43 = tmp41;		HX_STACK_VAR(tmp43,"tmp43");
																				HX_STACK_LINE(193)
																				int tmp44 = this2.cca(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
																				HX_STACK_LINE(193)
																				tmp42 = tmp44;
																			}
																			HX_STACK_LINE(193)
																			int tmp43 = (int(tmp42) & int((int)248));		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(193)
																			bool tmp44 = (tmp43 == (int)240);		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(193)
																			if ((tmp44)){
																				HX_STACK_LINE(193)
																				tmp27 = (int)4;
																			}
																			else{
																				HX_STACK_LINE(193)
																				tmp27 = (int)1;
																			}
																		}
																	}
																}
															}
														}
														HX_STACK_LINE(193)
														hx::SubEq(index,tmp27);
														HX_STACK_LINE(193)
														++(count);
													}
													HX_STACK_LINE(193)
													tmp18 = index;
												}
											}
										}
									}
									HX_STACK_LINE(193)
									int ei = tmp18;		HX_STACK_VAR(ei,"ei");
									HX_STACK_LINE(193)
									int tmp19 = si;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(193)
									int tmp20 = ei;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(193)
									tmp12 = s.substring(tmp19,tmp20);
								}
							}
							HX_STACK_LINE(193)
							::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(193)
							this->display = tmp13;
						}
						HX_STACK_LINE(193)
						::mint::Label tmp9 = this->label;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(193)
						::String tmp10 = this->display;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(193)
						tmp9->set_text(tmp10);
						HX_STACK_LINE(193)
						{
							HX_STACK_LINE(193)
							int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
							HX_STACK_LINE(193)
							::mint::core::Signal tmp11 = this->onchangeindex;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(193)
							int tmp12 = tmp11->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(193)
							int _count = tmp12;		HX_STACK_VAR(_count,"_count");
							HX_STACK_LINE(193)
							while((true)){
								HX_STACK_LINE(193)
								bool tmp13 = (_idx < _count);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(193)
								bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(193)
								if ((tmp14)){
									HX_STACK_LINE(193)
									break;
								}
								HX_STACK_LINE(193)
								::mint::core::Signal tmp15 = this->onchangeindex;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(193)
								Dynamic tmp16 = tmp15->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(193)
								Dynamic fn = tmp16;		HX_STACK_VAR(fn,"fn");
								HX_STACK_LINE(193)
								bool tmp17 = (fn != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(193)
								if ((tmp17)){
									HX_STACK_LINE(193)
									int tmp18 = this->index;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(193)
									fn(tmp18).Cast< Void >();
								}
								HX_STACK_LINE(193)
								(_idx)++;
							}
							HX_STACK_LINE(193)
							while((true)){
								HX_STACK_LINE(193)
								bool tmp13 = (_count > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(193)
								bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(193)
								if ((tmp14)){
									HX_STACK_LINE(193)
									break;
								}
								HX_STACK_LINE(193)
								::mint::core::Signal tmp15 = this->onchangeindex;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(193)
								int tmp16 = (_count - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(193)
								Dynamic tmp17 = tmp15->listeners->__GetItem(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(193)
								Dynamic fn = tmp17;		HX_STACK_VAR(fn,"fn");
								HX_STACK_LINE(193)
								bool tmp18 = (fn == null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(193)
								if ((tmp18)){
									HX_STACK_LINE(193)
									::mint::core::Signal tmp19 = this->onchangeindex;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(193)
									int tmp20 = (_count - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(193)
									tmp19->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp20,(int)1);
								}
								HX_STACK_LINE(193)
								(_count)--;
							}
						}
						HX_STACK_LINE(193)
						bool tmp11 = _emit;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(193)
						if ((tmp11)){
							HX_STACK_LINE(193)
							int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
							HX_STACK_LINE(193)
							::mint::core::Signal tmp12 = this->onchange;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(193)
							int tmp13 = tmp12->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(193)
							int _count = tmp13;		HX_STACK_VAR(_count,"_count");
							HX_STACK_LINE(193)
							while((true)){
								HX_STACK_LINE(193)
								bool tmp14 = (_idx < _count);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(193)
								bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(193)
								if ((tmp15)){
									HX_STACK_LINE(193)
									break;
								}
								HX_STACK_LINE(193)
								::mint::core::Signal tmp16 = this->onchange;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(193)
								Dynamic tmp17 = tmp16->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(193)
								Dynamic fn = tmp17;		HX_STACK_VAR(fn,"fn");
								HX_STACK_LINE(193)
								bool tmp18 = (fn != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(193)
								if ((tmp18)){
									HX_STACK_LINE(193)
									::String tmp19 = this->edit;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(193)
									::String tmp20 = this->display;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(193)
									bool tmp21 = _from_typing;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(193)
									fn(tmp19,tmp20,tmp21).Cast< Void >();
								}
								HX_STACK_LINE(193)
								(_idx)++;
							}
							HX_STACK_LINE(193)
							while((true)){
								HX_STACK_LINE(193)
								bool tmp14 = (_count > (int)0);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(193)
								bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(193)
								if ((tmp15)){
									HX_STACK_LINE(193)
									break;
								}
								HX_STACK_LINE(193)
								::mint::core::Signal tmp16 = this->onchange;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(193)
								int tmp17 = (_count - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(193)
								Dynamic tmp18 = tmp16->listeners->__GetItem(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(193)
								Dynamic fn = tmp18;		HX_STACK_VAR(fn,"fn");
								HX_STACK_LINE(193)
								bool tmp19 = (fn == null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(193)
								if ((tmp19)){
									HX_STACK_LINE(193)
									::mint::core::Signal tmp20 = this->onchange;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(193)
									int tmp21 = (_count - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(193)
									tmp20->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp21,(int)1);
								}
								HX_STACK_LINE(193)
								(_count)--;
							}
						}
						HX_STACK_LINE(193)
						this->edit;
					}
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(195)
					this->move((int)-1);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(197)
					this->move((int)1);
				}
				;break;
				case (int)7: {
				}
				;break;
				case (int)8: {
				}
				;break;
				case (int)6: {
				}
				;break;
				case (int)-1: {
				}
				;break;
				case (int)3: {
				}
				;break;
				case (int)2: {
				}
				;break;
			}
		}
	}
return null();
}


::String TextEdit_obj::refresh( ::String str,hx::Null< bool >  __o__from_typing,hx::Null< bool >  __o__emit){
bool _from_typing = __o__from_typing.Default(true);
bool _emit = __o__emit.Default(true);
	HX_STACK_FRAME("mint.TextEdit","refresh",0xe51edb30,"mint.TextEdit.refresh","mint/TextEdit.hx",208,0x23cb477a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(_from_typing,"_from_typing")
	HX_STACK_ARG(_emit,"_emit")
{
		HX_STACK_LINE(210)
		this->edit = str;
		HX_STACK_LINE(212)
		::String tmp = this->display_char;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(212)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(212)
		if ((tmp1)){
			HX_STACK_LINE(213)
			this->display = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			HX_STACK_LINE(214)
			::String tmp2 = str;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(214)
			int tmp3 = str.length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(214)
			int tmp4 = ::mint::core::unifill::_Utf8::Utf8_Impl__obj::codePointCount(tmp2,(int)0,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(214)
			int _l = tmp4;		HX_STACK_VAR(_l,"_l");
			HX_STACK_LINE(215)
			{
				HX_STACK_LINE(215)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(215)
				while((true)){
					HX_STACK_LINE(215)
					bool tmp5 = (_g < _l);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(215)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(215)
					if ((tmp6)){
						HX_STACK_LINE(215)
						break;
					}
					HX_STACK_LINE(215)
					int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(215)
					int i = tmp7;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(215)
					::String tmp8 = this->display_char;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(215)
					hx::AddEq(this->display,tmp8);
				}
			}
		}
		else{
			HX_STACK_LINE(217)
			::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(217)
			{
				HX_STACK_LINE(217)
				int tmp3 = this->index;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(217)
				int cur = tmp3;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(217)
				{
					HX_STACK_LINE(217)
					::String tmp4 = this->edit;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(217)
					::String s = tmp4;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(217)
					int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(217)
					{
						HX_STACK_LINE(217)
						bool tmp6 = true;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(217)
						int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(217)
						if ((tmp6)){
							HX_STACK_LINE(217)
							tmp7 = (int)0;
						}
						else{
							HX_STACK_LINE(217)
							tmp7 = s.length;
						}
						HX_STACK_LINE(217)
						int index = tmp7;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(217)
						{
							HX_STACK_LINE(217)
							::String this1 = s;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(217)
							bool tmp8 = true;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(217)
							if ((tmp8)){
								HX_STACK_LINE(217)
								int index1 = index;		HX_STACK_VAR(index1,"index1");
								HX_STACK_LINE(217)
								int tmp9 = this1.length;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(217)
								int len = tmp9;		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(217)
								int i = (int)0;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(217)
								while((true)){
									HX_STACK_LINE(217)
									bool tmp10 = (i < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(217)
									bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(217)
									if ((tmp10)){
										HX_STACK_LINE(217)
										tmp11 = (index1 < len);
									}
									else{
										HX_STACK_LINE(217)
										tmp11 = false;
									}
									HX_STACK_LINE(217)
									bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(217)
									if ((tmp12)){
										HX_STACK_LINE(217)
										break;
									}
									HX_STACK_LINE(217)
									int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(217)
									{
										HX_STACK_LINE(217)
										int tmp14 = index1;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(217)
										int tmp15 = this1.cca(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(217)
										int c = tmp15;		HX_STACK_VAR(c,"c");
										HX_STACK_LINE(217)
										bool tmp16 = (c < (int)192);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(217)
										if ((tmp16)){
											HX_STACK_LINE(217)
											tmp13 = (int)1;
										}
										else{
											HX_STACK_LINE(217)
											bool tmp17 = (c < (int)224);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(217)
											if ((tmp17)){
												HX_STACK_LINE(217)
												tmp13 = (int)2;
											}
											else{
												HX_STACK_LINE(217)
												bool tmp18 = (c < (int)240);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(217)
												if ((tmp18)){
													HX_STACK_LINE(217)
													tmp13 = (int)3;
												}
												else{
													HX_STACK_LINE(217)
													bool tmp19 = (c < (int)248);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(217)
													if ((tmp19)){
														HX_STACK_LINE(217)
														tmp13 = (int)4;
													}
													else{
														HX_STACK_LINE(217)
														tmp13 = (int)1;
													}
												}
											}
										}
									}
									HX_STACK_LINE(217)
									hx::AddEq(index1,tmp13);
									HX_STACK_LINE(217)
									++(i);
								}
								HX_STACK_LINE(217)
								tmp5 = index1;
							}
							else{
								HX_STACK_LINE(217)
								int index1 = index;		HX_STACK_VAR(index1,"index1");
								HX_STACK_LINE(217)
								int count = (int)0;		HX_STACK_VAR(count,"count");
								HX_STACK_LINE(217)
								while((true)){
									HX_STACK_LINE(217)
									int tmp9 = count;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(217)
									int tmp10 = (int)0;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(217)
									bool tmp11 = (tmp9 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(217)
									bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(217)
									if ((tmp11)){
										HX_STACK_LINE(217)
										tmp12 = ((int)0 < index1);
									}
									else{
										HX_STACK_LINE(217)
										tmp12 = false;
									}
									HX_STACK_LINE(217)
									bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(217)
									if ((tmp13)){
										HX_STACK_LINE(217)
										break;
									}
									HX_STACK_LINE(217)
									int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(217)
									{
										HX_STACK_LINE(217)
										::String this2 = this1;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(217)
										{
											HX_STACK_LINE(217)
											int tmp15 = (index1 - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(217)
											int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(217)
											{
												HX_STACK_LINE(217)
												int tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(217)
												int tmp18 = this2.cca(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(217)
												tmp16 = tmp18;
											}
											HX_STACK_LINE(217)
											int c1 = tmp16;		HX_STACK_VAR(c1,"c1");
											HX_STACK_LINE(217)
											bool tmp17 = (c1 < (int)128);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(217)
											bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(217)
											bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(217)
											if ((tmp18)){
												HX_STACK_LINE(217)
												tmp19 = (c1 >= (int)192);
											}
											else{
												HX_STACK_LINE(217)
												tmp19 = true;
											}
											HX_STACK_LINE(217)
											if ((tmp19)){
												HX_STACK_LINE(217)
												tmp14 = (int)1;
											}
											else{
												HX_STACK_LINE(217)
												int tmp20 = (index1 - (int)2);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(217)
												int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(217)
												{
													HX_STACK_LINE(217)
													int tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(217)
													int tmp23 = this2.cca(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(217)
													tmp21 = tmp23;
												}
												HX_STACK_LINE(217)
												int tmp22 = (int(tmp21) & int((int)224));		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(217)
												bool tmp23 = (tmp22 == (int)192);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(217)
												if ((tmp23)){
													HX_STACK_LINE(217)
													tmp14 = (int)2;
												}
												else{
													HX_STACK_LINE(217)
													int tmp24 = (index1 - (int)3);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(217)
													int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(217)
													{
														HX_STACK_LINE(217)
														int tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(217)
														int tmp27 = this2.cca(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(217)
														tmp25 = tmp27;
													}
													HX_STACK_LINE(217)
													int tmp26 = (int(tmp25) & int((int)240));		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(217)
													bool tmp27 = (tmp26 == (int)224);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(217)
													if ((tmp27)){
														HX_STACK_LINE(217)
														tmp14 = (int)3;
													}
													else{
														HX_STACK_LINE(217)
														int tmp28 = (index1 - (int)4);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(217)
														int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(217)
														{
															HX_STACK_LINE(217)
															int tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(217)
															int tmp31 = this2.cca(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(217)
															tmp29 = tmp31;
														}
														HX_STACK_LINE(217)
														int tmp30 = (int(tmp29) & int((int)248));		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(217)
														bool tmp31 = (tmp30 == (int)240);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(217)
														if ((tmp31)){
															HX_STACK_LINE(217)
															tmp14 = (int)4;
														}
														else{
															HX_STACK_LINE(217)
															tmp14 = (int)1;
														}
													}
												}
											}
										}
									}
									HX_STACK_LINE(217)
									hx::SubEq(index1,tmp14);
									HX_STACK_LINE(217)
									++(count);
								}
								HX_STACK_LINE(217)
								tmp5 = index1;
							}
						}
					}
					HX_STACK_LINE(217)
					int si = tmp5;		HX_STACK_VAR(si,"si");
					HX_STACK_LINE(217)
					bool tmp6 = (cur == null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(217)
					int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(217)
					if ((tmp6)){
						HX_STACK_LINE(217)
						tmp7 = s.length;
					}
					else{
						HX_STACK_LINE(217)
						bool tmp8 = (cur < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(217)
						if ((tmp8)){
							HX_STACK_LINE(217)
							tmp7 = si;
						}
						else{
							HX_STACK_LINE(217)
							int codePointOffset = cur;		HX_STACK_VAR(codePointOffset,"codePointOffset");
							HX_STACK_LINE(217)
							{
								HX_STACK_LINE(217)
								::String this1 = s;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(217)
								bool tmp9 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(217)
								if ((tmp9)){
									HX_STACK_LINE(217)
									int index = si;		HX_STACK_VAR(index,"index");
									HX_STACK_LINE(217)
									int tmp10 = this1.length;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(217)
									int len = tmp10;		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(217)
									int i = (int)0;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(217)
									while((true)){
										HX_STACK_LINE(217)
										bool tmp11 = (i < codePointOffset);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(217)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(217)
										if ((tmp11)){
											HX_STACK_LINE(217)
											tmp12 = (index < len);
										}
										else{
											HX_STACK_LINE(217)
											tmp12 = false;
										}
										HX_STACK_LINE(217)
										bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(217)
										if ((tmp13)){
											HX_STACK_LINE(217)
											break;
										}
										HX_STACK_LINE(217)
										int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(217)
										{
											HX_STACK_LINE(217)
											int tmp15 = index;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(217)
											int tmp16 = this1.cca(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(217)
											int c = tmp16;		HX_STACK_VAR(c,"c");
											HX_STACK_LINE(217)
											bool tmp17 = (c < (int)192);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(217)
											if ((tmp17)){
												HX_STACK_LINE(217)
												tmp14 = (int)1;
											}
											else{
												HX_STACK_LINE(217)
												bool tmp18 = (c < (int)224);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(217)
												if ((tmp18)){
													HX_STACK_LINE(217)
													tmp14 = (int)2;
												}
												else{
													HX_STACK_LINE(217)
													bool tmp19 = (c < (int)240);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(217)
													if ((tmp19)){
														HX_STACK_LINE(217)
														tmp14 = (int)3;
													}
													else{
														HX_STACK_LINE(217)
														bool tmp20 = (c < (int)248);		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(217)
														if ((tmp20)){
															HX_STACK_LINE(217)
															tmp14 = (int)4;
														}
														else{
															HX_STACK_LINE(217)
															tmp14 = (int)1;
														}
													}
												}
											}
										}
										HX_STACK_LINE(217)
										hx::AddEq(index,tmp14);
										HX_STACK_LINE(217)
										++(i);
									}
									HX_STACK_LINE(217)
									tmp7 = index;
								}
								else{
									HX_STACK_LINE(217)
									int index = si;		HX_STACK_VAR(index,"index");
									HX_STACK_LINE(217)
									int count = (int)0;		HX_STACK_VAR(count,"count");
									HX_STACK_LINE(217)
									while((true)){
										HX_STACK_LINE(217)
										int tmp10 = count;		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(217)
										int tmp11 = codePointOffset;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(217)
										int tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(217)
										bool tmp13 = (tmp10 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(217)
										bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(217)
										if ((tmp13)){
											HX_STACK_LINE(217)
											tmp14 = ((int)0 < index);
										}
										else{
											HX_STACK_LINE(217)
											tmp14 = false;
										}
										HX_STACK_LINE(217)
										bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(217)
										if ((tmp15)){
											HX_STACK_LINE(217)
											break;
										}
										HX_STACK_LINE(217)
										int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(217)
										{
											HX_STACK_LINE(217)
											::String this2 = this1;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(217)
											{
												HX_STACK_LINE(217)
												int tmp17 = (index - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(217)
												int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(217)
												{
													HX_STACK_LINE(217)
													int tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(217)
													int tmp20 = this2.cca(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(217)
													tmp18 = tmp20;
												}
												HX_STACK_LINE(217)
												int c1 = tmp18;		HX_STACK_VAR(c1,"c1");
												HX_STACK_LINE(217)
												bool tmp19 = (c1 < (int)128);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(217)
												bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(217)
												bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(217)
												if ((tmp20)){
													HX_STACK_LINE(217)
													tmp21 = (c1 >= (int)192);
												}
												else{
													HX_STACK_LINE(217)
													tmp21 = true;
												}
												HX_STACK_LINE(217)
												if ((tmp21)){
													HX_STACK_LINE(217)
													tmp16 = (int)1;
												}
												else{
													HX_STACK_LINE(217)
													int tmp22 = (index - (int)2);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(217)
													int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(217)
													{
														HX_STACK_LINE(217)
														int tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(217)
														int tmp25 = this2.cca(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(217)
														tmp23 = tmp25;
													}
													HX_STACK_LINE(217)
													int tmp24 = (int(tmp23) & int((int)224));		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(217)
													bool tmp25 = (tmp24 == (int)192);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(217)
													if ((tmp25)){
														HX_STACK_LINE(217)
														tmp16 = (int)2;
													}
													else{
														HX_STACK_LINE(217)
														int tmp26 = (index - (int)3);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(217)
														int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(217)
														{
															HX_STACK_LINE(217)
															int tmp28 = tmp26;		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(217)
															int tmp29 = this2.cca(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(217)
															tmp27 = tmp29;
														}
														HX_STACK_LINE(217)
														int tmp28 = (int(tmp27) & int((int)240));		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(217)
														bool tmp29 = (tmp28 == (int)224);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(217)
														if ((tmp29)){
															HX_STACK_LINE(217)
															tmp16 = (int)3;
														}
														else{
															HX_STACK_LINE(217)
															int tmp30 = (index - (int)4);		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(217)
															int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(217)
															{
																HX_STACK_LINE(217)
																int tmp32 = tmp30;		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(217)
																int tmp33 = this2.cca(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(217)
																tmp31 = tmp33;
															}
															HX_STACK_LINE(217)
															int tmp32 = (int(tmp31) & int((int)248));		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(217)
															bool tmp33 = (tmp32 == (int)240);		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(217)
															if ((tmp33)){
																HX_STACK_LINE(217)
																tmp16 = (int)4;
															}
															else{
																HX_STACK_LINE(217)
																tmp16 = (int)1;
															}
														}
													}
												}
											}
										}
										HX_STACK_LINE(217)
										hx::SubEq(index,tmp16);
										HX_STACK_LINE(217)
										++(count);
									}
									HX_STACK_LINE(217)
									tmp7 = index;
								}
							}
						}
					}
					HX_STACK_LINE(217)
					int ei = tmp7;		HX_STACK_VAR(ei,"ei");
					HX_STACK_LINE(217)
					int tmp8 = si;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(217)
					int tmp9 = ei;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(217)
					tmp2 = s.substring(tmp8,tmp9);
				}
			}
			HX_STACK_LINE(217)
			::String tmp3 = this->composition;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(217)
			::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(217)
			::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(217)
			{
				HX_STACK_LINE(217)
				int tmp6 = this->index;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(217)
				int cur = tmp6;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(217)
				{
					HX_STACK_LINE(217)
					::String tmp7 = this->edit;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(217)
					::String s = tmp7;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(217)
					::String tmp8 = this->edit;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(217)
					Dynamic length = tmp8.length;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(217)
					int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(217)
					{
						HX_STACK_LINE(217)
						bool tmp10 = (cur >= (int)0);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(217)
						int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(217)
						if ((tmp10)){
							HX_STACK_LINE(217)
							tmp11 = (int)0;
						}
						else{
							HX_STACK_LINE(217)
							tmp11 = s.length;
						}
						HX_STACK_LINE(217)
						int index = tmp11;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(217)
						{
							HX_STACK_LINE(217)
							::String this1 = s;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(217)
							bool tmp12 = (cur >= (int)0);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(217)
							if ((tmp12)){
								HX_STACK_LINE(217)
								int index1 = index;		HX_STACK_VAR(index1,"index1");
								HX_STACK_LINE(217)
								int tmp13 = this1.length;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(217)
								int len = tmp13;		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(217)
								int i = (int)0;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(217)
								while((true)){
									HX_STACK_LINE(217)
									bool tmp14 = (i < cur);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(217)
									bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(217)
									if ((tmp14)){
										HX_STACK_LINE(217)
										tmp15 = (index1 < len);
									}
									else{
										HX_STACK_LINE(217)
										tmp15 = false;
									}
									HX_STACK_LINE(217)
									bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(217)
									if ((tmp16)){
										HX_STACK_LINE(217)
										break;
									}
									HX_STACK_LINE(217)
									int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(217)
									{
										HX_STACK_LINE(217)
										int tmp18 = index1;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(217)
										int tmp19 = this1.cca(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(217)
										int c = tmp19;		HX_STACK_VAR(c,"c");
										HX_STACK_LINE(217)
										bool tmp20 = (c < (int)192);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(217)
										if ((tmp20)){
											HX_STACK_LINE(217)
											tmp17 = (int)1;
										}
										else{
											HX_STACK_LINE(217)
											bool tmp21 = (c < (int)224);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(217)
											if ((tmp21)){
												HX_STACK_LINE(217)
												tmp17 = (int)2;
											}
											else{
												HX_STACK_LINE(217)
												bool tmp22 = (c < (int)240);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(217)
												if ((tmp22)){
													HX_STACK_LINE(217)
													tmp17 = (int)3;
												}
												else{
													HX_STACK_LINE(217)
													bool tmp23 = (c < (int)248);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(217)
													if ((tmp23)){
														HX_STACK_LINE(217)
														tmp17 = (int)4;
													}
													else{
														HX_STACK_LINE(217)
														tmp17 = (int)1;
													}
												}
											}
										}
									}
									HX_STACK_LINE(217)
									hx::AddEq(index1,tmp17);
									HX_STACK_LINE(217)
									++(i);
								}
								HX_STACK_LINE(217)
								tmp9 = index1;
							}
							else{
								HX_STACK_LINE(217)
								int index1 = index;		HX_STACK_VAR(index1,"index1");
								HX_STACK_LINE(217)
								int count = (int)0;		HX_STACK_VAR(count,"count");
								HX_STACK_LINE(217)
								while((true)){
									HX_STACK_LINE(217)
									int tmp13 = count;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(217)
									int tmp14 = cur;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(217)
									int tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(217)
									bool tmp16 = (tmp13 < tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(217)
									bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(217)
									if ((tmp16)){
										HX_STACK_LINE(217)
										tmp17 = ((int)0 < index1);
									}
									else{
										HX_STACK_LINE(217)
										tmp17 = false;
									}
									HX_STACK_LINE(217)
									bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(217)
									if ((tmp18)){
										HX_STACK_LINE(217)
										break;
									}
									HX_STACK_LINE(217)
									int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(217)
									{
										HX_STACK_LINE(217)
										::String this2 = this1;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(217)
										{
											HX_STACK_LINE(217)
											int tmp20 = (index1 - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(217)
											int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(217)
											{
												HX_STACK_LINE(217)
												int tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(217)
												int tmp23 = this2.cca(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(217)
												tmp21 = tmp23;
											}
											HX_STACK_LINE(217)
											int c1 = tmp21;		HX_STACK_VAR(c1,"c1");
											HX_STACK_LINE(217)
											bool tmp22 = (c1 < (int)128);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(217)
											bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(217)
											bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(217)
											if ((tmp23)){
												HX_STACK_LINE(217)
												tmp24 = (c1 >= (int)192);
											}
											else{
												HX_STACK_LINE(217)
												tmp24 = true;
											}
											HX_STACK_LINE(217)
											if ((tmp24)){
												HX_STACK_LINE(217)
												tmp19 = (int)1;
											}
											else{
												HX_STACK_LINE(217)
												int tmp25 = (index1 - (int)2);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(217)
												int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(217)
												{
													HX_STACK_LINE(217)
													int tmp27 = tmp25;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(217)
													int tmp28 = this2.cca(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(217)
													tmp26 = tmp28;
												}
												HX_STACK_LINE(217)
												int tmp27 = (int(tmp26) & int((int)224));		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(217)
												bool tmp28 = (tmp27 == (int)192);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(217)
												if ((tmp28)){
													HX_STACK_LINE(217)
													tmp19 = (int)2;
												}
												else{
													HX_STACK_LINE(217)
													int tmp29 = (index1 - (int)3);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(217)
													int tmp30;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(217)
													{
														HX_STACK_LINE(217)
														int tmp31 = tmp29;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(217)
														int tmp32 = this2.cca(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(217)
														tmp30 = tmp32;
													}
													HX_STACK_LINE(217)
													int tmp31 = (int(tmp30) & int((int)240));		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(217)
													bool tmp32 = (tmp31 == (int)224);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(217)
													if ((tmp32)){
														HX_STACK_LINE(217)
														tmp19 = (int)3;
													}
													else{
														HX_STACK_LINE(217)
														int tmp33 = (index1 - (int)4);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(217)
														int tmp34;		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(217)
														{
															HX_STACK_LINE(217)
															int tmp35 = tmp33;		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(217)
															int tmp36 = this2.cca(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(217)
															tmp34 = tmp36;
														}
														HX_STACK_LINE(217)
														int tmp35 = (int(tmp34) & int((int)248));		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(217)
														bool tmp36 = (tmp35 == (int)240);		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(217)
														if ((tmp36)){
															HX_STACK_LINE(217)
															tmp19 = (int)4;
														}
														else{
															HX_STACK_LINE(217)
															tmp19 = (int)1;
														}
													}
												}
											}
										}
									}
									HX_STACK_LINE(217)
									hx::SubEq(index1,tmp19);
									HX_STACK_LINE(217)
									++(count);
								}
								HX_STACK_LINE(217)
								tmp9 = index1;
							}
						}
					}
					HX_STACK_LINE(217)
					int si = tmp9;		HX_STACK_VAR(si,"si");
					HX_STACK_LINE(217)
					bool tmp10 = (length == null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(217)
					int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(217)
					if ((tmp10)){
						HX_STACK_LINE(217)
						tmp11 = s.length;
					}
					else{
						HX_STACK_LINE(217)
						bool tmp12 = (length < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(217)
						if ((tmp12)){
							HX_STACK_LINE(217)
							tmp11 = si;
						}
						else{
							HX_STACK_LINE(217)
							int codePointOffset = length;		HX_STACK_VAR(codePointOffset,"codePointOffset");
							HX_STACK_LINE(217)
							{
								HX_STACK_LINE(217)
								::String this1 = s;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(217)
								bool tmp13 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(217)
								if ((tmp13)){
									HX_STACK_LINE(217)
									int index = si;		HX_STACK_VAR(index,"index");
									HX_STACK_LINE(217)
									int tmp14 = this1.length;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(217)
									int len = tmp14;		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(217)
									int i = (int)0;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(217)
									while((true)){
										HX_STACK_LINE(217)
										bool tmp15 = (i < codePointOffset);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(217)
										bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(217)
										if ((tmp15)){
											HX_STACK_LINE(217)
											tmp16 = (index < len);
										}
										else{
											HX_STACK_LINE(217)
											tmp16 = false;
										}
										HX_STACK_LINE(217)
										bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(217)
										if ((tmp17)){
											HX_STACK_LINE(217)
											break;
										}
										HX_STACK_LINE(217)
										int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(217)
										{
											HX_STACK_LINE(217)
											int tmp19 = index;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(217)
											int tmp20 = this1.cca(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(217)
											int c = tmp20;		HX_STACK_VAR(c,"c");
											HX_STACK_LINE(217)
											bool tmp21 = (c < (int)192);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(217)
											if ((tmp21)){
												HX_STACK_LINE(217)
												tmp18 = (int)1;
											}
											else{
												HX_STACK_LINE(217)
												bool tmp22 = (c < (int)224);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(217)
												if ((tmp22)){
													HX_STACK_LINE(217)
													tmp18 = (int)2;
												}
												else{
													HX_STACK_LINE(217)
													bool tmp23 = (c < (int)240);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(217)
													if ((tmp23)){
														HX_STACK_LINE(217)
														tmp18 = (int)3;
													}
													else{
														HX_STACK_LINE(217)
														bool tmp24 = (c < (int)248);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(217)
														if ((tmp24)){
															HX_STACK_LINE(217)
															tmp18 = (int)4;
														}
														else{
															HX_STACK_LINE(217)
															tmp18 = (int)1;
														}
													}
												}
											}
										}
										HX_STACK_LINE(217)
										hx::AddEq(index,tmp18);
										HX_STACK_LINE(217)
										++(i);
									}
									HX_STACK_LINE(217)
									tmp11 = index;
								}
								else{
									HX_STACK_LINE(217)
									int index = si;		HX_STACK_VAR(index,"index");
									HX_STACK_LINE(217)
									int count = (int)0;		HX_STACK_VAR(count,"count");
									HX_STACK_LINE(217)
									while((true)){
										HX_STACK_LINE(217)
										int tmp14 = count;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(217)
										int tmp15 = codePointOffset;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(217)
										int tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(217)
										bool tmp17 = (tmp14 < tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(217)
										bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(217)
										if ((tmp17)){
											HX_STACK_LINE(217)
											tmp18 = ((int)0 < index);
										}
										else{
											HX_STACK_LINE(217)
											tmp18 = false;
										}
										HX_STACK_LINE(217)
										bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(217)
										if ((tmp19)){
											HX_STACK_LINE(217)
											break;
										}
										HX_STACK_LINE(217)
										int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(217)
										{
											HX_STACK_LINE(217)
											::String this2 = this1;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(217)
											{
												HX_STACK_LINE(217)
												int tmp21 = (index - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(217)
												int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(217)
												{
													HX_STACK_LINE(217)
													int tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(217)
													int tmp24 = this2.cca(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(217)
													tmp22 = tmp24;
												}
												HX_STACK_LINE(217)
												int c1 = tmp22;		HX_STACK_VAR(c1,"c1");
												HX_STACK_LINE(217)
												bool tmp23 = (c1 < (int)128);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(217)
												bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(217)
												bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(217)
												if ((tmp24)){
													HX_STACK_LINE(217)
													tmp25 = (c1 >= (int)192);
												}
												else{
													HX_STACK_LINE(217)
													tmp25 = true;
												}
												HX_STACK_LINE(217)
												if ((tmp25)){
													HX_STACK_LINE(217)
													tmp20 = (int)1;
												}
												else{
													HX_STACK_LINE(217)
													int tmp26 = (index - (int)2);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(217)
													int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(217)
													{
														HX_STACK_LINE(217)
														int tmp28 = tmp26;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(217)
														int tmp29 = this2.cca(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(217)
														tmp27 = tmp29;
													}
													HX_STACK_LINE(217)
													int tmp28 = (int(tmp27) & int((int)224));		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(217)
													bool tmp29 = (tmp28 == (int)192);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(217)
													if ((tmp29)){
														HX_STACK_LINE(217)
														tmp20 = (int)2;
													}
													else{
														HX_STACK_LINE(217)
														int tmp30 = (index - (int)3);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(217)
														int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(217)
														{
															HX_STACK_LINE(217)
															int tmp32 = tmp30;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(217)
															int tmp33 = this2.cca(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(217)
															tmp31 = tmp33;
														}
														HX_STACK_LINE(217)
														int tmp32 = (int(tmp31) & int((int)240));		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(217)
														bool tmp33 = (tmp32 == (int)224);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(217)
														if ((tmp33)){
															HX_STACK_LINE(217)
															tmp20 = (int)3;
														}
														else{
															HX_STACK_LINE(217)
															int tmp34 = (index - (int)4);		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(217)
															int tmp35;		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(217)
															{
																HX_STACK_LINE(217)
																int tmp36 = tmp34;		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(217)
																int tmp37 = this2.cca(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(217)
																tmp35 = tmp37;
															}
															HX_STACK_LINE(217)
															int tmp36 = (int(tmp35) & int((int)248));		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(217)
															bool tmp37 = (tmp36 == (int)240);		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(217)
															if ((tmp37)){
																HX_STACK_LINE(217)
																tmp20 = (int)4;
															}
															else{
																HX_STACK_LINE(217)
																tmp20 = (int)1;
															}
														}
													}
												}
											}
										}
										HX_STACK_LINE(217)
										hx::SubEq(index,tmp20);
										HX_STACK_LINE(217)
										++(count);
									}
									HX_STACK_LINE(217)
									tmp11 = index;
								}
							}
						}
					}
					HX_STACK_LINE(217)
					int ei = tmp11;		HX_STACK_VAR(ei,"ei");
					HX_STACK_LINE(217)
					int tmp12 = si;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(217)
					int tmp13 = ei;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(217)
					tmp5 = s.substring(tmp12,tmp13);
				}
			}
			HX_STACK_LINE(217)
			::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(217)
			this->display = tmp6;
		}
		HX_STACK_LINE(220)
		::mint::Label tmp2 = this->label;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(220)
		::String tmp3 = this->display;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(220)
		tmp2->set_text(tmp3);
		HX_STACK_LINE(221)
		{
			HX_STACK_LINE(221)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(221)
			::mint::core::Signal tmp4 = this->onchangeindex;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(221)
			int tmp5 = tmp4->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(221)
			int _count = tmp5;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(221)
			while((true)){
				HX_STACK_LINE(221)
				bool tmp6 = (_idx < _count);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(221)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(221)
				if ((tmp7)){
					HX_STACK_LINE(221)
					break;
				}
				HX_STACK_LINE(221)
				::mint::core::Signal tmp8 = this->onchangeindex;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(221)
				Dynamic tmp9 = tmp8->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(221)
				Dynamic fn = tmp9;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(221)
				bool tmp10 = (fn != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(221)
				if ((tmp10)){
					HX_STACK_LINE(221)
					int tmp11 = this->index;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(221)
					fn(tmp11).Cast< Void >();
				}
				HX_STACK_LINE(221)
				(_idx)++;
			}
			HX_STACK_LINE(221)
			while((true)){
				HX_STACK_LINE(221)
				bool tmp6 = (_count > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(221)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(221)
				if ((tmp7)){
					HX_STACK_LINE(221)
					break;
				}
				HX_STACK_LINE(221)
				::mint::core::Signal tmp8 = this->onchangeindex;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(221)
				int tmp9 = (_count - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(221)
				Dynamic tmp10 = tmp8->listeners->__GetItem(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(221)
				Dynamic fn = tmp10;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(221)
				bool tmp11 = (fn == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(221)
				if ((tmp11)){
					HX_STACK_LINE(221)
					::mint::core::Signal tmp12 = this->onchangeindex;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(221)
					int tmp13 = (_count - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(221)
					tmp12->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp13,(int)1);
				}
				HX_STACK_LINE(221)
				(_count)--;
			}
		}
		HX_STACK_LINE(223)
		bool tmp4 = _emit;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(223)
		if ((tmp4)){
			HX_STACK_LINE(50)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(224)
			::mint::core::Signal tmp5 = this->onchange;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(51)
			int tmp6 = tmp5->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(51)
			int _count = tmp6;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp7 = (_idx < _count);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(52)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(52)
				if ((tmp8)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(224)
				::mint::core::Signal tmp9 = this->onchange;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(53)
				Dynamic tmp10 = tmp9->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(53)
				Dynamic fn = tmp10;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(54)
				bool tmp11 = (fn != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(54)
				if ((tmp11)){
					HX_STACK_LINE(224)
					::String tmp12 = this->edit;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(224)
					::String tmp13 = this->display;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(224)
					bool tmp14 = _from_typing;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(55)
					fn(tmp12,tmp13,tmp14).Cast< Void >();
				}
				HX_STACK_LINE(57)
				(_idx)++;
			}
			HX_STACK_LINE(60)
			while((true)){
				HX_STACK_LINE(60)
				bool tmp7 = (_count > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(60)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(60)
				if ((tmp8)){
					HX_STACK_LINE(60)
					break;
				}
				HX_STACK_LINE(224)
				::mint::core::Signal tmp9 = this->onchange;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(61)
				int tmp10 = (_count - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(61)
				Dynamic tmp11 = tmp9->listeners->__GetItem(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(61)
				Dynamic fn = tmp11;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(62)
				bool tmp12 = (fn == null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(62)
				if ((tmp12)){
					HX_STACK_LINE(224)
					::mint::core::Signal tmp13 = this->onchange;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(62)
					int tmp14 = (_count - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(62)
					tmp13->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp14,(int)1);
				}
				HX_STACK_LINE(63)
				(_count)--;
			}
		}
		HX_STACK_LINE(227)
		::String tmp5 = this->edit;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(227)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(TextEdit_obj,refresh,return )

::String TextEdit_obj::get_text( ){
	HX_STACK_FRAME("mint.TextEdit","get_text",0xd2f7b141,"mint.TextEdit.get_text","mint/TextEdit.hx",231,0x23cb477a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(232)
	::String tmp = this->edit;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(232)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextEdit_obj,get_text,return )

::String TextEdit_obj::get_display_text( ){
	HX_STACK_FRAME("mint.TextEdit","get_display_text",0xb948e79e,"mint.TextEdit.get_display_text","mint/TextEdit.hx",235,0x23cb477a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(236)
	::String tmp = this->display;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextEdit_obj,get_display_text,return )

::String TextEdit_obj::get_display_char( ){
	HX_STACK_FRAME("mint.TextEdit","get_display_char",0xae0e79c7,"mint.TextEdit.get_display_char","mint/TextEdit.hx",239,0x23cb477a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(240)
	::String tmp = this->display_char;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(240)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextEdit_obj,get_display_char,return )

::String TextEdit_obj::set_text( ::String v){
	HX_STACK_FRAME("mint.TextEdit","set_text",0x81550ab5,"mint.TextEdit.set_text","mint/TextEdit.hx",243,0x23cb477a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(244)
	::String tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(244)
	int tmp1 = v.length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(244)
	int tmp2 = ::mint::core::unifill::_Utf8::Utf8_Impl__obj::codePointCount(tmp,(int)0,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(244)
	this->index = tmp2;
	HX_STACK_LINE(245)
	::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(245)
	{
		HX_STACK_LINE(245)
		bool _emit = true;		HX_STACK_VAR(_emit,"_emit");
		HX_STACK_LINE(245)
		this->edit = v;
		HX_STACK_LINE(245)
		::String tmp4 = this->display_char;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(245)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(245)
		if ((tmp5)){
			HX_STACK_LINE(245)
			this->display = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			HX_STACK_LINE(245)
			::String tmp6 = v;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(245)
			int tmp7 = v.length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(245)
			int tmp8 = ::mint::core::unifill::_Utf8::Utf8_Impl__obj::codePointCount(tmp6,(int)0,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(245)
			int _l = tmp8;		HX_STACK_VAR(_l,"_l");
			HX_STACK_LINE(245)
			{
				HX_STACK_LINE(245)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(245)
				while((true)){
					HX_STACK_LINE(245)
					bool tmp9 = (_g < _l);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(245)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(245)
					if ((tmp10)){
						HX_STACK_LINE(245)
						break;
					}
					HX_STACK_LINE(245)
					int tmp11 = (_g)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(245)
					int i = tmp11;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(245)
					::String tmp12 = this->display_char;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(245)
					hx::AddEq(this->display,tmp12);
				}
			}
		}
		else{
			HX_STACK_LINE(245)
			::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(245)
			{
				HX_STACK_LINE(245)
				int tmp7 = this->index;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(245)
				int cur = tmp7;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(245)
				{
					HX_STACK_LINE(245)
					::String tmp8 = this->edit;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(245)
					::String s = tmp8;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(245)
					int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(245)
					{
						HX_STACK_LINE(245)
						bool tmp10 = true;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(245)
						int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(245)
						if ((tmp10)){
							HX_STACK_LINE(245)
							tmp11 = (int)0;
						}
						else{
							HX_STACK_LINE(245)
							tmp11 = s.length;
						}
						HX_STACK_LINE(245)
						int index = tmp11;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(245)
						{
							HX_STACK_LINE(245)
							::String this1 = s;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(245)
							bool tmp12 = true;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(245)
							if ((tmp12)){
								HX_STACK_LINE(245)
								int index1 = index;		HX_STACK_VAR(index1,"index1");
								HX_STACK_LINE(245)
								int tmp13 = this1.length;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(245)
								int len = tmp13;		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(245)
								int i = (int)0;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(245)
								while((true)){
									HX_STACK_LINE(245)
									bool tmp14 = (i < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(245)
									bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(245)
									if ((tmp14)){
										HX_STACK_LINE(245)
										tmp15 = (index1 < len);
									}
									else{
										HX_STACK_LINE(245)
										tmp15 = false;
									}
									HX_STACK_LINE(245)
									bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(245)
									if ((tmp16)){
										HX_STACK_LINE(245)
										break;
									}
									HX_STACK_LINE(245)
									int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(245)
									{
										HX_STACK_LINE(245)
										int tmp18 = index1;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(245)
										int tmp19 = this1.cca(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(245)
										int c = tmp19;		HX_STACK_VAR(c,"c");
										HX_STACK_LINE(245)
										bool tmp20 = (c < (int)192);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(245)
										if ((tmp20)){
											HX_STACK_LINE(245)
											tmp17 = (int)1;
										}
										else{
											HX_STACK_LINE(245)
											bool tmp21 = (c < (int)224);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(245)
											if ((tmp21)){
												HX_STACK_LINE(245)
												tmp17 = (int)2;
											}
											else{
												HX_STACK_LINE(245)
												bool tmp22 = (c < (int)240);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(245)
												if ((tmp22)){
													HX_STACK_LINE(245)
													tmp17 = (int)3;
												}
												else{
													HX_STACK_LINE(245)
													bool tmp23 = (c < (int)248);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(245)
													if ((tmp23)){
														HX_STACK_LINE(245)
														tmp17 = (int)4;
													}
													else{
														HX_STACK_LINE(245)
														tmp17 = (int)1;
													}
												}
											}
										}
									}
									HX_STACK_LINE(245)
									hx::AddEq(index1,tmp17);
									HX_STACK_LINE(245)
									++(i);
								}
								HX_STACK_LINE(245)
								tmp9 = index1;
							}
							else{
								HX_STACK_LINE(245)
								int index1 = index;		HX_STACK_VAR(index1,"index1");
								HX_STACK_LINE(245)
								int count = (int)0;		HX_STACK_VAR(count,"count");
								HX_STACK_LINE(245)
								while((true)){
									HX_STACK_LINE(245)
									int tmp13 = count;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(245)
									int tmp14 = (int)0;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(245)
									bool tmp15 = (tmp13 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(245)
									bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(245)
									if ((tmp15)){
										HX_STACK_LINE(245)
										tmp16 = ((int)0 < index1);
									}
									else{
										HX_STACK_LINE(245)
										tmp16 = false;
									}
									HX_STACK_LINE(245)
									bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(245)
									if ((tmp17)){
										HX_STACK_LINE(245)
										break;
									}
									HX_STACK_LINE(245)
									int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(245)
									{
										HX_STACK_LINE(245)
										::String this2 = this1;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(245)
										{
											HX_STACK_LINE(245)
											int tmp19 = (index1 - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(245)
											int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(245)
											{
												HX_STACK_LINE(245)
												int tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(245)
												int tmp22 = this2.cca(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(245)
												tmp20 = tmp22;
											}
											HX_STACK_LINE(245)
											int c1 = tmp20;		HX_STACK_VAR(c1,"c1");
											HX_STACK_LINE(245)
											bool tmp21 = (c1 < (int)128);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(245)
											bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(245)
											bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(245)
											if ((tmp22)){
												HX_STACK_LINE(245)
												tmp23 = (c1 >= (int)192);
											}
											else{
												HX_STACK_LINE(245)
												tmp23 = true;
											}
											HX_STACK_LINE(245)
											if ((tmp23)){
												HX_STACK_LINE(245)
												tmp18 = (int)1;
											}
											else{
												HX_STACK_LINE(245)
												int tmp24 = (index1 - (int)2);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(245)
												int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(245)
												{
													HX_STACK_LINE(245)
													int tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(245)
													int tmp27 = this2.cca(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(245)
													tmp25 = tmp27;
												}
												HX_STACK_LINE(245)
												int tmp26 = (int(tmp25) & int((int)224));		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(245)
												bool tmp27 = (tmp26 == (int)192);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(245)
												if ((tmp27)){
													HX_STACK_LINE(245)
													tmp18 = (int)2;
												}
												else{
													HX_STACK_LINE(245)
													int tmp28 = (index1 - (int)3);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(245)
													int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(245)
													{
														HX_STACK_LINE(245)
														int tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(245)
														int tmp31 = this2.cca(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(245)
														tmp29 = tmp31;
													}
													HX_STACK_LINE(245)
													int tmp30 = (int(tmp29) & int((int)240));		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(245)
													bool tmp31 = (tmp30 == (int)224);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(245)
													if ((tmp31)){
														HX_STACK_LINE(245)
														tmp18 = (int)3;
													}
													else{
														HX_STACK_LINE(245)
														int tmp32 = (index1 - (int)4);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(245)
														int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(245)
														{
															HX_STACK_LINE(245)
															int tmp34 = tmp32;		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(245)
															int tmp35 = this2.cca(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(245)
															tmp33 = tmp35;
														}
														HX_STACK_LINE(245)
														int tmp34 = (int(tmp33) & int((int)248));		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(245)
														bool tmp35 = (tmp34 == (int)240);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(245)
														if ((tmp35)){
															HX_STACK_LINE(245)
															tmp18 = (int)4;
														}
														else{
															HX_STACK_LINE(245)
															tmp18 = (int)1;
														}
													}
												}
											}
										}
									}
									HX_STACK_LINE(245)
									hx::SubEq(index1,tmp18);
									HX_STACK_LINE(245)
									++(count);
								}
								HX_STACK_LINE(245)
								tmp9 = index1;
							}
						}
					}
					HX_STACK_LINE(245)
					int si = tmp9;		HX_STACK_VAR(si,"si");
					HX_STACK_LINE(245)
					bool tmp10 = (cur == null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(245)
					int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(245)
					if ((tmp10)){
						HX_STACK_LINE(245)
						tmp11 = s.length;
					}
					else{
						HX_STACK_LINE(245)
						bool tmp12 = (cur < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(245)
						if ((tmp12)){
							HX_STACK_LINE(245)
							tmp11 = si;
						}
						else{
							HX_STACK_LINE(245)
							int codePointOffset = cur;		HX_STACK_VAR(codePointOffset,"codePointOffset");
							HX_STACK_LINE(245)
							{
								HX_STACK_LINE(245)
								::String this1 = s;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(245)
								bool tmp13 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(245)
								if ((tmp13)){
									HX_STACK_LINE(245)
									int index = si;		HX_STACK_VAR(index,"index");
									HX_STACK_LINE(245)
									int tmp14 = this1.length;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(245)
									int len = tmp14;		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(245)
									int i = (int)0;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(245)
									while((true)){
										HX_STACK_LINE(245)
										bool tmp15 = (i < codePointOffset);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(245)
										bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(245)
										if ((tmp15)){
											HX_STACK_LINE(245)
											tmp16 = (index < len);
										}
										else{
											HX_STACK_LINE(245)
											tmp16 = false;
										}
										HX_STACK_LINE(245)
										bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(245)
										if ((tmp17)){
											HX_STACK_LINE(245)
											break;
										}
										HX_STACK_LINE(245)
										int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(245)
										{
											HX_STACK_LINE(245)
											int tmp19 = index;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(245)
											int tmp20 = this1.cca(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(245)
											int c = tmp20;		HX_STACK_VAR(c,"c");
											HX_STACK_LINE(245)
											bool tmp21 = (c < (int)192);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(245)
											if ((tmp21)){
												HX_STACK_LINE(245)
												tmp18 = (int)1;
											}
											else{
												HX_STACK_LINE(245)
												bool tmp22 = (c < (int)224);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(245)
												if ((tmp22)){
													HX_STACK_LINE(245)
													tmp18 = (int)2;
												}
												else{
													HX_STACK_LINE(245)
													bool tmp23 = (c < (int)240);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(245)
													if ((tmp23)){
														HX_STACK_LINE(245)
														tmp18 = (int)3;
													}
													else{
														HX_STACK_LINE(245)
														bool tmp24 = (c < (int)248);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(245)
														if ((tmp24)){
															HX_STACK_LINE(245)
															tmp18 = (int)4;
														}
														else{
															HX_STACK_LINE(245)
															tmp18 = (int)1;
														}
													}
												}
											}
										}
										HX_STACK_LINE(245)
										hx::AddEq(index,tmp18);
										HX_STACK_LINE(245)
										++(i);
									}
									HX_STACK_LINE(245)
									tmp11 = index;
								}
								else{
									HX_STACK_LINE(245)
									int index = si;		HX_STACK_VAR(index,"index");
									HX_STACK_LINE(245)
									int count = (int)0;		HX_STACK_VAR(count,"count");
									HX_STACK_LINE(245)
									while((true)){
										HX_STACK_LINE(245)
										int tmp14 = count;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(245)
										int tmp15 = codePointOffset;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(245)
										int tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(245)
										bool tmp17 = (tmp14 < tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(245)
										bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(245)
										if ((tmp17)){
											HX_STACK_LINE(245)
											tmp18 = ((int)0 < index);
										}
										else{
											HX_STACK_LINE(245)
											tmp18 = false;
										}
										HX_STACK_LINE(245)
										bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(245)
										if ((tmp19)){
											HX_STACK_LINE(245)
											break;
										}
										HX_STACK_LINE(245)
										int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(245)
										{
											HX_STACK_LINE(245)
											::String this2 = this1;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(245)
											{
												HX_STACK_LINE(245)
												int tmp21 = (index - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(245)
												int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(245)
												{
													HX_STACK_LINE(245)
													int tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(245)
													int tmp24 = this2.cca(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(245)
													tmp22 = tmp24;
												}
												HX_STACK_LINE(245)
												int c1 = tmp22;		HX_STACK_VAR(c1,"c1");
												HX_STACK_LINE(245)
												bool tmp23 = (c1 < (int)128);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(245)
												bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(245)
												bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(245)
												if ((tmp24)){
													HX_STACK_LINE(245)
													tmp25 = (c1 >= (int)192);
												}
												else{
													HX_STACK_LINE(245)
													tmp25 = true;
												}
												HX_STACK_LINE(245)
												if ((tmp25)){
													HX_STACK_LINE(245)
													tmp20 = (int)1;
												}
												else{
													HX_STACK_LINE(245)
													int tmp26 = (index - (int)2);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(245)
													int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(245)
													{
														HX_STACK_LINE(245)
														int tmp28 = tmp26;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(245)
														int tmp29 = this2.cca(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(245)
														tmp27 = tmp29;
													}
													HX_STACK_LINE(245)
													int tmp28 = (int(tmp27) & int((int)224));		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(245)
													bool tmp29 = (tmp28 == (int)192);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(245)
													if ((tmp29)){
														HX_STACK_LINE(245)
														tmp20 = (int)2;
													}
													else{
														HX_STACK_LINE(245)
														int tmp30 = (index - (int)3);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(245)
														int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(245)
														{
															HX_STACK_LINE(245)
															int tmp32 = tmp30;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(245)
															int tmp33 = this2.cca(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(245)
															tmp31 = tmp33;
														}
														HX_STACK_LINE(245)
														int tmp32 = (int(tmp31) & int((int)240));		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(245)
														bool tmp33 = (tmp32 == (int)224);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(245)
														if ((tmp33)){
															HX_STACK_LINE(245)
															tmp20 = (int)3;
														}
														else{
															HX_STACK_LINE(245)
															int tmp34 = (index - (int)4);		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(245)
															int tmp35;		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(245)
															{
																HX_STACK_LINE(245)
																int tmp36 = tmp34;		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(245)
																int tmp37 = this2.cca(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(245)
																tmp35 = tmp37;
															}
															HX_STACK_LINE(245)
															int tmp36 = (int(tmp35) & int((int)248));		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(245)
															bool tmp37 = (tmp36 == (int)240);		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(245)
															if ((tmp37)){
																HX_STACK_LINE(245)
																tmp20 = (int)4;
															}
															else{
																HX_STACK_LINE(245)
																tmp20 = (int)1;
															}
														}
													}
												}
											}
										}
										HX_STACK_LINE(245)
										hx::SubEq(index,tmp20);
										HX_STACK_LINE(245)
										++(count);
									}
									HX_STACK_LINE(245)
									tmp11 = index;
								}
							}
						}
					}
					HX_STACK_LINE(245)
					int ei = tmp11;		HX_STACK_VAR(ei,"ei");
					HX_STACK_LINE(245)
					int tmp12 = si;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(245)
					int tmp13 = ei;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(245)
					tmp6 = s.substring(tmp12,tmp13);
				}
			}
			HX_STACK_LINE(245)
			::String tmp7 = this->composition;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(245)
			::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(245)
			::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(245)
			{
				HX_STACK_LINE(245)
				int tmp10 = this->index;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(245)
				int cur = tmp10;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(245)
				{
					HX_STACK_LINE(245)
					::String tmp11 = this->edit;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(245)
					::String s = tmp11;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(245)
					::String tmp12 = this->edit;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(245)
					Dynamic length = tmp12.length;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(245)
					int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(245)
					{
						HX_STACK_LINE(245)
						bool tmp14 = (cur >= (int)0);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(245)
						int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(245)
						if ((tmp14)){
							HX_STACK_LINE(245)
							tmp15 = (int)0;
						}
						else{
							HX_STACK_LINE(245)
							tmp15 = s.length;
						}
						HX_STACK_LINE(245)
						int index = tmp15;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(245)
						{
							HX_STACK_LINE(245)
							::String this1 = s;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(245)
							bool tmp16 = (cur >= (int)0);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(245)
							if ((tmp16)){
								HX_STACK_LINE(245)
								int index1 = index;		HX_STACK_VAR(index1,"index1");
								HX_STACK_LINE(245)
								int tmp17 = this1.length;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(245)
								int len = tmp17;		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(245)
								int i = (int)0;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(245)
								while((true)){
									HX_STACK_LINE(245)
									bool tmp18 = (i < cur);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(245)
									bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(245)
									if ((tmp18)){
										HX_STACK_LINE(245)
										tmp19 = (index1 < len);
									}
									else{
										HX_STACK_LINE(245)
										tmp19 = false;
									}
									HX_STACK_LINE(245)
									bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(245)
									if ((tmp20)){
										HX_STACK_LINE(245)
										break;
									}
									HX_STACK_LINE(245)
									int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(245)
									{
										HX_STACK_LINE(245)
										int tmp22 = index1;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(245)
										int tmp23 = this1.cca(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(245)
										int c = tmp23;		HX_STACK_VAR(c,"c");
										HX_STACK_LINE(245)
										bool tmp24 = (c < (int)192);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(245)
										if ((tmp24)){
											HX_STACK_LINE(245)
											tmp21 = (int)1;
										}
										else{
											HX_STACK_LINE(245)
											bool tmp25 = (c < (int)224);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(245)
											if ((tmp25)){
												HX_STACK_LINE(245)
												tmp21 = (int)2;
											}
											else{
												HX_STACK_LINE(245)
												bool tmp26 = (c < (int)240);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(245)
												if ((tmp26)){
													HX_STACK_LINE(245)
													tmp21 = (int)3;
												}
												else{
													HX_STACK_LINE(245)
													bool tmp27 = (c < (int)248);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(245)
													if ((tmp27)){
														HX_STACK_LINE(245)
														tmp21 = (int)4;
													}
													else{
														HX_STACK_LINE(245)
														tmp21 = (int)1;
													}
												}
											}
										}
									}
									HX_STACK_LINE(245)
									hx::AddEq(index1,tmp21);
									HX_STACK_LINE(245)
									++(i);
								}
								HX_STACK_LINE(245)
								tmp13 = index1;
							}
							else{
								HX_STACK_LINE(245)
								int index1 = index;		HX_STACK_VAR(index1,"index1");
								HX_STACK_LINE(245)
								int count = (int)0;		HX_STACK_VAR(count,"count");
								HX_STACK_LINE(245)
								while((true)){
									HX_STACK_LINE(245)
									int tmp17 = count;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(245)
									int tmp18 = cur;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(245)
									int tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(245)
									bool tmp20 = (tmp17 < tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(245)
									bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(245)
									if ((tmp20)){
										HX_STACK_LINE(245)
										tmp21 = ((int)0 < index1);
									}
									else{
										HX_STACK_LINE(245)
										tmp21 = false;
									}
									HX_STACK_LINE(245)
									bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(245)
									if ((tmp22)){
										HX_STACK_LINE(245)
										break;
									}
									HX_STACK_LINE(245)
									int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(245)
									{
										HX_STACK_LINE(245)
										::String this2 = this1;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(245)
										{
											HX_STACK_LINE(245)
											int tmp24 = (index1 - (int)1);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(245)
											int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(245)
											{
												HX_STACK_LINE(245)
												int tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(245)
												int tmp27 = this2.cca(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(245)
												tmp25 = tmp27;
											}
											HX_STACK_LINE(245)
											int c1 = tmp25;		HX_STACK_VAR(c1,"c1");
											HX_STACK_LINE(245)
											bool tmp26 = (c1 < (int)128);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(245)
											bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(245)
											bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(245)
											if ((tmp27)){
												HX_STACK_LINE(245)
												tmp28 = (c1 >= (int)192);
											}
											else{
												HX_STACK_LINE(245)
												tmp28 = true;
											}
											HX_STACK_LINE(245)
											if ((tmp28)){
												HX_STACK_LINE(245)
												tmp23 = (int)1;
											}
											else{
												HX_STACK_LINE(245)
												int tmp29 = (index1 - (int)2);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(245)
												int tmp30;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(245)
												{
													HX_STACK_LINE(245)
													int tmp31 = tmp29;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(245)
													int tmp32 = this2.cca(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(245)
													tmp30 = tmp32;
												}
												HX_STACK_LINE(245)
												int tmp31 = (int(tmp30) & int((int)224));		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(245)
												bool tmp32 = (tmp31 == (int)192);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(245)
												if ((tmp32)){
													HX_STACK_LINE(245)
													tmp23 = (int)2;
												}
												else{
													HX_STACK_LINE(245)
													int tmp33 = (index1 - (int)3);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(245)
													int tmp34;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(245)
													{
														HX_STACK_LINE(245)
														int tmp35 = tmp33;		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(245)
														int tmp36 = this2.cca(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(245)
														tmp34 = tmp36;
													}
													HX_STACK_LINE(245)
													int tmp35 = (int(tmp34) & int((int)240));		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(245)
													bool tmp36 = (tmp35 == (int)224);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(245)
													if ((tmp36)){
														HX_STACK_LINE(245)
														tmp23 = (int)3;
													}
													else{
														HX_STACK_LINE(245)
														int tmp37 = (index1 - (int)4);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(245)
														int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(245)
														{
															HX_STACK_LINE(245)
															int tmp39 = tmp37;		HX_STACK_VAR(tmp39,"tmp39");
															HX_STACK_LINE(245)
															int tmp40 = this2.cca(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
															HX_STACK_LINE(245)
															tmp38 = tmp40;
														}
														HX_STACK_LINE(245)
														int tmp39 = (int(tmp38) & int((int)248));		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(245)
														bool tmp40 = (tmp39 == (int)240);		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(245)
														if ((tmp40)){
															HX_STACK_LINE(245)
															tmp23 = (int)4;
														}
														else{
															HX_STACK_LINE(245)
															tmp23 = (int)1;
														}
													}
												}
											}
										}
									}
									HX_STACK_LINE(245)
									hx::SubEq(index1,tmp23);
									HX_STACK_LINE(245)
									++(count);
								}
								HX_STACK_LINE(245)
								tmp13 = index1;
							}
						}
					}
					HX_STACK_LINE(245)
					int si = tmp13;		HX_STACK_VAR(si,"si");
					HX_STACK_LINE(245)
					bool tmp14 = (length == null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(245)
					int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(245)
					if ((tmp14)){
						HX_STACK_LINE(245)
						tmp15 = s.length;
					}
					else{
						HX_STACK_LINE(245)
						bool tmp16 = (length < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(245)
						if ((tmp16)){
							HX_STACK_LINE(245)
							tmp15 = si;
						}
						else{
							HX_STACK_LINE(245)
							int codePointOffset = length;		HX_STACK_VAR(codePointOffset,"codePointOffset");
							HX_STACK_LINE(245)
							{
								HX_STACK_LINE(245)
								::String this1 = s;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(245)
								bool tmp17 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(245)
								if ((tmp17)){
									HX_STACK_LINE(245)
									int index = si;		HX_STACK_VAR(index,"index");
									HX_STACK_LINE(245)
									int tmp18 = this1.length;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(245)
									int len = tmp18;		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(245)
									int i = (int)0;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(245)
									while((true)){
										HX_STACK_LINE(245)
										bool tmp19 = (i < codePointOffset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(245)
										bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(245)
										if ((tmp19)){
											HX_STACK_LINE(245)
											tmp20 = (index < len);
										}
										else{
											HX_STACK_LINE(245)
											tmp20 = false;
										}
										HX_STACK_LINE(245)
										bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(245)
										if ((tmp21)){
											HX_STACK_LINE(245)
											break;
										}
										HX_STACK_LINE(245)
										int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(245)
										{
											HX_STACK_LINE(245)
											int tmp23 = index;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(245)
											int tmp24 = this1.cca(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(245)
											int c = tmp24;		HX_STACK_VAR(c,"c");
											HX_STACK_LINE(245)
											bool tmp25 = (c < (int)192);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(245)
											if ((tmp25)){
												HX_STACK_LINE(245)
												tmp22 = (int)1;
											}
											else{
												HX_STACK_LINE(245)
												bool tmp26 = (c < (int)224);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(245)
												if ((tmp26)){
													HX_STACK_LINE(245)
													tmp22 = (int)2;
												}
												else{
													HX_STACK_LINE(245)
													bool tmp27 = (c < (int)240);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(245)
													if ((tmp27)){
														HX_STACK_LINE(245)
														tmp22 = (int)3;
													}
													else{
														HX_STACK_LINE(245)
														bool tmp28 = (c < (int)248);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(245)
														if ((tmp28)){
															HX_STACK_LINE(245)
															tmp22 = (int)4;
														}
														else{
															HX_STACK_LINE(245)
															tmp22 = (int)1;
														}
													}
												}
											}
										}
										HX_STACK_LINE(245)
										hx::AddEq(index,tmp22);
										HX_STACK_LINE(245)
										++(i);
									}
									HX_STACK_LINE(245)
									tmp15 = index;
								}
								else{
									HX_STACK_LINE(245)
									int index = si;		HX_STACK_VAR(index,"index");
									HX_STACK_LINE(245)
									int count = (int)0;		HX_STACK_VAR(count,"count");
									HX_STACK_LINE(245)
									while((true)){
										HX_STACK_LINE(245)
										int tmp18 = count;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(245)
										int tmp19 = codePointOffset;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(245)
										int tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(245)
										bool tmp21 = (tmp18 < tmp20);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(245)
										bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(245)
										if ((tmp21)){
											HX_STACK_LINE(245)
											tmp22 = ((int)0 < index);
										}
										else{
											HX_STACK_LINE(245)
											tmp22 = false;
										}
										HX_STACK_LINE(245)
										bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(245)
										if ((tmp23)){
											HX_STACK_LINE(245)
											break;
										}
										HX_STACK_LINE(245)
										int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(245)
										{
											HX_STACK_LINE(245)
											::String this2 = this1;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(245)
											{
												HX_STACK_LINE(245)
												int tmp25 = (index - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(245)
												int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(245)
												{
													HX_STACK_LINE(245)
													int tmp27 = tmp25;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(245)
													int tmp28 = this2.cca(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(245)
													tmp26 = tmp28;
												}
												HX_STACK_LINE(245)
												int c1 = tmp26;		HX_STACK_VAR(c1,"c1");
												HX_STACK_LINE(245)
												bool tmp27 = (c1 < (int)128);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(245)
												bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(245)
												bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(245)
												if ((tmp28)){
													HX_STACK_LINE(245)
													tmp29 = (c1 >= (int)192);
												}
												else{
													HX_STACK_LINE(245)
													tmp29 = true;
												}
												HX_STACK_LINE(245)
												if ((tmp29)){
													HX_STACK_LINE(245)
													tmp24 = (int)1;
												}
												else{
													HX_STACK_LINE(245)
													int tmp30 = (index - (int)2);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(245)
													int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(245)
													{
														HX_STACK_LINE(245)
														int tmp32 = tmp30;		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(245)
														int tmp33 = this2.cca(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(245)
														tmp31 = tmp33;
													}
													HX_STACK_LINE(245)
													int tmp32 = (int(tmp31) & int((int)224));		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(245)
													bool tmp33 = (tmp32 == (int)192);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(245)
													if ((tmp33)){
														HX_STACK_LINE(245)
														tmp24 = (int)2;
													}
													else{
														HX_STACK_LINE(245)
														int tmp34 = (index - (int)3);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(245)
														int tmp35;		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(245)
														{
															HX_STACK_LINE(245)
															int tmp36 = tmp34;		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(245)
															int tmp37 = this2.cca(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(245)
															tmp35 = tmp37;
														}
														HX_STACK_LINE(245)
														int tmp36 = (int(tmp35) & int((int)240));		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(245)
														bool tmp37 = (tmp36 == (int)224);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(245)
														if ((tmp37)){
															HX_STACK_LINE(245)
															tmp24 = (int)3;
														}
														else{
															HX_STACK_LINE(245)
															int tmp38 = (index - (int)4);		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(245)
															int tmp39;		HX_STACK_VAR(tmp39,"tmp39");
															HX_STACK_LINE(245)
															{
																HX_STACK_LINE(245)
																int tmp40 = tmp38;		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(245)
																int tmp41 = this2.cca(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(245)
																tmp39 = tmp41;
															}
															HX_STACK_LINE(245)
															int tmp40 = (int(tmp39) & int((int)248));		HX_STACK_VAR(tmp40,"tmp40");
															HX_STACK_LINE(245)
															bool tmp41 = (tmp40 == (int)240);		HX_STACK_VAR(tmp41,"tmp41");
															HX_STACK_LINE(245)
															if ((tmp41)){
																HX_STACK_LINE(245)
																tmp24 = (int)4;
															}
															else{
																HX_STACK_LINE(245)
																tmp24 = (int)1;
															}
														}
													}
												}
											}
										}
										HX_STACK_LINE(245)
										hx::SubEq(index,tmp24);
										HX_STACK_LINE(245)
										++(count);
									}
									HX_STACK_LINE(245)
									tmp15 = index;
								}
							}
						}
					}
					HX_STACK_LINE(245)
					int ei = tmp15;		HX_STACK_VAR(ei,"ei");
					HX_STACK_LINE(245)
					int tmp16 = si;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(245)
					int tmp17 = ei;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(245)
					tmp9 = s.substring(tmp16,tmp17);
				}
			}
			HX_STACK_LINE(245)
			::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(245)
			this->display = tmp10;
		}
		HX_STACK_LINE(245)
		::mint::Label tmp6 = this->label;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(245)
		::String tmp7 = this->display;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(245)
		tmp6->set_text(tmp7);
		HX_STACK_LINE(245)
		{
			HX_STACK_LINE(245)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(245)
			::mint::core::Signal tmp8 = this->onchangeindex;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(245)
			int tmp9 = tmp8->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(245)
			int _count = tmp9;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(245)
			while((true)){
				HX_STACK_LINE(245)
				bool tmp10 = (_idx < _count);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(245)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(245)
				if ((tmp11)){
					HX_STACK_LINE(245)
					break;
				}
				HX_STACK_LINE(245)
				::mint::core::Signal tmp12 = this->onchangeindex;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(245)
				Dynamic tmp13 = tmp12->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(245)
				Dynamic fn = tmp13;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(245)
				bool tmp14 = (fn != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(245)
				if ((tmp14)){
					HX_STACK_LINE(245)
					int tmp15 = this->index;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(245)
					fn(tmp15).Cast< Void >();
				}
				HX_STACK_LINE(245)
				(_idx)++;
			}
			HX_STACK_LINE(245)
			while((true)){
				HX_STACK_LINE(245)
				bool tmp10 = (_count > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(245)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(245)
				if ((tmp11)){
					HX_STACK_LINE(245)
					break;
				}
				HX_STACK_LINE(245)
				::mint::core::Signal tmp12 = this->onchangeindex;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(245)
				int tmp13 = (_count - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(245)
				Dynamic tmp14 = tmp12->listeners->__GetItem(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(245)
				Dynamic fn = tmp14;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(245)
				bool tmp15 = (fn == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(245)
				if ((tmp15)){
					HX_STACK_LINE(245)
					::mint::core::Signal tmp16 = this->onchangeindex;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(245)
					int tmp17 = (_count - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(245)
					tmp16->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp17,(int)1);
				}
				HX_STACK_LINE(245)
				(_count)--;
			}
		}
		HX_STACK_LINE(245)
		bool tmp8 = _emit;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(245)
		if ((tmp8)){
			HX_STACK_LINE(245)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(245)
			::mint::core::Signal tmp9 = this->onchange;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(245)
			int tmp10 = tmp9->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(245)
			int _count = tmp10;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(245)
			while((true)){
				HX_STACK_LINE(245)
				bool tmp11 = (_idx < _count);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(245)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(245)
				if ((tmp12)){
					HX_STACK_LINE(245)
					break;
				}
				HX_STACK_LINE(245)
				::mint::core::Signal tmp13 = this->onchange;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(245)
				Dynamic tmp14 = tmp13->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(245)
				Dynamic fn = tmp14;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(245)
				bool tmp15 = (fn != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(245)
				if ((tmp15)){
					HX_STACK_LINE(245)
					::String tmp16 = this->edit;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(245)
					::String tmp17 = this->display;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(245)
					fn(tmp16,tmp17,false).Cast< Void >();
				}
				HX_STACK_LINE(245)
				(_idx)++;
			}
			HX_STACK_LINE(245)
			while((true)){
				HX_STACK_LINE(245)
				bool tmp11 = (_count > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(245)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(245)
				if ((tmp12)){
					HX_STACK_LINE(245)
					break;
				}
				HX_STACK_LINE(245)
				::mint::core::Signal tmp13 = this->onchange;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(245)
				int tmp14 = (_count - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(245)
				Dynamic tmp15 = tmp13->listeners->__GetItem(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(245)
				Dynamic fn = tmp15;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(245)
				bool tmp16 = (fn == null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(245)
				if ((tmp16)){
					HX_STACK_LINE(245)
					::mint::core::Signal tmp17 = this->onchange;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(245)
					int tmp18 = (_count - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(245)
					tmp17->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp18,(int)1);
				}
				HX_STACK_LINE(245)
				(_count)--;
			}
		}
		HX_STACK_LINE(245)
		tmp3 = this->edit;
	}
	HX_STACK_LINE(245)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TextEdit_obj,set_text,return )

::String TextEdit_obj::set_display_char( ::String v){
	HX_STACK_FRAME("mint.TextEdit","set_display_char",0x0450673b,"mint.TextEdit.set_display_char","mint/TextEdit.hx",248,0x23cb477a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(250)
	bool tmp = (v != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(250)
	if ((tmp)){
		HX_STACK_LINE(251)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(251)
		{
			HX_STACK_LINE(251)
			::String tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(251)
			int tmp3 = ::haxe::Utf8_obj::charCodeAt(tmp2,(int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(251)
			int codePoint = tmp3;		HX_STACK_VAR(codePoint,"codePoint");
			HX_STACK_LINE(251)
			{
				HX_STACK_LINE(251)
				::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(251)
				{
					HX_STACK_LINE(251)
					::haxe::io::BytesBuffer tmp5 = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(251)
					::haxe::io::BytesBuffer buf = tmp5;		HX_STACK_VAR(buf,"buf");
					HX_STACK_LINE(251)
					Dynamic tmp6 = buf->addByte_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(251)
					int tmp7 = codePoint;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(251)
					::mint::core::unifill::_Utf8::Utf8Impl_obj::encode_code_point(tmp6,tmp7);
					HX_STACK_LINE(251)
					{
						HX_STACK_LINE(251)
						::String tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(251)
						{
							HX_STACK_LINE(251)
							::haxe::io::Bytes tmp9 = buf->getBytes();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(251)
							::haxe::io::Bytes b = tmp9;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(251)
							{
								HX_STACK_LINE(251)
								::String tmp10 = b->toString();		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(251)
								::String s = tmp10;		HX_STACK_VAR(s,"s");
								HX_STACK_LINE(251)
								tmp8 = s;
							}
						}
						HX_STACK_LINE(251)
						::String s = tmp8;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(251)
						tmp4 = s;
					}
				}
				HX_STACK_LINE(251)
				::String this1 = tmp4;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(251)
				tmp1 = this1;
			}
		}
		HX_STACK_LINE(251)
		this->display_char = tmp1;
	}
	else{
		HX_STACK_LINE(253)
		this->display_char = v;
	}
	HX_STACK_LINE(256)
	{
		HX_STACK_LINE(256)
		::String tmp1 = this->edit;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(256)
		::String str = tmp1;		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(256)
		bool _emit = true;		HX_STACK_VAR(_emit,"_emit");
		HX_STACK_LINE(256)
		this->edit = str;
		HX_STACK_LINE(256)
		::String tmp2 = this->display_char;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(256)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(256)
		if ((tmp3)){
			HX_STACK_LINE(256)
			this->display = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			HX_STACK_LINE(256)
			::String tmp4 = str;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(256)
			int tmp5 = str.length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(256)
			int tmp6 = ::mint::core::unifill::_Utf8::Utf8_Impl__obj::codePointCount(tmp4,(int)0,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(256)
			int _l = tmp6;		HX_STACK_VAR(_l,"_l");
			HX_STACK_LINE(256)
			{
				HX_STACK_LINE(256)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(256)
				while((true)){
					HX_STACK_LINE(256)
					bool tmp7 = (_g < _l);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(256)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(256)
					if ((tmp8)){
						HX_STACK_LINE(256)
						break;
					}
					HX_STACK_LINE(256)
					int tmp9 = (_g)++;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(256)
					int i = tmp9;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(256)
					::String tmp10 = this->display_char;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(256)
					hx::AddEq(this->display,tmp10);
				}
			}
		}
		else{
			HX_STACK_LINE(256)
			::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(256)
			{
				HX_STACK_LINE(256)
				int tmp5 = this->index;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(256)
				int cur = tmp5;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(256)
				{
					HX_STACK_LINE(256)
					::String tmp6 = this->edit;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(256)
					::String s = tmp6;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(256)
					int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(256)
					{
						HX_STACK_LINE(256)
						bool tmp8 = true;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(256)
						int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(256)
						if ((tmp8)){
							HX_STACK_LINE(256)
							tmp9 = (int)0;
						}
						else{
							HX_STACK_LINE(256)
							tmp9 = s.length;
						}
						HX_STACK_LINE(256)
						int index = tmp9;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(256)
						{
							HX_STACK_LINE(256)
							::String this1 = s;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(256)
							bool tmp10 = true;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(256)
							if ((tmp10)){
								HX_STACK_LINE(256)
								int index1 = index;		HX_STACK_VAR(index1,"index1");
								HX_STACK_LINE(256)
								int tmp11 = this1.length;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(256)
								int len = tmp11;		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(256)
								int i = (int)0;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(256)
								while((true)){
									HX_STACK_LINE(256)
									bool tmp12 = (i < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(256)
									bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(256)
									if ((tmp12)){
										HX_STACK_LINE(256)
										tmp13 = (index1 < len);
									}
									else{
										HX_STACK_LINE(256)
										tmp13 = false;
									}
									HX_STACK_LINE(256)
									bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(256)
									if ((tmp14)){
										HX_STACK_LINE(256)
										break;
									}
									HX_STACK_LINE(256)
									int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(256)
									{
										HX_STACK_LINE(256)
										int tmp16 = index1;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(256)
										int tmp17 = this1.cca(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(256)
										int c = tmp17;		HX_STACK_VAR(c,"c");
										HX_STACK_LINE(256)
										bool tmp18 = (c < (int)192);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(256)
										if ((tmp18)){
											HX_STACK_LINE(256)
											tmp15 = (int)1;
										}
										else{
											HX_STACK_LINE(256)
											bool tmp19 = (c < (int)224);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(256)
											if ((tmp19)){
												HX_STACK_LINE(256)
												tmp15 = (int)2;
											}
											else{
												HX_STACK_LINE(256)
												bool tmp20 = (c < (int)240);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(256)
												if ((tmp20)){
													HX_STACK_LINE(256)
													tmp15 = (int)3;
												}
												else{
													HX_STACK_LINE(256)
													bool tmp21 = (c < (int)248);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(256)
													if ((tmp21)){
														HX_STACK_LINE(256)
														tmp15 = (int)4;
													}
													else{
														HX_STACK_LINE(256)
														tmp15 = (int)1;
													}
												}
											}
										}
									}
									HX_STACK_LINE(256)
									hx::AddEq(index1,tmp15);
									HX_STACK_LINE(256)
									++(i);
								}
								HX_STACK_LINE(256)
								tmp7 = index1;
							}
							else{
								HX_STACK_LINE(256)
								int index1 = index;		HX_STACK_VAR(index1,"index1");
								HX_STACK_LINE(256)
								int count = (int)0;		HX_STACK_VAR(count,"count");
								HX_STACK_LINE(256)
								while((true)){
									HX_STACK_LINE(256)
									int tmp11 = count;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(256)
									int tmp12 = (int)0;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(256)
									bool tmp13 = (tmp11 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(256)
									bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(256)
									if ((tmp13)){
										HX_STACK_LINE(256)
										tmp14 = ((int)0 < index1);
									}
									else{
										HX_STACK_LINE(256)
										tmp14 = false;
									}
									HX_STACK_LINE(256)
									bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(256)
									if ((tmp15)){
										HX_STACK_LINE(256)
										break;
									}
									HX_STACK_LINE(256)
									int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(256)
									{
										HX_STACK_LINE(256)
										::String this2 = this1;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(256)
										{
											HX_STACK_LINE(256)
											int tmp17 = (index1 - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(256)
											int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(256)
											{
												HX_STACK_LINE(256)
												int tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(256)
												int tmp20 = this2.cca(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(256)
												tmp18 = tmp20;
											}
											HX_STACK_LINE(256)
											int c1 = tmp18;		HX_STACK_VAR(c1,"c1");
											HX_STACK_LINE(256)
											bool tmp19 = (c1 < (int)128);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(256)
											bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(256)
											bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(256)
											if ((tmp20)){
												HX_STACK_LINE(256)
												tmp21 = (c1 >= (int)192);
											}
											else{
												HX_STACK_LINE(256)
												tmp21 = true;
											}
											HX_STACK_LINE(256)
											if ((tmp21)){
												HX_STACK_LINE(256)
												tmp16 = (int)1;
											}
											else{
												HX_STACK_LINE(256)
												int tmp22 = (index1 - (int)2);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(256)
												int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(256)
												{
													HX_STACK_LINE(256)
													int tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(256)
													int tmp25 = this2.cca(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(256)
													tmp23 = tmp25;
												}
												HX_STACK_LINE(256)
												int tmp24 = (int(tmp23) & int((int)224));		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(256)
												bool tmp25 = (tmp24 == (int)192);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(256)
												if ((tmp25)){
													HX_STACK_LINE(256)
													tmp16 = (int)2;
												}
												else{
													HX_STACK_LINE(256)
													int tmp26 = (index1 - (int)3);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(256)
													int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(256)
													{
														HX_STACK_LINE(256)
														int tmp28 = tmp26;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(256)
														int tmp29 = this2.cca(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(256)
														tmp27 = tmp29;
													}
													HX_STACK_LINE(256)
													int tmp28 = (int(tmp27) & int((int)240));		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(256)
													bool tmp29 = (tmp28 == (int)224);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(256)
													if ((tmp29)){
														HX_STACK_LINE(256)
														tmp16 = (int)3;
													}
													else{
														HX_STACK_LINE(256)
														int tmp30 = (index1 - (int)4);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(256)
														int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(256)
														{
															HX_STACK_LINE(256)
															int tmp32 = tmp30;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(256)
															int tmp33 = this2.cca(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(256)
															tmp31 = tmp33;
														}
														HX_STACK_LINE(256)
														int tmp32 = (int(tmp31) & int((int)248));		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(256)
														bool tmp33 = (tmp32 == (int)240);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(256)
														if ((tmp33)){
															HX_STACK_LINE(256)
															tmp16 = (int)4;
														}
														else{
															HX_STACK_LINE(256)
															tmp16 = (int)1;
														}
													}
												}
											}
										}
									}
									HX_STACK_LINE(256)
									hx::SubEq(index1,tmp16);
									HX_STACK_LINE(256)
									++(count);
								}
								HX_STACK_LINE(256)
								tmp7 = index1;
							}
						}
					}
					HX_STACK_LINE(256)
					int si = tmp7;		HX_STACK_VAR(si,"si");
					HX_STACK_LINE(256)
					bool tmp8 = (cur == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(256)
					int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(256)
					if ((tmp8)){
						HX_STACK_LINE(256)
						tmp9 = s.length;
					}
					else{
						HX_STACK_LINE(256)
						bool tmp10 = (cur < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(256)
						if ((tmp10)){
							HX_STACK_LINE(256)
							tmp9 = si;
						}
						else{
							HX_STACK_LINE(256)
							int codePointOffset = cur;		HX_STACK_VAR(codePointOffset,"codePointOffset");
							HX_STACK_LINE(256)
							{
								HX_STACK_LINE(256)
								::String this1 = s;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(256)
								bool tmp11 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(256)
								if ((tmp11)){
									HX_STACK_LINE(256)
									int index = si;		HX_STACK_VAR(index,"index");
									HX_STACK_LINE(256)
									int tmp12 = this1.length;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(256)
									int len = tmp12;		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(256)
									int i = (int)0;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(256)
									while((true)){
										HX_STACK_LINE(256)
										bool tmp13 = (i < codePointOffset);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(256)
										bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(256)
										if ((tmp13)){
											HX_STACK_LINE(256)
											tmp14 = (index < len);
										}
										else{
											HX_STACK_LINE(256)
											tmp14 = false;
										}
										HX_STACK_LINE(256)
										bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(256)
										if ((tmp15)){
											HX_STACK_LINE(256)
											break;
										}
										HX_STACK_LINE(256)
										int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(256)
										{
											HX_STACK_LINE(256)
											int tmp17 = index;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(256)
											int tmp18 = this1.cca(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(256)
											int c = tmp18;		HX_STACK_VAR(c,"c");
											HX_STACK_LINE(256)
											bool tmp19 = (c < (int)192);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(256)
											if ((tmp19)){
												HX_STACK_LINE(256)
												tmp16 = (int)1;
											}
											else{
												HX_STACK_LINE(256)
												bool tmp20 = (c < (int)224);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(256)
												if ((tmp20)){
													HX_STACK_LINE(256)
													tmp16 = (int)2;
												}
												else{
													HX_STACK_LINE(256)
													bool tmp21 = (c < (int)240);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(256)
													if ((tmp21)){
														HX_STACK_LINE(256)
														tmp16 = (int)3;
													}
													else{
														HX_STACK_LINE(256)
														bool tmp22 = (c < (int)248);		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(256)
														if ((tmp22)){
															HX_STACK_LINE(256)
															tmp16 = (int)4;
														}
														else{
															HX_STACK_LINE(256)
															tmp16 = (int)1;
														}
													}
												}
											}
										}
										HX_STACK_LINE(256)
										hx::AddEq(index,tmp16);
										HX_STACK_LINE(256)
										++(i);
									}
									HX_STACK_LINE(256)
									tmp9 = index;
								}
								else{
									HX_STACK_LINE(256)
									int index = si;		HX_STACK_VAR(index,"index");
									HX_STACK_LINE(256)
									int count = (int)0;		HX_STACK_VAR(count,"count");
									HX_STACK_LINE(256)
									while((true)){
										HX_STACK_LINE(256)
										int tmp12 = count;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(256)
										int tmp13 = codePointOffset;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(256)
										int tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(256)
										bool tmp15 = (tmp12 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(256)
										bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(256)
										if ((tmp15)){
											HX_STACK_LINE(256)
											tmp16 = ((int)0 < index);
										}
										else{
											HX_STACK_LINE(256)
											tmp16 = false;
										}
										HX_STACK_LINE(256)
										bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(256)
										if ((tmp17)){
											HX_STACK_LINE(256)
											break;
										}
										HX_STACK_LINE(256)
										int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(256)
										{
											HX_STACK_LINE(256)
											::String this2 = this1;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(256)
											{
												HX_STACK_LINE(256)
												int tmp19 = (index - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(256)
												int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(256)
												{
													HX_STACK_LINE(256)
													int tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(256)
													int tmp22 = this2.cca(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(256)
													tmp20 = tmp22;
												}
												HX_STACK_LINE(256)
												int c1 = tmp20;		HX_STACK_VAR(c1,"c1");
												HX_STACK_LINE(256)
												bool tmp21 = (c1 < (int)128);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(256)
												bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(256)
												bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(256)
												if ((tmp22)){
													HX_STACK_LINE(256)
													tmp23 = (c1 >= (int)192);
												}
												else{
													HX_STACK_LINE(256)
													tmp23 = true;
												}
												HX_STACK_LINE(256)
												if ((tmp23)){
													HX_STACK_LINE(256)
													tmp18 = (int)1;
												}
												else{
													HX_STACK_LINE(256)
													int tmp24 = (index - (int)2);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(256)
													int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(256)
													{
														HX_STACK_LINE(256)
														int tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(256)
														int tmp27 = this2.cca(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(256)
														tmp25 = tmp27;
													}
													HX_STACK_LINE(256)
													int tmp26 = (int(tmp25) & int((int)224));		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(256)
													bool tmp27 = (tmp26 == (int)192);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(256)
													if ((tmp27)){
														HX_STACK_LINE(256)
														tmp18 = (int)2;
													}
													else{
														HX_STACK_LINE(256)
														int tmp28 = (index - (int)3);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(256)
														int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(256)
														{
															HX_STACK_LINE(256)
															int tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(256)
															int tmp31 = this2.cca(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(256)
															tmp29 = tmp31;
														}
														HX_STACK_LINE(256)
														int tmp30 = (int(tmp29) & int((int)240));		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(256)
														bool tmp31 = (tmp30 == (int)224);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(256)
														if ((tmp31)){
															HX_STACK_LINE(256)
															tmp18 = (int)3;
														}
														else{
															HX_STACK_LINE(256)
															int tmp32 = (index - (int)4);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(256)
															int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(256)
															{
																HX_STACK_LINE(256)
																int tmp34 = tmp32;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(256)
																int tmp35 = this2.cca(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(256)
																tmp33 = tmp35;
															}
															HX_STACK_LINE(256)
															int tmp34 = (int(tmp33) & int((int)248));		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(256)
															bool tmp35 = (tmp34 == (int)240);		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(256)
															if ((tmp35)){
																HX_STACK_LINE(256)
																tmp18 = (int)4;
															}
															else{
																HX_STACK_LINE(256)
																tmp18 = (int)1;
															}
														}
													}
												}
											}
										}
										HX_STACK_LINE(256)
										hx::SubEq(index,tmp18);
										HX_STACK_LINE(256)
										++(count);
									}
									HX_STACK_LINE(256)
									tmp9 = index;
								}
							}
						}
					}
					HX_STACK_LINE(256)
					int ei = tmp9;		HX_STACK_VAR(ei,"ei");
					HX_STACK_LINE(256)
					int tmp10 = si;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(256)
					int tmp11 = ei;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(256)
					tmp4 = s.substring(tmp10,tmp11);
				}
			}
			HX_STACK_LINE(256)
			::String tmp5 = this->composition;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(256)
			::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(256)
			::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(256)
			{
				HX_STACK_LINE(256)
				int tmp8 = this->index;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(256)
				int cur = tmp8;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(256)
				{
					HX_STACK_LINE(256)
					::String tmp9 = this->edit;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(256)
					::String s = tmp9;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(256)
					::String tmp10 = this->edit;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(256)
					Dynamic length = tmp10.length;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(256)
					int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(256)
					{
						HX_STACK_LINE(256)
						bool tmp12 = (cur >= (int)0);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(256)
						int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(256)
						if ((tmp12)){
							HX_STACK_LINE(256)
							tmp13 = (int)0;
						}
						else{
							HX_STACK_LINE(256)
							tmp13 = s.length;
						}
						HX_STACK_LINE(256)
						int index = tmp13;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(256)
						{
							HX_STACK_LINE(256)
							::String this1 = s;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(256)
							bool tmp14 = (cur >= (int)0);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(256)
							if ((tmp14)){
								HX_STACK_LINE(256)
								int index1 = index;		HX_STACK_VAR(index1,"index1");
								HX_STACK_LINE(256)
								int tmp15 = this1.length;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(256)
								int len = tmp15;		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(256)
								int i = (int)0;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(256)
								while((true)){
									HX_STACK_LINE(256)
									bool tmp16 = (i < cur);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(256)
									bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(256)
									if ((tmp16)){
										HX_STACK_LINE(256)
										tmp17 = (index1 < len);
									}
									else{
										HX_STACK_LINE(256)
										tmp17 = false;
									}
									HX_STACK_LINE(256)
									bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(256)
									if ((tmp18)){
										HX_STACK_LINE(256)
										break;
									}
									HX_STACK_LINE(256)
									int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(256)
									{
										HX_STACK_LINE(256)
										int tmp20 = index1;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(256)
										int tmp21 = this1.cca(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(256)
										int c = tmp21;		HX_STACK_VAR(c,"c");
										HX_STACK_LINE(256)
										bool tmp22 = (c < (int)192);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(256)
										if ((tmp22)){
											HX_STACK_LINE(256)
											tmp19 = (int)1;
										}
										else{
											HX_STACK_LINE(256)
											bool tmp23 = (c < (int)224);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(256)
											if ((tmp23)){
												HX_STACK_LINE(256)
												tmp19 = (int)2;
											}
											else{
												HX_STACK_LINE(256)
												bool tmp24 = (c < (int)240);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(256)
												if ((tmp24)){
													HX_STACK_LINE(256)
													tmp19 = (int)3;
												}
												else{
													HX_STACK_LINE(256)
													bool tmp25 = (c < (int)248);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(256)
													if ((tmp25)){
														HX_STACK_LINE(256)
														tmp19 = (int)4;
													}
													else{
														HX_STACK_LINE(256)
														tmp19 = (int)1;
													}
												}
											}
										}
									}
									HX_STACK_LINE(256)
									hx::AddEq(index1,tmp19);
									HX_STACK_LINE(256)
									++(i);
								}
								HX_STACK_LINE(256)
								tmp11 = index1;
							}
							else{
								HX_STACK_LINE(256)
								int index1 = index;		HX_STACK_VAR(index1,"index1");
								HX_STACK_LINE(256)
								int count = (int)0;		HX_STACK_VAR(count,"count");
								HX_STACK_LINE(256)
								while((true)){
									HX_STACK_LINE(256)
									int tmp15 = count;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(256)
									int tmp16 = cur;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(256)
									int tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(256)
									bool tmp18 = (tmp15 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(256)
									bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(256)
									if ((tmp18)){
										HX_STACK_LINE(256)
										tmp19 = ((int)0 < index1);
									}
									else{
										HX_STACK_LINE(256)
										tmp19 = false;
									}
									HX_STACK_LINE(256)
									bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(256)
									if ((tmp20)){
										HX_STACK_LINE(256)
										break;
									}
									HX_STACK_LINE(256)
									int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(256)
									{
										HX_STACK_LINE(256)
										::String this2 = this1;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(256)
										{
											HX_STACK_LINE(256)
											int tmp22 = (index1 - (int)1);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(256)
											int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(256)
											{
												HX_STACK_LINE(256)
												int tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(256)
												int tmp25 = this2.cca(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(256)
												tmp23 = tmp25;
											}
											HX_STACK_LINE(256)
											int c1 = tmp23;		HX_STACK_VAR(c1,"c1");
											HX_STACK_LINE(256)
											bool tmp24 = (c1 < (int)128);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(256)
											bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(256)
											bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(256)
											if ((tmp25)){
												HX_STACK_LINE(256)
												tmp26 = (c1 >= (int)192);
											}
											else{
												HX_STACK_LINE(256)
												tmp26 = true;
											}
											HX_STACK_LINE(256)
											if ((tmp26)){
												HX_STACK_LINE(256)
												tmp21 = (int)1;
											}
											else{
												HX_STACK_LINE(256)
												int tmp27 = (index1 - (int)2);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(256)
												int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(256)
												{
													HX_STACK_LINE(256)
													int tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(256)
													int tmp30 = this2.cca(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(256)
													tmp28 = tmp30;
												}
												HX_STACK_LINE(256)
												int tmp29 = (int(tmp28) & int((int)224));		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(256)
												bool tmp30 = (tmp29 == (int)192);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(256)
												if ((tmp30)){
													HX_STACK_LINE(256)
													tmp21 = (int)2;
												}
												else{
													HX_STACK_LINE(256)
													int tmp31 = (index1 - (int)3);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(256)
													int tmp32;		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(256)
													{
														HX_STACK_LINE(256)
														int tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(256)
														int tmp34 = this2.cca(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(256)
														tmp32 = tmp34;
													}
													HX_STACK_LINE(256)
													int tmp33 = (int(tmp32) & int((int)240));		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(256)
													bool tmp34 = (tmp33 == (int)224);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(256)
													if ((tmp34)){
														HX_STACK_LINE(256)
														tmp21 = (int)3;
													}
													else{
														HX_STACK_LINE(256)
														int tmp35 = (index1 - (int)4);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(256)
														int tmp36;		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(256)
														{
															HX_STACK_LINE(256)
															int tmp37 = tmp35;		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(256)
															int tmp38 = this2.cca(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(256)
															tmp36 = tmp38;
														}
														HX_STACK_LINE(256)
														int tmp37 = (int(tmp36) & int((int)248));		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(256)
														bool tmp38 = (tmp37 == (int)240);		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(256)
														if ((tmp38)){
															HX_STACK_LINE(256)
															tmp21 = (int)4;
														}
														else{
															HX_STACK_LINE(256)
															tmp21 = (int)1;
														}
													}
												}
											}
										}
									}
									HX_STACK_LINE(256)
									hx::SubEq(index1,tmp21);
									HX_STACK_LINE(256)
									++(count);
								}
								HX_STACK_LINE(256)
								tmp11 = index1;
							}
						}
					}
					HX_STACK_LINE(256)
					int si = tmp11;		HX_STACK_VAR(si,"si");
					HX_STACK_LINE(256)
					bool tmp12 = (length == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(256)
					int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(256)
					if ((tmp12)){
						HX_STACK_LINE(256)
						tmp13 = s.length;
					}
					else{
						HX_STACK_LINE(256)
						bool tmp14 = (length < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(256)
						if ((tmp14)){
							HX_STACK_LINE(256)
							tmp13 = si;
						}
						else{
							HX_STACK_LINE(256)
							int codePointOffset = length;		HX_STACK_VAR(codePointOffset,"codePointOffset");
							HX_STACK_LINE(256)
							{
								HX_STACK_LINE(256)
								::String this1 = s;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(256)
								bool tmp15 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(256)
								if ((tmp15)){
									HX_STACK_LINE(256)
									int index = si;		HX_STACK_VAR(index,"index");
									HX_STACK_LINE(256)
									int tmp16 = this1.length;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(256)
									int len = tmp16;		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(256)
									int i = (int)0;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(256)
									while((true)){
										HX_STACK_LINE(256)
										bool tmp17 = (i < codePointOffset);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(256)
										bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(256)
										if ((tmp17)){
											HX_STACK_LINE(256)
											tmp18 = (index < len);
										}
										else{
											HX_STACK_LINE(256)
											tmp18 = false;
										}
										HX_STACK_LINE(256)
										bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(256)
										if ((tmp19)){
											HX_STACK_LINE(256)
											break;
										}
										HX_STACK_LINE(256)
										int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(256)
										{
											HX_STACK_LINE(256)
											int tmp21 = index;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(256)
											int tmp22 = this1.cca(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(256)
											int c = tmp22;		HX_STACK_VAR(c,"c");
											HX_STACK_LINE(256)
											bool tmp23 = (c < (int)192);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(256)
											if ((tmp23)){
												HX_STACK_LINE(256)
												tmp20 = (int)1;
											}
											else{
												HX_STACK_LINE(256)
												bool tmp24 = (c < (int)224);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(256)
												if ((tmp24)){
													HX_STACK_LINE(256)
													tmp20 = (int)2;
												}
												else{
													HX_STACK_LINE(256)
													bool tmp25 = (c < (int)240);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(256)
													if ((tmp25)){
														HX_STACK_LINE(256)
														tmp20 = (int)3;
													}
													else{
														HX_STACK_LINE(256)
														bool tmp26 = (c < (int)248);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(256)
														if ((tmp26)){
															HX_STACK_LINE(256)
															tmp20 = (int)4;
														}
														else{
															HX_STACK_LINE(256)
															tmp20 = (int)1;
														}
													}
												}
											}
										}
										HX_STACK_LINE(256)
										hx::AddEq(index,tmp20);
										HX_STACK_LINE(256)
										++(i);
									}
									HX_STACK_LINE(256)
									tmp13 = index;
								}
								else{
									HX_STACK_LINE(256)
									int index = si;		HX_STACK_VAR(index,"index");
									HX_STACK_LINE(256)
									int count = (int)0;		HX_STACK_VAR(count,"count");
									HX_STACK_LINE(256)
									while((true)){
										HX_STACK_LINE(256)
										int tmp16 = count;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(256)
										int tmp17 = codePointOffset;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(256)
										int tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(256)
										bool tmp19 = (tmp16 < tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(256)
										bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(256)
										if ((tmp19)){
											HX_STACK_LINE(256)
											tmp20 = ((int)0 < index);
										}
										else{
											HX_STACK_LINE(256)
											tmp20 = false;
										}
										HX_STACK_LINE(256)
										bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(256)
										if ((tmp21)){
											HX_STACK_LINE(256)
											break;
										}
										HX_STACK_LINE(256)
										int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(256)
										{
											HX_STACK_LINE(256)
											::String this2 = this1;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(256)
											{
												HX_STACK_LINE(256)
												int tmp23 = (index - (int)1);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(256)
												int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(256)
												{
													HX_STACK_LINE(256)
													int tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(256)
													int tmp26 = this2.cca(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(256)
													tmp24 = tmp26;
												}
												HX_STACK_LINE(256)
												int c1 = tmp24;		HX_STACK_VAR(c1,"c1");
												HX_STACK_LINE(256)
												bool tmp25 = (c1 < (int)128);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(256)
												bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(256)
												bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(256)
												if ((tmp26)){
													HX_STACK_LINE(256)
													tmp27 = (c1 >= (int)192);
												}
												else{
													HX_STACK_LINE(256)
													tmp27 = true;
												}
												HX_STACK_LINE(256)
												if ((tmp27)){
													HX_STACK_LINE(256)
													tmp22 = (int)1;
												}
												else{
													HX_STACK_LINE(256)
													int tmp28 = (index - (int)2);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(256)
													int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(256)
													{
														HX_STACK_LINE(256)
														int tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(256)
														int tmp31 = this2.cca(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(256)
														tmp29 = tmp31;
													}
													HX_STACK_LINE(256)
													int tmp30 = (int(tmp29) & int((int)224));		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(256)
													bool tmp31 = (tmp30 == (int)192);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(256)
													if ((tmp31)){
														HX_STACK_LINE(256)
														tmp22 = (int)2;
													}
													else{
														HX_STACK_LINE(256)
														int tmp32 = (index - (int)3);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(256)
														int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(256)
														{
															HX_STACK_LINE(256)
															int tmp34 = tmp32;		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(256)
															int tmp35 = this2.cca(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(256)
															tmp33 = tmp35;
														}
														HX_STACK_LINE(256)
														int tmp34 = (int(tmp33) & int((int)240));		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(256)
														bool tmp35 = (tmp34 == (int)224);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(256)
														if ((tmp35)){
															HX_STACK_LINE(256)
															tmp22 = (int)3;
														}
														else{
															HX_STACK_LINE(256)
															int tmp36 = (index - (int)4);		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(256)
															int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(256)
															{
																HX_STACK_LINE(256)
																int tmp38 = tmp36;		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(256)
																int tmp39 = this2.cca(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(256)
																tmp37 = tmp39;
															}
															HX_STACK_LINE(256)
															int tmp38 = (int(tmp37) & int((int)248));		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(256)
															bool tmp39 = (tmp38 == (int)240);		HX_STACK_VAR(tmp39,"tmp39");
															HX_STACK_LINE(256)
															if ((tmp39)){
																HX_STACK_LINE(256)
																tmp22 = (int)4;
															}
															else{
																HX_STACK_LINE(256)
																tmp22 = (int)1;
															}
														}
													}
												}
											}
										}
										HX_STACK_LINE(256)
										hx::SubEq(index,tmp22);
										HX_STACK_LINE(256)
										++(count);
									}
									HX_STACK_LINE(256)
									tmp13 = index;
								}
							}
						}
					}
					HX_STACK_LINE(256)
					int ei = tmp13;		HX_STACK_VAR(ei,"ei");
					HX_STACK_LINE(256)
					int tmp14 = si;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(256)
					int tmp15 = ei;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(256)
					tmp7 = s.substring(tmp14,tmp15);
				}
			}
			HX_STACK_LINE(256)
			::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(256)
			this->display = tmp8;
		}
		HX_STACK_LINE(256)
		::mint::Label tmp4 = this->label;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(256)
		::String tmp5 = this->display;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(256)
		tmp4->set_text(tmp5);
		HX_STACK_LINE(256)
		{
			HX_STACK_LINE(256)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(256)
			::mint::core::Signal tmp6 = this->onchangeindex;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(256)
			int tmp7 = tmp6->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(256)
			int _count = tmp7;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(256)
			while((true)){
				HX_STACK_LINE(256)
				bool tmp8 = (_idx < _count);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(256)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(256)
				if ((tmp9)){
					HX_STACK_LINE(256)
					break;
				}
				HX_STACK_LINE(256)
				::mint::core::Signal tmp10 = this->onchangeindex;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(256)
				Dynamic tmp11 = tmp10->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(256)
				Dynamic fn = tmp11;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(256)
				bool tmp12 = (fn != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(256)
				if ((tmp12)){
					HX_STACK_LINE(256)
					int tmp13 = this->index;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(256)
					fn(tmp13).Cast< Void >();
				}
				HX_STACK_LINE(256)
				(_idx)++;
			}
			HX_STACK_LINE(256)
			while((true)){
				HX_STACK_LINE(256)
				bool tmp8 = (_count > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(256)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(256)
				if ((tmp9)){
					HX_STACK_LINE(256)
					break;
				}
				HX_STACK_LINE(256)
				::mint::core::Signal tmp10 = this->onchangeindex;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(256)
				int tmp11 = (_count - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(256)
				Dynamic tmp12 = tmp10->listeners->__GetItem(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(256)
				Dynamic fn = tmp12;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(256)
				bool tmp13 = (fn == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(256)
				if ((tmp13)){
					HX_STACK_LINE(256)
					::mint::core::Signal tmp14 = this->onchangeindex;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(256)
					int tmp15 = (_count - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(256)
					tmp14->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp15,(int)1);
				}
				HX_STACK_LINE(256)
				(_count)--;
			}
		}
		HX_STACK_LINE(256)
		bool tmp6 = _emit;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(256)
		if ((tmp6)){
			HX_STACK_LINE(256)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(256)
			::mint::core::Signal tmp7 = this->onchange;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(256)
			int tmp8 = tmp7->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(256)
			int _count = tmp8;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(256)
			while((true)){
				HX_STACK_LINE(256)
				bool tmp9 = (_idx < _count);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(256)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(256)
				if ((tmp10)){
					HX_STACK_LINE(256)
					break;
				}
				HX_STACK_LINE(256)
				::mint::core::Signal tmp11 = this->onchange;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(256)
				Dynamic tmp12 = tmp11->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(256)
				Dynamic fn = tmp12;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(256)
				bool tmp13 = (fn != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(256)
				if ((tmp13)){
					HX_STACK_LINE(256)
					::String tmp14 = this->edit;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(256)
					::String tmp15 = this->display;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(256)
					fn(tmp14,tmp15,false).Cast< Void >();
				}
				HX_STACK_LINE(256)
				(_idx)++;
			}
			HX_STACK_LINE(256)
			while((true)){
				HX_STACK_LINE(256)
				bool tmp9 = (_count > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(256)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(256)
				if ((tmp10)){
					HX_STACK_LINE(256)
					break;
				}
				HX_STACK_LINE(256)
				::mint::core::Signal tmp11 = this->onchange;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(256)
				int tmp12 = (_count - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(256)
				Dynamic tmp13 = tmp11->listeners->__GetItem(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(256)
				Dynamic fn = tmp13;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(256)
				bool tmp14 = (fn == null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(256)
				if ((tmp14)){
					HX_STACK_LINE(256)
					::mint::core::Signal tmp15 = this->onchange;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(256)
					int tmp16 = (_count - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(256)
					tmp15->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp16,(int)1);
				}
				HX_STACK_LINE(256)
				(_count)--;
			}
		}
		HX_STACK_LINE(256)
		this->edit;
	}
	HX_STACK_LINE(257)
	{
		HX_STACK_LINE(257)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(257)
		::mint::core::Signal tmp1 = this->onchangeindex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(257)
		int tmp2 = tmp1->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(257)
		int _count = tmp2;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(257)
		while((true)){
			HX_STACK_LINE(257)
			bool tmp3 = (_idx < _count);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(257)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(257)
			if ((tmp4)){
				HX_STACK_LINE(257)
				break;
			}
			HX_STACK_LINE(257)
			::mint::core::Signal tmp5 = this->onchangeindex;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(257)
			Dynamic tmp6 = tmp5->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(257)
			Dynamic fn = tmp6;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(257)
			bool tmp7 = (fn != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(257)
			if ((tmp7)){
				HX_STACK_LINE(257)
				int tmp8 = this->index;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(257)
				fn(tmp8).Cast< Void >();
			}
			HX_STACK_LINE(257)
			(_idx)++;
		}
		HX_STACK_LINE(257)
		while((true)){
			HX_STACK_LINE(257)
			bool tmp3 = (_count > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(257)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(257)
			if ((tmp4)){
				HX_STACK_LINE(257)
				break;
			}
			HX_STACK_LINE(257)
			::mint::core::Signal tmp5 = this->onchangeindex;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(257)
			int tmp6 = (_count - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(257)
			Dynamic tmp7 = tmp5->listeners->__GetItem(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(257)
			Dynamic fn = tmp7;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(257)
			bool tmp8 = (fn == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(257)
			if ((tmp8)){
				HX_STACK_LINE(257)
				::mint::core::Signal tmp9 = this->onchangeindex;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(257)
				int tmp10 = (_count - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(257)
				tmp9->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp10,(int)1);
			}
			HX_STACK_LINE(257)
			(_count)--;
		}
	}
	HX_STACK_LINE(259)
	::String tmp1 = this->display_char;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(259)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(TextEdit_obj,set_display_char,return )

Void TextEdit_obj::move( hx::Null< int >  __o_amount){
int amount = __o_amount.Default(-1);
	HX_STACK_FRAME("mint.TextEdit","move",0x6361ea9c,"mint.TextEdit.move","mint/TextEdit.hx",263,0x23cb477a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(amount,"amount")
{
		HX_STACK_LINE(265)
		hx::AddEq(this->index,amount);
		HX_STACK_LINE(266)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(266)
		{
			HX_STACK_LINE(266)
			int tmp1 = this->index;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(266)
			Float value = tmp1;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(266)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(266)
			{
				HX_STACK_LINE(266)
				::String tmp3 = this->edit;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(266)
				::String s = tmp3;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(266)
				::String tmp4 = s;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(266)
				int tmp5 = s.length;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(266)
				tmp2 = ::mint::core::unifill::_Utf8::Utf8_Impl__obj::codePointCount(tmp4,(int)0,tmp5);
			}
			HX_STACK_LINE(266)
			Float b = tmp2;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(266)
			bool tmp3 = (value < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(266)
			if ((tmp3)){
				HX_STACK_LINE(266)
				tmp = (int)0;
			}
			else{
				HX_STACK_LINE(266)
				bool tmp4 = (value > b);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(266)
				if ((tmp4)){
					HX_STACK_LINE(266)
					tmp = b;
				}
				else{
					HX_STACK_LINE(266)
					tmp = value;
				}
			}
		}
		HX_STACK_LINE(266)
		int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(266)
		this->index = tmp1;
		HX_STACK_LINE(271)
		{
			HX_STACK_LINE(271)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(271)
			::mint::core::Signal tmp2 = this->onchangeindex;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(271)
			int tmp3 = tmp2->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(271)
			int _count = tmp3;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(271)
			while((true)){
				HX_STACK_LINE(271)
				bool tmp4 = (_idx < _count);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(271)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(271)
				if ((tmp5)){
					HX_STACK_LINE(271)
					break;
				}
				HX_STACK_LINE(271)
				::mint::core::Signal tmp6 = this->onchangeindex;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(271)
				Dynamic tmp7 = tmp6->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(271)
				Dynamic fn = tmp7;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(271)
				bool tmp8 = (fn != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(271)
				if ((tmp8)){
					HX_STACK_LINE(271)
					int tmp9 = this->index;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(271)
					fn(tmp9).Cast< Void >();
				}
				HX_STACK_LINE(271)
				(_idx)++;
			}
			HX_STACK_LINE(271)
			while((true)){
				HX_STACK_LINE(271)
				bool tmp4 = (_count > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(271)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(271)
				if ((tmp5)){
					HX_STACK_LINE(271)
					break;
				}
				HX_STACK_LINE(271)
				::mint::core::Signal tmp6 = this->onchangeindex;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(271)
				int tmp7 = (_count - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(271)
				Dynamic tmp8 = tmp6->listeners->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(271)
				Dynamic fn = tmp8;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(271)
				bool tmp9 = (fn == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(271)
				if ((tmp9)){
					HX_STACK_LINE(271)
					::mint::core::Signal tmp10 = this->onchangeindex;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(271)
					int tmp11 = (_count - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(271)
					tmp10->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp11,(int)1);
				}
				HX_STACK_LINE(271)
				(_count)--;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextEdit_obj,move,(void))

::String TextEdit_obj::cut( hx::Null< int >  __o_start,hx::Null< int >  __o_count){
int start = __o_start.Default(0);
int count = __o_count.Default(1);
	HX_STACK_FRAME("mint.TextEdit","cut",0xe84ef857,"mint.TextEdit.cut","mint/TextEdit.hx",275,0x23cb477a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(277)
		::String tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(277)
		{
			HX_STACK_LINE(277)
			::String tmp1 = this->edit;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(277)
			::String s = tmp1;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(277)
			::String tmp2 = this->edit;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(277)
			Dynamic length = tmp2.length;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(277)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(277)
			{
				HX_STACK_LINE(277)
				bool tmp4 = (start >= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(277)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(277)
				if ((tmp4)){
					HX_STACK_LINE(277)
					tmp5 = (int)0;
				}
				else{
					HX_STACK_LINE(277)
					tmp5 = s.length;
				}
				HX_STACK_LINE(277)
				int index = tmp5;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(277)
				{
					HX_STACK_LINE(277)
					::String this1 = s;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(277)
					bool tmp6 = (start >= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(277)
					if ((tmp6)){
						HX_STACK_LINE(277)
						int index1 = index;		HX_STACK_VAR(index1,"index1");
						HX_STACK_LINE(277)
						int tmp7 = this1.length;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(277)
						int len = tmp7;		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(277)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(277)
						while((true)){
							HX_STACK_LINE(277)
							bool tmp8 = (i < start);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(277)
							bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(277)
							if ((tmp8)){
								HX_STACK_LINE(277)
								tmp9 = (index1 < len);
							}
							else{
								HX_STACK_LINE(277)
								tmp9 = false;
							}
							HX_STACK_LINE(277)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(277)
							if ((tmp10)){
								HX_STACK_LINE(277)
								break;
							}
							HX_STACK_LINE(277)
							int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(277)
							{
								HX_STACK_LINE(277)
								int tmp12 = index1;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(277)
								int tmp13 = this1.cca(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(277)
								int c = tmp13;		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(277)
								bool tmp14 = (c < (int)192);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(277)
								if ((tmp14)){
									HX_STACK_LINE(277)
									tmp11 = (int)1;
								}
								else{
									HX_STACK_LINE(277)
									bool tmp15 = (c < (int)224);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(277)
									if ((tmp15)){
										HX_STACK_LINE(277)
										tmp11 = (int)2;
									}
									else{
										HX_STACK_LINE(277)
										bool tmp16 = (c < (int)240);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(277)
										if ((tmp16)){
											HX_STACK_LINE(277)
											tmp11 = (int)3;
										}
										else{
											HX_STACK_LINE(277)
											bool tmp17 = (c < (int)248);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(277)
											if ((tmp17)){
												HX_STACK_LINE(277)
												tmp11 = (int)4;
											}
											else{
												HX_STACK_LINE(277)
												tmp11 = (int)1;
											}
										}
									}
								}
							}
							HX_STACK_LINE(277)
							hx::AddEq(index1,tmp11);
							HX_STACK_LINE(277)
							++(i);
						}
						HX_STACK_LINE(277)
						tmp3 = index1;
					}
					else{
						HX_STACK_LINE(277)
						int index1 = index;		HX_STACK_VAR(index1,"index1");
						HX_STACK_LINE(277)
						int count1 = (int)0;		HX_STACK_VAR(count1,"count1");
						HX_STACK_LINE(277)
						while((true)){
							HX_STACK_LINE(277)
							int tmp7 = count1;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(277)
							int tmp8 = start;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(277)
							int tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(277)
							bool tmp10 = (tmp7 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(277)
							bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(277)
							if ((tmp10)){
								HX_STACK_LINE(277)
								tmp11 = ((int)0 < index1);
							}
							else{
								HX_STACK_LINE(277)
								tmp11 = false;
							}
							HX_STACK_LINE(277)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(277)
							if ((tmp12)){
								HX_STACK_LINE(277)
								break;
							}
							HX_STACK_LINE(277)
							int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(277)
							{
								HX_STACK_LINE(277)
								::String this2 = this1;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(277)
								{
									HX_STACK_LINE(277)
									int tmp14 = (index1 - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(277)
									int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(277)
									{
										HX_STACK_LINE(277)
										int tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(277)
										int tmp17 = this2.cca(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(277)
										tmp15 = tmp17;
									}
									HX_STACK_LINE(277)
									int c1 = tmp15;		HX_STACK_VAR(c1,"c1");
									HX_STACK_LINE(277)
									bool tmp16 = (c1 < (int)128);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(277)
									bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(277)
									bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(277)
									if ((tmp17)){
										HX_STACK_LINE(277)
										tmp18 = (c1 >= (int)192);
									}
									else{
										HX_STACK_LINE(277)
										tmp18 = true;
									}
									HX_STACK_LINE(277)
									if ((tmp18)){
										HX_STACK_LINE(277)
										tmp13 = (int)1;
									}
									else{
										HX_STACK_LINE(277)
										int tmp19 = (index1 - (int)2);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(277)
										int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(277)
										{
											HX_STACK_LINE(277)
											int tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(277)
											int tmp22 = this2.cca(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(277)
											tmp20 = tmp22;
										}
										HX_STACK_LINE(277)
										int tmp21 = (int(tmp20) & int((int)224));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(277)
										bool tmp22 = (tmp21 == (int)192);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(277)
										if ((tmp22)){
											HX_STACK_LINE(277)
											tmp13 = (int)2;
										}
										else{
											HX_STACK_LINE(277)
											int tmp23 = (index1 - (int)3);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(277)
											int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(277)
											{
												HX_STACK_LINE(277)
												int tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(277)
												int tmp26 = this2.cca(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(277)
												tmp24 = tmp26;
											}
											HX_STACK_LINE(277)
											int tmp25 = (int(tmp24) & int((int)240));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(277)
											bool tmp26 = (tmp25 == (int)224);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(277)
											if ((tmp26)){
												HX_STACK_LINE(277)
												tmp13 = (int)3;
											}
											else{
												HX_STACK_LINE(277)
												int tmp27 = (index1 - (int)4);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(277)
												int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(277)
												{
													HX_STACK_LINE(277)
													int tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(277)
													int tmp30 = this2.cca(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(277)
													tmp28 = tmp30;
												}
												HX_STACK_LINE(277)
												int tmp29 = (int(tmp28) & int((int)248));		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(277)
												bool tmp30 = (tmp29 == (int)240);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(277)
												if ((tmp30)){
													HX_STACK_LINE(277)
													tmp13 = (int)4;
												}
												else{
													HX_STACK_LINE(277)
													tmp13 = (int)1;
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(277)
							hx::SubEq(index1,tmp13);
							HX_STACK_LINE(277)
							++(count1);
						}
						HX_STACK_LINE(277)
						tmp3 = index1;
					}
				}
			}
			HX_STACK_LINE(277)
			int si = tmp3;		HX_STACK_VAR(si,"si");
			HX_STACK_LINE(277)
			bool tmp4 = (length == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(277)
			int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(277)
			if ((tmp4)){
				HX_STACK_LINE(277)
				tmp5 = s.length;
			}
			else{
				HX_STACK_LINE(277)
				bool tmp6 = (length < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(277)
				if ((tmp6)){
					HX_STACK_LINE(277)
					tmp5 = si;
				}
				else{
					HX_STACK_LINE(277)
					int codePointOffset = length;		HX_STACK_VAR(codePointOffset,"codePointOffset");
					HX_STACK_LINE(277)
					{
						HX_STACK_LINE(277)
						::String this1 = s;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(277)
						bool tmp7 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(277)
						if ((tmp7)){
							HX_STACK_LINE(277)
							int index = si;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(277)
							int tmp8 = this1.length;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(277)
							int len = tmp8;		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(277)
							int i = (int)0;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(277)
							while((true)){
								HX_STACK_LINE(277)
								bool tmp9 = (i < codePointOffset);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(277)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(277)
								if ((tmp9)){
									HX_STACK_LINE(277)
									tmp10 = (index < len);
								}
								else{
									HX_STACK_LINE(277)
									tmp10 = false;
								}
								HX_STACK_LINE(277)
								bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(277)
								if ((tmp11)){
									HX_STACK_LINE(277)
									break;
								}
								HX_STACK_LINE(277)
								int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(277)
								{
									HX_STACK_LINE(277)
									int tmp13 = index;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(277)
									int tmp14 = this1.cca(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(277)
									int c = tmp14;		HX_STACK_VAR(c,"c");
									HX_STACK_LINE(277)
									bool tmp15 = (c < (int)192);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(277)
									if ((tmp15)){
										HX_STACK_LINE(277)
										tmp12 = (int)1;
									}
									else{
										HX_STACK_LINE(277)
										bool tmp16 = (c < (int)224);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(277)
										if ((tmp16)){
											HX_STACK_LINE(277)
											tmp12 = (int)2;
										}
										else{
											HX_STACK_LINE(277)
											bool tmp17 = (c < (int)240);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(277)
											if ((tmp17)){
												HX_STACK_LINE(277)
												tmp12 = (int)3;
											}
											else{
												HX_STACK_LINE(277)
												bool tmp18 = (c < (int)248);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(277)
												if ((tmp18)){
													HX_STACK_LINE(277)
													tmp12 = (int)4;
												}
												else{
													HX_STACK_LINE(277)
													tmp12 = (int)1;
												}
											}
										}
									}
								}
								HX_STACK_LINE(277)
								hx::AddEq(index,tmp12);
								HX_STACK_LINE(277)
								++(i);
							}
							HX_STACK_LINE(277)
							tmp5 = index;
						}
						else{
							HX_STACK_LINE(277)
							int index = si;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(277)
							int count1 = (int)0;		HX_STACK_VAR(count1,"count1");
							HX_STACK_LINE(277)
							while((true)){
								HX_STACK_LINE(277)
								int tmp8 = count1;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(277)
								int tmp9 = codePointOffset;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(277)
								int tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(277)
								bool tmp11 = (tmp8 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(277)
								bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(277)
								if ((tmp11)){
									HX_STACK_LINE(277)
									tmp12 = ((int)0 < index);
								}
								else{
									HX_STACK_LINE(277)
									tmp12 = false;
								}
								HX_STACK_LINE(277)
								bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(277)
								if ((tmp13)){
									HX_STACK_LINE(277)
									break;
								}
								HX_STACK_LINE(277)
								int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(277)
								{
									HX_STACK_LINE(277)
									::String this2 = this1;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(277)
									{
										HX_STACK_LINE(277)
										int tmp15 = (index - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(277)
										int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(277)
										{
											HX_STACK_LINE(277)
											int tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(277)
											int tmp18 = this2.cca(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(277)
											tmp16 = tmp18;
										}
										HX_STACK_LINE(277)
										int c1 = tmp16;		HX_STACK_VAR(c1,"c1");
										HX_STACK_LINE(277)
										bool tmp17 = (c1 < (int)128);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(277)
										bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(277)
										bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(277)
										if ((tmp18)){
											HX_STACK_LINE(277)
											tmp19 = (c1 >= (int)192);
										}
										else{
											HX_STACK_LINE(277)
											tmp19 = true;
										}
										HX_STACK_LINE(277)
										if ((tmp19)){
											HX_STACK_LINE(277)
											tmp14 = (int)1;
										}
										else{
											HX_STACK_LINE(277)
											int tmp20 = (index - (int)2);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(277)
											int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(277)
											{
												HX_STACK_LINE(277)
												int tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(277)
												int tmp23 = this2.cca(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(277)
												tmp21 = tmp23;
											}
											HX_STACK_LINE(277)
											int tmp22 = (int(tmp21) & int((int)224));		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(277)
											bool tmp23 = (tmp22 == (int)192);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(277)
											if ((tmp23)){
												HX_STACK_LINE(277)
												tmp14 = (int)2;
											}
											else{
												HX_STACK_LINE(277)
												int tmp24 = (index - (int)3);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(277)
												int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(277)
												{
													HX_STACK_LINE(277)
													int tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(277)
													int tmp27 = this2.cca(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(277)
													tmp25 = tmp27;
												}
												HX_STACK_LINE(277)
												int tmp26 = (int(tmp25) & int((int)240));		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(277)
												bool tmp27 = (tmp26 == (int)224);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(277)
												if ((tmp27)){
													HX_STACK_LINE(277)
													tmp14 = (int)3;
												}
												else{
													HX_STACK_LINE(277)
													int tmp28 = (index - (int)4);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(277)
													int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(277)
													{
														HX_STACK_LINE(277)
														int tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(277)
														int tmp31 = this2.cca(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(277)
														tmp29 = tmp31;
													}
													HX_STACK_LINE(277)
													int tmp30 = (int(tmp29) & int((int)248));		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(277)
													bool tmp31 = (tmp30 == (int)240);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(277)
													if ((tmp31)){
														HX_STACK_LINE(277)
														tmp14 = (int)4;
													}
													else{
														HX_STACK_LINE(277)
														tmp14 = (int)1;
													}
												}
											}
										}
									}
								}
								HX_STACK_LINE(277)
								hx::SubEq(index,tmp14);
								HX_STACK_LINE(277)
								++(count1);
							}
							HX_STACK_LINE(277)
							tmp5 = index;
						}
					}
				}
			}
			HX_STACK_LINE(277)
			int ei = tmp5;		HX_STACK_VAR(ei,"ei");
			HX_STACK_LINE(277)
			int tmp6 = si;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(277)
			int tmp7 = ei;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(277)
			tmp = s.substring(tmp6,tmp7);
		}
		HX_STACK_LINE(277)
		::String a = tmp;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(279)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(279)
		{
			HX_STACK_LINE(279)
			::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(279)
			{
				HX_STACK_LINE(279)
				::String tmp3 = this->edit;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(279)
				::String s = tmp3;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(279)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(279)
				{
					HX_STACK_LINE(279)
					int index = (int)0;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(279)
					{
						HX_STACK_LINE(279)
						::String this1 = s;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(279)
						{
							HX_STACK_LINE(279)
							int index1 = index;		HX_STACK_VAR(index1,"index1");
							HX_STACK_LINE(279)
							int tmp5 = this1.length;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(279)
							int len = tmp5;		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(279)
							int i = (int)0;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(279)
							while((true)){
								HX_STACK_LINE(279)
								bool tmp6 = (i < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(279)
								bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(279)
								if ((tmp6)){
									HX_STACK_LINE(279)
									tmp7 = (index1 < len);
								}
								else{
									HX_STACK_LINE(279)
									tmp7 = false;
								}
								HX_STACK_LINE(279)
								bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(279)
								if ((tmp8)){
									HX_STACK_LINE(279)
									break;
								}
								HX_STACK_LINE(279)
								int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(279)
								{
									HX_STACK_LINE(279)
									int tmp10 = index1;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(279)
									int tmp11 = this1.cca(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(279)
									int c = tmp11;		HX_STACK_VAR(c,"c");
									HX_STACK_LINE(279)
									bool tmp12 = (c < (int)192);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(279)
									if ((tmp12)){
										HX_STACK_LINE(279)
										tmp9 = (int)1;
									}
									else{
										HX_STACK_LINE(279)
										bool tmp13 = (c < (int)224);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(279)
										if ((tmp13)){
											HX_STACK_LINE(279)
											tmp9 = (int)2;
										}
										else{
											HX_STACK_LINE(279)
											bool tmp14 = (c < (int)240);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(279)
											if ((tmp14)){
												HX_STACK_LINE(279)
												tmp9 = (int)3;
											}
											else{
												HX_STACK_LINE(279)
												bool tmp15 = (c < (int)248);		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(279)
												if ((tmp15)){
													HX_STACK_LINE(279)
													tmp9 = (int)4;
												}
												else{
													HX_STACK_LINE(279)
													tmp9 = (int)1;
												}
											}
										}
									}
								}
								HX_STACK_LINE(279)
								hx::AddEq(index1,tmp9);
								HX_STACK_LINE(279)
								++(i);
							}
							HX_STACK_LINE(279)
							tmp4 = index1;
						}
					}
				}
				HX_STACK_LINE(279)
				int si = tmp4;		HX_STACK_VAR(si,"si");
				HX_STACK_LINE(279)
				bool tmp5 = (start == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(279)
				int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(279)
				if ((tmp5)){
					HX_STACK_LINE(279)
					tmp6 = s.length;
				}
				else{
					HX_STACK_LINE(279)
					bool tmp7 = (start < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(279)
					if ((tmp7)){
						HX_STACK_LINE(279)
						tmp6 = si;
					}
					else{
						HX_STACK_LINE(279)
						int codePointOffset = start;		HX_STACK_VAR(codePointOffset,"codePointOffset");
						HX_STACK_LINE(279)
						{
							HX_STACK_LINE(279)
							::String this1 = s;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(279)
							bool tmp8 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(279)
							if ((tmp8)){
								HX_STACK_LINE(279)
								int index = si;		HX_STACK_VAR(index,"index");
								HX_STACK_LINE(279)
								int tmp9 = this1.length;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(279)
								int len = tmp9;		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(279)
								int i = (int)0;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(279)
								while((true)){
									HX_STACK_LINE(279)
									bool tmp10 = (i < codePointOffset);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(279)
									bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(279)
									if ((tmp10)){
										HX_STACK_LINE(279)
										tmp11 = (index < len);
									}
									else{
										HX_STACK_LINE(279)
										tmp11 = false;
									}
									HX_STACK_LINE(279)
									bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(279)
									if ((tmp12)){
										HX_STACK_LINE(279)
										break;
									}
									HX_STACK_LINE(279)
									int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(279)
									{
										HX_STACK_LINE(279)
										int tmp14 = index;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(279)
										int tmp15 = this1.cca(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(279)
										int c = tmp15;		HX_STACK_VAR(c,"c");
										HX_STACK_LINE(279)
										bool tmp16 = (c < (int)192);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(279)
										if ((tmp16)){
											HX_STACK_LINE(279)
											tmp13 = (int)1;
										}
										else{
											HX_STACK_LINE(279)
											bool tmp17 = (c < (int)224);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(279)
											if ((tmp17)){
												HX_STACK_LINE(279)
												tmp13 = (int)2;
											}
											else{
												HX_STACK_LINE(279)
												bool tmp18 = (c < (int)240);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(279)
												if ((tmp18)){
													HX_STACK_LINE(279)
													tmp13 = (int)3;
												}
												else{
													HX_STACK_LINE(279)
													bool tmp19 = (c < (int)248);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(279)
													if ((tmp19)){
														HX_STACK_LINE(279)
														tmp13 = (int)4;
													}
													else{
														HX_STACK_LINE(279)
														tmp13 = (int)1;
													}
												}
											}
										}
									}
									HX_STACK_LINE(279)
									hx::AddEq(index,tmp13);
									HX_STACK_LINE(279)
									++(i);
								}
								HX_STACK_LINE(279)
								tmp6 = index;
							}
							else{
								HX_STACK_LINE(279)
								int index = si;		HX_STACK_VAR(index,"index");
								HX_STACK_LINE(279)
								int count1 = (int)0;		HX_STACK_VAR(count1,"count1");
								HX_STACK_LINE(279)
								while((true)){
									HX_STACK_LINE(279)
									int tmp9 = count1;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(279)
									int tmp10 = codePointOffset;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(279)
									int tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(279)
									bool tmp12 = (tmp9 < tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(279)
									bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(279)
									if ((tmp12)){
										HX_STACK_LINE(279)
										tmp13 = ((int)0 < index);
									}
									else{
										HX_STACK_LINE(279)
										tmp13 = false;
									}
									HX_STACK_LINE(279)
									bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(279)
									if ((tmp14)){
										HX_STACK_LINE(279)
										break;
									}
									HX_STACK_LINE(279)
									int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(279)
									{
										HX_STACK_LINE(279)
										::String this2 = this1;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(279)
										{
											HX_STACK_LINE(279)
											int tmp16 = (index - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(279)
											int tmp17 = this2.cca(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(279)
											int c1 = tmp17;		HX_STACK_VAR(c1,"c1");
											HX_STACK_LINE(279)
											bool tmp18 = (c1 < (int)128);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(279)
											bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(279)
											bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(279)
											if ((tmp19)){
												HX_STACK_LINE(279)
												tmp20 = (c1 >= (int)192);
											}
											else{
												HX_STACK_LINE(279)
												tmp20 = true;
											}
											HX_STACK_LINE(279)
											if ((tmp20)){
												HX_STACK_LINE(279)
												tmp15 = (int)1;
											}
											else{
												HX_STACK_LINE(279)
												int tmp21 = (index - (int)2);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(279)
												int tmp22 = this2.cca(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(279)
												int tmp23 = (int(tmp22) & int((int)224));		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(279)
												bool tmp24 = (tmp23 == (int)192);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(279)
												if ((tmp24)){
													HX_STACK_LINE(279)
													tmp15 = (int)2;
												}
												else{
													HX_STACK_LINE(279)
													int tmp25 = (index - (int)3);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(279)
													int tmp26 = this2.cca(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(279)
													int tmp27 = (int(tmp26) & int((int)240));		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(279)
													bool tmp28 = (tmp27 == (int)224);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(279)
													if ((tmp28)){
														HX_STACK_LINE(279)
														tmp15 = (int)3;
													}
													else{
														HX_STACK_LINE(279)
														int tmp29 = (index - (int)4);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(279)
														int tmp30 = this2.cca(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(279)
														int tmp31 = (int(tmp30) & int((int)248));		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(279)
														bool tmp32 = (tmp31 == (int)240);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(279)
														if ((tmp32)){
															HX_STACK_LINE(279)
															tmp15 = (int)4;
														}
														else{
															HX_STACK_LINE(279)
															tmp15 = (int)1;
														}
													}
												}
											}
										}
									}
									HX_STACK_LINE(279)
									hx::SubEq(index,tmp15);
									HX_STACK_LINE(279)
									++(count1);
								}
								HX_STACK_LINE(279)
								tmp6 = index;
							}
						}
					}
				}
				HX_STACK_LINE(279)
				int ei = tmp6;		HX_STACK_VAR(ei,"ei");
				HX_STACK_LINE(279)
				int tmp7 = si;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(279)
				int tmp8 = ei;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(279)
				tmp2 = s.substring(tmp7,tmp8);
			}
			HX_STACK_LINE(279)
			::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(279)
			{
				HX_STACK_LINE(279)
				::String tmp4 = a;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(279)
				int tmp5 = a.length;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(279)
				int tmp6 = ::mint::core::unifill::_Utf8::Utf8_Impl__obj::codePointCount(tmp4,(int)0,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(279)
				Dynamic length = tmp6;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(279)
				int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(279)
				{
					HX_STACK_LINE(279)
					bool tmp8 = (count >= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(279)
					int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(279)
					if ((tmp8)){
						HX_STACK_LINE(279)
						tmp9 = (int)0;
					}
					else{
						HX_STACK_LINE(279)
						tmp9 = a.length;
					}
					HX_STACK_LINE(279)
					int index = tmp9;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(279)
					{
						HX_STACK_LINE(279)
						::String this1 = a;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(279)
						bool tmp10 = (count >= (int)0);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(279)
						if ((tmp10)){
							HX_STACK_LINE(279)
							int index1 = index;		HX_STACK_VAR(index1,"index1");
							HX_STACK_LINE(279)
							int tmp11 = this1.length;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(279)
							int len = tmp11;		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(279)
							int i = (int)0;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(279)
							while((true)){
								HX_STACK_LINE(279)
								bool tmp12 = (i < count);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(279)
								bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(279)
								if ((tmp12)){
									HX_STACK_LINE(279)
									tmp13 = (index1 < len);
								}
								else{
									HX_STACK_LINE(279)
									tmp13 = false;
								}
								HX_STACK_LINE(279)
								bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(279)
								if ((tmp14)){
									HX_STACK_LINE(279)
									break;
								}
								HX_STACK_LINE(279)
								int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(279)
								{
									HX_STACK_LINE(279)
									int tmp16 = index1;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(279)
									int tmp17 = this1.cca(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(279)
									int c = tmp17;		HX_STACK_VAR(c,"c");
									HX_STACK_LINE(279)
									bool tmp18 = (c < (int)192);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(279)
									if ((tmp18)){
										HX_STACK_LINE(279)
										tmp15 = (int)1;
									}
									else{
										HX_STACK_LINE(279)
										bool tmp19 = (c < (int)224);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(279)
										if ((tmp19)){
											HX_STACK_LINE(279)
											tmp15 = (int)2;
										}
										else{
											HX_STACK_LINE(279)
											bool tmp20 = (c < (int)240);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(279)
											if ((tmp20)){
												HX_STACK_LINE(279)
												tmp15 = (int)3;
											}
											else{
												HX_STACK_LINE(279)
												bool tmp21 = (c < (int)248);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(279)
												if ((tmp21)){
													HX_STACK_LINE(279)
													tmp15 = (int)4;
												}
												else{
													HX_STACK_LINE(279)
													tmp15 = (int)1;
												}
											}
										}
									}
								}
								HX_STACK_LINE(279)
								hx::AddEq(index1,tmp15);
								HX_STACK_LINE(279)
								++(i);
							}
							HX_STACK_LINE(279)
							tmp7 = index1;
						}
						else{
							HX_STACK_LINE(279)
							int index1 = index;		HX_STACK_VAR(index1,"index1");
							HX_STACK_LINE(279)
							int count1 = (int)0;		HX_STACK_VAR(count1,"count1");
							HX_STACK_LINE(279)
							while((true)){
								HX_STACK_LINE(279)
								int tmp11 = count1;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(279)
								int tmp12 = count;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(279)
								int tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(279)
								bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(279)
								bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(279)
								if ((tmp14)){
									HX_STACK_LINE(279)
									tmp15 = ((int)0 < index1);
								}
								else{
									HX_STACK_LINE(279)
									tmp15 = false;
								}
								HX_STACK_LINE(279)
								bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(279)
								if ((tmp16)){
									HX_STACK_LINE(279)
									break;
								}
								HX_STACK_LINE(279)
								int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(279)
								{
									HX_STACK_LINE(279)
									::String this2 = this1;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(279)
									{
										HX_STACK_LINE(279)
										int tmp18 = (index1 - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(279)
										int tmp19 = this2.cca(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(279)
										int c1 = tmp19;		HX_STACK_VAR(c1,"c1");
										HX_STACK_LINE(279)
										bool tmp20 = (c1 < (int)128);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(279)
										bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(279)
										bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(279)
										if ((tmp21)){
											HX_STACK_LINE(279)
											tmp22 = (c1 >= (int)192);
										}
										else{
											HX_STACK_LINE(279)
											tmp22 = true;
										}
										HX_STACK_LINE(279)
										if ((tmp22)){
											HX_STACK_LINE(279)
											tmp17 = (int)1;
										}
										else{
											HX_STACK_LINE(279)
											int tmp23 = (index1 - (int)2);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(279)
											int tmp24 = this2.cca(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(279)
											int tmp25 = (int(tmp24) & int((int)224));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(279)
											bool tmp26 = (tmp25 == (int)192);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(279)
											if ((tmp26)){
												HX_STACK_LINE(279)
												tmp17 = (int)2;
											}
											else{
												HX_STACK_LINE(279)
												int tmp27 = (index1 - (int)3);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(279)
												int tmp28 = this2.cca(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(279)
												int tmp29 = (int(tmp28) & int((int)240));		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(279)
												bool tmp30 = (tmp29 == (int)224);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(279)
												if ((tmp30)){
													HX_STACK_LINE(279)
													tmp17 = (int)3;
												}
												else{
													HX_STACK_LINE(279)
													int tmp31 = (index1 - (int)4);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(279)
													int tmp32 = this2.cca(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(279)
													int tmp33 = (int(tmp32) & int((int)248));		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(279)
													bool tmp34 = (tmp33 == (int)240);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(279)
													if ((tmp34)){
														HX_STACK_LINE(279)
														tmp17 = (int)4;
													}
													else{
														HX_STACK_LINE(279)
														tmp17 = (int)1;
													}
												}
											}
										}
									}
								}
								HX_STACK_LINE(279)
								hx::SubEq(index1,tmp17);
								HX_STACK_LINE(279)
								++(count1);
							}
							HX_STACK_LINE(279)
							tmp7 = index1;
						}
					}
				}
				HX_STACK_LINE(279)
				int si = tmp7;		HX_STACK_VAR(si,"si");
				HX_STACK_LINE(279)
				bool tmp8 = (length == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(279)
				int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(279)
				if ((tmp8)){
					HX_STACK_LINE(279)
					tmp9 = a.length;
				}
				else{
					HX_STACK_LINE(279)
					bool tmp10 = (length < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(279)
					if ((tmp10)){
						HX_STACK_LINE(279)
						tmp9 = si;
					}
					else{
						HX_STACK_LINE(279)
						int codePointOffset = length;		HX_STACK_VAR(codePointOffset,"codePointOffset");
						HX_STACK_LINE(279)
						{
							HX_STACK_LINE(279)
							::String this1 = a;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(279)
							bool tmp11 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(279)
							if ((tmp11)){
								HX_STACK_LINE(279)
								int index = si;		HX_STACK_VAR(index,"index");
								HX_STACK_LINE(279)
								int tmp12 = this1.length;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(279)
								int len = tmp12;		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(279)
								int i = (int)0;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(279)
								while((true)){
									HX_STACK_LINE(279)
									bool tmp13 = (i < codePointOffset);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(279)
									bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(279)
									if ((tmp13)){
										HX_STACK_LINE(279)
										tmp14 = (index < len);
									}
									else{
										HX_STACK_LINE(279)
										tmp14 = false;
									}
									HX_STACK_LINE(279)
									bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(279)
									if ((tmp15)){
										HX_STACK_LINE(279)
										break;
									}
									HX_STACK_LINE(279)
									int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(279)
									{
										HX_STACK_LINE(279)
										int tmp17 = index;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(279)
										int tmp18 = this1.cca(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(279)
										int c = tmp18;		HX_STACK_VAR(c,"c");
										HX_STACK_LINE(279)
										bool tmp19 = (c < (int)192);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(279)
										if ((tmp19)){
											HX_STACK_LINE(279)
											tmp16 = (int)1;
										}
										else{
											HX_STACK_LINE(279)
											bool tmp20 = (c < (int)224);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(279)
											if ((tmp20)){
												HX_STACK_LINE(279)
												tmp16 = (int)2;
											}
											else{
												HX_STACK_LINE(279)
												bool tmp21 = (c < (int)240);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(279)
												if ((tmp21)){
													HX_STACK_LINE(279)
													tmp16 = (int)3;
												}
												else{
													HX_STACK_LINE(279)
													bool tmp22 = (c < (int)248);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(279)
													if ((tmp22)){
														HX_STACK_LINE(279)
														tmp16 = (int)4;
													}
													else{
														HX_STACK_LINE(279)
														tmp16 = (int)1;
													}
												}
											}
										}
									}
									HX_STACK_LINE(279)
									hx::AddEq(index,tmp16);
									HX_STACK_LINE(279)
									++(i);
								}
								HX_STACK_LINE(279)
								tmp9 = index;
							}
							else{
								HX_STACK_LINE(279)
								int index = si;		HX_STACK_VAR(index,"index");
								HX_STACK_LINE(279)
								int count1 = (int)0;		HX_STACK_VAR(count1,"count1");
								HX_STACK_LINE(279)
								while((true)){
									HX_STACK_LINE(279)
									int tmp12 = count1;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(279)
									int tmp13 = codePointOffset;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(279)
									int tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(279)
									bool tmp15 = (tmp12 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(279)
									bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(279)
									if ((tmp15)){
										HX_STACK_LINE(279)
										tmp16 = ((int)0 < index);
									}
									else{
										HX_STACK_LINE(279)
										tmp16 = false;
									}
									HX_STACK_LINE(279)
									bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(279)
									if ((tmp17)){
										HX_STACK_LINE(279)
										break;
									}
									HX_STACK_LINE(279)
									int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(279)
									{
										HX_STACK_LINE(279)
										::String this2 = this1;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(279)
										{
											HX_STACK_LINE(279)
											int tmp19 = (index - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(279)
											int tmp20 = this2.cca(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(279)
											int c1 = tmp20;		HX_STACK_VAR(c1,"c1");
											HX_STACK_LINE(279)
											bool tmp21 = (c1 < (int)128);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(279)
											bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(279)
											bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(279)
											if ((tmp22)){
												HX_STACK_LINE(279)
												tmp23 = (c1 >= (int)192);
											}
											else{
												HX_STACK_LINE(279)
												tmp23 = true;
											}
											HX_STACK_LINE(279)
											if ((tmp23)){
												HX_STACK_LINE(279)
												tmp18 = (int)1;
											}
											else{
												HX_STACK_LINE(279)
												int tmp24 = (index - (int)2);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(279)
												int tmp25 = this2.cca(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(279)
												int tmp26 = (int(tmp25) & int((int)224));		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(279)
												bool tmp27 = (tmp26 == (int)192);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(279)
												if ((tmp27)){
													HX_STACK_LINE(279)
													tmp18 = (int)2;
												}
												else{
													HX_STACK_LINE(279)
													int tmp28 = (index - (int)3);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(279)
													int tmp29 = this2.cca(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(279)
													int tmp30 = (int(tmp29) & int((int)240));		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(279)
													bool tmp31 = (tmp30 == (int)224);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(279)
													if ((tmp31)){
														HX_STACK_LINE(279)
														tmp18 = (int)3;
													}
													else{
														HX_STACK_LINE(279)
														int tmp32 = (index - (int)4);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(279)
														int tmp33 = this2.cca(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(279)
														int tmp34 = (int(tmp33) & int((int)248));		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(279)
														bool tmp35 = (tmp34 == (int)240);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(279)
														if ((tmp35)){
															HX_STACK_LINE(279)
															tmp18 = (int)4;
														}
														else{
															HX_STACK_LINE(279)
															tmp18 = (int)1;
														}
													}
												}
											}
										}
									}
									HX_STACK_LINE(279)
									hx::SubEq(index,tmp18);
									HX_STACK_LINE(279)
									++(count1);
								}
								HX_STACK_LINE(279)
								tmp9 = index;
							}
						}
					}
				}
				HX_STACK_LINE(279)
				int ei = tmp9;		HX_STACK_VAR(ei,"ei");
				HX_STACK_LINE(279)
				int tmp10 = si;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(279)
				int tmp11 = ei;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(279)
				tmp3 = a.substring(tmp10,tmp11);
			}
			HX_STACK_LINE(279)
			::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(279)
			::String str = tmp4;		HX_STACK_VAR(str,"str");
			HX_STACK_LINE(279)
			bool _from_typing = true;		HX_STACK_VAR(_from_typing,"_from_typing");
			HX_STACK_LINE(279)
			bool _emit = true;		HX_STACK_VAR(_emit,"_emit");
			HX_STACK_LINE(279)
			this->edit = str;
			HX_STACK_LINE(279)
			::String tmp5 = this->display_char;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(279)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(279)
			if ((tmp6)){
				HX_STACK_LINE(279)
				this->display = HX_HCSTRING("","\x00","\x00","\x00","\x00");
				HX_STACK_LINE(279)
				::String tmp7 = str;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(279)
				int tmp8 = str.length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(279)
				int tmp9 = ::mint::core::unifill::_Utf8::Utf8_Impl__obj::codePointCount(tmp7,(int)0,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(279)
				int _l = tmp9;		HX_STACK_VAR(_l,"_l");
				HX_STACK_LINE(279)
				{
					HX_STACK_LINE(279)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(279)
					while((true)){
						HX_STACK_LINE(279)
						bool tmp10 = (_g < _l);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(279)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(279)
						if ((tmp11)){
							HX_STACK_LINE(279)
							break;
						}
						HX_STACK_LINE(279)
						int tmp12 = (_g)++;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(279)
						int i = tmp12;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(279)
						::String tmp13 = this->display_char;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(279)
						hx::AddEq(this->display,tmp13);
					}
				}
			}
			else{
				HX_STACK_LINE(279)
				::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(279)
				{
					HX_STACK_LINE(279)
					int tmp8 = this->index;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(279)
					int cur = tmp8;		HX_STACK_VAR(cur,"cur");
					HX_STACK_LINE(279)
					{
						HX_STACK_LINE(279)
						::String tmp9 = this->edit;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(279)
						::String s = tmp9;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(279)
						int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(279)
						{
							HX_STACK_LINE(279)
							bool tmp11 = true;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(279)
							int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(279)
							if ((tmp11)){
								HX_STACK_LINE(279)
								tmp12 = (int)0;
							}
							else{
								HX_STACK_LINE(279)
								tmp12 = s.length;
							}
							HX_STACK_LINE(279)
							int index = tmp12;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(279)
							{
								HX_STACK_LINE(279)
								::String this1 = s;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(279)
								bool tmp13 = true;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(279)
								if ((tmp13)){
									HX_STACK_LINE(279)
									int index1 = index;		HX_STACK_VAR(index1,"index1");
									HX_STACK_LINE(279)
									int tmp14 = this1.length;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(279)
									int len = tmp14;		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(279)
									int i = (int)0;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(279)
									while((true)){
										HX_STACK_LINE(279)
										bool tmp15 = (i < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(279)
										bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(279)
										if ((tmp15)){
											HX_STACK_LINE(279)
											tmp16 = (index1 < len);
										}
										else{
											HX_STACK_LINE(279)
											tmp16 = false;
										}
										HX_STACK_LINE(279)
										bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(279)
										if ((tmp17)){
											HX_STACK_LINE(279)
											break;
										}
										HX_STACK_LINE(279)
										int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(279)
										{
											HX_STACK_LINE(279)
											int tmp19 = index1;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(279)
											int tmp20 = this1.cca(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(279)
											int c = tmp20;		HX_STACK_VAR(c,"c");
											HX_STACK_LINE(279)
											bool tmp21 = (c < (int)192);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(279)
											if ((tmp21)){
												HX_STACK_LINE(279)
												tmp18 = (int)1;
											}
											else{
												HX_STACK_LINE(279)
												bool tmp22 = (c < (int)224);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(279)
												if ((tmp22)){
													HX_STACK_LINE(279)
													tmp18 = (int)2;
												}
												else{
													HX_STACK_LINE(279)
													bool tmp23 = (c < (int)240);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(279)
													if ((tmp23)){
														HX_STACK_LINE(279)
														tmp18 = (int)3;
													}
													else{
														HX_STACK_LINE(279)
														bool tmp24 = (c < (int)248);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(279)
														if ((tmp24)){
															HX_STACK_LINE(279)
															tmp18 = (int)4;
														}
														else{
															HX_STACK_LINE(279)
															tmp18 = (int)1;
														}
													}
												}
											}
										}
										HX_STACK_LINE(279)
										hx::AddEq(index1,tmp18);
										HX_STACK_LINE(279)
										++(i);
									}
									HX_STACK_LINE(279)
									tmp10 = index1;
								}
								else{
									HX_STACK_LINE(279)
									int index1 = index;		HX_STACK_VAR(index1,"index1");
									HX_STACK_LINE(279)
									int count1 = (int)0;		HX_STACK_VAR(count1,"count1");
									HX_STACK_LINE(279)
									while((true)){
										HX_STACK_LINE(279)
										int tmp14 = count1;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(279)
										int tmp15 = (int)0;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(279)
										bool tmp16 = (tmp14 < tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(279)
										bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(279)
										if ((tmp16)){
											HX_STACK_LINE(279)
											tmp17 = ((int)0 < index1);
										}
										else{
											HX_STACK_LINE(279)
											tmp17 = false;
										}
										HX_STACK_LINE(279)
										bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(279)
										if ((tmp18)){
											HX_STACK_LINE(279)
											break;
										}
										HX_STACK_LINE(279)
										int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(279)
										{
											HX_STACK_LINE(279)
											::String this2 = this1;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(279)
											{
												HX_STACK_LINE(279)
												int tmp20 = (index1 - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(279)
												int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(279)
												{
													HX_STACK_LINE(279)
													int tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(279)
													int tmp23 = this2.cca(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(279)
													tmp21 = tmp23;
												}
												HX_STACK_LINE(279)
												int c1 = tmp21;		HX_STACK_VAR(c1,"c1");
												HX_STACK_LINE(279)
												bool tmp22 = (c1 < (int)128);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(279)
												bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(279)
												bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(279)
												if ((tmp23)){
													HX_STACK_LINE(279)
													tmp24 = (c1 >= (int)192);
												}
												else{
													HX_STACK_LINE(279)
													tmp24 = true;
												}
												HX_STACK_LINE(279)
												if ((tmp24)){
													HX_STACK_LINE(279)
													tmp19 = (int)1;
												}
												else{
													HX_STACK_LINE(279)
													int tmp25 = (index1 - (int)2);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(279)
													int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(279)
													{
														HX_STACK_LINE(279)
														int tmp27 = tmp25;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(279)
														int tmp28 = this2.cca(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(279)
														tmp26 = tmp28;
													}
													HX_STACK_LINE(279)
													int tmp27 = (int(tmp26) & int((int)224));		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(279)
													bool tmp28 = (tmp27 == (int)192);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(279)
													if ((tmp28)){
														HX_STACK_LINE(279)
														tmp19 = (int)2;
													}
													else{
														HX_STACK_LINE(279)
														int tmp29 = (index1 - (int)3);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(279)
														int tmp30;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(279)
														{
															HX_STACK_LINE(279)
															int tmp31 = tmp29;		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(279)
															int tmp32 = this2.cca(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(279)
															tmp30 = tmp32;
														}
														HX_STACK_LINE(279)
														int tmp31 = (int(tmp30) & int((int)240));		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(279)
														bool tmp32 = (tmp31 == (int)224);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(279)
														if ((tmp32)){
															HX_STACK_LINE(279)
															tmp19 = (int)3;
														}
														else{
															HX_STACK_LINE(279)
															int tmp33 = (index1 - (int)4);		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(279)
															int tmp34;		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(279)
															{
																HX_STACK_LINE(279)
																int tmp35 = tmp33;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(279)
																int tmp36 = this2.cca(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(279)
																tmp34 = tmp36;
															}
															HX_STACK_LINE(279)
															int tmp35 = (int(tmp34) & int((int)248));		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(279)
															bool tmp36 = (tmp35 == (int)240);		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(279)
															if ((tmp36)){
																HX_STACK_LINE(279)
																tmp19 = (int)4;
															}
															else{
																HX_STACK_LINE(279)
																tmp19 = (int)1;
															}
														}
													}
												}
											}
										}
										HX_STACK_LINE(279)
										hx::SubEq(index1,tmp19);
										HX_STACK_LINE(279)
										++(count1);
									}
									HX_STACK_LINE(279)
									tmp10 = index1;
								}
							}
						}
						HX_STACK_LINE(279)
						int si = tmp10;		HX_STACK_VAR(si,"si");
						HX_STACK_LINE(279)
						bool tmp11 = (cur == null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(279)
						int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(279)
						if ((tmp11)){
							HX_STACK_LINE(279)
							tmp12 = s.length;
						}
						else{
							HX_STACK_LINE(279)
							bool tmp13 = (cur < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(279)
							if ((tmp13)){
								HX_STACK_LINE(279)
								tmp12 = si;
							}
							else{
								HX_STACK_LINE(279)
								int codePointOffset = cur;		HX_STACK_VAR(codePointOffset,"codePointOffset");
								HX_STACK_LINE(279)
								{
									HX_STACK_LINE(279)
									::String this1 = s;		HX_STACK_VAR(this1,"this1");
									HX_STACK_LINE(279)
									bool tmp14 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(279)
									if ((tmp14)){
										HX_STACK_LINE(279)
										int index = si;		HX_STACK_VAR(index,"index");
										HX_STACK_LINE(279)
										int tmp15 = this1.length;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(279)
										int len = tmp15;		HX_STACK_VAR(len,"len");
										HX_STACK_LINE(279)
										int i = (int)0;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(279)
										while((true)){
											HX_STACK_LINE(279)
											bool tmp16 = (i < codePointOffset);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(279)
											bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(279)
											if ((tmp16)){
												HX_STACK_LINE(279)
												tmp17 = (index < len);
											}
											else{
												HX_STACK_LINE(279)
												tmp17 = false;
											}
											HX_STACK_LINE(279)
											bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(279)
											if ((tmp18)){
												HX_STACK_LINE(279)
												break;
											}
											HX_STACK_LINE(279)
											int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(279)
											{
												HX_STACK_LINE(279)
												int tmp20 = index;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(279)
												int tmp21 = this1.cca(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(279)
												int c = tmp21;		HX_STACK_VAR(c,"c");
												HX_STACK_LINE(279)
												bool tmp22 = (c < (int)192);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(279)
												if ((tmp22)){
													HX_STACK_LINE(279)
													tmp19 = (int)1;
												}
												else{
													HX_STACK_LINE(279)
													bool tmp23 = (c < (int)224);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(279)
													if ((tmp23)){
														HX_STACK_LINE(279)
														tmp19 = (int)2;
													}
													else{
														HX_STACK_LINE(279)
														bool tmp24 = (c < (int)240);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(279)
														if ((tmp24)){
															HX_STACK_LINE(279)
															tmp19 = (int)3;
														}
														else{
															HX_STACK_LINE(279)
															bool tmp25 = (c < (int)248);		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(279)
															if ((tmp25)){
																HX_STACK_LINE(279)
																tmp19 = (int)4;
															}
															else{
																HX_STACK_LINE(279)
																tmp19 = (int)1;
															}
														}
													}
												}
											}
											HX_STACK_LINE(279)
											hx::AddEq(index,tmp19);
											HX_STACK_LINE(279)
											++(i);
										}
										HX_STACK_LINE(279)
										tmp12 = index;
									}
									else{
										HX_STACK_LINE(279)
										int index = si;		HX_STACK_VAR(index,"index");
										HX_STACK_LINE(279)
										int count1 = (int)0;		HX_STACK_VAR(count1,"count1");
										HX_STACK_LINE(279)
										while((true)){
											HX_STACK_LINE(279)
											int tmp15 = count1;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(279)
											int tmp16 = codePointOffset;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(279)
											int tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(279)
											bool tmp18 = (tmp15 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(279)
											bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(279)
											if ((tmp18)){
												HX_STACK_LINE(279)
												tmp19 = ((int)0 < index);
											}
											else{
												HX_STACK_LINE(279)
												tmp19 = false;
											}
											HX_STACK_LINE(279)
											bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(279)
											if ((tmp20)){
												HX_STACK_LINE(279)
												break;
											}
											HX_STACK_LINE(279)
											int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(279)
											{
												HX_STACK_LINE(279)
												::String this2 = this1;		HX_STACK_VAR(this2,"this2");
												HX_STACK_LINE(279)
												{
													HX_STACK_LINE(279)
													int tmp22 = (index - (int)1);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(279)
													int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(279)
													{
														HX_STACK_LINE(279)
														int tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(279)
														int tmp25 = this2.cca(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(279)
														tmp23 = tmp25;
													}
													HX_STACK_LINE(279)
													int c1 = tmp23;		HX_STACK_VAR(c1,"c1");
													HX_STACK_LINE(279)
													bool tmp24 = (c1 < (int)128);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(279)
													bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(279)
													bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(279)
													if ((tmp25)){
														HX_STACK_LINE(279)
														tmp26 = (c1 >= (int)192);
													}
													else{
														HX_STACK_LINE(279)
														tmp26 = true;
													}
													HX_STACK_LINE(279)
													if ((tmp26)){
														HX_STACK_LINE(279)
														tmp21 = (int)1;
													}
													else{
														HX_STACK_LINE(279)
														int tmp27 = (index - (int)2);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(279)
														int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(279)
														{
															HX_STACK_LINE(279)
															int tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(279)
															int tmp30 = this2.cca(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(279)
															tmp28 = tmp30;
														}
														HX_STACK_LINE(279)
														int tmp29 = (int(tmp28) & int((int)224));		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(279)
														bool tmp30 = (tmp29 == (int)192);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(279)
														if ((tmp30)){
															HX_STACK_LINE(279)
															tmp21 = (int)2;
														}
														else{
															HX_STACK_LINE(279)
															int tmp31 = (index - (int)3);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(279)
															int tmp32;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(279)
															{
																HX_STACK_LINE(279)
																int tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(279)
																int tmp34 = this2.cca(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(279)
																tmp32 = tmp34;
															}
															HX_STACK_LINE(279)
															int tmp33 = (int(tmp32) & int((int)240));		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(279)
															bool tmp34 = (tmp33 == (int)224);		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(279)
															if ((tmp34)){
																HX_STACK_LINE(279)
																tmp21 = (int)3;
															}
															else{
																HX_STACK_LINE(279)
																int tmp35 = (index - (int)4);		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(279)
																int tmp36;		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(279)
																{
																	HX_STACK_LINE(279)
																	int tmp37 = tmp35;		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(279)
																	int tmp38 = this2.cca(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(279)
																	tmp36 = tmp38;
																}
																HX_STACK_LINE(279)
																int tmp37 = (int(tmp36) & int((int)248));		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(279)
																bool tmp38 = (tmp37 == (int)240);		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(279)
																if ((tmp38)){
																	HX_STACK_LINE(279)
																	tmp21 = (int)4;
																}
																else{
																	HX_STACK_LINE(279)
																	tmp21 = (int)1;
																}
															}
														}
													}
												}
											}
											HX_STACK_LINE(279)
											hx::SubEq(index,tmp21);
											HX_STACK_LINE(279)
											++(count1);
										}
										HX_STACK_LINE(279)
										tmp12 = index;
									}
								}
							}
						}
						HX_STACK_LINE(279)
						int ei = tmp12;		HX_STACK_VAR(ei,"ei");
						HX_STACK_LINE(279)
						int tmp13 = si;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(279)
						int tmp14 = ei;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(279)
						tmp7 = s.substring(tmp13,tmp14);
					}
				}
				HX_STACK_LINE(279)
				::String tmp8 = this->composition;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(279)
				::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(279)
				::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(279)
				{
					HX_STACK_LINE(279)
					int tmp11 = this->index;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(279)
					int cur = tmp11;		HX_STACK_VAR(cur,"cur");
					HX_STACK_LINE(279)
					{
						HX_STACK_LINE(279)
						::String tmp12 = this->edit;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(279)
						::String s = tmp12;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(279)
						::String tmp13 = this->edit;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(279)
						Dynamic length = tmp13.length;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(279)
						int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(279)
						{
							HX_STACK_LINE(279)
							bool tmp15 = (cur >= (int)0);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(279)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(279)
							if ((tmp15)){
								HX_STACK_LINE(279)
								tmp16 = (int)0;
							}
							else{
								HX_STACK_LINE(279)
								tmp16 = s.length;
							}
							HX_STACK_LINE(279)
							int index = tmp16;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(279)
							{
								HX_STACK_LINE(279)
								::String this1 = s;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(279)
								bool tmp17 = (cur >= (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(279)
								if ((tmp17)){
									HX_STACK_LINE(279)
									int index1 = index;		HX_STACK_VAR(index1,"index1");
									HX_STACK_LINE(279)
									int tmp18 = this1.length;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(279)
									int len = tmp18;		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(279)
									int i = (int)0;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(279)
									while((true)){
										HX_STACK_LINE(279)
										bool tmp19 = (i < cur);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(279)
										bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(279)
										if ((tmp19)){
											HX_STACK_LINE(279)
											tmp20 = (index1 < len);
										}
										else{
											HX_STACK_LINE(279)
											tmp20 = false;
										}
										HX_STACK_LINE(279)
										bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(279)
										if ((tmp21)){
											HX_STACK_LINE(279)
											break;
										}
										HX_STACK_LINE(279)
										int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(279)
										{
											HX_STACK_LINE(279)
											int tmp23 = index1;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(279)
											int tmp24 = this1.cca(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(279)
											int c = tmp24;		HX_STACK_VAR(c,"c");
											HX_STACK_LINE(279)
											bool tmp25 = (c < (int)192);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(279)
											if ((tmp25)){
												HX_STACK_LINE(279)
												tmp22 = (int)1;
											}
											else{
												HX_STACK_LINE(279)
												bool tmp26 = (c < (int)224);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(279)
												if ((tmp26)){
													HX_STACK_LINE(279)
													tmp22 = (int)2;
												}
												else{
													HX_STACK_LINE(279)
													bool tmp27 = (c < (int)240);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(279)
													if ((tmp27)){
														HX_STACK_LINE(279)
														tmp22 = (int)3;
													}
													else{
														HX_STACK_LINE(279)
														bool tmp28 = (c < (int)248);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(279)
														if ((tmp28)){
															HX_STACK_LINE(279)
															tmp22 = (int)4;
														}
														else{
															HX_STACK_LINE(279)
															tmp22 = (int)1;
														}
													}
												}
											}
										}
										HX_STACK_LINE(279)
										hx::AddEq(index1,tmp22);
										HX_STACK_LINE(279)
										++(i);
									}
									HX_STACK_LINE(279)
									tmp14 = index1;
								}
								else{
									HX_STACK_LINE(279)
									int index1 = index;		HX_STACK_VAR(index1,"index1");
									HX_STACK_LINE(279)
									int count1 = (int)0;		HX_STACK_VAR(count1,"count1");
									HX_STACK_LINE(279)
									while((true)){
										HX_STACK_LINE(279)
										int tmp18 = count1;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(279)
										int tmp19 = cur;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(279)
										int tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(279)
										bool tmp21 = (tmp18 < tmp20);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(279)
										bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(279)
										if ((tmp21)){
											HX_STACK_LINE(279)
											tmp22 = ((int)0 < index1);
										}
										else{
											HX_STACK_LINE(279)
											tmp22 = false;
										}
										HX_STACK_LINE(279)
										bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(279)
										if ((tmp23)){
											HX_STACK_LINE(279)
											break;
										}
										HX_STACK_LINE(279)
										int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(279)
										{
											HX_STACK_LINE(279)
											::String this2 = this1;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(279)
											{
												HX_STACK_LINE(279)
												int tmp25 = (index1 - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(279)
												int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(279)
												{
													HX_STACK_LINE(279)
													int tmp27 = tmp25;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(279)
													int tmp28 = this2.cca(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(279)
													tmp26 = tmp28;
												}
												HX_STACK_LINE(279)
												int c1 = tmp26;		HX_STACK_VAR(c1,"c1");
												HX_STACK_LINE(279)
												bool tmp27 = (c1 < (int)128);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(279)
												bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(279)
												bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(279)
												if ((tmp28)){
													HX_STACK_LINE(279)
													tmp29 = (c1 >= (int)192);
												}
												else{
													HX_STACK_LINE(279)
													tmp29 = true;
												}
												HX_STACK_LINE(279)
												if ((tmp29)){
													HX_STACK_LINE(279)
													tmp24 = (int)1;
												}
												else{
													HX_STACK_LINE(279)
													int tmp30 = (index1 - (int)2);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(279)
													int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(279)
													{
														HX_STACK_LINE(279)
														int tmp32 = tmp30;		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(279)
														int tmp33 = this2.cca(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(279)
														tmp31 = tmp33;
													}
													HX_STACK_LINE(279)
													int tmp32 = (int(tmp31) & int((int)224));		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(279)
													bool tmp33 = (tmp32 == (int)192);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(279)
													if ((tmp33)){
														HX_STACK_LINE(279)
														tmp24 = (int)2;
													}
													else{
														HX_STACK_LINE(279)
														int tmp34 = (index1 - (int)3);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(279)
														int tmp35;		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(279)
														{
															HX_STACK_LINE(279)
															int tmp36 = tmp34;		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(279)
															int tmp37 = this2.cca(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(279)
															tmp35 = tmp37;
														}
														HX_STACK_LINE(279)
														int tmp36 = (int(tmp35) & int((int)240));		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(279)
														bool tmp37 = (tmp36 == (int)224);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(279)
														if ((tmp37)){
															HX_STACK_LINE(279)
															tmp24 = (int)3;
														}
														else{
															HX_STACK_LINE(279)
															int tmp38 = (index1 - (int)4);		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(279)
															int tmp39;		HX_STACK_VAR(tmp39,"tmp39");
															HX_STACK_LINE(279)
															{
																HX_STACK_LINE(279)
																int tmp40 = tmp38;		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(279)
																int tmp41 = this2.cca(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(279)
																tmp39 = tmp41;
															}
															HX_STACK_LINE(279)
															int tmp40 = (int(tmp39) & int((int)248));		HX_STACK_VAR(tmp40,"tmp40");
															HX_STACK_LINE(279)
															bool tmp41 = (tmp40 == (int)240);		HX_STACK_VAR(tmp41,"tmp41");
															HX_STACK_LINE(279)
															if ((tmp41)){
																HX_STACK_LINE(279)
																tmp24 = (int)4;
															}
															else{
																HX_STACK_LINE(279)
																tmp24 = (int)1;
															}
														}
													}
												}
											}
										}
										HX_STACK_LINE(279)
										hx::SubEq(index1,tmp24);
										HX_STACK_LINE(279)
										++(count1);
									}
									HX_STACK_LINE(279)
									tmp14 = index1;
								}
							}
						}
						HX_STACK_LINE(279)
						int si = tmp14;		HX_STACK_VAR(si,"si");
						HX_STACK_LINE(279)
						bool tmp15 = (length == null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(279)
						int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(279)
						if ((tmp15)){
							HX_STACK_LINE(279)
							tmp16 = s.length;
						}
						else{
							HX_STACK_LINE(279)
							bool tmp17 = (length < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(279)
							if ((tmp17)){
								HX_STACK_LINE(279)
								tmp16 = si;
							}
							else{
								HX_STACK_LINE(279)
								int codePointOffset = length;		HX_STACK_VAR(codePointOffset,"codePointOffset");
								HX_STACK_LINE(279)
								{
									HX_STACK_LINE(279)
									::String this1 = s;		HX_STACK_VAR(this1,"this1");
									HX_STACK_LINE(279)
									bool tmp18 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(279)
									if ((tmp18)){
										HX_STACK_LINE(279)
										int index = si;		HX_STACK_VAR(index,"index");
										HX_STACK_LINE(279)
										int tmp19 = this1.length;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(279)
										int len = tmp19;		HX_STACK_VAR(len,"len");
										HX_STACK_LINE(279)
										int i = (int)0;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(279)
										while((true)){
											HX_STACK_LINE(279)
											bool tmp20 = (i < codePointOffset);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(279)
											bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(279)
											if ((tmp20)){
												HX_STACK_LINE(279)
												tmp21 = (index < len);
											}
											else{
												HX_STACK_LINE(279)
												tmp21 = false;
											}
											HX_STACK_LINE(279)
											bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(279)
											if ((tmp22)){
												HX_STACK_LINE(279)
												break;
											}
											HX_STACK_LINE(279)
											int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(279)
											{
												HX_STACK_LINE(279)
												int tmp24 = index;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(279)
												int tmp25 = this1.cca(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(279)
												int c = tmp25;		HX_STACK_VAR(c,"c");
												HX_STACK_LINE(279)
												bool tmp26 = (c < (int)192);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(279)
												if ((tmp26)){
													HX_STACK_LINE(279)
													tmp23 = (int)1;
												}
												else{
													HX_STACK_LINE(279)
													bool tmp27 = (c < (int)224);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(279)
													if ((tmp27)){
														HX_STACK_LINE(279)
														tmp23 = (int)2;
													}
													else{
														HX_STACK_LINE(279)
														bool tmp28 = (c < (int)240);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(279)
														if ((tmp28)){
															HX_STACK_LINE(279)
															tmp23 = (int)3;
														}
														else{
															HX_STACK_LINE(279)
															bool tmp29 = (c < (int)248);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(279)
															if ((tmp29)){
																HX_STACK_LINE(279)
																tmp23 = (int)4;
															}
															else{
																HX_STACK_LINE(279)
																tmp23 = (int)1;
															}
														}
													}
												}
											}
											HX_STACK_LINE(279)
											hx::AddEq(index,tmp23);
											HX_STACK_LINE(279)
											++(i);
										}
										HX_STACK_LINE(279)
										tmp16 = index;
									}
									else{
										HX_STACK_LINE(279)
										int index = si;		HX_STACK_VAR(index,"index");
										HX_STACK_LINE(279)
										int count1 = (int)0;		HX_STACK_VAR(count1,"count1");
										HX_STACK_LINE(279)
										while((true)){
											HX_STACK_LINE(279)
											int tmp19 = count1;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(279)
											int tmp20 = codePointOffset;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(279)
											int tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(279)
											bool tmp22 = (tmp19 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(279)
											bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(279)
											if ((tmp22)){
												HX_STACK_LINE(279)
												tmp23 = ((int)0 < index);
											}
											else{
												HX_STACK_LINE(279)
												tmp23 = false;
											}
											HX_STACK_LINE(279)
											bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(279)
											if ((tmp24)){
												HX_STACK_LINE(279)
												break;
											}
											HX_STACK_LINE(279)
											int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(279)
											{
												HX_STACK_LINE(279)
												::String this2 = this1;		HX_STACK_VAR(this2,"this2");
												HX_STACK_LINE(279)
												{
													HX_STACK_LINE(279)
													int tmp26 = (index - (int)1);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(279)
													int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(279)
													{
														HX_STACK_LINE(279)
														int tmp28 = tmp26;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(279)
														int tmp29 = this2.cca(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(279)
														tmp27 = tmp29;
													}
													HX_STACK_LINE(279)
													int c1 = tmp27;		HX_STACK_VAR(c1,"c1");
													HX_STACK_LINE(279)
													bool tmp28 = (c1 < (int)128);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(279)
													bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(279)
													bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(279)
													if ((tmp29)){
														HX_STACK_LINE(279)
														tmp30 = (c1 >= (int)192);
													}
													else{
														HX_STACK_LINE(279)
														tmp30 = true;
													}
													HX_STACK_LINE(279)
													if ((tmp30)){
														HX_STACK_LINE(279)
														tmp25 = (int)1;
													}
													else{
														HX_STACK_LINE(279)
														int tmp31 = (index - (int)2);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(279)
														int tmp32;		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(279)
														{
															HX_STACK_LINE(279)
															int tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(279)
															int tmp34 = this2.cca(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(279)
															tmp32 = tmp34;
														}
														HX_STACK_LINE(279)
														int tmp33 = (int(tmp32) & int((int)224));		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(279)
														bool tmp34 = (tmp33 == (int)192);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(279)
														if ((tmp34)){
															HX_STACK_LINE(279)
															tmp25 = (int)2;
														}
														else{
															HX_STACK_LINE(279)
															int tmp35 = (index - (int)3);		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(279)
															int tmp36;		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(279)
															{
																HX_STACK_LINE(279)
																int tmp37 = tmp35;		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(279)
																int tmp38 = this2.cca(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(279)
																tmp36 = tmp38;
															}
															HX_STACK_LINE(279)
															int tmp37 = (int(tmp36) & int((int)240));		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(279)
															bool tmp38 = (tmp37 == (int)224);		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(279)
															if ((tmp38)){
																HX_STACK_LINE(279)
																tmp25 = (int)3;
															}
															else{
																HX_STACK_LINE(279)
																int tmp39 = (index - (int)4);		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(279)
																int tmp40;		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(279)
																{
																	HX_STACK_LINE(279)
																	int tmp41 = tmp39;		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(279)
																	int tmp42 = this2.cca(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(279)
																	tmp40 = tmp42;
																}
																HX_STACK_LINE(279)
																int tmp41 = (int(tmp40) & int((int)248));		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(279)
																bool tmp42 = (tmp41 == (int)240);		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(279)
																if ((tmp42)){
																	HX_STACK_LINE(279)
																	tmp25 = (int)4;
																}
																else{
																	HX_STACK_LINE(279)
																	tmp25 = (int)1;
																}
															}
														}
													}
												}
											}
											HX_STACK_LINE(279)
											hx::SubEq(index,tmp25);
											HX_STACK_LINE(279)
											++(count1);
										}
										HX_STACK_LINE(279)
										tmp16 = index;
									}
								}
							}
						}
						HX_STACK_LINE(279)
						int ei = tmp16;		HX_STACK_VAR(ei,"ei");
						HX_STACK_LINE(279)
						int tmp17 = si;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(279)
						int tmp18 = ei;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(279)
						tmp10 = s.substring(tmp17,tmp18);
					}
				}
				HX_STACK_LINE(279)
				::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(279)
				this->display = tmp11;
			}
			HX_STACK_LINE(279)
			::mint::Label tmp7 = this->label;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(279)
			::String tmp8 = this->display;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(279)
			tmp7->set_text(tmp8);
			HX_STACK_LINE(279)
			{
				HX_STACK_LINE(279)
				int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
				HX_STACK_LINE(279)
				::mint::core::Signal tmp9 = this->onchangeindex;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(279)
				int tmp10 = tmp9->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(279)
				int _count = tmp10;		HX_STACK_VAR(_count,"_count");
				HX_STACK_LINE(279)
				while((true)){
					HX_STACK_LINE(279)
					bool tmp11 = (_idx < _count);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(279)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(279)
					if ((tmp12)){
						HX_STACK_LINE(279)
						break;
					}
					HX_STACK_LINE(279)
					::mint::core::Signal tmp13 = this->onchangeindex;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(279)
					Dynamic tmp14 = tmp13->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(279)
					Dynamic fn = tmp14;		HX_STACK_VAR(fn,"fn");
					HX_STACK_LINE(279)
					bool tmp15 = (fn != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(279)
					if ((tmp15)){
						HX_STACK_LINE(279)
						int tmp16 = this->index;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(279)
						fn(tmp16).Cast< Void >();
					}
					HX_STACK_LINE(279)
					(_idx)++;
				}
				HX_STACK_LINE(279)
				while((true)){
					HX_STACK_LINE(279)
					bool tmp11 = (_count > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(279)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(279)
					if ((tmp12)){
						HX_STACK_LINE(279)
						break;
					}
					HX_STACK_LINE(279)
					::mint::core::Signal tmp13 = this->onchangeindex;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(279)
					int tmp14 = (_count - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(279)
					Dynamic tmp15 = tmp13->listeners->__GetItem(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(279)
					Dynamic fn = tmp15;		HX_STACK_VAR(fn,"fn");
					HX_STACK_LINE(279)
					bool tmp16 = (fn == null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(279)
					if ((tmp16)){
						HX_STACK_LINE(279)
						::mint::core::Signal tmp17 = this->onchangeindex;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(279)
						int tmp18 = (_count - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(279)
						tmp17->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp18,(int)1);
					}
					HX_STACK_LINE(279)
					(_count)--;
				}
			}
			HX_STACK_LINE(279)
			bool tmp9 = _emit;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(279)
			if ((tmp9)){
				HX_STACK_LINE(279)
				int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
				HX_STACK_LINE(279)
				::mint::core::Signal tmp10 = this->onchange;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(279)
				int tmp11 = tmp10->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(279)
				int _count = tmp11;		HX_STACK_VAR(_count,"_count");
				HX_STACK_LINE(279)
				while((true)){
					HX_STACK_LINE(279)
					bool tmp12 = (_idx < _count);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(279)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(279)
					if ((tmp13)){
						HX_STACK_LINE(279)
						break;
					}
					HX_STACK_LINE(279)
					::mint::core::Signal tmp14 = this->onchange;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(279)
					Dynamic tmp15 = tmp14->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(279)
					Dynamic fn = tmp15;		HX_STACK_VAR(fn,"fn");
					HX_STACK_LINE(279)
					bool tmp16 = (fn != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(279)
					if ((tmp16)){
						HX_STACK_LINE(279)
						::String tmp17 = this->edit;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(279)
						::String tmp18 = this->display;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(279)
						bool tmp19 = _from_typing;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(279)
						fn(tmp17,tmp18,tmp19).Cast< Void >();
					}
					HX_STACK_LINE(279)
					(_idx)++;
				}
				HX_STACK_LINE(279)
				while((true)){
					HX_STACK_LINE(279)
					bool tmp12 = (_count > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(279)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(279)
					if ((tmp13)){
						HX_STACK_LINE(279)
						break;
					}
					HX_STACK_LINE(279)
					::mint::core::Signal tmp14 = this->onchange;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(279)
					int tmp15 = (_count - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(279)
					Dynamic tmp16 = tmp14->listeners->__GetItem(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(279)
					Dynamic fn = tmp16;		HX_STACK_VAR(fn,"fn");
					HX_STACK_LINE(279)
					bool tmp17 = (fn == null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(279)
					if ((tmp17)){
						HX_STACK_LINE(279)
						::mint::core::Signal tmp18 = this->onchange;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(279)
						int tmp19 = (_count - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(279)
						tmp18->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp19,(int)1);
					}
					HX_STACK_LINE(279)
					(_count)--;
				}
			}
			HX_STACK_LINE(279)
			tmp1 = this->edit;
		}
		HX_STACK_LINE(279)
		return tmp1;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TextEdit_obj,cut,return )

::String TextEdit_obj::after( hx::Null< int >  __o_cur){
int cur = __o_cur.Default(0);
	HX_STACK_FRAME("mint.TextEdit","after",0xa387f831,"mint.TextEdit.after","mint/TextEdit.hx",283,0x23cb477a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
{
		HX_STACK_LINE(285)
		::String tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(285)
		{
			HX_STACK_LINE(285)
			::String tmp1 = this->edit;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(285)
			::String s = tmp1;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(285)
			::String tmp2 = this->edit;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(285)
			Dynamic length = tmp2.length;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(285)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(285)
			{
				HX_STACK_LINE(285)
				bool tmp4 = (cur >= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(285)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(285)
				if ((tmp4)){
					HX_STACK_LINE(285)
					tmp5 = (int)0;
				}
				else{
					HX_STACK_LINE(285)
					tmp5 = s.length;
				}
				HX_STACK_LINE(285)
				int index = tmp5;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(285)
				{
					HX_STACK_LINE(285)
					::String this1 = s;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(285)
					bool tmp6 = (cur >= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(285)
					if ((tmp6)){
						HX_STACK_LINE(285)
						int index1 = index;		HX_STACK_VAR(index1,"index1");
						HX_STACK_LINE(285)
						int tmp7 = this1.length;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(285)
						int len = tmp7;		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(285)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(285)
						while((true)){
							HX_STACK_LINE(285)
							bool tmp8 = (i < cur);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(285)
							bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(285)
							if ((tmp8)){
								HX_STACK_LINE(285)
								tmp9 = (index1 < len);
							}
							else{
								HX_STACK_LINE(285)
								tmp9 = false;
							}
							HX_STACK_LINE(285)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(285)
							if ((tmp10)){
								HX_STACK_LINE(285)
								break;
							}
							HX_STACK_LINE(285)
							int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(285)
							{
								HX_STACK_LINE(285)
								int tmp12 = index1;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(285)
								int tmp13 = this1.cca(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(285)
								int c = tmp13;		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(285)
								bool tmp14 = (c < (int)192);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(285)
								if ((tmp14)){
									HX_STACK_LINE(285)
									tmp11 = (int)1;
								}
								else{
									HX_STACK_LINE(285)
									bool tmp15 = (c < (int)224);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(285)
									if ((tmp15)){
										HX_STACK_LINE(285)
										tmp11 = (int)2;
									}
									else{
										HX_STACK_LINE(285)
										bool tmp16 = (c < (int)240);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(285)
										if ((tmp16)){
											HX_STACK_LINE(285)
											tmp11 = (int)3;
										}
										else{
											HX_STACK_LINE(285)
											bool tmp17 = (c < (int)248);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(285)
											if ((tmp17)){
												HX_STACK_LINE(285)
												tmp11 = (int)4;
											}
											else{
												HX_STACK_LINE(285)
												tmp11 = (int)1;
											}
										}
									}
								}
							}
							HX_STACK_LINE(285)
							hx::AddEq(index1,tmp11);
							HX_STACK_LINE(285)
							++(i);
						}
						HX_STACK_LINE(285)
						tmp3 = index1;
					}
					else{
						HX_STACK_LINE(285)
						int index1 = index;		HX_STACK_VAR(index1,"index1");
						HX_STACK_LINE(285)
						int count = (int)0;		HX_STACK_VAR(count,"count");
						HX_STACK_LINE(285)
						while((true)){
							HX_STACK_LINE(285)
							int tmp7 = count;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(285)
							int tmp8 = cur;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(285)
							int tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(285)
							bool tmp10 = (tmp7 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(285)
							bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(285)
							if ((tmp10)){
								HX_STACK_LINE(285)
								tmp11 = ((int)0 < index1);
							}
							else{
								HX_STACK_LINE(285)
								tmp11 = false;
							}
							HX_STACK_LINE(285)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(285)
							if ((tmp12)){
								HX_STACK_LINE(285)
								break;
							}
							HX_STACK_LINE(285)
							int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(285)
							{
								HX_STACK_LINE(285)
								::String this2 = this1;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(285)
								{
									HX_STACK_LINE(285)
									int tmp14 = (index1 - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(285)
									int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(285)
									{
										HX_STACK_LINE(285)
										int tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(285)
										int tmp17 = this2.cca(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(285)
										tmp15 = tmp17;
									}
									HX_STACK_LINE(285)
									int c1 = tmp15;		HX_STACK_VAR(c1,"c1");
									HX_STACK_LINE(285)
									bool tmp16 = (c1 < (int)128);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(285)
									bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(285)
									bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(285)
									if ((tmp17)){
										HX_STACK_LINE(285)
										tmp18 = (c1 >= (int)192);
									}
									else{
										HX_STACK_LINE(285)
										tmp18 = true;
									}
									HX_STACK_LINE(285)
									if ((tmp18)){
										HX_STACK_LINE(285)
										tmp13 = (int)1;
									}
									else{
										HX_STACK_LINE(285)
										int tmp19 = (index1 - (int)2);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(285)
										int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(285)
										{
											HX_STACK_LINE(285)
											int tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(285)
											int tmp22 = this2.cca(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(285)
											tmp20 = tmp22;
										}
										HX_STACK_LINE(285)
										int tmp21 = (int(tmp20) & int((int)224));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(285)
										bool tmp22 = (tmp21 == (int)192);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(285)
										if ((tmp22)){
											HX_STACK_LINE(285)
											tmp13 = (int)2;
										}
										else{
											HX_STACK_LINE(285)
											int tmp23 = (index1 - (int)3);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(285)
											int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(285)
											{
												HX_STACK_LINE(285)
												int tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(285)
												int tmp26 = this2.cca(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(285)
												tmp24 = tmp26;
											}
											HX_STACK_LINE(285)
											int tmp25 = (int(tmp24) & int((int)240));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(285)
											bool tmp26 = (tmp25 == (int)224);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(285)
											if ((tmp26)){
												HX_STACK_LINE(285)
												tmp13 = (int)3;
											}
											else{
												HX_STACK_LINE(285)
												int tmp27 = (index1 - (int)4);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(285)
												int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(285)
												{
													HX_STACK_LINE(285)
													int tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(285)
													int tmp30 = this2.cca(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(285)
													tmp28 = tmp30;
												}
												HX_STACK_LINE(285)
												int tmp29 = (int(tmp28) & int((int)248));		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(285)
												bool tmp30 = (tmp29 == (int)240);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(285)
												if ((tmp30)){
													HX_STACK_LINE(285)
													tmp13 = (int)4;
												}
												else{
													HX_STACK_LINE(285)
													tmp13 = (int)1;
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(285)
							hx::SubEq(index1,tmp13);
							HX_STACK_LINE(285)
							++(count);
						}
						HX_STACK_LINE(285)
						tmp3 = index1;
					}
				}
			}
			HX_STACK_LINE(285)
			int si = tmp3;		HX_STACK_VAR(si,"si");
			HX_STACK_LINE(285)
			bool tmp4 = (length == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(285)
			int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(285)
			if ((tmp4)){
				HX_STACK_LINE(285)
				tmp5 = s.length;
			}
			else{
				HX_STACK_LINE(285)
				bool tmp6 = (length < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(285)
				if ((tmp6)){
					HX_STACK_LINE(285)
					tmp5 = si;
				}
				else{
					HX_STACK_LINE(285)
					int codePointOffset = length;		HX_STACK_VAR(codePointOffset,"codePointOffset");
					HX_STACK_LINE(285)
					{
						HX_STACK_LINE(285)
						::String this1 = s;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(285)
						bool tmp7 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(285)
						if ((tmp7)){
							HX_STACK_LINE(285)
							int index = si;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(285)
							int tmp8 = this1.length;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(285)
							int len = tmp8;		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(285)
							int i = (int)0;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(285)
							while((true)){
								HX_STACK_LINE(285)
								bool tmp9 = (i < codePointOffset);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(285)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(285)
								if ((tmp9)){
									HX_STACK_LINE(285)
									tmp10 = (index < len);
								}
								else{
									HX_STACK_LINE(285)
									tmp10 = false;
								}
								HX_STACK_LINE(285)
								bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(285)
								if ((tmp11)){
									HX_STACK_LINE(285)
									break;
								}
								HX_STACK_LINE(285)
								int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(285)
								{
									HX_STACK_LINE(285)
									int tmp13 = index;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(285)
									int tmp14 = this1.cca(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(285)
									int c = tmp14;		HX_STACK_VAR(c,"c");
									HX_STACK_LINE(285)
									bool tmp15 = (c < (int)192);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(285)
									if ((tmp15)){
										HX_STACK_LINE(285)
										tmp12 = (int)1;
									}
									else{
										HX_STACK_LINE(285)
										bool tmp16 = (c < (int)224);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(285)
										if ((tmp16)){
											HX_STACK_LINE(285)
											tmp12 = (int)2;
										}
										else{
											HX_STACK_LINE(285)
											bool tmp17 = (c < (int)240);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(285)
											if ((tmp17)){
												HX_STACK_LINE(285)
												tmp12 = (int)3;
											}
											else{
												HX_STACK_LINE(285)
												bool tmp18 = (c < (int)248);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(285)
												if ((tmp18)){
													HX_STACK_LINE(285)
													tmp12 = (int)4;
												}
												else{
													HX_STACK_LINE(285)
													tmp12 = (int)1;
												}
											}
										}
									}
								}
								HX_STACK_LINE(285)
								hx::AddEq(index,tmp12);
								HX_STACK_LINE(285)
								++(i);
							}
							HX_STACK_LINE(285)
							tmp5 = index;
						}
						else{
							HX_STACK_LINE(285)
							int index = si;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(285)
							int count = (int)0;		HX_STACK_VAR(count,"count");
							HX_STACK_LINE(285)
							while((true)){
								HX_STACK_LINE(285)
								int tmp8 = count;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(285)
								int tmp9 = codePointOffset;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(285)
								int tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(285)
								bool tmp11 = (tmp8 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(285)
								bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(285)
								if ((tmp11)){
									HX_STACK_LINE(285)
									tmp12 = ((int)0 < index);
								}
								else{
									HX_STACK_LINE(285)
									tmp12 = false;
								}
								HX_STACK_LINE(285)
								bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(285)
								if ((tmp13)){
									HX_STACK_LINE(285)
									break;
								}
								HX_STACK_LINE(285)
								int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(285)
								{
									HX_STACK_LINE(285)
									::String this2 = this1;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(285)
									{
										HX_STACK_LINE(285)
										int tmp15 = (index - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(285)
										int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(285)
										{
											HX_STACK_LINE(285)
											int tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(285)
											int tmp18 = this2.cca(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(285)
											tmp16 = tmp18;
										}
										HX_STACK_LINE(285)
										int c1 = tmp16;		HX_STACK_VAR(c1,"c1");
										HX_STACK_LINE(285)
										bool tmp17 = (c1 < (int)128);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(285)
										bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(285)
										bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(285)
										if ((tmp18)){
											HX_STACK_LINE(285)
											tmp19 = (c1 >= (int)192);
										}
										else{
											HX_STACK_LINE(285)
											tmp19 = true;
										}
										HX_STACK_LINE(285)
										if ((tmp19)){
											HX_STACK_LINE(285)
											tmp14 = (int)1;
										}
										else{
											HX_STACK_LINE(285)
											int tmp20 = (index - (int)2);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(285)
											int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(285)
											{
												HX_STACK_LINE(285)
												int tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(285)
												int tmp23 = this2.cca(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(285)
												tmp21 = tmp23;
											}
											HX_STACK_LINE(285)
											int tmp22 = (int(tmp21) & int((int)224));		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(285)
											bool tmp23 = (tmp22 == (int)192);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(285)
											if ((tmp23)){
												HX_STACK_LINE(285)
												tmp14 = (int)2;
											}
											else{
												HX_STACK_LINE(285)
												int tmp24 = (index - (int)3);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(285)
												int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(285)
												{
													HX_STACK_LINE(285)
													int tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(285)
													int tmp27 = this2.cca(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(285)
													tmp25 = tmp27;
												}
												HX_STACK_LINE(285)
												int tmp26 = (int(tmp25) & int((int)240));		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(285)
												bool tmp27 = (tmp26 == (int)224);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(285)
												if ((tmp27)){
													HX_STACK_LINE(285)
													tmp14 = (int)3;
												}
												else{
													HX_STACK_LINE(285)
													int tmp28 = (index - (int)4);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(285)
													int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(285)
													{
														HX_STACK_LINE(285)
														int tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(285)
														int tmp31 = this2.cca(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(285)
														tmp29 = tmp31;
													}
													HX_STACK_LINE(285)
													int tmp30 = (int(tmp29) & int((int)248));		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(285)
													bool tmp31 = (tmp30 == (int)240);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(285)
													if ((tmp31)){
														HX_STACK_LINE(285)
														tmp14 = (int)4;
													}
													else{
														HX_STACK_LINE(285)
														tmp14 = (int)1;
													}
												}
											}
										}
									}
								}
								HX_STACK_LINE(285)
								hx::SubEq(index,tmp14);
								HX_STACK_LINE(285)
								++(count);
							}
							HX_STACK_LINE(285)
							tmp5 = index;
						}
					}
				}
			}
			HX_STACK_LINE(285)
			int ei = tmp5;		HX_STACK_VAR(ei,"ei");
			HX_STACK_LINE(285)
			int tmp6 = si;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(285)
			int tmp7 = ei;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(285)
			tmp = s.substring(tmp6,tmp7);
		}
		HX_STACK_LINE(285)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(TextEdit_obj,after,return )

::String TextEdit_obj::before( hx::Null< int >  __o_cur){
int cur = __o_cur.Default(0);
	HX_STACK_FRAME("mint.TextEdit","before",0x3d2c94ca,"mint.TextEdit.before","mint/TextEdit.hx",289,0x23cb477a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
{
		HX_STACK_LINE(291)
		::String tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(291)
		{
			HX_STACK_LINE(291)
			::String tmp1 = this->edit;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(291)
			::String s = tmp1;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(291)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(291)
			{
				HX_STACK_LINE(291)
				bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(291)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(291)
				if ((tmp3)){
					HX_STACK_LINE(291)
					tmp4 = (int)0;
				}
				else{
					HX_STACK_LINE(291)
					tmp4 = s.length;
				}
				HX_STACK_LINE(291)
				int index = tmp4;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(291)
				{
					HX_STACK_LINE(291)
					::String this1 = s;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(291)
					bool tmp5 = true;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(291)
					if ((tmp5)){
						HX_STACK_LINE(291)
						int index1 = index;		HX_STACK_VAR(index1,"index1");
						HX_STACK_LINE(291)
						int tmp6 = this1.length;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(291)
						int len = tmp6;		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(291)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(291)
						while((true)){
							HX_STACK_LINE(291)
							bool tmp7 = (i < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(291)
							bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(291)
							if ((tmp7)){
								HX_STACK_LINE(291)
								tmp8 = (index1 < len);
							}
							else{
								HX_STACK_LINE(291)
								tmp8 = false;
							}
							HX_STACK_LINE(291)
							bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(291)
							if ((tmp9)){
								HX_STACK_LINE(291)
								break;
							}
							HX_STACK_LINE(291)
							int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(291)
							{
								HX_STACK_LINE(291)
								int tmp11 = index1;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(291)
								int tmp12 = this1.cca(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(291)
								int c = tmp12;		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(291)
								bool tmp13 = (c < (int)192);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(291)
								if ((tmp13)){
									HX_STACK_LINE(291)
									tmp10 = (int)1;
								}
								else{
									HX_STACK_LINE(291)
									bool tmp14 = (c < (int)224);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(291)
									if ((tmp14)){
										HX_STACK_LINE(291)
										tmp10 = (int)2;
									}
									else{
										HX_STACK_LINE(291)
										bool tmp15 = (c < (int)240);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(291)
										if ((tmp15)){
											HX_STACK_LINE(291)
											tmp10 = (int)3;
										}
										else{
											HX_STACK_LINE(291)
											bool tmp16 = (c < (int)248);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(291)
											if ((tmp16)){
												HX_STACK_LINE(291)
												tmp10 = (int)4;
											}
											else{
												HX_STACK_LINE(291)
												tmp10 = (int)1;
											}
										}
									}
								}
							}
							HX_STACK_LINE(291)
							hx::AddEq(index1,tmp10);
							HX_STACK_LINE(291)
							++(i);
						}
						HX_STACK_LINE(291)
						tmp2 = index1;
					}
					else{
						HX_STACK_LINE(291)
						int index1 = index;		HX_STACK_VAR(index1,"index1");
						HX_STACK_LINE(291)
						int count = (int)0;		HX_STACK_VAR(count,"count");
						HX_STACK_LINE(291)
						while((true)){
							HX_STACK_LINE(291)
							int tmp6 = count;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(291)
							int tmp7 = (int)0;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(291)
							bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(291)
							bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(291)
							if ((tmp8)){
								HX_STACK_LINE(291)
								tmp9 = ((int)0 < index1);
							}
							else{
								HX_STACK_LINE(291)
								tmp9 = false;
							}
							HX_STACK_LINE(291)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(291)
							if ((tmp10)){
								HX_STACK_LINE(291)
								break;
							}
							HX_STACK_LINE(291)
							int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(291)
							{
								HX_STACK_LINE(291)
								::String this2 = this1;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(291)
								{
									HX_STACK_LINE(291)
									int tmp12 = (index1 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(291)
									int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(291)
									{
										HX_STACK_LINE(291)
										int tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(291)
										int tmp15 = this2.cca(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(291)
										tmp13 = tmp15;
									}
									HX_STACK_LINE(291)
									int c1 = tmp13;		HX_STACK_VAR(c1,"c1");
									HX_STACK_LINE(291)
									bool tmp14 = (c1 < (int)128);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(291)
									bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(291)
									bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(291)
									if ((tmp15)){
										HX_STACK_LINE(291)
										tmp16 = (c1 >= (int)192);
									}
									else{
										HX_STACK_LINE(291)
										tmp16 = true;
									}
									HX_STACK_LINE(291)
									if ((tmp16)){
										HX_STACK_LINE(291)
										tmp11 = (int)1;
									}
									else{
										HX_STACK_LINE(291)
										int tmp17 = (index1 - (int)2);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(291)
										int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(291)
										{
											HX_STACK_LINE(291)
											int tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(291)
											int tmp20 = this2.cca(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(291)
											tmp18 = tmp20;
										}
										HX_STACK_LINE(291)
										int tmp19 = (int(tmp18) & int((int)224));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(291)
										bool tmp20 = (tmp19 == (int)192);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(291)
										if ((tmp20)){
											HX_STACK_LINE(291)
											tmp11 = (int)2;
										}
										else{
											HX_STACK_LINE(291)
											int tmp21 = (index1 - (int)3);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(291)
											int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(291)
											{
												HX_STACK_LINE(291)
												int tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(291)
												int tmp24 = this2.cca(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(291)
												tmp22 = tmp24;
											}
											HX_STACK_LINE(291)
											int tmp23 = (int(tmp22) & int((int)240));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(291)
											bool tmp24 = (tmp23 == (int)224);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(291)
											if ((tmp24)){
												HX_STACK_LINE(291)
												tmp11 = (int)3;
											}
											else{
												HX_STACK_LINE(291)
												int tmp25 = (index1 - (int)4);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(291)
												int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(291)
												{
													HX_STACK_LINE(291)
													int tmp27 = tmp25;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(291)
													int tmp28 = this2.cca(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(291)
													tmp26 = tmp28;
												}
												HX_STACK_LINE(291)
												int tmp27 = (int(tmp26) & int((int)248));		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(291)
												bool tmp28 = (tmp27 == (int)240);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(291)
												if ((tmp28)){
													HX_STACK_LINE(291)
													tmp11 = (int)4;
												}
												else{
													HX_STACK_LINE(291)
													tmp11 = (int)1;
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(291)
							hx::SubEq(index1,tmp11);
							HX_STACK_LINE(291)
							++(count);
						}
						HX_STACK_LINE(291)
						tmp2 = index1;
					}
				}
			}
			HX_STACK_LINE(291)
			int si = tmp2;		HX_STACK_VAR(si,"si");
			HX_STACK_LINE(291)
			bool tmp3 = (cur == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(291)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(291)
			if ((tmp3)){
				HX_STACK_LINE(291)
				tmp4 = s.length;
			}
			else{
				HX_STACK_LINE(291)
				bool tmp5 = (cur < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(291)
				if ((tmp5)){
					HX_STACK_LINE(291)
					tmp4 = si;
				}
				else{
					HX_STACK_LINE(291)
					int codePointOffset = cur;		HX_STACK_VAR(codePointOffset,"codePointOffset");
					HX_STACK_LINE(291)
					{
						HX_STACK_LINE(291)
						::String this1 = s;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(291)
						bool tmp6 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(291)
						if ((tmp6)){
							HX_STACK_LINE(291)
							int index = si;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(291)
							int tmp7 = this1.length;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(291)
							int len = tmp7;		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(291)
							int i = (int)0;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(291)
							while((true)){
								HX_STACK_LINE(291)
								bool tmp8 = (i < codePointOffset);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(291)
								bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(291)
								if ((tmp8)){
									HX_STACK_LINE(291)
									tmp9 = (index < len);
								}
								else{
									HX_STACK_LINE(291)
									tmp9 = false;
								}
								HX_STACK_LINE(291)
								bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(291)
								if ((tmp10)){
									HX_STACK_LINE(291)
									break;
								}
								HX_STACK_LINE(291)
								int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(291)
								{
									HX_STACK_LINE(291)
									int tmp12 = index;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(291)
									int tmp13 = this1.cca(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(291)
									int c = tmp13;		HX_STACK_VAR(c,"c");
									HX_STACK_LINE(291)
									bool tmp14 = (c < (int)192);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(291)
									if ((tmp14)){
										HX_STACK_LINE(291)
										tmp11 = (int)1;
									}
									else{
										HX_STACK_LINE(291)
										bool tmp15 = (c < (int)224);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(291)
										if ((tmp15)){
											HX_STACK_LINE(291)
											tmp11 = (int)2;
										}
										else{
											HX_STACK_LINE(291)
											bool tmp16 = (c < (int)240);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(291)
											if ((tmp16)){
												HX_STACK_LINE(291)
												tmp11 = (int)3;
											}
											else{
												HX_STACK_LINE(291)
												bool tmp17 = (c < (int)248);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(291)
												if ((tmp17)){
													HX_STACK_LINE(291)
													tmp11 = (int)4;
												}
												else{
													HX_STACK_LINE(291)
													tmp11 = (int)1;
												}
											}
										}
									}
								}
								HX_STACK_LINE(291)
								hx::AddEq(index,tmp11);
								HX_STACK_LINE(291)
								++(i);
							}
							HX_STACK_LINE(291)
							tmp4 = index;
						}
						else{
							HX_STACK_LINE(291)
							int index = si;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(291)
							int count = (int)0;		HX_STACK_VAR(count,"count");
							HX_STACK_LINE(291)
							while((true)){
								HX_STACK_LINE(291)
								int tmp7 = count;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(291)
								int tmp8 = codePointOffset;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(291)
								int tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(291)
								bool tmp10 = (tmp7 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(291)
								bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(291)
								if ((tmp10)){
									HX_STACK_LINE(291)
									tmp11 = ((int)0 < index);
								}
								else{
									HX_STACK_LINE(291)
									tmp11 = false;
								}
								HX_STACK_LINE(291)
								bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(291)
								if ((tmp12)){
									HX_STACK_LINE(291)
									break;
								}
								HX_STACK_LINE(291)
								int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(291)
								{
									HX_STACK_LINE(291)
									::String this2 = this1;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(291)
									{
										HX_STACK_LINE(291)
										int tmp14 = (index - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(291)
										int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(291)
										{
											HX_STACK_LINE(291)
											int tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(291)
											int tmp17 = this2.cca(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(291)
											tmp15 = tmp17;
										}
										HX_STACK_LINE(291)
										int c1 = tmp15;		HX_STACK_VAR(c1,"c1");
										HX_STACK_LINE(291)
										bool tmp16 = (c1 < (int)128);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(291)
										bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(291)
										bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(291)
										if ((tmp17)){
											HX_STACK_LINE(291)
											tmp18 = (c1 >= (int)192);
										}
										else{
											HX_STACK_LINE(291)
											tmp18 = true;
										}
										HX_STACK_LINE(291)
										if ((tmp18)){
											HX_STACK_LINE(291)
											tmp13 = (int)1;
										}
										else{
											HX_STACK_LINE(291)
											int tmp19 = (index - (int)2);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(291)
											int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(291)
											{
												HX_STACK_LINE(291)
												int tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(291)
												int tmp22 = this2.cca(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(291)
												tmp20 = tmp22;
											}
											HX_STACK_LINE(291)
											int tmp21 = (int(tmp20) & int((int)224));		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(291)
											bool tmp22 = (tmp21 == (int)192);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(291)
											if ((tmp22)){
												HX_STACK_LINE(291)
												tmp13 = (int)2;
											}
											else{
												HX_STACK_LINE(291)
												int tmp23 = (index - (int)3);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(291)
												int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(291)
												{
													HX_STACK_LINE(291)
													int tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(291)
													int tmp26 = this2.cca(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(291)
													tmp24 = tmp26;
												}
												HX_STACK_LINE(291)
												int tmp25 = (int(tmp24) & int((int)240));		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(291)
												bool tmp26 = (tmp25 == (int)224);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(291)
												if ((tmp26)){
													HX_STACK_LINE(291)
													tmp13 = (int)3;
												}
												else{
													HX_STACK_LINE(291)
													int tmp27 = (index - (int)4);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(291)
													int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(291)
													{
														HX_STACK_LINE(291)
														int tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(291)
														int tmp30 = this2.cca(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(291)
														tmp28 = tmp30;
													}
													HX_STACK_LINE(291)
													int tmp29 = (int(tmp28) & int((int)248));		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(291)
													bool tmp30 = (tmp29 == (int)240);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(291)
													if ((tmp30)){
														HX_STACK_LINE(291)
														tmp13 = (int)4;
													}
													else{
														HX_STACK_LINE(291)
														tmp13 = (int)1;
													}
												}
											}
										}
									}
								}
								HX_STACK_LINE(291)
								hx::SubEq(index,tmp13);
								HX_STACK_LINE(291)
								++(count);
							}
							HX_STACK_LINE(291)
							tmp4 = index;
						}
					}
				}
			}
			HX_STACK_LINE(291)
			int ei = tmp4;		HX_STACK_VAR(ei,"ei");
			HX_STACK_LINE(291)
			int tmp5 = si;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(291)
			int tmp6 = ei;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(291)
			tmp = s.substring(tmp5,tmp6);
		}
		HX_STACK_LINE(291)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(TextEdit_obj,before,return )

::String TextEdit_obj::after_display( hx::Null< int >  __o_cur){
int cur = __o_cur.Default(0);
	HX_STACK_FRAME("mint.TextEdit","after_display",0x357794f4,"mint.TextEdit.after_display","mint/TextEdit.hx",295,0x23cb477a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
{
		HX_STACK_LINE(297)
		::String tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(297)
		{
			HX_STACK_LINE(297)
			::String tmp1 = this->display;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(297)
			::String s = tmp1;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(297)
			::String tmp2 = this->display;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(297)
			Dynamic length = tmp2.length;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(297)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(297)
			{
				HX_STACK_LINE(297)
				bool tmp4 = (cur >= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(297)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(297)
				if ((tmp4)){
					HX_STACK_LINE(297)
					tmp5 = (int)0;
				}
				else{
					HX_STACK_LINE(297)
					tmp5 = s.length;
				}
				HX_STACK_LINE(297)
				int index = tmp5;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					::String this1 = s;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(297)
					bool tmp6 = (cur >= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(297)
					if ((tmp6)){
						HX_STACK_LINE(297)
						int index1 = index;		HX_STACK_VAR(index1,"index1");
						HX_STACK_LINE(297)
						int tmp7 = this1.length;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(297)
						int len = tmp7;		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(297)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(297)
						while((true)){
							HX_STACK_LINE(297)
							bool tmp8 = (i < cur);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(297)
							bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(297)
							if ((tmp8)){
								HX_STACK_LINE(297)
								tmp9 = (index1 < len);
							}
							else{
								HX_STACK_LINE(297)
								tmp9 = false;
							}
							HX_STACK_LINE(297)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(297)
							if ((tmp10)){
								HX_STACK_LINE(297)
								break;
							}
							HX_STACK_LINE(297)
							int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(297)
							{
								HX_STACK_LINE(297)
								int tmp12 = index1;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(297)
								int tmp13 = this1.cca(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(297)
								int c = tmp13;		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(297)
								bool tmp14 = (c < (int)192);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(297)
								if ((tmp14)){
									HX_STACK_LINE(297)
									tmp11 = (int)1;
								}
								else{
									HX_STACK_LINE(297)
									bool tmp15 = (c < (int)224);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(297)
									if ((tmp15)){
										HX_STACK_LINE(297)
										tmp11 = (int)2;
									}
									else{
										HX_STACK_LINE(297)
										bool tmp16 = (c < (int)240);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(297)
										if ((tmp16)){
											HX_STACK_LINE(297)
											tmp11 = (int)3;
										}
										else{
											HX_STACK_LINE(297)
											bool tmp17 = (c < (int)248);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(297)
											if ((tmp17)){
												HX_STACK_LINE(297)
												tmp11 = (int)4;
											}
											else{
												HX_STACK_LINE(297)
												tmp11 = (int)1;
											}
										}
									}
								}
							}
							HX_STACK_LINE(297)
							hx::AddEq(index1,tmp11);
							HX_STACK_LINE(297)
							++(i);
						}
						HX_STACK_LINE(297)
						tmp3 = index1;
					}
					else{
						HX_STACK_LINE(297)
						int index1 = index;		HX_STACK_VAR(index1,"index1");
						HX_STACK_LINE(297)
						int count = (int)0;		HX_STACK_VAR(count,"count");
						HX_STACK_LINE(297)
						while((true)){
							HX_STACK_LINE(297)
							int tmp7 = count;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(297)
							int tmp8 = cur;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(297)
							int tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(297)
							bool tmp10 = (tmp7 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(297)
							bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(297)
							if ((tmp10)){
								HX_STACK_LINE(297)
								tmp11 = ((int)0 < index1);
							}
							else{
								HX_STACK_LINE(297)
								tmp11 = false;
							}
							HX_STACK_LINE(297)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(297)
							if ((tmp12)){
								HX_STACK_LINE(297)
								break;
							}
							HX_STACK_LINE(297)
							int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(297)
							{
								HX_STACK_LINE(297)
								::String this2 = this1;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(297)
								{
									HX_STACK_LINE(297)
									int tmp14 = (index1 - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(297)
									int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(297)
									{
										HX_STACK_LINE(297)
										int tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(297)
										int tmp17 = this2.cca(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(297)
										tmp15 = tmp17;
									}
									HX_STACK_LINE(297)
									int c1 = tmp15;		HX_STACK_VAR(c1,"c1");
									HX_STACK_LINE(297)
									bool tmp16 = (c1 < (int)128);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(297)
									bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(297)
									bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(297)
									if ((tmp17)){
										HX_STACK_LINE(297)
										tmp18 = (c1 >= (int)192);
									}
									else{
										HX_STACK_LINE(297)
										tmp18 = true;
									}
									HX_STACK_LINE(297)
									if ((tmp18)){
										HX_STACK_LINE(297)
										tmp13 = (int)1;
									}
									else{
										HX_STACK_LINE(297)
										int tmp19 = (index1 - (int)2);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(297)
										int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(297)
										{
											HX_STACK_LINE(297)
											int tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(297)
											int tmp22 = this2.cca(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(297)
											tmp20 = tmp22;
										}
										HX_STACK_LINE(297)
										int tmp21 = (int(tmp20) & int((int)224));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(297)
										bool tmp22 = (tmp21 == (int)192);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(297)
										if ((tmp22)){
											HX_STACK_LINE(297)
											tmp13 = (int)2;
										}
										else{
											HX_STACK_LINE(297)
											int tmp23 = (index1 - (int)3);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(297)
											int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(297)
											{
												HX_STACK_LINE(297)
												int tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(297)
												int tmp26 = this2.cca(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(297)
												tmp24 = tmp26;
											}
											HX_STACK_LINE(297)
											int tmp25 = (int(tmp24) & int((int)240));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(297)
											bool tmp26 = (tmp25 == (int)224);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(297)
											if ((tmp26)){
												HX_STACK_LINE(297)
												tmp13 = (int)3;
											}
											else{
												HX_STACK_LINE(297)
												int tmp27 = (index1 - (int)4);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(297)
												int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(297)
												{
													HX_STACK_LINE(297)
													int tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(297)
													int tmp30 = this2.cca(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(297)
													tmp28 = tmp30;
												}
												HX_STACK_LINE(297)
												int tmp29 = (int(tmp28) & int((int)248));		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(297)
												bool tmp30 = (tmp29 == (int)240);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(297)
												if ((tmp30)){
													HX_STACK_LINE(297)
													tmp13 = (int)4;
												}
												else{
													HX_STACK_LINE(297)
													tmp13 = (int)1;
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(297)
							hx::SubEq(index1,tmp13);
							HX_STACK_LINE(297)
							++(count);
						}
						HX_STACK_LINE(297)
						tmp3 = index1;
					}
				}
			}
			HX_STACK_LINE(297)
			int si = tmp3;		HX_STACK_VAR(si,"si");
			HX_STACK_LINE(297)
			bool tmp4 = (length == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(297)
			int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(297)
			if ((tmp4)){
				HX_STACK_LINE(297)
				tmp5 = s.length;
			}
			else{
				HX_STACK_LINE(297)
				bool tmp6 = (length < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(297)
				if ((tmp6)){
					HX_STACK_LINE(297)
					tmp5 = si;
				}
				else{
					HX_STACK_LINE(297)
					int codePointOffset = length;		HX_STACK_VAR(codePointOffset,"codePointOffset");
					HX_STACK_LINE(297)
					{
						HX_STACK_LINE(297)
						::String this1 = s;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(297)
						bool tmp7 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(297)
						if ((tmp7)){
							HX_STACK_LINE(297)
							int index = si;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(297)
							int tmp8 = this1.length;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(297)
							int len = tmp8;		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(297)
							int i = (int)0;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(297)
							while((true)){
								HX_STACK_LINE(297)
								bool tmp9 = (i < codePointOffset);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(297)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(297)
								if ((tmp9)){
									HX_STACK_LINE(297)
									tmp10 = (index < len);
								}
								else{
									HX_STACK_LINE(297)
									tmp10 = false;
								}
								HX_STACK_LINE(297)
								bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(297)
								if ((tmp11)){
									HX_STACK_LINE(297)
									break;
								}
								HX_STACK_LINE(297)
								int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(297)
								{
									HX_STACK_LINE(297)
									int tmp13 = index;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(297)
									int tmp14 = this1.cca(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(297)
									int c = tmp14;		HX_STACK_VAR(c,"c");
									HX_STACK_LINE(297)
									bool tmp15 = (c < (int)192);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(297)
									if ((tmp15)){
										HX_STACK_LINE(297)
										tmp12 = (int)1;
									}
									else{
										HX_STACK_LINE(297)
										bool tmp16 = (c < (int)224);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(297)
										if ((tmp16)){
											HX_STACK_LINE(297)
											tmp12 = (int)2;
										}
										else{
											HX_STACK_LINE(297)
											bool tmp17 = (c < (int)240);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(297)
											if ((tmp17)){
												HX_STACK_LINE(297)
												tmp12 = (int)3;
											}
											else{
												HX_STACK_LINE(297)
												bool tmp18 = (c < (int)248);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(297)
												if ((tmp18)){
													HX_STACK_LINE(297)
													tmp12 = (int)4;
												}
												else{
													HX_STACK_LINE(297)
													tmp12 = (int)1;
												}
											}
										}
									}
								}
								HX_STACK_LINE(297)
								hx::AddEq(index,tmp12);
								HX_STACK_LINE(297)
								++(i);
							}
							HX_STACK_LINE(297)
							tmp5 = index;
						}
						else{
							HX_STACK_LINE(297)
							int index = si;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(297)
							int count = (int)0;		HX_STACK_VAR(count,"count");
							HX_STACK_LINE(297)
							while((true)){
								HX_STACK_LINE(297)
								int tmp8 = count;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(297)
								int tmp9 = codePointOffset;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(297)
								int tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(297)
								bool tmp11 = (tmp8 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(297)
								bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(297)
								if ((tmp11)){
									HX_STACK_LINE(297)
									tmp12 = ((int)0 < index);
								}
								else{
									HX_STACK_LINE(297)
									tmp12 = false;
								}
								HX_STACK_LINE(297)
								bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(297)
								if ((tmp13)){
									HX_STACK_LINE(297)
									break;
								}
								HX_STACK_LINE(297)
								int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(297)
								{
									HX_STACK_LINE(297)
									::String this2 = this1;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(297)
									{
										HX_STACK_LINE(297)
										int tmp15 = (index - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(297)
										int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(297)
										{
											HX_STACK_LINE(297)
											int tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(297)
											int tmp18 = this2.cca(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(297)
											tmp16 = tmp18;
										}
										HX_STACK_LINE(297)
										int c1 = tmp16;		HX_STACK_VAR(c1,"c1");
										HX_STACK_LINE(297)
										bool tmp17 = (c1 < (int)128);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(297)
										bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(297)
										bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(297)
										if ((tmp18)){
											HX_STACK_LINE(297)
											tmp19 = (c1 >= (int)192);
										}
										else{
											HX_STACK_LINE(297)
											tmp19 = true;
										}
										HX_STACK_LINE(297)
										if ((tmp19)){
											HX_STACK_LINE(297)
											tmp14 = (int)1;
										}
										else{
											HX_STACK_LINE(297)
											int tmp20 = (index - (int)2);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(297)
											int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(297)
											{
												HX_STACK_LINE(297)
												int tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(297)
												int tmp23 = this2.cca(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(297)
												tmp21 = tmp23;
											}
											HX_STACK_LINE(297)
											int tmp22 = (int(tmp21) & int((int)224));		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(297)
											bool tmp23 = (tmp22 == (int)192);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(297)
											if ((tmp23)){
												HX_STACK_LINE(297)
												tmp14 = (int)2;
											}
											else{
												HX_STACK_LINE(297)
												int tmp24 = (index - (int)3);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(297)
												int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(297)
												{
													HX_STACK_LINE(297)
													int tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(297)
													int tmp27 = this2.cca(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(297)
													tmp25 = tmp27;
												}
												HX_STACK_LINE(297)
												int tmp26 = (int(tmp25) & int((int)240));		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(297)
												bool tmp27 = (tmp26 == (int)224);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(297)
												if ((tmp27)){
													HX_STACK_LINE(297)
													tmp14 = (int)3;
												}
												else{
													HX_STACK_LINE(297)
													int tmp28 = (index - (int)4);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(297)
													int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(297)
													{
														HX_STACK_LINE(297)
														int tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(297)
														int tmp31 = this2.cca(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(297)
														tmp29 = tmp31;
													}
													HX_STACK_LINE(297)
													int tmp30 = (int(tmp29) & int((int)248));		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(297)
													bool tmp31 = (tmp30 == (int)240);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(297)
													if ((tmp31)){
														HX_STACK_LINE(297)
														tmp14 = (int)4;
													}
													else{
														HX_STACK_LINE(297)
														tmp14 = (int)1;
													}
												}
											}
										}
									}
								}
								HX_STACK_LINE(297)
								hx::SubEq(index,tmp14);
								HX_STACK_LINE(297)
								++(count);
							}
							HX_STACK_LINE(297)
							tmp5 = index;
						}
					}
				}
			}
			HX_STACK_LINE(297)
			int ei = tmp5;		HX_STACK_VAR(ei,"ei");
			HX_STACK_LINE(297)
			int tmp6 = si;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(297)
			int tmp7 = ei;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(297)
			tmp = s.substring(tmp6,tmp7);
		}
		HX_STACK_LINE(297)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(TextEdit_obj,after_display,return )

::String TextEdit_obj::before_display( hx::Null< int >  __o_cur){
int cur = __o_cur.Default(0);
	HX_STACK_FRAME("mint.TextEdit","before_display",0x415ff28d,"mint.TextEdit.before_display","mint/TextEdit.hx",301,0x23cb477a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
{
		HX_STACK_LINE(303)
		::String tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(303)
		{
			HX_STACK_LINE(303)
			::String tmp1 = this->display;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(303)
			::String s = tmp1;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(303)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(303)
			{
				HX_STACK_LINE(303)
				bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(303)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(303)
				if ((tmp3)){
					HX_STACK_LINE(303)
					tmp4 = (int)0;
				}
				else{
					HX_STACK_LINE(303)
					tmp4 = s.length;
				}
				HX_STACK_LINE(303)
				int index = tmp4;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(303)
				{
					HX_STACK_LINE(303)
					::String this1 = s;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(303)
					bool tmp5 = true;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(303)
					if ((tmp5)){
						HX_STACK_LINE(303)
						int index1 = index;		HX_STACK_VAR(index1,"index1");
						HX_STACK_LINE(303)
						int tmp6 = this1.length;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(303)
						int len = tmp6;		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(303)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(303)
						while((true)){
							HX_STACK_LINE(303)
							bool tmp7 = (i < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(303)
							bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(303)
							if ((tmp7)){
								HX_STACK_LINE(303)
								tmp8 = (index1 < len);
							}
							else{
								HX_STACK_LINE(303)
								tmp8 = false;
							}
							HX_STACK_LINE(303)
							bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(303)
							if ((tmp9)){
								HX_STACK_LINE(303)
								break;
							}
							HX_STACK_LINE(303)
							int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(303)
							{
								HX_STACK_LINE(303)
								int tmp11 = index1;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(303)
								int tmp12 = this1.cca(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(303)
								int c = tmp12;		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(303)
								bool tmp13 = (c < (int)192);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(303)
								if ((tmp13)){
									HX_STACK_LINE(303)
									tmp10 = (int)1;
								}
								else{
									HX_STACK_LINE(303)
									bool tmp14 = (c < (int)224);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(303)
									if ((tmp14)){
										HX_STACK_LINE(303)
										tmp10 = (int)2;
									}
									else{
										HX_STACK_LINE(303)
										bool tmp15 = (c < (int)240);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(303)
										if ((tmp15)){
											HX_STACK_LINE(303)
											tmp10 = (int)3;
										}
										else{
											HX_STACK_LINE(303)
											bool tmp16 = (c < (int)248);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(303)
											if ((tmp16)){
												HX_STACK_LINE(303)
												tmp10 = (int)4;
											}
											else{
												HX_STACK_LINE(303)
												tmp10 = (int)1;
											}
										}
									}
								}
							}
							HX_STACK_LINE(303)
							hx::AddEq(index1,tmp10);
							HX_STACK_LINE(303)
							++(i);
						}
						HX_STACK_LINE(303)
						tmp2 = index1;
					}
					else{
						HX_STACK_LINE(303)
						int index1 = index;		HX_STACK_VAR(index1,"index1");
						HX_STACK_LINE(303)
						int count = (int)0;		HX_STACK_VAR(count,"count");
						HX_STACK_LINE(303)
						while((true)){
							HX_STACK_LINE(303)
							int tmp6 = count;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(303)
							int tmp7 = (int)0;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(303)
							bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(303)
							bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(303)
							if ((tmp8)){
								HX_STACK_LINE(303)
								tmp9 = ((int)0 < index1);
							}
							else{
								HX_STACK_LINE(303)
								tmp9 = false;
							}
							HX_STACK_LINE(303)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(303)
							if ((tmp10)){
								HX_STACK_LINE(303)
								break;
							}
							HX_STACK_LINE(303)
							int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(303)
							{
								HX_STACK_LINE(303)
								::String this2 = this1;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(303)
								{
									HX_STACK_LINE(303)
									int tmp12 = (index1 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(303)
									int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(303)
									{
										HX_STACK_LINE(303)
										int tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(303)
										int tmp15 = this2.cca(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(303)
										tmp13 = tmp15;
									}
									HX_STACK_LINE(303)
									int c1 = tmp13;		HX_STACK_VAR(c1,"c1");
									HX_STACK_LINE(303)
									bool tmp14 = (c1 < (int)128);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(303)
									bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(303)
									bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(303)
									if ((tmp15)){
										HX_STACK_LINE(303)
										tmp16 = (c1 >= (int)192);
									}
									else{
										HX_STACK_LINE(303)
										tmp16 = true;
									}
									HX_STACK_LINE(303)
									if ((tmp16)){
										HX_STACK_LINE(303)
										tmp11 = (int)1;
									}
									else{
										HX_STACK_LINE(303)
										int tmp17 = (index1 - (int)2);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(303)
										int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(303)
										{
											HX_STACK_LINE(303)
											int tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(303)
											int tmp20 = this2.cca(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(303)
											tmp18 = tmp20;
										}
										HX_STACK_LINE(303)
										int tmp19 = (int(tmp18) & int((int)224));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(303)
										bool tmp20 = (tmp19 == (int)192);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(303)
										if ((tmp20)){
											HX_STACK_LINE(303)
											tmp11 = (int)2;
										}
										else{
											HX_STACK_LINE(303)
											int tmp21 = (index1 - (int)3);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(303)
											int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(303)
											{
												HX_STACK_LINE(303)
												int tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(303)
												int tmp24 = this2.cca(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(303)
												tmp22 = tmp24;
											}
											HX_STACK_LINE(303)
											int tmp23 = (int(tmp22) & int((int)240));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(303)
											bool tmp24 = (tmp23 == (int)224);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(303)
											if ((tmp24)){
												HX_STACK_LINE(303)
												tmp11 = (int)3;
											}
											else{
												HX_STACK_LINE(303)
												int tmp25 = (index1 - (int)4);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(303)
												int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(303)
												{
													HX_STACK_LINE(303)
													int tmp27 = tmp25;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(303)
													int tmp28 = this2.cca(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(303)
													tmp26 = tmp28;
												}
												HX_STACK_LINE(303)
												int tmp27 = (int(tmp26) & int((int)248));		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(303)
												bool tmp28 = (tmp27 == (int)240);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(303)
												if ((tmp28)){
													HX_STACK_LINE(303)
													tmp11 = (int)4;
												}
												else{
													HX_STACK_LINE(303)
													tmp11 = (int)1;
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(303)
							hx::SubEq(index1,tmp11);
							HX_STACK_LINE(303)
							++(count);
						}
						HX_STACK_LINE(303)
						tmp2 = index1;
					}
				}
			}
			HX_STACK_LINE(303)
			int si = tmp2;		HX_STACK_VAR(si,"si");
			HX_STACK_LINE(303)
			bool tmp3 = (cur == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(303)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(303)
			if ((tmp3)){
				HX_STACK_LINE(303)
				tmp4 = s.length;
			}
			else{
				HX_STACK_LINE(303)
				bool tmp5 = (cur < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(303)
				if ((tmp5)){
					HX_STACK_LINE(303)
					tmp4 = si;
				}
				else{
					HX_STACK_LINE(303)
					int codePointOffset = cur;		HX_STACK_VAR(codePointOffset,"codePointOffset");
					HX_STACK_LINE(303)
					{
						HX_STACK_LINE(303)
						::String this1 = s;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(303)
						bool tmp6 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(303)
						if ((tmp6)){
							HX_STACK_LINE(303)
							int index = si;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(303)
							int tmp7 = this1.length;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(303)
							int len = tmp7;		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(303)
							int i = (int)0;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(303)
							while((true)){
								HX_STACK_LINE(303)
								bool tmp8 = (i < codePointOffset);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(303)
								bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(303)
								if ((tmp8)){
									HX_STACK_LINE(303)
									tmp9 = (index < len);
								}
								else{
									HX_STACK_LINE(303)
									tmp9 = false;
								}
								HX_STACK_LINE(303)
								bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(303)
								if ((tmp10)){
									HX_STACK_LINE(303)
									break;
								}
								HX_STACK_LINE(303)
								int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(303)
								{
									HX_STACK_LINE(303)
									int tmp12 = index;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(303)
									int tmp13 = this1.cca(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(303)
									int c = tmp13;		HX_STACK_VAR(c,"c");
									HX_STACK_LINE(303)
									bool tmp14 = (c < (int)192);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(303)
									if ((tmp14)){
										HX_STACK_LINE(303)
										tmp11 = (int)1;
									}
									else{
										HX_STACK_LINE(303)
										bool tmp15 = (c < (int)224);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(303)
										if ((tmp15)){
											HX_STACK_LINE(303)
											tmp11 = (int)2;
										}
										else{
											HX_STACK_LINE(303)
											bool tmp16 = (c < (int)240);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(303)
											if ((tmp16)){
												HX_STACK_LINE(303)
												tmp11 = (int)3;
											}
											else{
												HX_STACK_LINE(303)
												bool tmp17 = (c < (int)248);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(303)
												if ((tmp17)){
													HX_STACK_LINE(303)
													tmp11 = (int)4;
												}
												else{
													HX_STACK_LINE(303)
													tmp11 = (int)1;
												}
											}
										}
									}
								}
								HX_STACK_LINE(303)
								hx::AddEq(index,tmp11);
								HX_STACK_LINE(303)
								++(i);
							}
							HX_STACK_LINE(303)
							tmp4 = index;
						}
						else{
							HX_STACK_LINE(303)
							int index = si;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(303)
							int count = (int)0;		HX_STACK_VAR(count,"count");
							HX_STACK_LINE(303)
							while((true)){
								HX_STACK_LINE(303)
								int tmp7 = count;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(303)
								int tmp8 = codePointOffset;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(303)
								int tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(303)
								bool tmp10 = (tmp7 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(303)
								bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(303)
								if ((tmp10)){
									HX_STACK_LINE(303)
									tmp11 = ((int)0 < index);
								}
								else{
									HX_STACK_LINE(303)
									tmp11 = false;
								}
								HX_STACK_LINE(303)
								bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(303)
								if ((tmp12)){
									HX_STACK_LINE(303)
									break;
								}
								HX_STACK_LINE(303)
								int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(303)
								{
									HX_STACK_LINE(303)
									::String this2 = this1;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(303)
									{
										HX_STACK_LINE(303)
										int tmp14 = (index - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(303)
										int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(303)
										{
											HX_STACK_LINE(303)
											int tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(303)
											int tmp17 = this2.cca(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(303)
											tmp15 = tmp17;
										}
										HX_STACK_LINE(303)
										int c1 = tmp15;		HX_STACK_VAR(c1,"c1");
										HX_STACK_LINE(303)
										bool tmp16 = (c1 < (int)128);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(303)
										bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(303)
										bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(303)
										if ((tmp17)){
											HX_STACK_LINE(303)
											tmp18 = (c1 >= (int)192);
										}
										else{
											HX_STACK_LINE(303)
											tmp18 = true;
										}
										HX_STACK_LINE(303)
										if ((tmp18)){
											HX_STACK_LINE(303)
											tmp13 = (int)1;
										}
										else{
											HX_STACK_LINE(303)
											int tmp19 = (index - (int)2);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(303)
											int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(303)
											{
												HX_STACK_LINE(303)
												int tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(303)
												int tmp22 = this2.cca(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(303)
												tmp20 = tmp22;
											}
											HX_STACK_LINE(303)
											int tmp21 = (int(tmp20) & int((int)224));		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(303)
											bool tmp22 = (tmp21 == (int)192);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(303)
											if ((tmp22)){
												HX_STACK_LINE(303)
												tmp13 = (int)2;
											}
											else{
												HX_STACK_LINE(303)
												int tmp23 = (index - (int)3);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(303)
												int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(303)
												{
													HX_STACK_LINE(303)
													int tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(303)
													int tmp26 = this2.cca(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(303)
													tmp24 = tmp26;
												}
												HX_STACK_LINE(303)
												int tmp25 = (int(tmp24) & int((int)240));		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(303)
												bool tmp26 = (tmp25 == (int)224);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(303)
												if ((tmp26)){
													HX_STACK_LINE(303)
													tmp13 = (int)3;
												}
												else{
													HX_STACK_LINE(303)
													int tmp27 = (index - (int)4);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(303)
													int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(303)
													{
														HX_STACK_LINE(303)
														int tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(303)
														int tmp30 = this2.cca(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(303)
														tmp28 = tmp30;
													}
													HX_STACK_LINE(303)
													int tmp29 = (int(tmp28) & int((int)248));		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(303)
													bool tmp30 = (tmp29 == (int)240);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(303)
													if ((tmp30)){
														HX_STACK_LINE(303)
														tmp13 = (int)4;
													}
													else{
														HX_STACK_LINE(303)
														tmp13 = (int)1;
													}
												}
											}
										}
									}
								}
								HX_STACK_LINE(303)
								hx::SubEq(index,tmp13);
								HX_STACK_LINE(303)
								++(count);
							}
							HX_STACK_LINE(303)
							tmp4 = index;
						}
					}
				}
			}
			HX_STACK_LINE(303)
			int ei = tmp4;		HX_STACK_VAR(ei,"ei");
			HX_STACK_LINE(303)
			int tmp5 = si;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(303)
			int tmp6 = ei;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(303)
			tmp = s.substring(tmp5,tmp6);
		}
		HX_STACK_LINE(303)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(TextEdit_obj,before_display,return )

Void TextEdit_obj::update_cur( ){
{
		HX_STACK_FRAME("mint.TextEdit","update_cur",0x891a4ad5,"mint.TextEdit.update_cur","mint/core/Signal.hx",49,0x383f7d53)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(309)
		::mint::core::Signal tmp = this->onchangeindex;		HX_STACK_VAR(tmp,"tmp");
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
			HX_STACK_LINE(309)
			::mint::core::Signal tmp4 = this->onchangeindex;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(53)
			Dynamic tmp5 = tmp4->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(53)
			Dynamic fn = tmp5;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp6 = (fn != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(54)
			if ((tmp6)){
				HX_STACK_LINE(309)
				int tmp7 = this->index;		HX_STACK_VAR(tmp7,"tmp7");
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
			HX_STACK_LINE(309)
			::mint::core::Signal tmp4 = this->onchangeindex;		HX_STACK_VAR(tmp4,"tmp4");
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
				HX_STACK_LINE(309)
				::mint::core::Signal tmp8 = this->onchangeindex;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(62)
				int tmp9 = (_count - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(62)
				tmp8->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp9,(int)1);
			}
			HX_STACK_LINE(63)
			(_count)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextEdit_obj,update_cur,(void))


TextEdit_obj::TextEdit_obj()
{
}

void TextEdit_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextEdit);
	HX_MARK_MEMBER_NAME(label,"label");
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(display_char,"display_char");
	HX_MARK_MEMBER_NAME(onchangeindex,"onchangeindex");
	HX_MARK_MEMBER_NAME(onchange,"onchange");
	HX_MARK_MEMBER_NAME(edit,"edit");
	HX_MARK_MEMBER_NAME(composition,"composition");
	HX_MARK_MEMBER_NAME(composition_start,"composition_start");
	HX_MARK_MEMBER_NAME(composition_length,"composition_length");
	HX_MARK_MEMBER_NAME(display,"display");
	HX_MARK_MEMBER_NAME(options,"options");
	::mint::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextEdit_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(label,"label");
	HX_VISIT_MEMBER_NAME(filter,"filter");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(display_char,"display_char");
	HX_VISIT_MEMBER_NAME(onchangeindex,"onchangeindex");
	HX_VISIT_MEMBER_NAME(onchange,"onchange");
	HX_VISIT_MEMBER_NAME(edit,"edit");
	HX_VISIT_MEMBER_NAME(composition,"composition");
	HX_VISIT_MEMBER_NAME(composition_start,"composition_start");
	HX_VISIT_MEMBER_NAME(composition_length,"composition_length");
	HX_VISIT_MEMBER_NAME(display,"display");
	HX_VISIT_MEMBER_NAME(options,"options");
	::mint::Control_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TextEdit_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cut") ) { return cut_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return get_text(); }
		if (HX_FIELD_EQ(inName,"edit") ) { return edit; }
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return label; }
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		if (HX_FIELD_EQ(inName,"after") ) { return after_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return filter; }
		if (HX_FIELD_EQ(inName,"before") ) { return before_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { return display; }
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"unfocus") ) { return unfocus_dyn(); }
		if (HX_FIELD_EQ(inName,"keydown") ) { return keydown_dyn(); }
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onchange") ) { return onchange; }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mousedown") ) { return mousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"textinput") ) { return textinput_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"update_cur") ) { return update_cur_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"composition") ) { return composition; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"display_text") ) { if (inCallProp == hx::paccAlways) return get_display_text(); }
		if (HX_FIELD_EQ(inName,"display_char") ) { return inCallProp == hx::paccAlways ? get_display_char() : display_char; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onchangeindex") ) { return onchangeindex; }
		if (HX_FIELD_EQ(inName,"after_display") ) { return after_display_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"before_display") ) { return before_display_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_display_text") ) { return get_display_text_dyn(); }
		if (HX_FIELD_EQ(inName,"get_display_char") ) { return get_display_char_dyn(); }
		if (HX_FIELD_EQ(inName,"set_display_char") ) { return set_display_char_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"composition_start") ) { return composition_start; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"composition_length") ) { return composition_length; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextEdit_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue); }
		if (HX_FIELD_EQ(inName,"edit") ) { edit=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { label=inValue.Cast< ::mint::Label >(); return inValue; }
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { display=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onchange") ) { onchange=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"composition") ) { composition=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"display_char") ) { if (inCallProp == hx::paccAlways) return set_display_char(inValue);display_char=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onchangeindex") ) { onchangeindex=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"composition_start") ) { composition_start=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"composition_length") ) { composition_length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextEdit_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"));
	outFields->push(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("display_text","\x0a","\x4f","\x36","\x79"));
	outFields->push(HX_HCSTRING("display_char","\x33","\xe1","\xfb","\x6d"));
	outFields->push(HX_HCSTRING("onchangeindex","\xe3","\x58","\x64","\xcf"));
	outFields->push(HX_HCSTRING("onchange","\xcf","\x13","\x8b","\x62"));
	outFields->push(HX_HCSTRING("edit","\x0a","\xca","\x0e","\x43"));
	outFields->push(HX_HCSTRING("composition","\xea","\xc9","\x11","\xd2"));
	outFields->push(HX_HCSTRING("composition_start","\x0d","\xd1","\x9f","\x11"));
	outFields->push(HX_HCSTRING("composition_length","\xdb","\x4d","\x44","\xf3"));
	outFields->push(HX_HCSTRING("display","\x42","\x2a","\x4a","\xbb"));
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::mint::Label*/ ,(int)offsetof(TextEdit_obj,label),HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextEdit_obj,filter),HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85")},
	{hx::fsInt,(int)offsetof(TextEdit_obj,index),HX_HCSTRING("index","\x12","\x9b","\x14","\xbe")},
	{hx::fsString,(int)offsetof(TextEdit_obj,display_char),HX_HCSTRING("display_char","\x33","\xe1","\xfb","\x6d")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(TextEdit_obj,onchangeindex),HX_HCSTRING("onchangeindex","\xe3","\x58","\x64","\xcf")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(TextEdit_obj,onchange),HX_HCSTRING("onchange","\xcf","\x13","\x8b","\x62")},
	{hx::fsString,(int)offsetof(TextEdit_obj,edit),HX_HCSTRING("edit","\x0a","\xca","\x0e","\x43")},
	{hx::fsString,(int)offsetof(TextEdit_obj,composition),HX_HCSTRING("composition","\xea","\xc9","\x11","\xd2")},
	{hx::fsInt,(int)offsetof(TextEdit_obj,composition_start),HX_HCSTRING("composition_start","\x0d","\xd1","\x9f","\x11")},
	{hx::fsInt,(int)offsetof(TextEdit_obj,composition_length),HX_HCSTRING("composition_length","\xdb","\x4d","\x44","\xf3")},
	{hx::fsString,(int)offsetof(TextEdit_obj,display),HX_HCSTRING("display","\x42","\x2a","\x4a","\xbb")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextEdit_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"),
	HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"),
	HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"),
	HX_HCSTRING("display_char","\x33","\xe1","\xfb","\x6d"),
	HX_HCSTRING("onchangeindex","\xe3","\x58","\x64","\xcf"),
	HX_HCSTRING("onchange","\xcf","\x13","\x8b","\x62"),
	HX_HCSTRING("edit","\x0a","\xca","\x0e","\x43"),
	HX_HCSTRING("composition","\xea","\xc9","\x11","\xd2"),
	HX_HCSTRING("composition_start","\x0d","\xd1","\x9f","\x11"),
	HX_HCSTRING("composition_length","\xdb","\x4d","\x44","\xf3"),
	HX_HCSTRING("display","\x42","\x2a","\x4a","\xbb"),
	HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("mousedown","\x07","\x85","\xe9","\x03"),
	HX_HCSTRING("unfocus","\xdf","\x56","\x1a","\x01"),
	HX_HCSTRING("textinput","\x3d","\xe4","\xdd","\xc3"),
	HX_HCSTRING("keydown","\x81","\x3d","\x6e","\xb1"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("get_display_text","\x93","\x3b","\xd5","\x7d"),
	HX_HCSTRING("get_display_char","\xbc","\xcd","\x9a","\x72"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("set_display_char","\x30","\xbb","\xdc","\xc8"),
	HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),
	HX_HCSTRING("cut","\x82","\x85","\x4b","\x00"),
	HX_HCSTRING("after","\x1c","\x66","\xa2","\x1d"),
	HX_HCSTRING("before","\x7f","\x54","\x32","\x9a"),
	HX_HCSTRING("after_display","\xdf","\x65","\xe2","\xc6"),
	HX_HCSTRING("before_display","\x42","\xef","\x6b","\xed"),
	HX_HCSTRING("update_cur","\x0a","\x89","\xf2","\x0c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextEdit_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextEdit_obj::__mClass,"__mClass");
};

#endif

hx::Class TextEdit_obj::__mClass;

void TextEdit_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mint.TextEdit","\xc3","\x84","\xe6","\x32");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextEdit_obj >;
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
