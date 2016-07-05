#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_mint_Canvas
#include <mint/Canvas.h>
#endif
#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
#endif
#ifndef INCLUDED_mint_Slider
#include <mint/Slider.h>
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

Void Slider_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("mint.Slider","new",0x622aa5ff,"mint.Slider.new","mint/Slider.hx",40,0x74f6d630)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(108)
	this->ignore_set = true;
	HX_STACK_LINE(94)
	this->dragging = false;
	HX_STACK_LINE(55)
	this->bar_h = ((Float)0.0);
	HX_STACK_LINE(54)
	this->bar_w = ((Float)0.0);
	HX_STACK_LINE(53)
	this->bar_y = ((Float)2.0);
	HX_STACK_LINE(52)
	this->bar_x = ((Float)2.0);
	HX_STACK_LINE(50)
	this->invert = false;
	HX_STACK_LINE(49)
	this->vertical = false;
	HX_STACK_LINE(47)
	this->percent = ((Float)1);
	HX_STACK_LINE(46)
	this->value = ((Float)1);
	HX_STACK_LINE(45)
	this->max = ((Float)1);
	HX_STACK_LINE(44)
	this->min = ((Float)0);
	HX_STACK_LINE(61)
	this->options = _options;
	HX_STACK_LINE(63)
	{
		HX_STACK_LINE(63)
		Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		::String tmp1 = tmp->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(63)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(63)
		if ((tmp2)){
			HX_STACK_LINE(63)
			Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(63)
			tmp3->__FieldRef(HX_HCSTRING("name","\x4b","\x72","\xff","\x48")) = HX_HCSTRING("slider","\x21","\xc6","\x04","\x70");
		}
		HX_STACK_LINE(63)
		Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(63)
		tmp3->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
	}
	HX_STACK_LINE(64)
	{
		HX_STACK_LINE(64)
		Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		Dynamic tmp1 = tmp->__Field(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		if ((tmp2)){
			HX_STACK_LINE(64)
			Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(64)
			tmp3->__FieldRef(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a")) = true;
		}
		HX_STACK_LINE(64)
		Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(64)
		tmp3->__Field(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a"), hx::paccDynamic );
	}
	HX_STACK_LINE(66)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	{
		HX_STACK_LINE(66)
		Dynamic tmp1 = this->options;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		Dynamic tmp2 = tmp1->__Field(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(66)
		if ((tmp3)){
			HX_STACK_LINE(66)
			Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(66)
			tmp4->__FieldRef(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00")) = (int)1;
		}
		HX_STACK_LINE(66)
		Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(66)
		tmp = tmp4->__Field(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(66)
	this->max = tmp;
	HX_STACK_LINE(67)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		Dynamic tmp3 = tmp2->__Field(HX_HCSTRING("min","\x92","\x11","\x53","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(67)
		if ((tmp4)){
			HX_STACK_LINE(67)
			Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(67)
			tmp5->__FieldRef(HX_HCSTRING("min","\x92","\x11","\x53","\x00")) = (int)0;
		}
		HX_STACK_LINE(67)
		Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(67)
		tmp1 = tmp5->__Field(HX_HCSTRING("min","\x92","\x11","\x53","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(67)
	this->min = tmp1;
	HX_STACK_LINE(68)
	{
		HX_STACK_LINE(68)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(68)
		{
			HX_STACK_LINE(68)
			Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(68)
			Dynamic tmp4 = tmp3->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(68)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(68)
			if ((tmp5)){
				HX_STACK_LINE(68)
				Float tmp6 = this->max;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(68)
				Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(68)
				tmp7->__FieldRef(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")) = tmp6;
			}
			HX_STACK_LINE(68)
			Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(68)
			tmp2 = tmp6->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );
		}
		HX_STACK_LINE(68)
		Float _value = tmp2;		HX_STACK_VAR(_value,"_value");
		HX_STACK_LINE(68)
		bool tmp3 = this->ignore_set;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(68)
		if ((tmp3)){
			HX_STACK_LINE(68)
			this->value = _value;
		}
		else{
			HX_STACK_LINE(68)
			{
				HX_STACK_LINE(68)
				Float _value1 = _value;		HX_STACK_VAR(_value1,"_value1");
				HX_STACK_LINE(68)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(68)
				{
					HX_STACK_LINE(68)
					Float tmp5 = this->min;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(68)
					Float a = tmp5;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(68)
					Float tmp6 = this->max;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(68)
					Float b = tmp6;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(68)
					bool tmp7 = (_value1 < a);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(68)
					if ((tmp7)){
						HX_STACK_LINE(68)
						tmp4 = a;
					}
					else{
						HX_STACK_LINE(68)
						bool tmp8 = (_value1 > b);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(68)
						if ((tmp8)){
							HX_STACK_LINE(68)
							tmp4 = b;
						}
						else{
							HX_STACK_LINE(68)
							tmp4 = _value1;
						}
					}
				}
				HX_STACK_LINE(68)
				_value1 = tmp4;
				HX_STACK_LINE(68)
				Dynamic tmp5 = this->step;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(68)
				bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(68)
				if ((tmp6)){
					HX_STACK_LINE(68)
					Float tmp7 = _value1;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(68)
					Dynamic tmp8 = this->step;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(68)
					Float tmp9 = (Float(tmp7) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(68)
					int tmp10 = ::Math_obj::round(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(68)
					Dynamic tmp11 = this->step;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(68)
					Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(68)
					_value1 = tmp12;
				}
				HX_STACK_LINE(68)
				bool tmp7 = this->vertical;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(68)
				if ((tmp7)){
					HX_STACK_LINE(68)
					Float tmp8 = this->w;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(68)
					Float tmp9 = (tmp8 - (int)4);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(68)
					this->bar_w = tmp9;
					HX_STACK_LINE(68)
					Float tmp10 = this->h;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(68)
					Float tmp11 = (tmp10 - (int)4);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(68)
					Float tmp12 = _value1;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(68)
					Float tmp13 = this->min;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(68)
					Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(68)
					Float tmp15 = (tmp11 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(68)
					Float tmp16 = this->max;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(68)
					Float tmp17 = this->min;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(68)
					Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(68)
					Float tmp19 = (Float(tmp15) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(68)
					this->bar_h = tmp19;
					HX_STACK_LINE(68)
					bool tmp20 = this->invert;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(68)
					bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(68)
					Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(68)
					if ((tmp21)){
						HX_STACK_LINE(68)
						Float tmp23 = this->h;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(68)
						Float tmp24 = this->h;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(68)
						Float tmp25 = (tmp24 - (int)4);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(68)
						Float tmp26 = _value1;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(68)
						Float tmp27 = this->min;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(68)
						Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(68)
						Float tmp29 = (tmp25 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(68)
						Float tmp30 = this->max;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(68)
						Float tmp31 = this->min;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(68)
						Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(68)
						Float tmp33 = (Float(tmp29) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(68)
						Float tmp34 = (tmp23 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(68)
						tmp22 = (tmp34 - (int)2);
					}
					else{
						HX_STACK_LINE(68)
						tmp22 = (int)2;
					}
					HX_STACK_LINE(68)
					this->bar_y = tmp22;
					HX_STACK_LINE(68)
					Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(68)
					{
						HX_STACK_LINE(68)
						Float tmp24 = this->bar_h;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(68)
						Float value = tmp24;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(68)
						Float tmp25 = this->h;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(68)
						Float tmp26 = (tmp25 - (int)4);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(68)
						Float b = tmp26;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(68)
						bool tmp27 = (value < (int)1);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(68)
						if ((tmp27)){
							HX_STACK_LINE(68)
							tmp23 = (int)1;
						}
						else{
							HX_STACK_LINE(68)
							bool tmp28 = (value > b);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(68)
							if ((tmp28)){
								HX_STACK_LINE(68)
								tmp23 = b;
							}
							else{
								HX_STACK_LINE(68)
								tmp23 = value;
							}
						}
					}
					HX_STACK_LINE(68)
					this->bar_h = tmp23;
				}
				else{
					HX_STACK_LINE(68)
					Float tmp8 = this->w;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(68)
					Float tmp9 = (tmp8 - (int)4);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(68)
					Float tmp10 = _value1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(68)
					Float tmp11 = this->min;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(68)
					Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(68)
					Float tmp13 = (tmp9 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(68)
					Float tmp14 = this->max;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(68)
					Float tmp15 = this->min;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(68)
					Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(68)
					Float tmp17 = (Float(tmp13) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(68)
					this->bar_w = tmp17;
					HX_STACK_LINE(68)
					Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(68)
					{
						HX_STACK_LINE(68)
						Float tmp19 = this->bar_w;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(68)
						Float value = tmp19;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(68)
						Float tmp20 = this->w;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(68)
						Float tmp21 = (tmp20 - (int)4);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(68)
						Float b = tmp21;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(68)
						bool tmp22 = (value < (int)1);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(68)
						if ((tmp22)){
							HX_STACK_LINE(68)
							tmp18 = (int)1;
						}
						else{
							HX_STACK_LINE(68)
							bool tmp23 = (value > b);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(68)
							if ((tmp23)){
								HX_STACK_LINE(68)
								tmp18 = b;
							}
							else{
								HX_STACK_LINE(68)
								tmp18 = value;
							}
						}
					}
					HX_STACK_LINE(68)
					this->bar_w = tmp18;
					HX_STACK_LINE(68)
					Float tmp19 = this->h;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(68)
					Float tmp20 = (tmp19 - (int)4);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(68)
					this->bar_h = tmp20;
					HX_STACK_LINE(68)
					bool tmp21 = this->invert;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(68)
					bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(68)
					Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(68)
					if ((tmp22)){
						HX_STACK_LINE(68)
						tmp23 = (int)2;
					}
					else{
						HX_STACK_LINE(68)
						Float tmp24 = this->w;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(68)
						Float tmp25 = this->w;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(68)
						Float tmp26 = (tmp25 - (int)4);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(68)
						Float tmp27 = _value1;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(68)
						Float tmp28 = this->min;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(68)
						Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(68)
						Float tmp30 = (tmp26 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(68)
						Float tmp31 = this->max;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(68)
						Float tmp32 = this->min;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(68)
						Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(68)
						Float tmp34 = (Float(tmp30) / Float(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(68)
						Float tmp35 = (tmp24 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(68)
						tmp23 = (tmp35 - (int)2);
					}
					HX_STACK_LINE(68)
					this->bar_x = tmp23;
				}
				HX_STACK_LINE(68)
				Float tmp8 = _value1;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(68)
				Float tmp9 = this->max;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(68)
				Float tmp10 = this->min;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(68)
				Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(68)
				Float tmp12 = (Float(tmp8) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(68)
				this->percent = tmp12;
				HX_STACK_LINE(68)
				this->ignore_set = true;
				HX_STACK_LINE(68)
				Float tmp13 = _value1;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(68)
				this->set_value(tmp13);
				HX_STACK_LINE(68)
				this->ignore_set = false;
				HX_STACK_LINE(68)
				{
					HX_STACK_LINE(68)
					int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
					HX_STACK_LINE(68)
					::mint::core::Signal tmp14 = this->onchange;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(68)
					int tmp15 = tmp14->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(68)
					int _count = tmp15;		HX_STACK_VAR(_count,"_count");
					HX_STACK_LINE(68)
					while((true)){
						HX_STACK_LINE(68)
						bool tmp16 = (_idx < _count);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(68)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(68)
						if ((tmp17)){
							HX_STACK_LINE(68)
							break;
						}
						HX_STACK_LINE(68)
						::mint::core::Signal tmp18 = this->onchange;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(68)
						Dynamic tmp19 = tmp18->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(68)
						Dynamic fn = tmp19;		HX_STACK_VAR(fn,"fn");
						HX_STACK_LINE(68)
						bool tmp20 = (fn != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(68)
						if ((tmp20)){
							HX_STACK_LINE(68)
							Float tmp21 = this->value;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(68)
							Float tmp22 = this->percent;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(68)
							fn(tmp21,tmp22).Cast< Void >();
						}
						HX_STACK_LINE(68)
						(_idx)++;
					}
					HX_STACK_LINE(68)
					while((true)){
						HX_STACK_LINE(68)
						bool tmp16 = (_count > (int)0);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(68)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(68)
						if ((tmp17)){
							HX_STACK_LINE(68)
							break;
						}
						HX_STACK_LINE(68)
						::mint::core::Signal tmp18 = this->onchange;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(68)
						int tmp19 = (_count - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(68)
						Dynamic tmp20 = tmp18->listeners->__GetItem(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(68)
						Dynamic fn = tmp20;		HX_STACK_VAR(fn,"fn");
						HX_STACK_LINE(68)
						bool tmp21 = (fn == null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(68)
						if ((tmp21)){
							HX_STACK_LINE(68)
							::mint::core::Signal tmp22 = this->onchange;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(68)
							int tmp23 = (_count - (int)1);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(68)
							tmp22->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp23,(int)1);
						}
						HX_STACK_LINE(68)
						(_count)--;
					}
				}
			}
			HX_STACK_LINE(68)
			this->value;
		}
	}
	HX_STACK_LINE(69)
	Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	{
		HX_STACK_LINE(69)
		Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(69)
		Dynamic tmp4 = tmp3->__Field(HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(69)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(69)
		if ((tmp5)){
			HX_STACK_LINE(69)
			Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(69)
			tmp6->__FieldRef(HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a")) = false;
		}
		HX_STACK_LINE(69)
		Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(69)
		tmp2 = tmp6->__Field(HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"), hx::paccDynamic );
	}
	HX_STACK_LINE(69)
	this->vertical = tmp2;
	HX_STACK_LINE(70)
	Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(70)
	{
		HX_STACK_LINE(70)
		Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(70)
		Dynamic tmp5 = tmp4->__Field(HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(70)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(70)
		if ((tmp6)){
			HX_STACK_LINE(70)
			Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(70)
			tmp7->__FieldRef(HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f")) = false;
		}
		HX_STACK_LINE(70)
		Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(70)
		tmp3 = tmp7->__Field(HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f"), hx::paccDynamic );
	}
	HX_STACK_LINE(70)
	this->invert = tmp3;
	HX_STACK_LINE(71)
	Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(71)
	this->step = tmp4->__Field(HX_HCSTRING("step","\x4c","\xe7","\x5b","\x4c"), hx::paccDynamic );
	HX_STACK_LINE(73)
	Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(73)
	super::__construct(tmp5,null());
	HX_STACK_LINE(75)
	::mint::core::Signal tmp6 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(75)
	this->onchange = tmp6;
	HX_STACK_LINE(77)
	::mint::render::Rendering tmp7 = this->rendering;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(77)
	::mint::render::Renderer tmp8 = tmp7->get(hx::ClassOf< ::mint::Slider >(),hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(77)
	this->renderer = tmp8;
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(79)
		::mint::core::Signal tmp9 = this->oncreate;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(51)
		int tmp10 = tmp9->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(51)
		int _count = tmp10;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			bool tmp11 = (_idx < _count);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(52)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(52)
			if ((tmp12)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(79)
			::mint::core::Signal tmp13 = this->oncreate;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(53)
			Dynamic tmp14 = tmp13->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(53)
			Dynamic fn = tmp14;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp15 = (fn != null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(54)
			if ((tmp15)){
				HX_STACK_LINE(55)
				fn().Cast< Void >();
			}
			HX_STACK_LINE(57)
			(_idx)++;
		}
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp11 = (_count > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(60)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(60)
			if ((tmp12)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(79)
			::mint::core::Signal tmp13 = this->oncreate;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(61)
			int tmp14 = (_count - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(61)
			Dynamic tmp15 = tmp13->listeners->__GetItem(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(61)
			Dynamic fn = tmp15;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(62)
			bool tmp16 = (fn == null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(62)
			if ((tmp16)){
				HX_STACK_LINE(79)
				::mint::core::Signal tmp17 = this->oncreate;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(62)
				int tmp18 = (_count - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(62)
				tmp17->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp18,(int)1);
			}
			HX_STACK_LINE(63)
			(_count)--;
		}
	}
	HX_STACK_LINE(81)
	{
		HX_STACK_LINE(81)
		Float tmp9 = this->value;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(81)
		Float _value = tmp9;		HX_STACK_VAR(_value,"_value");
		HX_STACK_LINE(81)
		Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(81)
		{
			HX_STACK_LINE(81)
			Float tmp11 = this->min;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(81)
			Float a = tmp11;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(81)
			Float tmp12 = this->max;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(81)
			Float b = tmp12;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(81)
			bool tmp13 = (_value < a);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(81)
			if ((tmp13)){
				HX_STACK_LINE(81)
				tmp10 = a;
			}
			else{
				HX_STACK_LINE(81)
				bool tmp14 = (_value > b);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(81)
				if ((tmp14)){
					HX_STACK_LINE(81)
					tmp10 = b;
				}
				else{
					HX_STACK_LINE(81)
					tmp10 = _value;
				}
			}
		}
		HX_STACK_LINE(81)
		_value = tmp10;
		HX_STACK_LINE(81)
		Dynamic tmp11 = this->step;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(81)
		bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(81)
		if ((tmp12)){
			HX_STACK_LINE(81)
			Float tmp13 = _value;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(81)
			Dynamic tmp14 = this->step;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(81)
			Float tmp15 = (Float(tmp13) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(81)
			int tmp16 = ::Math_obj::round(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(81)
			Dynamic tmp17 = this->step;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(81)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(81)
			_value = tmp18;
		}
		HX_STACK_LINE(81)
		bool tmp13 = this->vertical;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(81)
		if ((tmp13)){
			HX_STACK_LINE(81)
			Float tmp14 = this->w;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(81)
			Float tmp15 = (tmp14 - (int)4);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(81)
			this->bar_w = tmp15;
			HX_STACK_LINE(81)
			Float tmp16 = this->h;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(81)
			Float tmp17 = (tmp16 - (int)4);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(81)
			Float tmp18 = _value;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(81)
			Float tmp19 = this->min;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(81)
			Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(81)
			Float tmp21 = (tmp17 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(81)
			Float tmp22 = this->max;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(81)
			Float tmp23 = this->min;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(81)
			Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(81)
			Float tmp25 = (Float(tmp21) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(81)
			this->bar_h = tmp25;
			HX_STACK_LINE(81)
			bool tmp26 = this->invert;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(81)
			bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(81)
			Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(81)
			if ((tmp27)){
				HX_STACK_LINE(81)
				Float tmp29 = this->h;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(81)
				Float tmp30 = this->h;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(81)
				Float tmp31 = (tmp30 - (int)4);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(81)
				Float tmp32 = _value;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(81)
				Float tmp33 = this->min;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(81)
				Float tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(81)
				Float tmp35 = (tmp31 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(81)
				Float tmp36 = this->max;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(81)
				Float tmp37 = this->min;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(81)
				Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(81)
				Float tmp39 = (Float(tmp35) / Float(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(81)
				Float tmp40 = (tmp29 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(81)
				tmp28 = (tmp40 - (int)2);
			}
			else{
				HX_STACK_LINE(81)
				tmp28 = (int)2;
			}
			HX_STACK_LINE(81)
			this->bar_y = tmp28;
			HX_STACK_LINE(81)
			Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(81)
			{
				HX_STACK_LINE(81)
				Float tmp30 = this->bar_h;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(81)
				Float value = tmp30;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(81)
				Float tmp31 = this->h;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(81)
				Float tmp32 = (tmp31 - (int)4);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(81)
				Float b = tmp32;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(81)
				bool tmp33 = (value < (int)1);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(81)
				if ((tmp33)){
					HX_STACK_LINE(81)
					tmp29 = (int)1;
				}
				else{
					HX_STACK_LINE(81)
					bool tmp34 = (value > b);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(81)
					if ((tmp34)){
						HX_STACK_LINE(81)
						tmp29 = b;
					}
					else{
						HX_STACK_LINE(81)
						tmp29 = value;
					}
				}
			}
			HX_STACK_LINE(81)
			this->bar_h = tmp29;
		}
		else{
			HX_STACK_LINE(81)
			Float tmp14 = this->w;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(81)
			Float tmp15 = (tmp14 - (int)4);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(81)
			Float tmp16 = _value;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(81)
			Float tmp17 = this->min;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(81)
			Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(81)
			Float tmp19 = (tmp15 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(81)
			Float tmp20 = this->max;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(81)
			Float tmp21 = this->min;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(81)
			Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(81)
			Float tmp23 = (Float(tmp19) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(81)
			this->bar_w = tmp23;
			HX_STACK_LINE(81)
			Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(81)
			{
				HX_STACK_LINE(81)
				Float tmp25 = this->bar_w;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(81)
				Float value = tmp25;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(81)
				Float tmp26 = this->w;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(81)
				Float tmp27 = (tmp26 - (int)4);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(81)
				Float b = tmp27;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(81)
				bool tmp28 = (value < (int)1);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(81)
				if ((tmp28)){
					HX_STACK_LINE(81)
					tmp24 = (int)1;
				}
				else{
					HX_STACK_LINE(81)
					bool tmp29 = (value > b);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(81)
					if ((tmp29)){
						HX_STACK_LINE(81)
						tmp24 = b;
					}
					else{
						HX_STACK_LINE(81)
						tmp24 = value;
					}
				}
			}
			HX_STACK_LINE(81)
			this->bar_w = tmp24;
			HX_STACK_LINE(81)
			Float tmp25 = this->h;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(81)
			Float tmp26 = (tmp25 - (int)4);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(81)
			this->bar_h = tmp26;
			HX_STACK_LINE(81)
			bool tmp27 = this->invert;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(81)
			bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(81)
			Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(81)
			if ((tmp28)){
				HX_STACK_LINE(81)
				tmp29 = (int)2;
			}
			else{
				HX_STACK_LINE(81)
				Float tmp30 = this->w;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(81)
				Float tmp31 = this->w;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(81)
				Float tmp32 = (tmp31 - (int)4);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(81)
				Float tmp33 = _value;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(81)
				Float tmp34 = this->min;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(81)
				Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(81)
				Float tmp36 = (tmp32 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(81)
				Float tmp37 = this->max;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(81)
				Float tmp38 = this->min;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(81)
				Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(81)
				Float tmp40 = (Float(tmp36) / Float(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(81)
				Float tmp41 = (tmp30 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(81)
				tmp29 = (tmp41 - (int)2);
			}
			HX_STACK_LINE(81)
			this->bar_x = tmp29;
		}
		HX_STACK_LINE(81)
		Float tmp14 = _value;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(81)
		Float tmp15 = this->max;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(81)
		Float tmp16 = this->min;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(81)
		Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(81)
		Float tmp18 = (Float(tmp14) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(81)
		this->percent = tmp18;
		HX_STACK_LINE(81)
		this->ignore_set = true;
		HX_STACK_LINE(81)
		Float tmp19 = _value;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(81)
		this->set_value(tmp19);
		HX_STACK_LINE(81)
		this->ignore_set = false;
		HX_STACK_LINE(81)
		{
			HX_STACK_LINE(81)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(81)
			::mint::core::Signal tmp20 = this->onchange;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(81)
			int tmp21 = tmp20->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(81)
			int _count = tmp21;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(81)
			while((true)){
				HX_STACK_LINE(81)
				bool tmp22 = (_idx < _count);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(81)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(81)
				if ((tmp23)){
					HX_STACK_LINE(81)
					break;
				}
				HX_STACK_LINE(81)
				::mint::core::Signal tmp24 = this->onchange;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(81)
				Dynamic tmp25 = tmp24->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(81)
				Dynamic fn = tmp25;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(81)
				bool tmp26 = (fn != null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(81)
				if ((tmp26)){
					HX_STACK_LINE(81)
					Float tmp27 = this->value;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(81)
					Float tmp28 = this->percent;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(81)
					fn(tmp27,tmp28).Cast< Void >();
				}
				HX_STACK_LINE(81)
				(_idx)++;
			}
			HX_STACK_LINE(81)
			while((true)){
				HX_STACK_LINE(81)
				bool tmp22 = (_count > (int)0);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(81)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(81)
				if ((tmp23)){
					HX_STACK_LINE(81)
					break;
				}
				HX_STACK_LINE(81)
				::mint::core::Signal tmp24 = this->onchange;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(81)
				int tmp25 = (_count - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(81)
				Dynamic tmp26 = tmp24->listeners->__GetItem(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(81)
				Dynamic fn = tmp26;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(81)
				bool tmp27 = (fn == null());		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(81)
				if ((tmp27)){
					HX_STACK_LINE(81)
					::mint::core::Signal tmp28 = this->onchange;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(81)
					int tmp29 = (_count - (int)1);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(81)
					tmp28->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp29,(int)1);
				}
				HX_STACK_LINE(81)
				(_count)--;
			}
		}
	}
}
;
	return null();
}

//Slider_obj::~Slider_obj() { }

Dynamic Slider_obj::__CreateEmpty() { return  new Slider_obj; }
hx::ObjectPtr< Slider_obj > Slider_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Slider_obj > _result_ = new Slider_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic Slider_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Slider_obj > _result_ = new Slider_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Slider_obj::destroy( ){
{
		HX_STACK_FRAME("mint.Slider","destroy",0x0fa1be19,"mint.Slider.destroy","mint/Slider.hx",85,0x74f6d630)
		HX_STACK_THIS(this)
		HX_STACK_LINE(87)
		this->super::destroy();
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			::mint::core::Signal tmp = this->onchange;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(89)
			::mint::core::Signal _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(89)
			_this->listeners = null();
			HX_STACK_LINE(89)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(90)
		this->onchange = null();
	}
return null();
}


Void Slider_obj::mousedown( Dynamic e){
{
		HX_STACK_FRAME("mint.Slider","mousedown",0x99e2dbe6,"mint.Slider.mousedown","mint/Slider.hx",96,0x74f6d630)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(98)
		Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		this->super::mousedown(tmp);
		HX_STACK_LINE(100)
		this->dragging = true;
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			{
				HX_STACK_LINE(101)
				bool tmp1 = this->destroyed;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(101)
				bool tmp2 = (tmp1 == false);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(101)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(101)
				if ((tmp3)){
					HX_STACK_LINE(101)
					::String tmp4 = this->name;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(101)
					::String tmp5 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(101)
					::String tmp6 = (tmp5 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(101)
					::String tmp7 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(101)
					::String tmp8 = (tmp7 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(101)
					::String tmp9 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(101)
					::mint::core::DebugError tmp10 = ::mint::core::DebugError_obj::assertion(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(101)
					HX_STACK_DO_THROW(tmp10);
				}
			}
			HX_STACK_LINE(101)
			::mint::Canvas tmp1 = this->canvas;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(101)
			bool tmp2 = (tmp1 == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(101)
			if ((tmp2)){
				HX_STACK_LINE(101)
				Dynamic();
			}
			else{
				HX_STACK_LINE(101)
				::mint::Canvas tmp3 = this->canvas;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(101)
				::mint::Control tmp4 = tmp3->get_captured();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(101)
				bool tmp5 = (tmp4 == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(101)
				bool _pre = tmp5;		HX_STACK_VAR(_pre,"_pre");
				HX_STACK_LINE(101)
				::mint::Canvas tmp6 = this->canvas;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(101)
				tmp6->set_captured(hx::ObjectPtr<OBJ_>(this));
				HX_STACK_LINE(101)
				bool tmp7 = _pre;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(101)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(101)
				if ((tmp8)){
					HX_STACK_LINE(101)
					int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
					HX_STACK_LINE(101)
					::mint::core::Signal tmp9 = this->oncaptured;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(101)
					int tmp10 = tmp9->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(101)
					int _count = tmp10;		HX_STACK_VAR(_count,"_count");
					HX_STACK_LINE(101)
					while((true)){
						HX_STACK_LINE(101)
						bool tmp11 = (_idx < _count);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(101)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(101)
						if ((tmp12)){
							HX_STACK_LINE(101)
							break;
						}
						HX_STACK_LINE(101)
						::mint::core::Signal tmp13 = this->oncaptured;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(101)
						Dynamic tmp14 = tmp13->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(101)
						Dynamic fn = tmp14;		HX_STACK_VAR(fn,"fn");
						HX_STACK_LINE(101)
						bool tmp15 = (fn != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(101)
						if ((tmp15)){
							HX_STACK_LINE(101)
							fn(true).Cast< Void >();
						}
						HX_STACK_LINE(101)
						(_idx)++;
					}
					HX_STACK_LINE(101)
					while((true)){
						HX_STACK_LINE(101)
						bool tmp11 = (_count > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(101)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(101)
						if ((tmp12)){
							HX_STACK_LINE(101)
							break;
						}
						HX_STACK_LINE(101)
						::mint::core::Signal tmp13 = this->oncaptured;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(101)
						int tmp14 = (_count - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(101)
						Dynamic tmp15 = tmp13->listeners->__GetItem(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(101)
						Dynamic fn = tmp15;		HX_STACK_VAR(fn,"fn");
						HX_STACK_LINE(101)
						bool tmp16 = (fn == null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(101)
						if ((tmp16)){
							HX_STACK_LINE(101)
							::mint::core::Signal tmp17 = this->oncaptured;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(101)
							int tmp18 = (_count - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(101)
							tmp17->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp18,(int)1);
						}
						HX_STACK_LINE(101)
						(_count)--;
					}
				}
			}
		}
		HX_STACK_LINE(102)
		{
			HX_STACK_LINE(102)
			bool tmp1 = this->vertical;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(102)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(102)
			if ((tmp2)){
				HX_STACK_LINE(102)
				bool tmp3 = this->invert;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(102)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(102)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(102)
				if ((tmp4)){
					HX_STACK_LINE(102)
					int tmp6 = e->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(102)
					Float tmp7 = this->x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(102)
					tmp5 = (tmp6 - tmp7);
				}
				else{
					HX_STACK_LINE(102)
					Float tmp6 = this->w;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(102)
					int tmp7 = e->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(102)
					Float tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(102)
					Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(102)
					tmp5 = (tmp6 - tmp9);
				}
				HX_STACK_LINE(102)
				Float _dx = tmp5;		HX_STACK_VAR(_dx,"_dx");
				HX_STACK_LINE(102)
				bool tmp6 = (_dx < (int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(102)
				if ((tmp6)){
					HX_STACK_LINE(102)
					_dx = (int)1;
				}
				HX_STACK_LINE(102)
				Float tmp7 = _dx;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(102)
				Float tmp8 = this->w;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(102)
				Float tmp9 = (tmp8 - (int)4);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(102)
				bool tmp10 = (tmp7 >= tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(102)
				if ((tmp10)){
					HX_STACK_LINE(102)
					Float tmp11 = this->w;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(102)
					Float tmp12 = (tmp11 - (int)4);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(102)
					_dx = tmp12;
				}
				HX_STACK_LINE(102)
				Float tmp11 = (_dx - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(102)
				Float tmp12 = this->w;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(102)
				Float tmp13 = (tmp12 - (int)5);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(102)
				Float tmp14 = (Float(tmp11) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(102)
				Float tmp15 = this->max;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(102)
				Float tmp16 = this->min;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(102)
				Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(102)
				Float tmp18 = (tmp14 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(102)
				Float tmp19 = this->min;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(102)
				Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(102)
				Float _v = tmp20;		HX_STACK_VAR(_v,"_v");
				HX_STACK_LINE(102)
				{
					HX_STACK_LINE(102)
					Float _value = _v;		HX_STACK_VAR(_value,"_value");
					HX_STACK_LINE(102)
					Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(102)
					{
						HX_STACK_LINE(102)
						Float tmp22 = this->min;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(102)
						Float a = tmp22;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(102)
						Float tmp23 = this->max;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(102)
						Float b = tmp23;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(102)
						bool tmp24 = (_value < a);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(102)
						if ((tmp24)){
							HX_STACK_LINE(102)
							tmp21 = a;
						}
						else{
							HX_STACK_LINE(102)
							bool tmp25 = (_value > b);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(102)
							if ((tmp25)){
								HX_STACK_LINE(102)
								tmp21 = b;
							}
							else{
								HX_STACK_LINE(102)
								tmp21 = _value;
							}
						}
					}
					HX_STACK_LINE(102)
					_value = tmp21;
					HX_STACK_LINE(102)
					Dynamic tmp22 = this->step;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(102)
					bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(102)
					if ((tmp23)){
						HX_STACK_LINE(102)
						Float tmp24 = _value;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(102)
						Dynamic tmp25 = this->step;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(102)
						Float tmp26 = (Float(tmp24) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(102)
						int tmp27 = ::Math_obj::round(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(102)
						Dynamic tmp28 = this->step;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(102)
						Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(102)
						_value = tmp29;
					}
					HX_STACK_LINE(102)
					bool tmp24 = this->vertical;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(102)
					if ((tmp24)){
						HX_STACK_LINE(102)
						Float tmp25 = this->w;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(102)
						Float tmp26 = (tmp25 - (int)4);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(102)
						this->bar_w = tmp26;
						HX_STACK_LINE(102)
						Float tmp27 = this->h;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(102)
						Float tmp28 = (tmp27 - (int)4);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(102)
						Float tmp29 = _value;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(102)
						Float tmp30 = this->min;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(102)
						Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(102)
						Float tmp32 = (tmp28 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(102)
						Float tmp33 = this->max;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(102)
						Float tmp34 = this->min;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(102)
						Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(102)
						Float tmp36 = (Float(tmp32) / Float(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(102)
						this->bar_h = tmp36;
						HX_STACK_LINE(102)
						bool tmp37 = this->invert;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(102)
						bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(102)
						Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(102)
						if ((tmp38)){
							HX_STACK_LINE(102)
							Float tmp40 = this->h;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(102)
							Float tmp41 = this->h;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(102)
							Float tmp42 = (tmp41 - (int)4);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(102)
							Float tmp43 = _value;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(102)
							Float tmp44 = this->min;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(102)
							Float tmp45 = (tmp43 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(102)
							Float tmp46 = (tmp42 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(102)
							Float tmp47 = this->max;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(102)
							Float tmp48 = this->min;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(102)
							Float tmp49 = (tmp47 - tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(102)
							Float tmp50 = (Float(tmp46) / Float(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(102)
							Float tmp51 = (tmp40 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(102)
							tmp39 = (tmp51 - (int)2);
						}
						else{
							HX_STACK_LINE(102)
							tmp39 = (int)2;
						}
						HX_STACK_LINE(102)
						this->bar_y = tmp39;
						HX_STACK_LINE(102)
						Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(102)
						{
							HX_STACK_LINE(102)
							Float tmp41 = this->bar_h;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(102)
							Float value = tmp41;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(102)
							Float tmp42 = this->h;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(102)
							Float tmp43 = (tmp42 - (int)4);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(102)
							Float b = tmp43;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(102)
							bool tmp44 = (value < (int)1);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(102)
							if ((tmp44)){
								HX_STACK_LINE(102)
								tmp40 = (int)1;
							}
							else{
								HX_STACK_LINE(102)
								bool tmp45 = (value > b);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(102)
								if ((tmp45)){
									HX_STACK_LINE(102)
									tmp40 = b;
								}
								else{
									HX_STACK_LINE(102)
									tmp40 = value;
								}
							}
						}
						HX_STACK_LINE(102)
						this->bar_h = tmp40;
					}
					else{
						HX_STACK_LINE(102)
						Float tmp25 = this->w;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(102)
						Float tmp26 = (tmp25 - (int)4);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(102)
						Float tmp27 = _value;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(102)
						Float tmp28 = this->min;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(102)
						Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(102)
						Float tmp30 = (tmp26 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(102)
						Float tmp31 = this->max;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(102)
						Float tmp32 = this->min;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(102)
						Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(102)
						Float tmp34 = (Float(tmp30) / Float(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(102)
						this->bar_w = tmp34;
						HX_STACK_LINE(102)
						Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(102)
						{
							HX_STACK_LINE(102)
							Float tmp36 = this->bar_w;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(102)
							Float value = tmp36;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(102)
							Float tmp37 = this->w;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(102)
							Float tmp38 = (tmp37 - (int)4);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(102)
							Float b = tmp38;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(102)
							bool tmp39 = (value < (int)1);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(102)
							if ((tmp39)){
								HX_STACK_LINE(102)
								tmp35 = (int)1;
							}
							else{
								HX_STACK_LINE(102)
								bool tmp40 = (value > b);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(102)
								if ((tmp40)){
									HX_STACK_LINE(102)
									tmp35 = b;
								}
								else{
									HX_STACK_LINE(102)
									tmp35 = value;
								}
							}
						}
						HX_STACK_LINE(102)
						this->bar_w = tmp35;
						HX_STACK_LINE(102)
						Float tmp36 = this->h;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(102)
						Float tmp37 = (tmp36 - (int)4);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(102)
						this->bar_h = tmp37;
						HX_STACK_LINE(102)
						bool tmp38 = this->invert;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(102)
						bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(102)
						Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(102)
						if ((tmp39)){
							HX_STACK_LINE(102)
							tmp40 = (int)2;
						}
						else{
							HX_STACK_LINE(102)
							Float tmp41 = this->w;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(102)
							Float tmp42 = this->w;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(102)
							Float tmp43 = (tmp42 - (int)4);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(102)
							Float tmp44 = _value;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(102)
							Float tmp45 = this->min;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(102)
							Float tmp46 = (tmp44 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(102)
							Float tmp47 = (tmp43 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(102)
							Float tmp48 = this->max;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(102)
							Float tmp49 = this->min;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(102)
							Float tmp50 = (tmp48 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(102)
							Float tmp51 = (Float(tmp47) / Float(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(102)
							Float tmp52 = (tmp41 - tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(102)
							tmp40 = (tmp52 - (int)2);
						}
						HX_STACK_LINE(102)
						this->bar_x = tmp40;
					}
					HX_STACK_LINE(102)
					Float tmp25 = _value;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(102)
					Float tmp26 = this->max;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(102)
					Float tmp27 = this->min;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(102)
					Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(102)
					Float tmp29 = (Float(tmp25) / Float(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(102)
					this->percent = tmp29;
					HX_STACK_LINE(102)
					this->ignore_set = true;
					HX_STACK_LINE(102)
					Float tmp30 = _value;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(102)
					this->set_value(tmp30);
					HX_STACK_LINE(102)
					this->ignore_set = false;
					HX_STACK_LINE(102)
					{
						HX_STACK_LINE(102)
						int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
						HX_STACK_LINE(102)
						::mint::core::Signal tmp31 = this->onchange;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(102)
						int tmp32 = tmp31->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(102)
						int _count = tmp32;		HX_STACK_VAR(_count,"_count");
						HX_STACK_LINE(102)
						while((true)){
							HX_STACK_LINE(102)
							bool tmp33 = (_idx < _count);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(102)
							bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(102)
							if ((tmp34)){
								HX_STACK_LINE(102)
								break;
							}
							HX_STACK_LINE(102)
							::mint::core::Signal tmp35 = this->onchange;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(102)
							Dynamic tmp36 = tmp35->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(102)
							Dynamic fn = tmp36;		HX_STACK_VAR(fn,"fn");
							HX_STACK_LINE(102)
							bool tmp37 = (fn != null());		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(102)
							if ((tmp37)){
								HX_STACK_LINE(102)
								Float tmp38 = this->value;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(102)
								Float tmp39 = this->percent;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(102)
								fn(tmp38,tmp39).Cast< Void >();
							}
							HX_STACK_LINE(102)
							(_idx)++;
						}
						HX_STACK_LINE(102)
						while((true)){
							HX_STACK_LINE(102)
							bool tmp33 = (_count > (int)0);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(102)
							bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(102)
							if ((tmp34)){
								HX_STACK_LINE(102)
								break;
							}
							HX_STACK_LINE(102)
							::mint::core::Signal tmp35 = this->onchange;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(102)
							int tmp36 = (_count - (int)1);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(102)
							Dynamic tmp37 = tmp35->listeners->__GetItem(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(102)
							Dynamic fn = tmp37;		HX_STACK_VAR(fn,"fn");
							HX_STACK_LINE(102)
							bool tmp38 = (fn == null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(102)
							if ((tmp38)){
								HX_STACK_LINE(102)
								::mint::core::Signal tmp39 = this->onchange;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(102)
								int tmp40 = (_count - (int)1);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(102)
								tmp39->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp40,(int)1);
							}
							HX_STACK_LINE(102)
							(_count)--;
						}
					}
				}
			}
			else{
				HX_STACK_LINE(102)
				bool tmp3 = this->invert;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(102)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(102)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(102)
				if ((tmp4)){
					HX_STACK_LINE(102)
					Float tmp6 = this->h;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(102)
					int tmp7 = e->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(102)
					Float tmp8 = this->y;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(102)
					Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(102)
					tmp5 = (tmp6 - tmp9);
				}
				else{
					HX_STACK_LINE(102)
					int tmp6 = e->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(102)
					Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(102)
					tmp5 = (tmp6 - tmp7);
				}
				HX_STACK_LINE(102)
				Float _dy = tmp5;		HX_STACK_VAR(_dy,"_dy");
				HX_STACK_LINE(102)
				bool tmp6 = (_dy < (int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(102)
				if ((tmp6)){
					HX_STACK_LINE(102)
					_dy = (int)1;
				}
				HX_STACK_LINE(102)
				Float tmp7 = _dy;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(102)
				Float tmp8 = this->h;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(102)
				Float tmp9 = (tmp8 - (int)4);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(102)
				bool tmp10 = (tmp7 >= tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(102)
				if ((tmp10)){
					HX_STACK_LINE(102)
					Float tmp11 = this->h;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(102)
					Float tmp12 = (tmp11 - (int)4);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(102)
					_dy = tmp12;
				}
				HX_STACK_LINE(102)
				Float tmp11 = (_dy - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(102)
				Float tmp12 = this->h;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(102)
				Float tmp13 = (tmp12 - (int)5);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(102)
				Float tmp14 = (Float(tmp11) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(102)
				Float tmp15 = this->max;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(102)
				Float tmp16 = this->min;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(102)
				Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(102)
				Float tmp18 = (tmp14 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(102)
				Float tmp19 = this->min;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(102)
				Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(102)
				Float _v = tmp20;		HX_STACK_VAR(_v,"_v");
				HX_STACK_LINE(102)
				{
					HX_STACK_LINE(102)
					Float _value = _v;		HX_STACK_VAR(_value,"_value");
					HX_STACK_LINE(102)
					Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(102)
					{
						HX_STACK_LINE(102)
						Float tmp22 = this->min;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(102)
						Float a = tmp22;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(102)
						Float tmp23 = this->max;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(102)
						Float b = tmp23;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(102)
						bool tmp24 = (_value < a);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(102)
						if ((tmp24)){
							HX_STACK_LINE(102)
							tmp21 = a;
						}
						else{
							HX_STACK_LINE(102)
							bool tmp25 = (_value > b);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(102)
							if ((tmp25)){
								HX_STACK_LINE(102)
								tmp21 = b;
							}
							else{
								HX_STACK_LINE(102)
								tmp21 = _value;
							}
						}
					}
					HX_STACK_LINE(102)
					_value = tmp21;
					HX_STACK_LINE(102)
					Dynamic tmp22 = this->step;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(102)
					bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(102)
					if ((tmp23)){
						HX_STACK_LINE(102)
						Float tmp24 = _value;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(102)
						Dynamic tmp25 = this->step;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(102)
						Float tmp26 = (Float(tmp24) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(102)
						int tmp27 = ::Math_obj::round(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(102)
						Dynamic tmp28 = this->step;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(102)
						Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(102)
						_value = tmp29;
					}
					HX_STACK_LINE(102)
					bool tmp24 = this->vertical;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(102)
					if ((tmp24)){
						HX_STACK_LINE(102)
						Float tmp25 = this->w;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(102)
						Float tmp26 = (tmp25 - (int)4);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(102)
						this->bar_w = tmp26;
						HX_STACK_LINE(102)
						Float tmp27 = this->h;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(102)
						Float tmp28 = (tmp27 - (int)4);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(102)
						Float tmp29 = _value;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(102)
						Float tmp30 = this->min;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(102)
						Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(102)
						Float tmp32 = (tmp28 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(102)
						Float tmp33 = this->max;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(102)
						Float tmp34 = this->min;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(102)
						Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(102)
						Float tmp36 = (Float(tmp32) / Float(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(102)
						this->bar_h = tmp36;
						HX_STACK_LINE(102)
						bool tmp37 = this->invert;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(102)
						bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(102)
						Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(102)
						if ((tmp38)){
							HX_STACK_LINE(102)
							Float tmp40 = this->h;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(102)
							Float tmp41 = this->h;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(102)
							Float tmp42 = (tmp41 - (int)4);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(102)
							Float tmp43 = _value;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(102)
							Float tmp44 = this->min;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(102)
							Float tmp45 = (tmp43 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(102)
							Float tmp46 = (tmp42 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(102)
							Float tmp47 = this->max;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(102)
							Float tmp48 = this->min;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(102)
							Float tmp49 = (tmp47 - tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(102)
							Float tmp50 = (Float(tmp46) / Float(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(102)
							Float tmp51 = (tmp40 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(102)
							tmp39 = (tmp51 - (int)2);
						}
						else{
							HX_STACK_LINE(102)
							tmp39 = (int)2;
						}
						HX_STACK_LINE(102)
						this->bar_y = tmp39;
						HX_STACK_LINE(102)
						Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(102)
						{
							HX_STACK_LINE(102)
							Float tmp41 = this->bar_h;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(102)
							Float value = tmp41;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(102)
							Float tmp42 = this->h;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(102)
							Float tmp43 = (tmp42 - (int)4);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(102)
							Float b = tmp43;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(102)
							bool tmp44 = (value < (int)1);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(102)
							if ((tmp44)){
								HX_STACK_LINE(102)
								tmp40 = (int)1;
							}
							else{
								HX_STACK_LINE(102)
								bool tmp45 = (value > b);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(102)
								if ((tmp45)){
									HX_STACK_LINE(102)
									tmp40 = b;
								}
								else{
									HX_STACK_LINE(102)
									tmp40 = value;
								}
							}
						}
						HX_STACK_LINE(102)
						this->bar_h = tmp40;
					}
					else{
						HX_STACK_LINE(102)
						Float tmp25 = this->w;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(102)
						Float tmp26 = (tmp25 - (int)4);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(102)
						Float tmp27 = _value;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(102)
						Float tmp28 = this->min;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(102)
						Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(102)
						Float tmp30 = (tmp26 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(102)
						Float tmp31 = this->max;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(102)
						Float tmp32 = this->min;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(102)
						Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(102)
						Float tmp34 = (Float(tmp30) / Float(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(102)
						this->bar_w = tmp34;
						HX_STACK_LINE(102)
						Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(102)
						{
							HX_STACK_LINE(102)
							Float tmp36 = this->bar_w;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(102)
							Float value = tmp36;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(102)
							Float tmp37 = this->w;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(102)
							Float tmp38 = (tmp37 - (int)4);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(102)
							Float b = tmp38;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(102)
							bool tmp39 = (value < (int)1);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(102)
							if ((tmp39)){
								HX_STACK_LINE(102)
								tmp35 = (int)1;
							}
							else{
								HX_STACK_LINE(102)
								bool tmp40 = (value > b);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(102)
								if ((tmp40)){
									HX_STACK_LINE(102)
									tmp35 = b;
								}
								else{
									HX_STACK_LINE(102)
									tmp35 = value;
								}
							}
						}
						HX_STACK_LINE(102)
						this->bar_w = tmp35;
						HX_STACK_LINE(102)
						Float tmp36 = this->h;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(102)
						Float tmp37 = (tmp36 - (int)4);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(102)
						this->bar_h = tmp37;
						HX_STACK_LINE(102)
						bool tmp38 = this->invert;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(102)
						bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(102)
						Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(102)
						if ((tmp39)){
							HX_STACK_LINE(102)
							tmp40 = (int)2;
						}
						else{
							HX_STACK_LINE(102)
							Float tmp41 = this->w;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(102)
							Float tmp42 = this->w;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(102)
							Float tmp43 = (tmp42 - (int)4);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(102)
							Float tmp44 = _value;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(102)
							Float tmp45 = this->min;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(102)
							Float tmp46 = (tmp44 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(102)
							Float tmp47 = (tmp43 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(102)
							Float tmp48 = this->max;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(102)
							Float tmp49 = this->min;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(102)
							Float tmp50 = (tmp48 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(102)
							Float tmp51 = (Float(tmp47) / Float(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(102)
							Float tmp52 = (tmp41 - tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(102)
							tmp40 = (tmp52 - (int)2);
						}
						HX_STACK_LINE(102)
						this->bar_x = tmp40;
					}
					HX_STACK_LINE(102)
					Float tmp25 = _value;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(102)
					Float tmp26 = this->max;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(102)
					Float tmp27 = this->min;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(102)
					Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(102)
					Float tmp29 = (Float(tmp25) / Float(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(102)
					this->percent = tmp29;
					HX_STACK_LINE(102)
					this->ignore_set = true;
					HX_STACK_LINE(102)
					Float tmp30 = _value;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(102)
					this->set_value(tmp30);
					HX_STACK_LINE(102)
					this->ignore_set = false;
					HX_STACK_LINE(102)
					{
						HX_STACK_LINE(102)
						int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
						HX_STACK_LINE(102)
						::mint::core::Signal tmp31 = this->onchange;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(102)
						int tmp32 = tmp31->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(102)
						int _count = tmp32;		HX_STACK_VAR(_count,"_count");
						HX_STACK_LINE(102)
						while((true)){
							HX_STACK_LINE(102)
							bool tmp33 = (_idx < _count);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(102)
							bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(102)
							if ((tmp34)){
								HX_STACK_LINE(102)
								break;
							}
							HX_STACK_LINE(102)
							::mint::core::Signal tmp35 = this->onchange;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(102)
							Dynamic tmp36 = tmp35->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(102)
							Dynamic fn = tmp36;		HX_STACK_VAR(fn,"fn");
							HX_STACK_LINE(102)
							bool tmp37 = (fn != null());		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(102)
							if ((tmp37)){
								HX_STACK_LINE(102)
								Float tmp38 = this->value;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(102)
								Float tmp39 = this->percent;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(102)
								fn(tmp38,tmp39).Cast< Void >();
							}
							HX_STACK_LINE(102)
							(_idx)++;
						}
						HX_STACK_LINE(102)
						while((true)){
							HX_STACK_LINE(102)
							bool tmp33 = (_count > (int)0);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(102)
							bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(102)
							if ((tmp34)){
								HX_STACK_LINE(102)
								break;
							}
							HX_STACK_LINE(102)
							::mint::core::Signal tmp35 = this->onchange;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(102)
							int tmp36 = (_count - (int)1);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(102)
							Dynamic tmp37 = tmp35->listeners->__GetItem(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(102)
							Dynamic fn = tmp37;		HX_STACK_VAR(fn,"fn");
							HX_STACK_LINE(102)
							bool tmp38 = (fn == null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(102)
							if ((tmp38)){
								HX_STACK_LINE(102)
								::mint::core::Signal tmp39 = this->onchange;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(102)
								int tmp40 = (_count - (int)1);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(102)
								tmp39->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp40,(int)1);
							}
							HX_STACK_LINE(102)
							(_count)--;
						}
					}
				}
			}
		}
	}
return null();
}


Float Slider_obj::get_range( ){
	HX_STACK_FRAME("mint.Slider","get_range",0xbdc258f3,"mint.Slider.get_range","mint/Slider.hx",106,0x74f6d630)
	HX_STACK_THIS(this)
	HX_STACK_LINE(106)
	Float tmp = this->max;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	Float tmp1 = this->min;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(106)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(106)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Slider_obj,get_range,return )

Void Slider_obj::update_value( Float _value){
{
		HX_STACK_FRAME("mint.Slider","update_value",0x1035f7fc,"mint.Slider.update_value","mint/Slider.hx",110,0x74f6d630)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(112)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(112)
		{
			HX_STACK_LINE(112)
			Float tmp1 = this->min;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(112)
			Float a = tmp1;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(112)
			Float tmp2 = this->max;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(112)
			Float b = tmp2;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(112)
			bool tmp3 = (_value < a);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(112)
			if ((tmp3)){
				HX_STACK_LINE(112)
				tmp = a;
			}
			else{
				HX_STACK_LINE(112)
				bool tmp4 = (_value > b);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(112)
				if ((tmp4)){
					HX_STACK_LINE(112)
					tmp = b;
				}
				else{
					HX_STACK_LINE(112)
					tmp = _value;
				}
			}
		}
		HX_STACK_LINE(112)
		_value = tmp;
		HX_STACK_LINE(114)
		Dynamic tmp1 = this->step;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(114)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(114)
		if ((tmp2)){
			HX_STACK_LINE(115)
			Float tmp3 = _value;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(115)
			Dynamic tmp4 = this->step;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(115)
			Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(115)
			int tmp6 = ::Math_obj::round(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(115)
			Dynamic tmp7 = this->step;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(115)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(115)
			_value = tmp8;
		}
		HX_STACK_LINE(118)
		bool tmp3 = this->vertical;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(118)
		if ((tmp3)){
			HX_STACK_LINE(120)
			Float tmp4 = this->w;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(120)
			Float tmp5 = (tmp4 - (int)4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(120)
			this->bar_w = tmp5;
			HX_STACK_LINE(121)
			Float tmp6 = this->h;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(121)
			Float tmp7 = (tmp6 - (int)4);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(121)
			Float tmp8 = _value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(121)
			Float tmp9 = this->min;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(121)
			Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(121)
			Float tmp11 = (tmp7 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(121)
			Float tmp12 = this->max;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(121)
			Float tmp13 = this->min;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(121)
			Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(121)
			Float tmp15 = (Float(tmp11) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(121)
			this->bar_h = tmp15;
			HX_STACK_LINE(122)
			bool tmp16 = this->invert;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(122)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(122)
			Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(122)
			if ((tmp17)){
				HX_STACK_LINE(122)
				Float tmp19 = this->h;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(122)
				Float tmp20 = this->h;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(122)
				Float tmp21 = (tmp20 - (int)4);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(122)
				Float tmp22 = _value;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(122)
				Float tmp23 = this->min;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(122)
				Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(122)
				Float tmp25 = (tmp21 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(122)
				Float tmp26 = this->max;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(122)
				Float tmp27 = this->min;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(122)
				Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(122)
				Float tmp29 = (Float(tmp25) / Float(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(122)
				Float tmp30 = (tmp19 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(122)
				tmp18 = (tmp30 - (int)2);
			}
			else{
				HX_STACK_LINE(122)
				tmp18 = (int)2;
			}
			HX_STACK_LINE(122)
			this->bar_y = tmp18;
			HX_STACK_LINE(123)
			Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(123)
			{
				HX_STACK_LINE(123)
				Float tmp20 = this->bar_h;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(123)
				Float value = tmp20;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(123)
				Float tmp21 = this->h;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(123)
				Float tmp22 = (tmp21 - (int)4);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(123)
				Float b = tmp22;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(123)
				bool tmp23 = (value < (int)1);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(123)
				if ((tmp23)){
					HX_STACK_LINE(123)
					tmp19 = (int)1;
				}
				else{
					HX_STACK_LINE(123)
					bool tmp24 = (value > b);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(123)
					if ((tmp24)){
						HX_STACK_LINE(123)
						tmp19 = b;
					}
					else{
						HX_STACK_LINE(123)
						tmp19 = value;
					}
				}
			}
			HX_STACK_LINE(123)
			this->bar_h = tmp19;
		}
		else{
			HX_STACK_LINE(127)
			Float tmp4 = this->w;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(127)
			Float tmp5 = (tmp4 - (int)4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(127)
			Float tmp6 = _value;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(127)
			Float tmp7 = this->min;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(127)
			Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(127)
			Float tmp9 = (tmp5 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(127)
			Float tmp10 = this->max;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(127)
			Float tmp11 = this->min;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(127)
			Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(127)
			Float tmp13 = (Float(tmp9) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(127)
			this->bar_w = tmp13;
			HX_STACK_LINE(128)
			Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(128)
			{
				HX_STACK_LINE(128)
				Float tmp15 = this->bar_w;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(128)
				Float value = tmp15;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(128)
				Float tmp16 = this->w;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(128)
				Float tmp17 = (tmp16 - (int)4);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(128)
				Float b = tmp17;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(128)
				bool tmp18 = (value < (int)1);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(128)
				if ((tmp18)){
					HX_STACK_LINE(128)
					tmp14 = (int)1;
				}
				else{
					HX_STACK_LINE(128)
					bool tmp19 = (value > b);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(128)
					if ((tmp19)){
						HX_STACK_LINE(128)
						tmp14 = b;
					}
					else{
						HX_STACK_LINE(128)
						tmp14 = value;
					}
				}
			}
			HX_STACK_LINE(128)
			this->bar_w = tmp14;
			HX_STACK_LINE(129)
			Float tmp15 = this->h;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(129)
			Float tmp16 = (tmp15 - (int)4);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(129)
			this->bar_h = tmp16;
			HX_STACK_LINE(130)
			bool tmp17 = this->invert;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(130)
			bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(130)
			Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(130)
			if ((tmp18)){
				HX_STACK_LINE(130)
				tmp19 = (int)2;
			}
			else{
				HX_STACK_LINE(130)
				Float tmp20 = this->w;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(130)
				Float tmp21 = this->w;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(130)
				Float tmp22 = (tmp21 - (int)4);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(130)
				Float tmp23 = _value;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(130)
				Float tmp24 = this->min;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(130)
				Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(130)
				Float tmp26 = (tmp22 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(130)
				Float tmp27 = this->max;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(130)
				Float tmp28 = this->min;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(130)
				Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(130)
				Float tmp30 = (Float(tmp26) / Float(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(130)
				Float tmp31 = (tmp20 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(130)
				tmp19 = (tmp31 - (int)2);
			}
			HX_STACK_LINE(130)
			this->bar_x = tmp19;
		}
		HX_STACK_LINE(134)
		Float tmp4 = _value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(134)
		Float tmp5 = this->max;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(134)
		Float tmp6 = this->min;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(134)
		Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(134)
		Float tmp8 = (Float(tmp4) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(134)
		this->percent = tmp8;
		HX_STACK_LINE(136)
		this->ignore_set = true;
		HX_STACK_LINE(137)
		Float tmp9 = _value;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(137)
		this->set_value(tmp9);
		HX_STACK_LINE(138)
		this->ignore_set = false;
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(50)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(140)
			::mint::core::Signal tmp10 = this->onchange;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(51)
			int tmp11 = tmp10->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(51)
			int _count = tmp11;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp12 = (_idx < _count);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(52)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(52)
				if ((tmp13)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(140)
				::mint::core::Signal tmp14 = this->onchange;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(53)
				Dynamic tmp15 = tmp14->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(53)
				Dynamic fn = tmp15;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(54)
				bool tmp16 = (fn != null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(54)
				if ((tmp16)){
					HX_STACK_LINE(140)
					Float tmp17 = this->value;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(140)
					Float tmp18 = this->percent;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(55)
					fn(tmp17,tmp18).Cast< Void >();
				}
				HX_STACK_LINE(57)
				(_idx)++;
			}
			HX_STACK_LINE(60)
			while((true)){
				HX_STACK_LINE(60)
				bool tmp12 = (_count > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(60)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(60)
				if ((tmp13)){
					HX_STACK_LINE(60)
					break;
				}
				HX_STACK_LINE(140)
				::mint::core::Signal tmp14 = this->onchange;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(61)
				int tmp15 = (_count - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(61)
				Dynamic tmp16 = tmp14->listeners->__GetItem(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(61)
				Dynamic fn = tmp16;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(62)
				bool tmp17 = (fn == null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(62)
				if ((tmp17)){
					HX_STACK_LINE(140)
					::mint::core::Signal tmp18 = this->onchange;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(62)
					int tmp19 = (_count - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(62)
					tmp18->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp19,(int)1);
				}
				HX_STACK_LINE(63)
				(_count)--;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,update_value,(void))

Float Slider_obj::set_value( Float _value){
	HX_STACK_FRAME("mint.Slider","set_value",0xeeac1eb3,"mint.Slider.set_value","mint/Slider.hx",144,0x74f6d630)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(146)
	bool tmp = this->ignore_set;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(146)
	if ((tmp)){
		HX_STACK_LINE(146)
		Float tmp1 = this->value = _value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(146)
		return tmp1;
	}
	HX_STACK_LINE(148)
	{
		HX_STACK_LINE(148)
		Float _value1 = _value;		HX_STACK_VAR(_value1,"_value1");
		HX_STACK_LINE(148)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(148)
		{
			HX_STACK_LINE(148)
			Float tmp2 = this->min;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(148)
			Float a = tmp2;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(148)
			Float tmp3 = this->max;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(148)
			Float b = tmp3;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(148)
			bool tmp4 = (_value1 < a);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(148)
			if ((tmp4)){
				HX_STACK_LINE(148)
				tmp1 = a;
			}
			else{
				HX_STACK_LINE(148)
				bool tmp5 = (_value1 > b);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(148)
				if ((tmp5)){
					HX_STACK_LINE(148)
					tmp1 = b;
				}
				else{
					HX_STACK_LINE(148)
					tmp1 = _value1;
				}
			}
		}
		HX_STACK_LINE(148)
		_value1 = tmp1;
		HX_STACK_LINE(148)
		Dynamic tmp2 = this->step;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(148)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(148)
		if ((tmp3)){
			HX_STACK_LINE(148)
			Float tmp4 = _value1;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(148)
			Dynamic tmp5 = this->step;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(148)
			Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(148)
			int tmp7 = ::Math_obj::round(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(148)
			Dynamic tmp8 = this->step;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(148)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(148)
			_value1 = tmp9;
		}
		HX_STACK_LINE(148)
		bool tmp4 = this->vertical;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(148)
		if ((tmp4)){
			HX_STACK_LINE(148)
			Float tmp5 = this->w;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(148)
			Float tmp6 = (tmp5 - (int)4);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(148)
			this->bar_w = tmp6;
			HX_STACK_LINE(148)
			Float tmp7 = this->h;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(148)
			Float tmp8 = (tmp7 - (int)4);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(148)
			Float tmp9 = _value1;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(148)
			Float tmp10 = this->min;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(148)
			Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(148)
			Float tmp12 = (tmp8 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(148)
			Float tmp13 = this->max;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(148)
			Float tmp14 = this->min;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(148)
			Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(148)
			Float tmp16 = (Float(tmp12) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(148)
			this->bar_h = tmp16;
			HX_STACK_LINE(148)
			bool tmp17 = this->invert;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(148)
			bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(148)
			Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(148)
			if ((tmp18)){
				HX_STACK_LINE(148)
				Float tmp20 = this->h;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(148)
				Float tmp21 = this->h;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(148)
				Float tmp22 = (tmp21 - (int)4);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(148)
				Float tmp23 = _value1;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(148)
				Float tmp24 = this->min;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(148)
				Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(148)
				Float tmp26 = (tmp22 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(148)
				Float tmp27 = this->max;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(148)
				Float tmp28 = this->min;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(148)
				Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(148)
				Float tmp30 = (Float(tmp26) / Float(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(148)
				Float tmp31 = (tmp20 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(148)
				tmp19 = (tmp31 - (int)2);
			}
			else{
				HX_STACK_LINE(148)
				tmp19 = (int)2;
			}
			HX_STACK_LINE(148)
			this->bar_y = tmp19;
			HX_STACK_LINE(148)
			Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(148)
			{
				HX_STACK_LINE(148)
				Float tmp21 = this->bar_h;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(148)
				Float value = tmp21;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(148)
				Float tmp22 = this->h;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(148)
				Float tmp23 = (tmp22 - (int)4);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(148)
				Float b = tmp23;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(148)
				bool tmp24 = (value < (int)1);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(148)
				if ((tmp24)){
					HX_STACK_LINE(148)
					tmp20 = (int)1;
				}
				else{
					HX_STACK_LINE(148)
					bool tmp25 = (value > b);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(148)
					if ((tmp25)){
						HX_STACK_LINE(148)
						tmp20 = b;
					}
					else{
						HX_STACK_LINE(148)
						tmp20 = value;
					}
				}
			}
			HX_STACK_LINE(148)
			this->bar_h = tmp20;
		}
		else{
			HX_STACK_LINE(148)
			Float tmp5 = this->w;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(148)
			Float tmp6 = (tmp5 - (int)4);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(148)
			Float tmp7 = _value1;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(148)
			Float tmp8 = this->min;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(148)
			Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(148)
			Float tmp10 = (tmp6 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(148)
			Float tmp11 = this->max;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(148)
			Float tmp12 = this->min;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(148)
			Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(148)
			Float tmp14 = (Float(tmp10) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(148)
			this->bar_w = tmp14;
			HX_STACK_LINE(148)
			Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(148)
			{
				HX_STACK_LINE(148)
				Float tmp16 = this->bar_w;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(148)
				Float value = tmp16;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(148)
				Float tmp17 = this->w;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(148)
				Float tmp18 = (tmp17 - (int)4);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(148)
				Float b = tmp18;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(148)
				bool tmp19 = (value < (int)1);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(148)
				if ((tmp19)){
					HX_STACK_LINE(148)
					tmp15 = (int)1;
				}
				else{
					HX_STACK_LINE(148)
					bool tmp20 = (value > b);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(148)
					if ((tmp20)){
						HX_STACK_LINE(148)
						tmp15 = b;
					}
					else{
						HX_STACK_LINE(148)
						tmp15 = value;
					}
				}
			}
			HX_STACK_LINE(148)
			this->bar_w = tmp15;
			HX_STACK_LINE(148)
			Float tmp16 = this->h;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(148)
			Float tmp17 = (tmp16 - (int)4);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(148)
			this->bar_h = tmp17;
			HX_STACK_LINE(148)
			bool tmp18 = this->invert;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(148)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(148)
			Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(148)
			if ((tmp19)){
				HX_STACK_LINE(148)
				tmp20 = (int)2;
			}
			else{
				HX_STACK_LINE(148)
				Float tmp21 = this->w;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(148)
				Float tmp22 = this->w;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(148)
				Float tmp23 = (tmp22 - (int)4);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(148)
				Float tmp24 = _value1;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(148)
				Float tmp25 = this->min;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(148)
				Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(148)
				Float tmp27 = (tmp23 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(148)
				Float tmp28 = this->max;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(148)
				Float tmp29 = this->min;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(148)
				Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(148)
				Float tmp31 = (Float(tmp27) / Float(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(148)
				Float tmp32 = (tmp21 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(148)
				tmp20 = (tmp32 - (int)2);
			}
			HX_STACK_LINE(148)
			this->bar_x = tmp20;
		}
		HX_STACK_LINE(148)
		Float tmp5 = _value1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(148)
		Float tmp6 = this->max;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(148)
		Float tmp7 = this->min;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(148)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(148)
		Float tmp9 = (Float(tmp5) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(148)
		this->percent = tmp9;
		HX_STACK_LINE(148)
		this->ignore_set = true;
		HX_STACK_LINE(148)
		Float tmp10 = _value1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(148)
		this->set_value(tmp10);
		HX_STACK_LINE(148)
		this->ignore_set = false;
		HX_STACK_LINE(148)
		{
			HX_STACK_LINE(148)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(148)
			::mint::core::Signal tmp11 = this->onchange;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(148)
			int tmp12 = tmp11->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(148)
			int _count = tmp12;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(148)
			while((true)){
				HX_STACK_LINE(148)
				bool tmp13 = (_idx < _count);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(148)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(148)
				if ((tmp14)){
					HX_STACK_LINE(148)
					break;
				}
				HX_STACK_LINE(148)
				::mint::core::Signal tmp15 = this->onchange;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(148)
				Dynamic tmp16 = tmp15->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(148)
				Dynamic fn = tmp16;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(148)
				bool tmp17 = (fn != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(148)
				if ((tmp17)){
					HX_STACK_LINE(148)
					Float tmp18 = this->value;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(148)
					Float tmp19 = this->percent;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(148)
					fn(tmp18,tmp19).Cast< Void >();
				}
				HX_STACK_LINE(148)
				(_idx)++;
			}
			HX_STACK_LINE(148)
			while((true)){
				HX_STACK_LINE(148)
				bool tmp13 = (_count > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(148)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(148)
				if ((tmp14)){
					HX_STACK_LINE(148)
					break;
				}
				HX_STACK_LINE(148)
				::mint::core::Signal tmp15 = this->onchange;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(148)
				int tmp16 = (_count - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(148)
				Dynamic tmp17 = tmp15->listeners->__GetItem(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(148)
				Dynamic fn = tmp17;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(148)
				bool tmp18 = (fn == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(148)
				if ((tmp18)){
					HX_STACK_LINE(148)
					::mint::core::Signal tmp19 = this->onchange;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(148)
					int tmp20 = (_count - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(148)
					tmp19->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp20,(int)1);
				}
				HX_STACK_LINE(148)
				(_count)--;
			}
		}
	}
	HX_STACK_LINE(150)
	Float tmp1 = this->value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(150)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,set_value,return )

Void Slider_obj::update_value_from_mouse( Dynamic e){
{
		HX_STACK_FRAME("mint.Slider","update_value_from_mouse",0xf6a50cf3,"mint.Slider.update_value_from_mouse","mint/Slider.hx",154,0x74f6d630)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(156)
		bool tmp = this->vertical;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(156)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(156)
		if ((tmp1)){
			HX_STACK_LINE(158)
			bool tmp2 = this->invert;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(158)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(158)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(158)
			if ((tmp3)){
				HX_STACK_LINE(158)
				int tmp5 = e->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(158)
				Float tmp6 = this->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(158)
				tmp4 = (tmp5 - tmp6);
			}
			else{
				HX_STACK_LINE(158)
				Float tmp5 = this->w;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(158)
				int tmp6 = e->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(158)
				Float tmp7 = this->x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(158)
				Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(158)
				tmp4 = (tmp5 - tmp8);
			}
			HX_STACK_LINE(158)
			Float _dx = tmp4;		HX_STACK_VAR(_dx,"_dx");
			HX_STACK_LINE(160)
			bool tmp5 = (_dx < (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(160)
			if ((tmp5)){
				HX_STACK_LINE(160)
				_dx = (int)1;
			}
			HX_STACK_LINE(161)
			Float tmp6 = _dx;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(161)
			Float tmp7 = this->w;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(161)
			Float tmp8 = (tmp7 - (int)4);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(161)
			bool tmp9 = (tmp6 >= tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(161)
			if ((tmp9)){
				HX_STACK_LINE(161)
				Float tmp10 = this->w;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(161)
				Float tmp11 = (tmp10 - (int)4);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(161)
				_dx = tmp11;
			}
			HX_STACK_LINE(163)
			Float tmp10 = (_dx - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(163)
			Float tmp11 = this->w;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(163)
			Float tmp12 = (tmp11 - (int)5);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(163)
			Float tmp13 = (Float(tmp10) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(163)
			Float tmp14 = this->max;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(163)
			Float tmp15 = this->min;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(163)
			Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(163)
			Float tmp17 = (tmp13 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(163)
			Float tmp18 = this->min;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(163)
			Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(163)
			Float _v = tmp19;		HX_STACK_VAR(_v,"_v");
			HX_STACK_LINE(165)
			{
				HX_STACK_LINE(165)
				Float _value = _v;		HX_STACK_VAR(_value,"_value");
				HX_STACK_LINE(165)
				Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(165)
				{
					HX_STACK_LINE(165)
					Float tmp21 = this->min;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(165)
					Float a = tmp21;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(165)
					Float tmp22 = this->max;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(165)
					Float b = tmp22;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(165)
					bool tmp23 = (_value < a);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(165)
					if ((tmp23)){
						HX_STACK_LINE(165)
						tmp20 = a;
					}
					else{
						HX_STACK_LINE(165)
						bool tmp24 = (_value > b);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(165)
						if ((tmp24)){
							HX_STACK_LINE(165)
							tmp20 = b;
						}
						else{
							HX_STACK_LINE(165)
							tmp20 = _value;
						}
					}
				}
				HX_STACK_LINE(165)
				_value = tmp20;
				HX_STACK_LINE(165)
				Dynamic tmp21 = this->step;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(165)
				bool tmp22 = (tmp21 != null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(165)
				if ((tmp22)){
					HX_STACK_LINE(165)
					Float tmp23 = _value;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(165)
					Dynamic tmp24 = this->step;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(165)
					Float tmp25 = (Float(tmp23) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(165)
					int tmp26 = ::Math_obj::round(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(165)
					Dynamic tmp27 = this->step;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(165)
					Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(165)
					_value = tmp28;
				}
				HX_STACK_LINE(165)
				bool tmp23 = this->vertical;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(165)
				if ((tmp23)){
					HX_STACK_LINE(165)
					Float tmp24 = this->w;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(165)
					Float tmp25 = (tmp24 - (int)4);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(165)
					this->bar_w = tmp25;
					HX_STACK_LINE(165)
					Float tmp26 = this->h;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(165)
					Float tmp27 = (tmp26 - (int)4);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(165)
					Float tmp28 = _value;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(165)
					Float tmp29 = this->min;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(165)
					Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(165)
					Float tmp31 = (tmp27 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(165)
					Float tmp32 = this->max;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(165)
					Float tmp33 = this->min;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(165)
					Float tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(165)
					Float tmp35 = (Float(tmp31) / Float(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(165)
					this->bar_h = tmp35;
					HX_STACK_LINE(165)
					bool tmp36 = this->invert;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(165)
					bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(165)
					Float tmp38;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(165)
					if ((tmp37)){
						HX_STACK_LINE(165)
						Float tmp39 = this->h;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(165)
						Float tmp40 = this->h;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(165)
						Float tmp41 = (tmp40 - (int)4);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(165)
						Float tmp42 = _value;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(165)
						Float tmp43 = this->min;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(165)
						Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(165)
						Float tmp45 = (tmp41 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(165)
						Float tmp46 = this->max;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(165)
						Float tmp47 = this->min;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(165)
						Float tmp48 = (tmp46 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(165)
						Float tmp49 = (Float(tmp45) / Float(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(165)
						Float tmp50 = (tmp39 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(165)
						tmp38 = (tmp50 - (int)2);
					}
					else{
						HX_STACK_LINE(165)
						tmp38 = (int)2;
					}
					HX_STACK_LINE(165)
					this->bar_y = tmp38;
					HX_STACK_LINE(165)
					Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						Float tmp40 = this->bar_h;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(165)
						Float value = tmp40;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(165)
						Float tmp41 = this->h;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(165)
						Float tmp42 = (tmp41 - (int)4);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(165)
						Float b = tmp42;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(165)
						bool tmp43 = (value < (int)1);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(165)
						if ((tmp43)){
							HX_STACK_LINE(165)
							tmp39 = (int)1;
						}
						else{
							HX_STACK_LINE(165)
							bool tmp44 = (value > b);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(165)
							if ((tmp44)){
								HX_STACK_LINE(165)
								tmp39 = b;
							}
							else{
								HX_STACK_LINE(165)
								tmp39 = value;
							}
						}
					}
					HX_STACK_LINE(165)
					this->bar_h = tmp39;
				}
				else{
					HX_STACK_LINE(165)
					Float tmp24 = this->w;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(165)
					Float tmp25 = (tmp24 - (int)4);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(165)
					Float tmp26 = _value;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(165)
					Float tmp27 = this->min;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(165)
					Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(165)
					Float tmp29 = (tmp25 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(165)
					Float tmp30 = this->max;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(165)
					Float tmp31 = this->min;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(165)
					Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(165)
					Float tmp33 = (Float(tmp29) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(165)
					this->bar_w = tmp33;
					HX_STACK_LINE(165)
					Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						Float tmp35 = this->bar_w;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(165)
						Float value = tmp35;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(165)
						Float tmp36 = this->w;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(165)
						Float tmp37 = (tmp36 - (int)4);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(165)
						Float b = tmp37;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(165)
						bool tmp38 = (value < (int)1);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(165)
						if ((tmp38)){
							HX_STACK_LINE(165)
							tmp34 = (int)1;
						}
						else{
							HX_STACK_LINE(165)
							bool tmp39 = (value > b);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(165)
							if ((tmp39)){
								HX_STACK_LINE(165)
								tmp34 = b;
							}
							else{
								HX_STACK_LINE(165)
								tmp34 = value;
							}
						}
					}
					HX_STACK_LINE(165)
					this->bar_w = tmp34;
					HX_STACK_LINE(165)
					Float tmp35 = this->h;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(165)
					Float tmp36 = (tmp35 - (int)4);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(165)
					this->bar_h = tmp36;
					HX_STACK_LINE(165)
					bool tmp37 = this->invert;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(165)
					bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(165)
					Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(165)
					if ((tmp38)){
						HX_STACK_LINE(165)
						tmp39 = (int)2;
					}
					else{
						HX_STACK_LINE(165)
						Float tmp40 = this->w;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(165)
						Float tmp41 = this->w;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(165)
						Float tmp42 = (tmp41 - (int)4);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(165)
						Float tmp43 = _value;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(165)
						Float tmp44 = this->min;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(165)
						Float tmp45 = (tmp43 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(165)
						Float tmp46 = (tmp42 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(165)
						Float tmp47 = this->max;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(165)
						Float tmp48 = this->min;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(165)
						Float tmp49 = (tmp47 - tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(165)
						Float tmp50 = (Float(tmp46) / Float(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(165)
						Float tmp51 = (tmp40 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(165)
						tmp39 = (tmp51 - (int)2);
					}
					HX_STACK_LINE(165)
					this->bar_x = tmp39;
				}
				HX_STACK_LINE(165)
				Float tmp24 = _value;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(165)
				Float tmp25 = this->max;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(165)
				Float tmp26 = this->min;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(165)
				Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(165)
				Float tmp28 = (Float(tmp24) / Float(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(165)
				this->percent = tmp28;
				HX_STACK_LINE(165)
				this->ignore_set = true;
				HX_STACK_LINE(165)
				Float tmp29 = _value;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(165)
				this->set_value(tmp29);
				HX_STACK_LINE(165)
				this->ignore_set = false;
				HX_STACK_LINE(165)
				{
					HX_STACK_LINE(165)
					int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
					HX_STACK_LINE(165)
					::mint::core::Signal tmp30 = this->onchange;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(165)
					int tmp31 = tmp30->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(165)
					int _count = tmp31;		HX_STACK_VAR(_count,"_count");
					HX_STACK_LINE(165)
					while((true)){
						HX_STACK_LINE(165)
						bool tmp32 = (_idx < _count);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(165)
						bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(165)
						if ((tmp33)){
							HX_STACK_LINE(165)
							break;
						}
						HX_STACK_LINE(165)
						::mint::core::Signal tmp34 = this->onchange;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(165)
						Dynamic tmp35 = tmp34->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(165)
						Dynamic fn = tmp35;		HX_STACK_VAR(fn,"fn");
						HX_STACK_LINE(165)
						bool tmp36 = (fn != null());		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(165)
						if ((tmp36)){
							HX_STACK_LINE(165)
							Float tmp37 = this->value;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(165)
							Float tmp38 = this->percent;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(165)
							fn(tmp37,tmp38).Cast< Void >();
						}
						HX_STACK_LINE(165)
						(_idx)++;
					}
					HX_STACK_LINE(165)
					while((true)){
						HX_STACK_LINE(165)
						bool tmp32 = (_count > (int)0);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(165)
						bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(165)
						if ((tmp33)){
							HX_STACK_LINE(165)
							break;
						}
						HX_STACK_LINE(165)
						::mint::core::Signal tmp34 = this->onchange;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(165)
						int tmp35 = (_count - (int)1);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(165)
						Dynamic tmp36 = tmp34->listeners->__GetItem(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(165)
						Dynamic fn = tmp36;		HX_STACK_VAR(fn,"fn");
						HX_STACK_LINE(165)
						bool tmp37 = (fn == null());		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(165)
						if ((tmp37)){
							HX_STACK_LINE(165)
							::mint::core::Signal tmp38 = this->onchange;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(165)
							int tmp39 = (_count - (int)1);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(165)
							tmp38->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp39,(int)1);
						}
						HX_STACK_LINE(165)
						(_count)--;
					}
				}
			}
		}
		else{
			HX_STACK_LINE(169)
			bool tmp2 = this->invert;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(169)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(169)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(169)
			if ((tmp3)){
				HX_STACK_LINE(169)
				Float tmp5 = this->h;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(169)
				int tmp6 = e->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(169)
				Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(169)
				Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(169)
				tmp4 = (tmp5 - tmp8);
			}
			else{
				HX_STACK_LINE(169)
				int tmp5 = e->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(169)
				Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(169)
				tmp4 = (tmp5 - tmp6);
			}
			HX_STACK_LINE(169)
			Float _dy = tmp4;		HX_STACK_VAR(_dy,"_dy");
			HX_STACK_LINE(171)
			bool tmp5 = (_dy < (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(171)
			if ((tmp5)){
				HX_STACK_LINE(171)
				_dy = (int)1;
			}
			HX_STACK_LINE(172)
			Float tmp6 = _dy;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(172)
			Float tmp7 = this->h;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(172)
			Float tmp8 = (tmp7 - (int)4);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(172)
			bool tmp9 = (tmp6 >= tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(172)
			if ((tmp9)){
				HX_STACK_LINE(172)
				Float tmp10 = this->h;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(172)
				Float tmp11 = (tmp10 - (int)4);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(172)
				_dy = tmp11;
			}
			HX_STACK_LINE(174)
			Float tmp10 = (_dy - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(174)
			Float tmp11 = this->h;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(174)
			Float tmp12 = (tmp11 - (int)5);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(174)
			Float tmp13 = (Float(tmp10) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(174)
			Float tmp14 = this->max;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(174)
			Float tmp15 = this->min;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(174)
			Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(174)
			Float tmp17 = (tmp13 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(174)
			Float tmp18 = this->min;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(174)
			Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(174)
			Float _v = tmp19;		HX_STACK_VAR(_v,"_v");
			HX_STACK_LINE(176)
			{
				HX_STACK_LINE(176)
				Float _value = _v;		HX_STACK_VAR(_value,"_value");
				HX_STACK_LINE(176)
				Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(176)
				{
					HX_STACK_LINE(176)
					Float tmp21 = this->min;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(176)
					Float a = tmp21;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(176)
					Float tmp22 = this->max;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(176)
					Float b = tmp22;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(176)
					bool tmp23 = (_value < a);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(176)
					if ((tmp23)){
						HX_STACK_LINE(176)
						tmp20 = a;
					}
					else{
						HX_STACK_LINE(176)
						bool tmp24 = (_value > b);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(176)
						if ((tmp24)){
							HX_STACK_LINE(176)
							tmp20 = b;
						}
						else{
							HX_STACK_LINE(176)
							tmp20 = _value;
						}
					}
				}
				HX_STACK_LINE(176)
				_value = tmp20;
				HX_STACK_LINE(176)
				Dynamic tmp21 = this->step;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(176)
				bool tmp22 = (tmp21 != null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(176)
				if ((tmp22)){
					HX_STACK_LINE(176)
					Float tmp23 = _value;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(176)
					Dynamic tmp24 = this->step;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(176)
					Float tmp25 = (Float(tmp23) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(176)
					int tmp26 = ::Math_obj::round(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(176)
					Dynamic tmp27 = this->step;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(176)
					Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(176)
					_value = tmp28;
				}
				HX_STACK_LINE(176)
				bool tmp23 = this->vertical;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(176)
				if ((tmp23)){
					HX_STACK_LINE(176)
					Float tmp24 = this->w;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(176)
					Float tmp25 = (tmp24 - (int)4);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(176)
					this->bar_w = tmp25;
					HX_STACK_LINE(176)
					Float tmp26 = this->h;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(176)
					Float tmp27 = (tmp26 - (int)4);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(176)
					Float tmp28 = _value;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(176)
					Float tmp29 = this->min;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(176)
					Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(176)
					Float tmp31 = (tmp27 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(176)
					Float tmp32 = this->max;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(176)
					Float tmp33 = this->min;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(176)
					Float tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(176)
					Float tmp35 = (Float(tmp31) / Float(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(176)
					this->bar_h = tmp35;
					HX_STACK_LINE(176)
					bool tmp36 = this->invert;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(176)
					bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(176)
					Float tmp38;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(176)
					if ((tmp37)){
						HX_STACK_LINE(176)
						Float tmp39 = this->h;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(176)
						Float tmp40 = this->h;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(176)
						Float tmp41 = (tmp40 - (int)4);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(176)
						Float tmp42 = _value;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(176)
						Float tmp43 = this->min;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(176)
						Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(176)
						Float tmp45 = (tmp41 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(176)
						Float tmp46 = this->max;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(176)
						Float tmp47 = this->min;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(176)
						Float tmp48 = (tmp46 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(176)
						Float tmp49 = (Float(tmp45) / Float(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(176)
						Float tmp50 = (tmp39 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(176)
						tmp38 = (tmp50 - (int)2);
					}
					else{
						HX_STACK_LINE(176)
						tmp38 = (int)2;
					}
					HX_STACK_LINE(176)
					this->bar_y = tmp38;
					HX_STACK_LINE(176)
					Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(176)
					{
						HX_STACK_LINE(176)
						Float tmp40 = this->bar_h;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(176)
						Float value = tmp40;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(176)
						Float tmp41 = this->h;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(176)
						Float tmp42 = (tmp41 - (int)4);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(176)
						Float b = tmp42;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(176)
						bool tmp43 = (value < (int)1);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(176)
						if ((tmp43)){
							HX_STACK_LINE(176)
							tmp39 = (int)1;
						}
						else{
							HX_STACK_LINE(176)
							bool tmp44 = (value > b);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(176)
							if ((tmp44)){
								HX_STACK_LINE(176)
								tmp39 = b;
							}
							else{
								HX_STACK_LINE(176)
								tmp39 = value;
							}
						}
					}
					HX_STACK_LINE(176)
					this->bar_h = tmp39;
				}
				else{
					HX_STACK_LINE(176)
					Float tmp24 = this->w;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(176)
					Float tmp25 = (tmp24 - (int)4);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(176)
					Float tmp26 = _value;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(176)
					Float tmp27 = this->min;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(176)
					Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(176)
					Float tmp29 = (tmp25 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(176)
					Float tmp30 = this->max;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(176)
					Float tmp31 = this->min;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(176)
					Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(176)
					Float tmp33 = (Float(tmp29) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(176)
					this->bar_w = tmp33;
					HX_STACK_LINE(176)
					Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(176)
					{
						HX_STACK_LINE(176)
						Float tmp35 = this->bar_w;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(176)
						Float value = tmp35;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(176)
						Float tmp36 = this->w;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(176)
						Float tmp37 = (tmp36 - (int)4);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(176)
						Float b = tmp37;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(176)
						bool tmp38 = (value < (int)1);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(176)
						if ((tmp38)){
							HX_STACK_LINE(176)
							tmp34 = (int)1;
						}
						else{
							HX_STACK_LINE(176)
							bool tmp39 = (value > b);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(176)
							if ((tmp39)){
								HX_STACK_LINE(176)
								tmp34 = b;
							}
							else{
								HX_STACK_LINE(176)
								tmp34 = value;
							}
						}
					}
					HX_STACK_LINE(176)
					this->bar_w = tmp34;
					HX_STACK_LINE(176)
					Float tmp35 = this->h;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(176)
					Float tmp36 = (tmp35 - (int)4);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(176)
					this->bar_h = tmp36;
					HX_STACK_LINE(176)
					bool tmp37 = this->invert;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(176)
					bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(176)
					Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(176)
					if ((tmp38)){
						HX_STACK_LINE(176)
						tmp39 = (int)2;
					}
					else{
						HX_STACK_LINE(176)
						Float tmp40 = this->w;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(176)
						Float tmp41 = this->w;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(176)
						Float tmp42 = (tmp41 - (int)4);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(176)
						Float tmp43 = _value;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(176)
						Float tmp44 = this->min;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(176)
						Float tmp45 = (tmp43 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(176)
						Float tmp46 = (tmp42 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(176)
						Float tmp47 = this->max;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(176)
						Float tmp48 = this->min;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(176)
						Float tmp49 = (tmp47 - tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(176)
						Float tmp50 = (Float(tmp46) / Float(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(176)
						Float tmp51 = (tmp40 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(176)
						tmp39 = (tmp51 - (int)2);
					}
					HX_STACK_LINE(176)
					this->bar_x = tmp39;
				}
				HX_STACK_LINE(176)
				Float tmp24 = _value;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(176)
				Float tmp25 = this->max;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(176)
				Float tmp26 = this->min;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(176)
				Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(176)
				Float tmp28 = (Float(tmp24) / Float(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(176)
				this->percent = tmp28;
				HX_STACK_LINE(176)
				this->ignore_set = true;
				HX_STACK_LINE(176)
				Float tmp29 = _value;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(176)
				this->set_value(tmp29);
				HX_STACK_LINE(176)
				this->ignore_set = false;
				HX_STACK_LINE(176)
				{
					HX_STACK_LINE(176)
					int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
					HX_STACK_LINE(176)
					::mint::core::Signal tmp30 = this->onchange;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(176)
					int tmp31 = tmp30->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(176)
					int _count = tmp31;		HX_STACK_VAR(_count,"_count");
					HX_STACK_LINE(176)
					while((true)){
						HX_STACK_LINE(176)
						bool tmp32 = (_idx < _count);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(176)
						bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(176)
						if ((tmp33)){
							HX_STACK_LINE(176)
							break;
						}
						HX_STACK_LINE(176)
						::mint::core::Signal tmp34 = this->onchange;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(176)
						Dynamic tmp35 = tmp34->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(176)
						Dynamic fn = tmp35;		HX_STACK_VAR(fn,"fn");
						HX_STACK_LINE(176)
						bool tmp36 = (fn != null());		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(176)
						if ((tmp36)){
							HX_STACK_LINE(176)
							Float tmp37 = this->value;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(176)
							Float tmp38 = this->percent;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(176)
							fn(tmp37,tmp38).Cast< Void >();
						}
						HX_STACK_LINE(176)
						(_idx)++;
					}
					HX_STACK_LINE(176)
					while((true)){
						HX_STACK_LINE(176)
						bool tmp32 = (_count > (int)0);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(176)
						bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(176)
						if ((tmp33)){
							HX_STACK_LINE(176)
							break;
						}
						HX_STACK_LINE(176)
						::mint::core::Signal tmp34 = this->onchange;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(176)
						int tmp35 = (_count - (int)1);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(176)
						Dynamic tmp36 = tmp34->listeners->__GetItem(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(176)
						Dynamic fn = tmp36;		HX_STACK_VAR(fn,"fn");
						HX_STACK_LINE(176)
						bool tmp37 = (fn == null());		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(176)
						if ((tmp37)){
							HX_STACK_LINE(176)
							::mint::core::Signal tmp38 = this->onchange;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(176)
							int tmp39 = (_count - (int)1);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(176)
							tmp38->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp39,(int)1);
						}
						HX_STACK_LINE(176)
						(_count)--;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,update_value_from_mouse,(void))

Void Slider_obj::mousemove( Dynamic e){
{
		HX_STACK_FRAME("mint.Slider","mousemove",0x9fd5c695,"mint.Slider.mousemove","mint/Slider.hx",182,0x74f6d630)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(184)
		bool tmp = this->dragging;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(184)
		if ((tmp)){
			HX_STACK_LINE(186)
			bool tmp1 = this->vertical;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(186)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(186)
			if ((tmp2)){
				HX_STACK_LINE(186)
				bool tmp3 = this->invert;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(186)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(186)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(186)
				if ((tmp4)){
					HX_STACK_LINE(186)
					int tmp6 = e->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(186)
					Float tmp7 = this->x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(186)
					tmp5 = (tmp6 - tmp7);
				}
				else{
					HX_STACK_LINE(186)
					Float tmp6 = this->w;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(186)
					int tmp7 = e->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(186)
					Float tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(186)
					Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(186)
					tmp5 = (tmp6 - tmp9);
				}
				HX_STACK_LINE(186)
				Float _dx = tmp5;		HX_STACK_VAR(_dx,"_dx");
				HX_STACK_LINE(186)
				bool tmp6 = (_dx < (int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(186)
				if ((tmp6)){
					HX_STACK_LINE(186)
					_dx = (int)1;
				}
				HX_STACK_LINE(186)
				Float tmp7 = _dx;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(186)
				Float tmp8 = this->w;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(186)
				Float tmp9 = (tmp8 - (int)4);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(186)
				bool tmp10 = (tmp7 >= tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(186)
				if ((tmp10)){
					HX_STACK_LINE(186)
					Float tmp11 = this->w;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(186)
					Float tmp12 = (tmp11 - (int)4);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(186)
					_dx = tmp12;
				}
				HX_STACK_LINE(186)
				Float tmp11 = (_dx - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(186)
				Float tmp12 = this->w;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(186)
				Float tmp13 = (tmp12 - (int)5);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(186)
				Float tmp14 = (Float(tmp11) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(186)
				Float tmp15 = this->max;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(186)
				Float tmp16 = this->min;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(186)
				Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(186)
				Float tmp18 = (tmp14 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(186)
				Float tmp19 = this->min;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(186)
				Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(186)
				Float _v = tmp20;		HX_STACK_VAR(_v,"_v");
				HX_STACK_LINE(186)
				{
					HX_STACK_LINE(186)
					Float _value = _v;		HX_STACK_VAR(_value,"_value");
					HX_STACK_LINE(186)
					Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(186)
					{
						HX_STACK_LINE(186)
						Float tmp22 = this->min;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(186)
						Float a = tmp22;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(186)
						Float tmp23 = this->max;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(186)
						Float b = tmp23;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(186)
						bool tmp24 = (_value < a);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(186)
						if ((tmp24)){
							HX_STACK_LINE(186)
							tmp21 = a;
						}
						else{
							HX_STACK_LINE(186)
							bool tmp25 = (_value > b);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(186)
							if ((tmp25)){
								HX_STACK_LINE(186)
								tmp21 = b;
							}
							else{
								HX_STACK_LINE(186)
								tmp21 = _value;
							}
						}
					}
					HX_STACK_LINE(186)
					_value = tmp21;
					HX_STACK_LINE(186)
					Dynamic tmp22 = this->step;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(186)
					bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(186)
					if ((tmp23)){
						HX_STACK_LINE(186)
						Float tmp24 = _value;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(186)
						Dynamic tmp25 = this->step;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(186)
						Float tmp26 = (Float(tmp24) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(186)
						int tmp27 = ::Math_obj::round(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(186)
						Dynamic tmp28 = this->step;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(186)
						Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(186)
						_value = tmp29;
					}
					HX_STACK_LINE(186)
					bool tmp24 = this->vertical;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(186)
					if ((tmp24)){
						HX_STACK_LINE(186)
						Float tmp25 = this->w;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(186)
						Float tmp26 = (tmp25 - (int)4);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(186)
						this->bar_w = tmp26;
						HX_STACK_LINE(186)
						Float tmp27 = this->h;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(186)
						Float tmp28 = (tmp27 - (int)4);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(186)
						Float tmp29 = _value;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(186)
						Float tmp30 = this->min;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(186)
						Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(186)
						Float tmp32 = (tmp28 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(186)
						Float tmp33 = this->max;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(186)
						Float tmp34 = this->min;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(186)
						Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(186)
						Float tmp36 = (Float(tmp32) / Float(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(186)
						this->bar_h = tmp36;
						HX_STACK_LINE(186)
						bool tmp37 = this->invert;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(186)
						bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(186)
						Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(186)
						if ((tmp38)){
							HX_STACK_LINE(186)
							Float tmp40 = this->h;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(186)
							Float tmp41 = this->h;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(186)
							Float tmp42 = (tmp41 - (int)4);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(186)
							Float tmp43 = _value;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(186)
							Float tmp44 = this->min;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(186)
							Float tmp45 = (tmp43 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(186)
							Float tmp46 = (tmp42 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(186)
							Float tmp47 = this->max;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(186)
							Float tmp48 = this->min;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(186)
							Float tmp49 = (tmp47 - tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(186)
							Float tmp50 = (Float(tmp46) / Float(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(186)
							Float tmp51 = (tmp40 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(186)
							tmp39 = (tmp51 - (int)2);
						}
						else{
							HX_STACK_LINE(186)
							tmp39 = (int)2;
						}
						HX_STACK_LINE(186)
						this->bar_y = tmp39;
						HX_STACK_LINE(186)
						Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(186)
						{
							HX_STACK_LINE(186)
							Float tmp41 = this->bar_h;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(186)
							Float value = tmp41;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(186)
							Float tmp42 = this->h;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(186)
							Float tmp43 = (tmp42 - (int)4);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(186)
							Float b = tmp43;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(186)
							bool tmp44 = (value < (int)1);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(186)
							if ((tmp44)){
								HX_STACK_LINE(186)
								tmp40 = (int)1;
							}
							else{
								HX_STACK_LINE(186)
								bool tmp45 = (value > b);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(186)
								if ((tmp45)){
									HX_STACK_LINE(186)
									tmp40 = b;
								}
								else{
									HX_STACK_LINE(186)
									tmp40 = value;
								}
							}
						}
						HX_STACK_LINE(186)
						this->bar_h = tmp40;
					}
					else{
						HX_STACK_LINE(186)
						Float tmp25 = this->w;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(186)
						Float tmp26 = (tmp25 - (int)4);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(186)
						Float tmp27 = _value;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(186)
						Float tmp28 = this->min;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(186)
						Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(186)
						Float tmp30 = (tmp26 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(186)
						Float tmp31 = this->max;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(186)
						Float tmp32 = this->min;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(186)
						Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(186)
						Float tmp34 = (Float(tmp30) / Float(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(186)
						this->bar_w = tmp34;
						HX_STACK_LINE(186)
						Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(186)
						{
							HX_STACK_LINE(186)
							Float tmp36 = this->bar_w;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(186)
							Float value = tmp36;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(186)
							Float tmp37 = this->w;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(186)
							Float tmp38 = (tmp37 - (int)4);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(186)
							Float b = tmp38;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(186)
							bool tmp39 = (value < (int)1);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(186)
							if ((tmp39)){
								HX_STACK_LINE(186)
								tmp35 = (int)1;
							}
							else{
								HX_STACK_LINE(186)
								bool tmp40 = (value > b);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(186)
								if ((tmp40)){
									HX_STACK_LINE(186)
									tmp35 = b;
								}
								else{
									HX_STACK_LINE(186)
									tmp35 = value;
								}
							}
						}
						HX_STACK_LINE(186)
						this->bar_w = tmp35;
						HX_STACK_LINE(186)
						Float tmp36 = this->h;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(186)
						Float tmp37 = (tmp36 - (int)4);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(186)
						this->bar_h = tmp37;
						HX_STACK_LINE(186)
						bool tmp38 = this->invert;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(186)
						bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(186)
						Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(186)
						if ((tmp39)){
							HX_STACK_LINE(186)
							tmp40 = (int)2;
						}
						else{
							HX_STACK_LINE(186)
							Float tmp41 = this->w;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(186)
							Float tmp42 = this->w;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(186)
							Float tmp43 = (tmp42 - (int)4);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(186)
							Float tmp44 = _value;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(186)
							Float tmp45 = this->min;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(186)
							Float tmp46 = (tmp44 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(186)
							Float tmp47 = (tmp43 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(186)
							Float tmp48 = this->max;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(186)
							Float tmp49 = this->min;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(186)
							Float tmp50 = (tmp48 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(186)
							Float tmp51 = (Float(tmp47) / Float(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(186)
							Float tmp52 = (tmp41 - tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(186)
							tmp40 = (tmp52 - (int)2);
						}
						HX_STACK_LINE(186)
						this->bar_x = tmp40;
					}
					HX_STACK_LINE(186)
					Float tmp25 = _value;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(186)
					Float tmp26 = this->max;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(186)
					Float tmp27 = this->min;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(186)
					Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(186)
					Float tmp29 = (Float(tmp25) / Float(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(186)
					this->percent = tmp29;
					HX_STACK_LINE(186)
					this->ignore_set = true;
					HX_STACK_LINE(186)
					Float tmp30 = _value;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(186)
					this->set_value(tmp30);
					HX_STACK_LINE(186)
					this->ignore_set = false;
					HX_STACK_LINE(186)
					{
						HX_STACK_LINE(186)
						int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
						HX_STACK_LINE(186)
						::mint::core::Signal tmp31 = this->onchange;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(186)
						int tmp32 = tmp31->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(186)
						int _count = tmp32;		HX_STACK_VAR(_count,"_count");
						HX_STACK_LINE(186)
						while((true)){
							HX_STACK_LINE(186)
							bool tmp33 = (_idx < _count);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(186)
							bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(186)
							if ((tmp34)){
								HX_STACK_LINE(186)
								break;
							}
							HX_STACK_LINE(186)
							::mint::core::Signal tmp35 = this->onchange;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(186)
							Dynamic tmp36 = tmp35->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(186)
							Dynamic fn = tmp36;		HX_STACK_VAR(fn,"fn");
							HX_STACK_LINE(186)
							bool tmp37 = (fn != null());		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(186)
							if ((tmp37)){
								HX_STACK_LINE(186)
								Float tmp38 = this->value;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(186)
								Float tmp39 = this->percent;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(186)
								fn(tmp38,tmp39).Cast< Void >();
							}
							HX_STACK_LINE(186)
							(_idx)++;
						}
						HX_STACK_LINE(186)
						while((true)){
							HX_STACK_LINE(186)
							bool tmp33 = (_count > (int)0);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(186)
							bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(186)
							if ((tmp34)){
								HX_STACK_LINE(186)
								break;
							}
							HX_STACK_LINE(186)
							::mint::core::Signal tmp35 = this->onchange;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(186)
							int tmp36 = (_count - (int)1);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(186)
							Dynamic tmp37 = tmp35->listeners->__GetItem(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(186)
							Dynamic fn = tmp37;		HX_STACK_VAR(fn,"fn");
							HX_STACK_LINE(186)
							bool tmp38 = (fn == null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(186)
							if ((tmp38)){
								HX_STACK_LINE(186)
								::mint::core::Signal tmp39 = this->onchange;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(186)
								int tmp40 = (_count - (int)1);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(186)
								tmp39->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp40,(int)1);
							}
							HX_STACK_LINE(186)
							(_count)--;
						}
					}
				}
			}
			else{
				HX_STACK_LINE(186)
				bool tmp3 = this->invert;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(186)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(186)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(186)
				if ((tmp4)){
					HX_STACK_LINE(186)
					Float tmp6 = this->h;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(186)
					int tmp7 = e->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(186)
					Float tmp8 = this->y;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(186)
					Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(186)
					tmp5 = (tmp6 - tmp9);
				}
				else{
					HX_STACK_LINE(186)
					int tmp6 = e->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(186)
					Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(186)
					tmp5 = (tmp6 - tmp7);
				}
				HX_STACK_LINE(186)
				Float _dy = tmp5;		HX_STACK_VAR(_dy,"_dy");
				HX_STACK_LINE(186)
				bool tmp6 = (_dy < (int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(186)
				if ((tmp6)){
					HX_STACK_LINE(186)
					_dy = (int)1;
				}
				HX_STACK_LINE(186)
				Float tmp7 = _dy;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(186)
				Float tmp8 = this->h;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(186)
				Float tmp9 = (tmp8 - (int)4);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(186)
				bool tmp10 = (tmp7 >= tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(186)
				if ((tmp10)){
					HX_STACK_LINE(186)
					Float tmp11 = this->h;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(186)
					Float tmp12 = (tmp11 - (int)4);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(186)
					_dy = tmp12;
				}
				HX_STACK_LINE(186)
				Float tmp11 = (_dy - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(186)
				Float tmp12 = this->h;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(186)
				Float tmp13 = (tmp12 - (int)5);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(186)
				Float tmp14 = (Float(tmp11) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(186)
				Float tmp15 = this->max;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(186)
				Float tmp16 = this->min;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(186)
				Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(186)
				Float tmp18 = (tmp14 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(186)
				Float tmp19 = this->min;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(186)
				Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(186)
				Float _v = tmp20;		HX_STACK_VAR(_v,"_v");
				HX_STACK_LINE(186)
				{
					HX_STACK_LINE(186)
					Float _value = _v;		HX_STACK_VAR(_value,"_value");
					HX_STACK_LINE(186)
					Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(186)
					{
						HX_STACK_LINE(186)
						Float tmp22 = this->min;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(186)
						Float a = tmp22;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(186)
						Float tmp23 = this->max;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(186)
						Float b = tmp23;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(186)
						bool tmp24 = (_value < a);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(186)
						if ((tmp24)){
							HX_STACK_LINE(186)
							tmp21 = a;
						}
						else{
							HX_STACK_LINE(186)
							bool tmp25 = (_value > b);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(186)
							if ((tmp25)){
								HX_STACK_LINE(186)
								tmp21 = b;
							}
							else{
								HX_STACK_LINE(186)
								tmp21 = _value;
							}
						}
					}
					HX_STACK_LINE(186)
					_value = tmp21;
					HX_STACK_LINE(186)
					Dynamic tmp22 = this->step;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(186)
					bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(186)
					if ((tmp23)){
						HX_STACK_LINE(186)
						Float tmp24 = _value;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(186)
						Dynamic tmp25 = this->step;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(186)
						Float tmp26 = (Float(tmp24) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(186)
						int tmp27 = ::Math_obj::round(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(186)
						Dynamic tmp28 = this->step;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(186)
						Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(186)
						_value = tmp29;
					}
					HX_STACK_LINE(186)
					bool tmp24 = this->vertical;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(186)
					if ((tmp24)){
						HX_STACK_LINE(186)
						Float tmp25 = this->w;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(186)
						Float tmp26 = (tmp25 - (int)4);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(186)
						this->bar_w = tmp26;
						HX_STACK_LINE(186)
						Float tmp27 = this->h;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(186)
						Float tmp28 = (tmp27 - (int)4);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(186)
						Float tmp29 = _value;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(186)
						Float tmp30 = this->min;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(186)
						Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(186)
						Float tmp32 = (tmp28 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(186)
						Float tmp33 = this->max;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(186)
						Float tmp34 = this->min;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(186)
						Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(186)
						Float tmp36 = (Float(tmp32) / Float(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(186)
						this->bar_h = tmp36;
						HX_STACK_LINE(186)
						bool tmp37 = this->invert;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(186)
						bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(186)
						Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(186)
						if ((tmp38)){
							HX_STACK_LINE(186)
							Float tmp40 = this->h;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(186)
							Float tmp41 = this->h;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(186)
							Float tmp42 = (tmp41 - (int)4);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(186)
							Float tmp43 = _value;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(186)
							Float tmp44 = this->min;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(186)
							Float tmp45 = (tmp43 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(186)
							Float tmp46 = (tmp42 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(186)
							Float tmp47 = this->max;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(186)
							Float tmp48 = this->min;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(186)
							Float tmp49 = (tmp47 - tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(186)
							Float tmp50 = (Float(tmp46) / Float(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(186)
							Float tmp51 = (tmp40 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(186)
							tmp39 = (tmp51 - (int)2);
						}
						else{
							HX_STACK_LINE(186)
							tmp39 = (int)2;
						}
						HX_STACK_LINE(186)
						this->bar_y = tmp39;
						HX_STACK_LINE(186)
						Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(186)
						{
							HX_STACK_LINE(186)
							Float tmp41 = this->bar_h;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(186)
							Float value = tmp41;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(186)
							Float tmp42 = this->h;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(186)
							Float tmp43 = (tmp42 - (int)4);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(186)
							Float b = tmp43;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(186)
							bool tmp44 = (value < (int)1);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(186)
							if ((tmp44)){
								HX_STACK_LINE(186)
								tmp40 = (int)1;
							}
							else{
								HX_STACK_LINE(186)
								bool tmp45 = (value > b);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(186)
								if ((tmp45)){
									HX_STACK_LINE(186)
									tmp40 = b;
								}
								else{
									HX_STACK_LINE(186)
									tmp40 = value;
								}
							}
						}
						HX_STACK_LINE(186)
						this->bar_h = tmp40;
					}
					else{
						HX_STACK_LINE(186)
						Float tmp25 = this->w;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(186)
						Float tmp26 = (tmp25 - (int)4);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(186)
						Float tmp27 = _value;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(186)
						Float tmp28 = this->min;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(186)
						Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(186)
						Float tmp30 = (tmp26 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(186)
						Float tmp31 = this->max;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(186)
						Float tmp32 = this->min;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(186)
						Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(186)
						Float tmp34 = (Float(tmp30) / Float(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(186)
						this->bar_w = tmp34;
						HX_STACK_LINE(186)
						Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(186)
						{
							HX_STACK_LINE(186)
							Float tmp36 = this->bar_w;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(186)
							Float value = tmp36;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(186)
							Float tmp37 = this->w;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(186)
							Float tmp38 = (tmp37 - (int)4);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(186)
							Float b = tmp38;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(186)
							bool tmp39 = (value < (int)1);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(186)
							if ((tmp39)){
								HX_STACK_LINE(186)
								tmp35 = (int)1;
							}
							else{
								HX_STACK_LINE(186)
								bool tmp40 = (value > b);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(186)
								if ((tmp40)){
									HX_STACK_LINE(186)
									tmp35 = b;
								}
								else{
									HX_STACK_LINE(186)
									tmp35 = value;
								}
							}
						}
						HX_STACK_LINE(186)
						this->bar_w = tmp35;
						HX_STACK_LINE(186)
						Float tmp36 = this->h;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(186)
						Float tmp37 = (tmp36 - (int)4);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(186)
						this->bar_h = tmp37;
						HX_STACK_LINE(186)
						bool tmp38 = this->invert;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(186)
						bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(186)
						Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(186)
						if ((tmp39)){
							HX_STACK_LINE(186)
							tmp40 = (int)2;
						}
						else{
							HX_STACK_LINE(186)
							Float tmp41 = this->w;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(186)
							Float tmp42 = this->w;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(186)
							Float tmp43 = (tmp42 - (int)4);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(186)
							Float tmp44 = _value;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(186)
							Float tmp45 = this->min;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(186)
							Float tmp46 = (tmp44 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(186)
							Float tmp47 = (tmp43 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(186)
							Float tmp48 = this->max;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(186)
							Float tmp49 = this->min;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(186)
							Float tmp50 = (tmp48 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(186)
							Float tmp51 = (Float(tmp47) / Float(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(186)
							Float tmp52 = (tmp41 - tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(186)
							tmp40 = (tmp52 - (int)2);
						}
						HX_STACK_LINE(186)
						this->bar_x = tmp40;
					}
					HX_STACK_LINE(186)
					Float tmp25 = _value;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(186)
					Float tmp26 = this->max;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(186)
					Float tmp27 = this->min;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(186)
					Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(186)
					Float tmp29 = (Float(tmp25) / Float(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(186)
					this->percent = tmp29;
					HX_STACK_LINE(186)
					this->ignore_set = true;
					HX_STACK_LINE(186)
					Float tmp30 = _value;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(186)
					this->set_value(tmp30);
					HX_STACK_LINE(186)
					this->ignore_set = false;
					HX_STACK_LINE(186)
					{
						HX_STACK_LINE(186)
						int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
						HX_STACK_LINE(186)
						::mint::core::Signal tmp31 = this->onchange;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(186)
						int tmp32 = tmp31->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(186)
						int _count = tmp32;		HX_STACK_VAR(_count,"_count");
						HX_STACK_LINE(186)
						while((true)){
							HX_STACK_LINE(186)
							bool tmp33 = (_idx < _count);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(186)
							bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(186)
							if ((tmp34)){
								HX_STACK_LINE(186)
								break;
							}
							HX_STACK_LINE(186)
							::mint::core::Signal tmp35 = this->onchange;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(186)
							Dynamic tmp36 = tmp35->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(186)
							Dynamic fn = tmp36;		HX_STACK_VAR(fn,"fn");
							HX_STACK_LINE(186)
							bool tmp37 = (fn != null());		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(186)
							if ((tmp37)){
								HX_STACK_LINE(186)
								Float tmp38 = this->value;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(186)
								Float tmp39 = this->percent;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(186)
								fn(tmp38,tmp39).Cast< Void >();
							}
							HX_STACK_LINE(186)
							(_idx)++;
						}
						HX_STACK_LINE(186)
						while((true)){
							HX_STACK_LINE(186)
							bool tmp33 = (_count > (int)0);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(186)
							bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(186)
							if ((tmp34)){
								HX_STACK_LINE(186)
								break;
							}
							HX_STACK_LINE(186)
							::mint::core::Signal tmp35 = this->onchange;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(186)
							int tmp36 = (_count - (int)1);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(186)
							Dynamic tmp37 = tmp35->listeners->__GetItem(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(186)
							Dynamic fn = tmp37;		HX_STACK_VAR(fn,"fn");
							HX_STACK_LINE(186)
							bool tmp38 = (fn == null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(186)
							if ((tmp38)){
								HX_STACK_LINE(186)
								::mint::core::Signal tmp39 = this->onchange;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(186)
								int tmp40 = (_count - (int)1);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(186)
								tmp39->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp40,(int)1);
							}
							HX_STACK_LINE(186)
							(_count)--;
						}
					}
				}
			}
		}
	}
return null();
}


Void Slider_obj::mouseup( Dynamic e){
{
		HX_STACK_FRAME("mint.Slider","mouseup",0xab8ea0df,"mint.Slider.mouseup","mint/Slider.hx",192,0x74f6d630)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(194)
		this->dragging = false;
		HX_STACK_LINE(195)
		{
			HX_STACK_LINE(195)
			{
				HX_STACK_LINE(195)
				bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(195)
				bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(195)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(195)
				if ((tmp2)){
					HX_STACK_LINE(195)
					::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(195)
					::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(195)
					::String tmp5 = (tmp4 + HX_HCSTRING(" was already destroyed but is being interacted with","\xbf","\xca","\x25","\xb3"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(195)
					::String tmp6 = (HX_HCSTRING(" ( ","\x18","\x6b","\x18","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(195)
					::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(195)
					::String tmp8 = (HX_HCSTRING("destroyed == false","\x0a","\xe4","\x63","\x7c") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(195)
					::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(195)
					HX_STACK_DO_THROW(tmp9);
				}
			}
			HX_STACK_LINE(195)
			::mint::Canvas tmp = this->canvas;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(195)
			bool tmp1 = (tmp == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(195)
			if ((tmp1)){
				HX_STACK_LINE(195)
				Dynamic();
			}
			else{
				HX_STACK_LINE(195)
				::mint::Canvas tmp2 = this->canvas;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(195)
				::mint::Control tmp3 = tmp2->get_captured();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(195)
				bool tmp4 = (tmp3 == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(195)
				if ((tmp4)){
					HX_STACK_LINE(195)
					::mint::Canvas tmp5 = this->canvas;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(195)
					tmp5->set_captured(null());
					HX_STACK_LINE(195)
					{
						HX_STACK_LINE(195)
						int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
						HX_STACK_LINE(195)
						::mint::core::Signal tmp6 = this->oncaptured;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(195)
						int tmp7 = tmp6->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(195)
						int _count = tmp7;		HX_STACK_VAR(_count,"_count");
						HX_STACK_LINE(195)
						while((true)){
							HX_STACK_LINE(195)
							bool tmp8 = (_idx < _count);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(195)
							bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(195)
							if ((tmp9)){
								HX_STACK_LINE(195)
								break;
							}
							HX_STACK_LINE(195)
							::mint::core::Signal tmp10 = this->oncaptured;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(195)
							Dynamic tmp11 = tmp10->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(195)
							Dynamic fn = tmp11;		HX_STACK_VAR(fn,"fn");
							HX_STACK_LINE(195)
							bool tmp12 = (fn != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(195)
							if ((tmp12)){
								HX_STACK_LINE(195)
								fn(false).Cast< Void >();
							}
							HX_STACK_LINE(195)
							(_idx)++;
						}
						HX_STACK_LINE(195)
						while((true)){
							HX_STACK_LINE(195)
							bool tmp8 = (_count > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(195)
							bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(195)
							if ((tmp9)){
								HX_STACK_LINE(195)
								break;
							}
							HX_STACK_LINE(195)
							::mint::core::Signal tmp10 = this->oncaptured;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(195)
							int tmp11 = (_count - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(195)
							Dynamic tmp12 = tmp10->listeners->__GetItem(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(195)
							Dynamic fn = tmp12;		HX_STACK_VAR(fn,"fn");
							HX_STACK_LINE(195)
							bool tmp13 = (fn == null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(195)
							if ((tmp13)){
								HX_STACK_LINE(195)
								::mint::core::Signal tmp14 = this->oncaptured;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(195)
								int tmp15 = (_count - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(195)
								tmp14->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp15,(int)1);
							}
							HX_STACK_LINE(195)
							(_count)--;
						}
					}
				}
			}
		}
		HX_STACK_LINE(197)
		Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(197)
		this->super::mouseup(tmp);
	}
return null();
}



Slider_obj::Slider_obj()
{
}

void Slider_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Slider);
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(min,"min");
	HX_MARK_MEMBER_NAME(max,"max");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(percent,"percent");
	HX_MARK_MEMBER_NAME(step,"step");
	HX_MARK_MEMBER_NAME(vertical,"vertical");
	HX_MARK_MEMBER_NAME(invert,"invert");
	HX_MARK_MEMBER_NAME(bar_x,"bar_x");
	HX_MARK_MEMBER_NAME(bar_y,"bar_y");
	HX_MARK_MEMBER_NAME(bar_w,"bar_w");
	HX_MARK_MEMBER_NAME(bar_h,"bar_h");
	HX_MARK_MEMBER_NAME(onchange,"onchange");
	HX_MARK_MEMBER_NAME(dragging,"dragging");
	HX_MARK_MEMBER_NAME(ignore_set,"ignore_set");
	::mint::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Slider_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(min,"min");
	HX_VISIT_MEMBER_NAME(max,"max");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(percent,"percent");
	HX_VISIT_MEMBER_NAME(step,"step");
	HX_VISIT_MEMBER_NAME(vertical,"vertical");
	HX_VISIT_MEMBER_NAME(invert,"invert");
	HX_VISIT_MEMBER_NAME(bar_x,"bar_x");
	HX_VISIT_MEMBER_NAME(bar_y,"bar_y");
	HX_VISIT_MEMBER_NAME(bar_w,"bar_w");
	HX_VISIT_MEMBER_NAME(bar_h,"bar_h");
	HX_VISIT_MEMBER_NAME(onchange,"onchange");
	HX_VISIT_MEMBER_NAME(dragging,"dragging");
	HX_VISIT_MEMBER_NAME(ignore_set,"ignore_set");
	::mint::Control_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Slider_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { return min; }
		if (HX_FIELD_EQ(inName,"max") ) { return max; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { return step; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		if (HX_FIELD_EQ(inName,"bar_x") ) { return bar_x; }
		if (HX_FIELD_EQ(inName,"bar_y") ) { return bar_y; }
		if (HX_FIELD_EQ(inName,"bar_w") ) { return bar_w; }
		if (HX_FIELD_EQ(inName,"bar_h") ) { return bar_h; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"invert") ) { return invert; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		if (HX_FIELD_EQ(inName,"percent") ) { return percent; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseup") ) { return mouseup_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertical") ) { return vertical; }
		if (HX_FIELD_EQ(inName,"onchange") ) { return onchange; }
		if (HX_FIELD_EQ(inName,"dragging") ) { return dragging; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mousedown") ) { return mousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"get_range") ) { return get_range_dyn(); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return set_value_dyn(); }
		if (HX_FIELD_EQ(inName,"mousemove") ) { return mousemove_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ignore_set") ) { return ignore_set; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"update_value") ) { return update_value_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"update_value_from_mouse") ) { return update_value_from_mouse_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Slider_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { min=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max") ) { max=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { step=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == hx::paccAlways) return set_value(inValue);value=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bar_x") ) { bar_x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bar_y") ) { bar_y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bar_w") ) { bar_w=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bar_h") ) { bar_h=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"invert") ) { invert=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"percent") ) { percent=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertical") ) { vertical=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onchange") ) { onchange=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dragging") ) { dragging=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ignore_set") ) { ignore_set=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Slider_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	outFields->push(HX_HCSTRING("min","\x92","\x11","\x53","\x00"));
	outFields->push(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("percent","\xc5","\xaa","\xda","\x78"));
	outFields->push(HX_HCSTRING("step","\x4c","\xe7","\x5b","\x4c"));
	outFields->push(HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));
	outFields->push(HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f"));
	outFields->push(HX_HCSTRING("bar_x","\xcc","\x5f","\xb9","\xad"));
	outFields->push(HX_HCSTRING("bar_y","\xcd","\x5f","\xb9","\xad"));
	outFields->push(HX_HCSTRING("bar_w","\xcb","\x5f","\xb9","\xad"));
	outFields->push(HX_HCSTRING("bar_h","\xbc","\x5f","\xb9","\xad"));
	outFields->push(HX_HCSTRING("onchange","\xcf","\x13","\x8b","\x62"));
	outFields->push(HX_HCSTRING("dragging","\xcf","\x3c","\x8c","\x37"));
	outFields->push(HX_HCSTRING("ignore_set","\xb5","\x8a","\x72","\x54"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Slider_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
	{hx::fsFloat,(int)offsetof(Slider_obj,min),HX_HCSTRING("min","\x92","\x11","\x53","\x00")},
	{hx::fsFloat,(int)offsetof(Slider_obj,max),HX_HCSTRING("max","\xa4","\x0a","\x53","\x00")},
	{hx::fsFloat,(int)offsetof(Slider_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{hx::fsFloat,(int)offsetof(Slider_obj,percent),HX_HCSTRING("percent","\xc5","\xaa","\xda","\x78")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Slider_obj,step),HX_HCSTRING("step","\x4c","\xe7","\x5b","\x4c")},
	{hx::fsBool,(int)offsetof(Slider_obj,vertical),HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a")},
	{hx::fsBool,(int)offsetof(Slider_obj,invert),HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f")},
	{hx::fsFloat,(int)offsetof(Slider_obj,bar_x),HX_HCSTRING("bar_x","\xcc","\x5f","\xb9","\xad")},
	{hx::fsFloat,(int)offsetof(Slider_obj,bar_y),HX_HCSTRING("bar_y","\xcd","\x5f","\xb9","\xad")},
	{hx::fsFloat,(int)offsetof(Slider_obj,bar_w),HX_HCSTRING("bar_w","\xcb","\x5f","\xb9","\xad")},
	{hx::fsFloat,(int)offsetof(Slider_obj,bar_h),HX_HCSTRING("bar_h","\xbc","\x5f","\xb9","\xad")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Slider_obj,onchange),HX_HCSTRING("onchange","\xcf","\x13","\x8b","\x62")},
	{hx::fsBool,(int)offsetof(Slider_obj,dragging),HX_HCSTRING("dragging","\xcf","\x3c","\x8c","\x37")},
	{hx::fsBool,(int)offsetof(Slider_obj,ignore_set),HX_HCSTRING("ignore_set","\xb5","\x8a","\x72","\x54")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"),
	HX_HCSTRING("min","\x92","\x11","\x53","\x00"),
	HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("percent","\xc5","\xaa","\xda","\x78"),
	HX_HCSTRING("step","\x4c","\xe7","\x5b","\x4c"),
	HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"),
	HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f"),
	HX_HCSTRING("bar_x","\xcc","\x5f","\xb9","\xad"),
	HX_HCSTRING("bar_y","\xcd","\x5f","\xb9","\xad"),
	HX_HCSTRING("bar_w","\xcb","\x5f","\xb9","\xad"),
	HX_HCSTRING("bar_h","\xbc","\x5f","\xb9","\xad"),
	HX_HCSTRING("onchange","\xcf","\x13","\x8b","\x62"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("dragging","\xcf","\x3c","\x8c","\x37"),
	HX_HCSTRING("mousedown","\x07","\x85","\xe9","\x03"),
	HX_HCSTRING("get_range","\x14","\x02","\xc9","\x27"),
	HX_HCSTRING("ignore_set","\xb5","\x8a","\x72","\x54"),
	HX_HCSTRING("update_value","\x7b","\xf9","\xce","\xf8"),
	HX_HCSTRING("set_value","\xd4","\xc7","\xb2","\x58"),
	HX_HCSTRING("update_value_from_mouse","\xd4","\x0d","\x11","\xf0"),
	HX_HCSTRING("mousemove","\xb6","\x6f","\xdc","\x09"),
	HX_HCSTRING("mouseup","\xc0","\x0f","\x73","\xc0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Slider_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Slider_obj::__mClass,"__mClass");
};

#endif

hx::Class Slider_obj::__mClass;

void Slider_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mint.Slider","\x8d","\x3a","\x4a","\x69");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Slider_obj >;
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
