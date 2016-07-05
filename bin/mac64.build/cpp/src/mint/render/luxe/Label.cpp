#include <hxcpp.h>

#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Text
#include <luxe/Text.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
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
#ifndef INCLUDED_mint_core_Signal
#include <mint/core/Signal.h>
#endif
#ifndef INCLUDED_mint_render_Render
#include <mint/render/Render.h>
#endif
#ifndef INCLUDED_mint_render_Renderer
#include <mint/render/Renderer.h>
#endif
#ifndef INCLUDED_mint_render_Rendering
#include <mint/render/Rendering.h>
#endif
#ifndef INCLUDED_mint_render_luxe_Convert
#include <mint/render/luxe/Convert.h>
#endif
#ifndef INCLUDED_mint_render_luxe_Label
#include <mint/render/luxe/Label.h>
#endif
#ifndef INCLUDED_mint_render_luxe_LuxeMintRender
#include <mint/render/luxe/LuxeMintRender.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
namespace mint{
namespace render{
namespace luxe{

Void Label_obj::__construct(::mint::render::luxe::LuxeMintRender _render,::mint::Label _control)
{
HX_STACK_FRAME("mint.render.luxe.Label","new",0x6e4a0d5a,"mint.render.luxe.Label.new","mint/render/luxe/Label.hx",28,0xca147e37)
HX_STACK_THIS(this)
HX_STACK_ARG(_render,"_render")
HX_STACK_ARG(_control,"_control")
{
	HX_STACK_LINE(28)
	::mint::render::luxe::Label _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(30)
	this->label = _control;
	HX_STACK_LINE(31)
	this->render = _render;
	HX_STACK_LINE(33)
	::mint::render::luxe::LuxeMintRender tmp = this->render;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	::mint::Label tmp1 = _control;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(35)
	::mint::Label tmp2 = this->label;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	Dynamic tmp3 = tmp2->options->__Field(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(35)
	Dynamic _opt = tmp3;		HX_STACK_VAR(_opt,"_opt");
	HX_STACK_LINE(37)
	::phoenix::Color tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(37)
	{
		HX_STACK_LINE(37)
		bool tmp5 = (_opt->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(37)
		if ((tmp5)){
			HX_STACK_LINE(37)
			::phoenix::Color tmp6 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(37)
			::phoenix::Color tmp7 = tmp6->rgb((int)16777215);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(37)
			_opt->__FieldRef(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")) = tmp7;
		}
		HX_STACK_LINE(37)
		tmp4 = _opt->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );
	}
	HX_STACK_LINE(37)
	this->color = tmp4;
	HX_STACK_LINE(38)
	::phoenix::Color tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(38)
	{
		HX_STACK_LINE(38)
		bool tmp6 = (_opt->__Field(HX_HCSTRING("color_hover","\xa0","\x4a","\xe0","\xac"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(38)
		if ((tmp6)){
			HX_STACK_LINE(38)
			::phoenix::Color tmp7 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(38)
			::phoenix::Color tmp8 = tmp7->rgb((int)10340963);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(38)
			_opt->__FieldRef(HX_HCSTRING("color_hover","\xa0","\x4a","\xe0","\xac")) = tmp8;
		}
		HX_STACK_LINE(38)
		tmp5 = _opt->__Field(HX_HCSTRING("color_hover","\xa0","\x4a","\xe0","\xac"), hx::paccDynamic );
	}
	HX_STACK_LINE(38)
	this->color_hover = tmp5;
	HX_STACK_LINE(41)
	::mint::Control tmp6 = this->control;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(41)
	::String tmp7 = tmp6->name;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(41)
	::String tmp8 = (tmp7 + HX_HCSTRING(".text","\xdb","\x7b","\x68","\xc9"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(42)
	::mint::render::luxe::LuxeMintRender tmp9 = this->render;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(42)
	::phoenix::Batcher tmp10 = tmp9->options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(43)
	::mint::Control tmp11 = this->control;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(43)
	Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(43)
	::mint::Control tmp13 = this->control;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(43)
	Float tmp14 = tmp13->canvas->scale;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(43)
	Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(43)
	::mint::Control tmp16 = this->control;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(43)
	Float tmp17 = tmp16->y;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(43)
	::mint::Control tmp18 = this->control;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(43)
	Float tmp19 = tmp18->canvas->scale;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(43)
	Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(43)
	::mint::Control tmp21 = this->control;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(43)
	Float tmp22 = tmp21->w;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(43)
	::mint::Control tmp23 = this->control;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(43)
	Float tmp24 = tmp23->canvas->scale;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(43)
	Float tmp25 = (tmp22 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(43)
	::mint::Control tmp26 = this->control;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(43)
	Float tmp27 = tmp26->h;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(43)
	::mint::Control tmp28 = this->control;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(43)
	Float tmp29 = tmp28->canvas->scale;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(43)
	Float tmp30 = (tmp27 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(43)
	::phoenix::Rectangle tmp31 = ::phoenix::Rectangle_obj::__new(tmp15,tmp20,tmp25,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(45)
	::phoenix::Color tmp32 = this->color;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(46)
	::mint::Label tmp33 = this->label;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(46)
	::String tmp34 = tmp33->text;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(47)
	::mint::Label tmp35 = this->label;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(47)
	Dynamic tmp36 = tmp35->options->__Field(HX_HCSTRING("bounds_wrap","\x14","\x47","\xee","\xec"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(48)
	::mint::Label tmp37 = this->label;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(48)
	Dynamic tmp38 = tmp37->options->__Field(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(48)
	int tmp39 = ::mint::render::luxe::Convert_obj::text_align(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(49)
	::mint::Label tmp40 = this->label;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(49)
	Dynamic tmp41 = tmp40->options->__Field(HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(49)
	int tmp42 = ::mint::render::luxe::Convert_obj::text_align(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(50)
	Float tmp43;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(50)
	{
		HX_STACK_LINE(50)
		::mint::Label tmp44 = this->label;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(50)
		Dynamic tmp45 = tmp44->options->__Field(HX_HCSTRING("text_size","\xd3","\xdc","\x24","\x05"), hx::paccDynamic );		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(50)
		Float _value = tmp45;		HX_STACK_VAR(_value,"_value");
		HX_STACK_LINE(50)
		::mint::Control tmp46 = this->control;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(50)
		Float tmp47 = tmp46->canvas->scale;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(50)
		Float tmp48 = _value;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(50)
		tmp43 = (tmp47 * tmp48);
	}
	HX_STACK_LINE(51)
	::mint::render::luxe::LuxeMintRender tmp44 = this->render;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(51)
	Dynamic tmp45 = tmp44->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(51)
	::mint::Control tmp46 = this->control;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(51)
	Float tmp47 = tmp46->depth;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(51)
	Float tmp48 = (tmp45 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(52)
	::mint::Control tmp49 = this->control;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(52)
	bool tmp50 = tmp49->visible;		HX_STACK_VAR(tmp50,"tmp50");
	struct _Function_1_1{
		inline static Dynamic Block( Float &tmp48,int &tmp42,Dynamic &tmp36,::phoenix::Batcher &tmp10,::phoenix::Rectangle &tmp31,::String &tmp34,::String &tmp8,int &tmp39,bool &tmp50,::phoenix::Color &tmp32,Float &tmp43){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/render/luxe/Label.hx",40,0xca147e37)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp8,false);
				__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp10,false);
				__result->Add(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66") , tmp31,false);
				__result->Add(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10") , true,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp32,false);
				__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , tmp34,false);
				__result->Add(HX_HCSTRING("bounds_wrap","\x14","\x47","\xee","\xec") , tmp36,false);
				__result->Add(HX_HCSTRING("align","\xc5","\x56","\x91","\x21") , tmp39,false);
				__result->Add(HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53") , tmp42,false);
				__result->Add(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b") , tmp43,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp48,false);
				__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , tmp50,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(40)
	Dynamic tmp51 = _Function_1_1::Block(tmp48,tmp42,tmp36,tmp10,tmp31,tmp34,tmp8,tmp39,tmp50,tmp32,tmp43);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(40)
	::luxe::Text tmp52 = ::luxe::Text_obj::__new(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(40)
	this->text = tmp52;
	HX_STACK_LINE(55)
	::luxe::Text tmp53 = this->text;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(55)
	::mint::Control tmp54 = this->control;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(55)
	::mint::Control tmp55 = tmp54->clip_with;		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(55)
	::mint::Control tmp56 = this->control;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(55)
	Float tmp57 = tmp56->canvas->scale;		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(55)
	::phoenix::Rectangle tmp58 = ::mint::render::luxe::Convert_obj::bounds(tmp55,tmp57);		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(55)
	tmp53->set_clip_rect(tmp58);
	HX_STACK_LINE(57)
	::mint::Label tmp59 = this->label;		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(57)
	Dynamic tmp60 = this->ontext_dyn();		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(57)
	tmp59->onchange->listen(tmp60);
	HX_STACK_LINE(59)
	::mint::Control tmp61 = this->control;		HX_STACK_VAR(tmp61,"tmp61");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,::mint::render::luxe::Label,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic e,::mint::Control c){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","mint/render/luxe/Label.hx",59,0xca147e37)
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(c,"c")
		{
			HX_STACK_LINE(59)
			::phoenix::Color tmp62 = _g->color_hover;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(59)
			_g->text->set_color(tmp62);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(59)
	tmp61->onmouseenter->listen( Dynamic(new _Function_1_2(_g)));
	HX_STACK_LINE(60)
	::mint::Control tmp62 = this->control;		HX_STACK_VAR(tmp62,"tmp62");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_3,::mint::render::luxe::Label,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic e,::mint::Control c){
		HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","mint/render/luxe/Label.hx",60,0xca147e37)
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(c,"c")
		{
			HX_STACK_LINE(60)
			::phoenix::Color tmp63 = _g->color;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(60)
			_g->text->set_color(tmp63);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(60)
	tmp62->onmouseleave->listen( Dynamic(new _Function_1_3(_g)));
}
;
	return null();
}

//Label_obj::~Label_obj() { }

Dynamic Label_obj::__CreateEmpty() { return  new Label_obj; }
hx::ObjectPtr< Label_obj > Label_obj::__new(::mint::render::luxe::LuxeMintRender _render,::mint::Label _control)
{  hx::ObjectPtr< Label_obj > _result_ = new Label_obj();
	_result_->__construct(_render,_control);
	return _result_;}

Dynamic Label_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Label_obj > _result_ = new Label_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Label_obj::onscale( Float _scale,Float _prev_scale){
{
		HX_STACK_FRAME("mint.render.luxe.Label","onscale",0x19d03f05,"mint.render.luxe.Label.onscale","mint/render/luxe/Label.hx",64,0xca147e37)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_scale,"_scale")
		HX_STACK_ARG(_prev_scale,"_prev_scale")
		HX_STACK_LINE(66)
		::luxe::Text tmp = this->text;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		::mint::Control tmp1 = this->control;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		::mint::Control tmp2 = tmp1->clip_with;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		Float tmp3 = _scale;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(66)
		::phoenix::Rectangle tmp4 = ::mint::render::luxe::Convert_obj::bounds(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(66)
		tmp->set_clip_rect(tmp4);
		HX_STACK_LINE(67)
		::luxe::Text tmp5 = this->text;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(67)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			::mint::Label tmp7 = this->label;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(67)
			Dynamic tmp8 = tmp7->options->__Field(HX_HCSTRING("text_size","\xd3","\xdc","\x24","\x05"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(67)
			Float _value = tmp8;		HX_STACK_VAR(_value,"_value");
			HX_STACK_LINE(67)
			::mint::Control tmp9 = this->control;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(67)
			Float tmp10 = tmp9->canvas->scale;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(67)
			Float tmp11 = _value;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(67)
			tmp6 = (tmp10 * tmp11);
		}
		HX_STACK_LINE(67)
		tmp5->set_point_size(tmp6);
	}
return null();
}


Void Label_obj::onbounds( ){
{
		HX_STACK_FRAME("mint.render.luxe.Label","onbounds",0xa65e819a,"mint.render.luxe.Label.onbounds","mint/render/luxe/Label.hx",71,0xca147e37)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		::luxe::Text tmp = this->text;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		::mint::Control tmp1 = this->control;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(73)
		::mint::Control tmp3 = this->control;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(73)
		Float tmp4 = tmp3->canvas->scale;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(73)
		Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(73)
		::mint::Control tmp6 = this->control;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(73)
		Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(73)
		::mint::Control tmp8 = this->control;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(73)
		Float tmp9 = tmp8->canvas->scale;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(73)
		Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(73)
		::mint::Control tmp11 = this->control;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(73)
		Float tmp12 = tmp11->w;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(73)
		::mint::Control tmp13 = this->control;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(73)
		Float tmp14 = tmp13->canvas->scale;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(73)
		Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(73)
		::mint::Control tmp16 = this->control;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(73)
		Float tmp17 = tmp16->h;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(73)
		::mint::Control tmp18 = this->control;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(73)
		Float tmp19 = tmp18->canvas->scale;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(73)
		Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(73)
		::phoenix::Rectangle tmp21 = ::phoenix::Rectangle_obj::__new(tmp5,tmp10,tmp15,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(73)
		tmp->set_bounds(tmp21);
	}
return null();
}


Void Label_obj::ontext( ::String _text){
{
		HX_STACK_FRAME("mint.render.luxe.Label","ontext",0x82814492,"mint.render.luxe.Label.ontext","mint/render/luxe/Label.hx",77,0xca147e37)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_text,"_text")
		HX_STACK_LINE(79)
		::luxe::Text tmp = this->text;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		::String tmp1 = _text;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(79)
		tmp->set_text(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,ontext,(void))

Void Label_obj::ondestroy( ){
{
		HX_STACK_FRAME("mint.render.luxe.Label","ondestroy",0x1d20f235,"mint.render.luxe.Label.ondestroy","mint/render/luxe/Label.hx",83,0xca147e37)
		HX_STACK_THIS(this)
		HX_STACK_LINE(85)
		::mint::Label tmp = this->label;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(85)
		Dynamic tmp1 = this->ontext_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(85)
		tmp->onchange->remove(tmp1);
		HX_STACK_LINE(87)
		::luxe::Text tmp2 = this->text;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(87)
		tmp2->destroy(null());
		HX_STACK_LINE(88)
		this->text = null();
	}
return null();
}


Void Label_obj::onclip( bool _disable,Float _x,Float _y,Float _w,Float _h){
{
		HX_STACK_FRAME("mint.render.luxe.Label","onclip",0x7749e6b5,"mint.render.luxe.Label.onclip","mint/render/luxe/Label.hx",92,0xca147e37)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_disable,"_disable")
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_w,"_w")
		HX_STACK_ARG(_h,"_h")
		HX_STACK_LINE(94)
		::luxe::Text tmp = this->text;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		::mint::Control tmp1 = this->control;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		::mint::Control tmp2 = tmp1->clip_with;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		::mint::Control tmp3 = this->control;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		Float tmp4 = tmp3->canvas->scale;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(94)
		::phoenix::Rectangle tmp5 = ::mint::render::luxe::Convert_obj::bounds(tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(94)
		tmp->set_clip_rect(tmp5);
	}
return null();
}


Void Label_obj::onvisible( bool _visible){
{
		HX_STACK_FRAME("mint.render.luxe.Label","onvisible",0x9bbf3dad,"mint.render.luxe.Label.onvisible","mint/render/luxe/Label.hx",99,0xca147e37)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_visible,"_visible")
		HX_STACK_LINE(101)
		::luxe::Text tmp = this->text;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(101)
		bool tmp1 = _visible;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(101)
		tmp->set_visible(tmp1);
	}
return null();
}


Void Label_obj::ondepth( Float _depth){
{
		HX_STACK_FRAME("mint.render.luxe.Label","ondepth",0x782b617e,"mint.render.luxe.Label.ondepth","mint/render/luxe/Label.hx",105,0xca147e37)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_depth,"_depth")
		HX_STACK_LINE(107)
		::luxe::Text tmp = this->text;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		::mint::render::luxe::LuxeMintRender tmp1 = this->render;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		Dynamic tmp2 = tmp1->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(107)
		Float tmp3 = _depth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(107)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(107)
		tmp->set_depth(tmp4);
	}
return null();
}



Label_obj::Label_obj()
{
}

void Label_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Label);
	HX_MARK_MEMBER_NAME(label,"label");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(color_hover,"color_hover");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(render,"render");
	::mint::render::Render_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Label_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(label,"label");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(color_hover,"color_hover");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(render,"render");
	::mint::render::Render_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Label_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return label; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render; }
		if (HX_FIELD_EQ(inName,"ontext") ) { return ontext_dyn(); }
		if (HX_FIELD_EQ(inName,"onclip") ) { return onclip_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onscale") ) { return onscale_dyn(); }
		if (HX_FIELD_EQ(inName,"ondepth") ) { return ondepth_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onbounds") ) { return onbounds_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onvisible") ) { return onvisible_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"color_hover") ) { return color_hover; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Label_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::luxe::Text >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { label=inValue.Cast< ::mint::Label >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { render=inValue.Cast< ::mint::render::luxe::LuxeMintRender >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"color_hover") ) { color_hover=inValue.Cast< ::phoenix::Color >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Label_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("color_hover","\xa0","\x4a","\xe0","\xac"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::mint::Label*/ ,(int)offsetof(Label_obj,label),HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f")},
	{hx::fsObject /*::luxe::Text*/ ,(int)offsetof(Label_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Label_obj,color_hover),HX_HCSTRING("color_hover","\xa0","\x4a","\xe0","\xac")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Label_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsObject /*::mint::render::luxe::LuxeMintRender*/ ,(int)offsetof(Label_obj,render),HX_HCSTRING("render","\x56","\x6b","\x29","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("color_hover","\xa0","\x4a","\xe0","\xac"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("onscale","\x0b","\xfd","\xde","\x7b"),
	HX_HCSTRING("onbounds","\xd4","\x08","\x36","\x11"),
	HX_HCSTRING("ontext","\x4c","\xa9","\xaa","\x04"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onclip","\x6f","\x4b","\x73","\xf9"),
	HX_HCSTRING("onvisible","\x33","\x09","\x7e","\xad"),
	HX_HCSTRING("ondepth","\x84","\x1f","\x3a","\xda"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Label_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Label_obj::__mClass,"__mClass");
};

#endif

hx::Class Label_obj::__mClass;

void Label_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mint.render.luxe.Label","\x68","\x18","\xf6","\x1c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Label_obj >;
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
} // end namespace render
} // end namespace luxe
