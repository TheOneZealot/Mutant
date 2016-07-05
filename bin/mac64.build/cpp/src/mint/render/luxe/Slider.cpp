#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_Draw
#include <luxe/Draw.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_mint_Canvas
#include <mint/Canvas.h>
#endif
#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
#endif
#ifndef INCLUDED_mint_Slider
#include <mint/Slider.h>
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
#ifndef INCLUDED_mint_render_luxe_LuxeMintRender
#include <mint/render/luxe/LuxeMintRender.h>
#endif
#ifndef INCLUDED_mint_render_luxe_Slider
#include <mint/render/luxe/Slider.h>
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
#ifndef INCLUDED_phoenix_Spatial
#include <phoenix/Spatial.h>
#endif
#ifndef INCLUDED_phoenix_Transform
#include <phoenix/Transform.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_GeometryState
#include <phoenix/geometry/GeometryState.h>
#endif
#ifndef INCLUDED_phoenix_geometry_QuadGeometry
#include <phoenix/geometry/QuadGeometry.h>
#endif
namespace mint{
namespace render{
namespace luxe{

Void Slider_obj::__construct(::mint::render::luxe::LuxeMintRender _render,::mint::Slider _control)
{
HX_STACK_FRAME("mint.render.luxe.Slider","new",0xfc2f1c9f,"mint.render.luxe.Slider.new","mint/render/luxe/Slider.hx",33,0x2351fdb0)
HX_STACK_THIS(this)
HX_STACK_ARG(_render,"_render")
HX_STACK_ARG(_control,"_control")
{
	HX_STACK_LINE(33)
	::mint::render::luxe::Slider _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(35)
	this->slider = _control;
	HX_STACK_LINE(36)
	this->render = _render;
	HX_STACK_LINE(38)
	::mint::render::luxe::LuxeMintRender tmp = this->render;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	::mint::Slider tmp1 = _control;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(40)
	::mint::Slider tmp2 = this->slider;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	Dynamic tmp3 = tmp2->options->__Field(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(40)
	Dynamic _opt = tmp3;		HX_STACK_VAR(_opt,"_opt");
	HX_STACK_LINE(42)
	::phoenix::Color tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		bool tmp5 = (_opt->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(42)
		if ((tmp5)){
			HX_STACK_LINE(42)
			::phoenix::Color tmp6 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(42)
			::phoenix::Color tmp7 = tmp6->rgb((int)3618617);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(42)
			_opt->__FieldRef(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")) = tmp7;
		}
		HX_STACK_LINE(42)
		tmp4 = _opt->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );
	}
	HX_STACK_LINE(42)
	this->color = tmp4;
	HX_STACK_LINE(43)
	::phoenix::Color tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(43)
	{
		HX_STACK_LINE(43)
		bool tmp6 = (_opt->__Field(HX_HCSTRING("color_bar","\xb7","\x55","\xaa","\x2f"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(43)
		if ((tmp6)){
			HX_STACK_LINE(43)
			::phoenix::Color tmp7 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(43)
			::phoenix::Color tmp8 = tmp7->rgb((int)10340963);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(43)
			_opt->__FieldRef(HX_HCSTRING("color_bar","\xb7","\x55","\xaa","\x2f")) = tmp8;
		}
		HX_STACK_LINE(43)
		tmp5 = _opt->__Field(HX_HCSTRING("color_bar","\xb7","\x55","\xaa","\x2f"), hx::paccDynamic );
	}
	HX_STACK_LINE(43)
	this->color_bar = tmp5;
	HX_STACK_LINE(44)
	::phoenix::Color tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(44)
	{
		HX_STACK_LINE(44)
		bool tmp7 = (_opt->__Field(HX_HCSTRING("color_bar_hover","\xf4","\x25","\xbc","\xcc"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(44)
		if ((tmp7)){
			HX_STACK_LINE(44)
			::phoenix::Color tmp8 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(44)
			::phoenix::Color tmp9 = tmp8->rgb((int)11917193);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(44)
			_opt->__FieldRef(HX_HCSTRING("color_bar_hover","\xf4","\x25","\xbc","\xcc")) = tmp9;
		}
		HX_STACK_LINE(44)
		tmp6 = _opt->__Field(HX_HCSTRING("color_bar_hover","\xf4","\x25","\xbc","\xcc"), hx::paccDynamic );
	}
	HX_STACK_LINE(44)
	this->color_bar_hover = tmp6;
	HX_STACK_LINE(46)
	::luxe::Draw tmp7 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(47)
	::mint::Control tmp8 = this->control;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(47)
	::String tmp9 = tmp8->name;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(47)
	::String tmp10 = (tmp9 + HX_HCSTRING(".visual","\x6e","\x79","\x67","\x68"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(48)
	::mint::render::luxe::LuxeMintRender tmp11 = this->render;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(48)
	::phoenix::Batcher tmp12 = tmp11->options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(49)
	::mint::Control tmp13 = this->control;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(49)
	Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(49)
	::mint::Control tmp15 = this->control;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(49)
	Float tmp16 = tmp15->canvas->scale;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(49)
	Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(50)
	::mint::Control tmp18 = this->control;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(50)
	Float tmp19 = tmp18->y;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(50)
	::mint::Control tmp20 = this->control;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(50)
	Float tmp21 = tmp20->canvas->scale;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(50)
	Float tmp22 = (tmp19 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(51)
	::mint::Control tmp23 = this->control;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(51)
	Float tmp24 = tmp23->w;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(51)
	::mint::Control tmp25 = this->control;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(51)
	Float tmp26 = tmp25->canvas->scale;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(51)
	Float tmp27 = (tmp24 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(52)
	::mint::Control tmp28 = this->control;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(52)
	Float tmp29 = tmp28->h;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(52)
	::mint::Control tmp30 = this->control;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(52)
	Float tmp31 = tmp30->canvas->scale;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(52)
	Float tmp32 = (tmp29 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(53)
	::phoenix::Color tmp33 = this->color;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(54)
	::mint::render::luxe::LuxeMintRender tmp34 = this->render;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(54)
	Dynamic tmp35 = tmp34->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(54)
	::mint::Control tmp36 = this->control;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(54)
	Float tmp37 = tmp36->depth;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(54)
	Float tmp38 = (tmp35 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(55)
	::mint::Control tmp39 = this->control;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(55)
	bool tmp40 = tmp39->visible;		HX_STACK_VAR(tmp40,"tmp40");
	struct _Function_1_1{
		inline static Dynamic Block( Float &tmp22,::phoenix::Color &tmp33,Float &tmp17,Float &tmp38,bool &tmp40,::String &tmp10,::phoenix::Batcher &tmp12,Float &tmp27,Float &tmp32){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/render/luxe/Slider.hx",46,0x2351fdb0)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tmp10,false);
				__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp12,false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp17,false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp22,false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp27,false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp32,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp33,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp38,false);
				__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , tmp40,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(46)
	Dynamic tmp41 = _Function_1_1::Block(tmp22,tmp33,tmp17,tmp38,tmp40,tmp10,tmp12,tmp27,tmp32);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(46)
	::phoenix::geometry::QuadGeometry tmp42 = tmp7->box(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(46)
	this->visual = tmp42;
	HX_STACK_LINE(58)
	::luxe::Draw tmp43 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(59)
	::mint::Control tmp44 = this->control;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(59)
	::String tmp45 = tmp44->name;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(59)
	::String tmp46 = (tmp45 + HX_HCSTRING(".bar","\x65","\x82","\xb2","\x1e"));		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(60)
	::mint::render::luxe::LuxeMintRender tmp47 = this->render;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(60)
	::phoenix::Batcher tmp48 = tmp47->options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(61)
	::mint::Control tmp49 = this->control;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(61)
	Float tmp50 = tmp49->x;		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(61)
	::mint::Control tmp51 = this->control;		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(61)
	Float tmp52 = tmp51->canvas->scale;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(61)
	Float tmp53 = (tmp50 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(61)
	::mint::Control tmp54 = this->control;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(61)
	Float tmp55 = tmp54->canvas->scale;		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(61)
	::mint::Slider tmp56 = this->slider;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(61)
	Float tmp57 = tmp56->bar_x;		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(61)
	Float tmp58 = (tmp55 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(61)
	Float tmp59 = (tmp53 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(62)
	::mint::Control tmp60 = this->control;		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(62)
	Float tmp61 = tmp60->y;		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(62)
	::mint::Control tmp62 = this->control;		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(62)
	Float tmp63 = tmp62->canvas->scale;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(62)
	Float tmp64 = (tmp61 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(62)
	::mint::Control tmp65 = this->control;		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(62)
	Float tmp66 = tmp65->canvas->scale;		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(62)
	::mint::Slider tmp67 = this->slider;		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(62)
	Float tmp68 = tmp67->bar_y;		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(62)
	Float tmp69 = (tmp66 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(62)
	Float tmp70 = (tmp64 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(63)
	::mint::Control tmp71 = this->control;		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(63)
	Float tmp72 = tmp71->canvas->scale;		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(63)
	::mint::Slider tmp73 = this->slider;		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(63)
	Float tmp74 = tmp73->bar_w;		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(63)
	Float tmp75 = (tmp72 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(64)
	::mint::Control tmp76 = this->control;		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(64)
	Float tmp77 = tmp76->canvas->scale;		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(64)
	::mint::Slider tmp78 = this->slider;		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(64)
	Float tmp79 = tmp78->bar_h;		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(64)
	Float tmp80 = (tmp77 * tmp79);		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(65)
	::phoenix::Color tmp81 = this->color_bar;		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(66)
	::mint::render::luxe::LuxeMintRender tmp82 = this->render;		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(66)
	Dynamic tmp83 = tmp82->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(66)
	::mint::Control tmp84 = this->control;		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(66)
	Float tmp85 = tmp84->depth;		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(66)
	Float tmp86 = (tmp83 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(66)
	Float tmp87 = (tmp86 + ((Float)0.001));		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(67)
	::mint::Control tmp88 = this->control;		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(67)
	bool tmp89 = tmp88->visible;		HX_STACK_VAR(tmp89,"tmp89");
	struct _Function_1_2{
		inline static Dynamic Block( ::phoenix::Color &tmp81,::phoenix::Batcher &tmp48,::String &tmp46,Float &tmp75,Float &tmp80,Float &tmp70,Float &tmp59,bool &tmp89,Float &tmp87){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/render/luxe/Slider.hx",58,0x2351fdb0)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tmp46,false);
				__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp48,false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp59,false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp70,false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp75,false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp80,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp81,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp87,false);
				__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , tmp89,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(58)
	Dynamic tmp90 = _Function_1_2::Block(tmp81,tmp48,tmp46,tmp75,tmp80,tmp70,tmp59,tmp89,tmp87);		HX_STACK_VAR(tmp90,"tmp90");
	HX_STACK_LINE(58)
	::phoenix::geometry::QuadGeometry tmp91 = tmp43->box(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
	HX_STACK_LINE(58)
	this->bar = tmp91;
	HX_STACK_LINE(70)
	::mint::Control tmp92 = this->control;		HX_STACK_VAR(tmp92,"tmp92");
	HX_STACK_LINE(70)
	Float tmp93 = tmp92->canvas->scale;		HX_STACK_VAR(tmp93,"tmp93");
	HX_STACK_LINE(70)
	this->update_clip(tmp93);
	HX_STACK_LINE(72)
	::mint::Slider tmp94 = this->slider;		HX_STACK_VAR(tmp94,"tmp94");
	HX_STACK_LINE(72)
	Dynamic tmp95 = this->onchange_dyn();		HX_STACK_VAR(tmp95,"tmp95");
	HX_STACK_LINE(72)
	tmp94->onchange->listen(tmp95);
	HX_STACK_LINE(73)
	::mint::Slider tmp96 = this->slider;		HX_STACK_VAR(tmp96,"tmp96");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_3,::mint::render::luxe::Slider,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic _,::mint::Control _1){
		HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","mint/render/luxe/Slider.hx",73,0x2351fdb0)
		HX_STACK_ARG(_,"_")
		HX_STACK_ARG(_1,"_1")
		{
			HX_STACK_LINE(73)
			::phoenix::Color tmp97 = _g->color_bar_hover;		HX_STACK_VAR(tmp97,"tmp97");
			HX_STACK_LINE(73)
			_g->bar->set_color(tmp97);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(73)
	tmp96->onmouseenter->listen( Dynamic(new _Function_1_3(_g)));
	HX_STACK_LINE(74)
	::mint::Slider tmp97 = this->slider;		HX_STACK_VAR(tmp97,"tmp97");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_4,::mint::render::luxe::Slider,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic _,::mint::Control _1){
		HX_STACK_FRAME("*","_Function_1_4",0x5200ed3a,"*._Function_1_4","mint/render/luxe/Slider.hx",74,0x2351fdb0)
		HX_STACK_ARG(_,"_")
		HX_STACK_ARG(_1,"_1")
		{
			HX_STACK_LINE(74)
			::phoenix::Color tmp98 = _g->color_bar;		HX_STACK_VAR(tmp98,"tmp98");
			HX_STACK_LINE(74)
			_g->bar->set_color(tmp98);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(74)
	tmp97->onmouseleave->listen( Dynamic(new _Function_1_4(_g)));
}
;
	return null();
}

//Slider_obj::~Slider_obj() { }

Dynamic Slider_obj::__CreateEmpty() { return  new Slider_obj; }
hx::ObjectPtr< Slider_obj > Slider_obj::__new(::mint::render::luxe::LuxeMintRender _render,::mint::Slider _control)
{  hx::ObjectPtr< Slider_obj > _result_ = new Slider_obj();
	_result_->__construct(_render,_control);
	return _result_;}

Dynamic Slider_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Slider_obj > _result_ = new Slider_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Slider_obj::update_clip( Float _scale){
{
		HX_STACK_FRAME("mint.render.luxe.Slider","update_clip",0xaaaea745,"mint.render.luxe.Slider.update_clip","mint/render/luxe/Slider.hx",78,0x2351fdb0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_scale,"_scale")
		HX_STACK_LINE(80)
		::mint::Control tmp = this->control;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		::mint::Control tmp1 = tmp->clip_with;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		Float tmp2 = _scale;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(80)
		::phoenix::Rectangle tmp3 = ::mint::render::luxe::Convert_obj::bounds(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(80)
		::phoenix::Rectangle _clip = tmp3;		HX_STACK_VAR(_clip,"_clip");
		HX_STACK_LINE(82)
		::phoenix::geometry::QuadGeometry tmp4 = this->visual;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		::phoenix::Rectangle tmp5 = _clip;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(82)
		tmp4->set_clip_rect(tmp5);
		HX_STACK_LINE(83)
		::phoenix::geometry::QuadGeometry tmp6 = this->bar;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(83)
		::phoenix::Rectangle tmp7 = _clip;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(83)
		tmp6->set_clip_rect(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,update_clip,(void))

Void Slider_obj::onscale( Float _scale,Float _prev_scale){
{
		HX_STACK_FRAME("mint.render.luxe.Slider","onscale",0xbb8ed4ca,"mint.render.luxe.Slider.onscale","mint/render/luxe/Slider.hx",87,0x2351fdb0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_scale,"_scale")
		HX_STACK_ARG(_prev_scale,"_prev_scale")
		HX_STACK_LINE(89)
		Float tmp = _scale;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		this->update_clip(tmp);
	}
return null();
}


Void Slider_obj::onchange( Float value,Float prev_value){
{
		HX_STACK_FRAME("mint.render.luxe.Slider","onchange",0xdcb80330,"mint.render.luxe.Slider.onchange","mint/render/luxe/Slider.hx",93,0x2351fdb0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(prev_value,"prev_value")
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			::phoenix::geometry::QuadGeometry tmp = this->bar;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(95)
			::phoenix::Spatial tmp1 = tmp->transform->local;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(95)
			::phoenix::Vector _this = tmp1->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(95)
			::mint::Control tmp2 = this->control;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(95)
			Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(95)
			::mint::Control tmp4 = this->control;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(95)
			Float tmp5 = tmp4->canvas->scale;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(95)
			Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(95)
			::mint::Control tmp7 = this->control;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(95)
			Float tmp8 = tmp7->canvas->scale;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(95)
			::mint::Slider tmp9 = this->slider;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(95)
			Float tmp10 = tmp9->bar_x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(95)
			Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(95)
			Float tmp12 = (tmp6 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(95)
			Float _x = tmp12;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(95)
			::mint::Control tmp13 = this->control;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(95)
			Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(95)
			::mint::Control tmp15 = this->control;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(95)
			Float tmp16 = tmp15->canvas->scale;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(95)
			Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(95)
			::mint::Control tmp18 = this->control;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(95)
			Float tmp19 = tmp18->canvas->scale;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(95)
			::mint::Slider tmp20 = this->slider;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(95)
			Float tmp21 = tmp20->bar_y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(95)
			Float tmp22 = (tmp19 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(95)
			Float tmp23 = (tmp17 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(95)
			Float _y = tmp23;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(95)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(95)
			_this->ignore_listeners = true;
			HX_STACK_LINE(95)
			{
				HX_STACK_LINE(95)
				_this->x = _x;
				HX_STACK_LINE(95)
				bool tmp24 = _this->_construct;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(95)
				if ((tmp24)){
					HX_STACK_LINE(95)
					_this->x;
				}
				else{
					HX_STACK_LINE(95)
					bool tmp25 = (_this->listen_x != null());		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(95)
					bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(95)
					if ((tmp25)){
						HX_STACK_LINE(95)
						bool tmp27 = _this->ignore_listeners;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(95)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(95)
						tmp26 = !(tmp28);
					}
					else{
						HX_STACK_LINE(95)
						tmp26 = false;
					}
					HX_STACK_LINE(95)
					if ((tmp26)){
						HX_STACK_LINE(95)
						Float tmp27 = _x;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(95)
						_this->listen_x(tmp27);
					}
					HX_STACK_LINE(95)
					_this->x;
				}
			}
			HX_STACK_LINE(95)
			{
				HX_STACK_LINE(95)
				_this->y = _y;
				HX_STACK_LINE(95)
				bool tmp24 = _this->_construct;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(95)
				if ((tmp24)){
					HX_STACK_LINE(95)
					_this->y;
				}
				else{
					HX_STACK_LINE(95)
					bool tmp25 = (_this->listen_y != null());		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(95)
					bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(95)
					if ((tmp25)){
						HX_STACK_LINE(95)
						bool tmp27 = _this->ignore_listeners;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(95)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(95)
						tmp26 = !(tmp28);
					}
					else{
						HX_STACK_LINE(95)
						tmp26 = false;
					}
					HX_STACK_LINE(95)
					if ((tmp26)){
						HX_STACK_LINE(95)
						Float tmp27 = _y;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(95)
						_this->listen_y(tmp27);
					}
					HX_STACK_LINE(95)
					_this->y;
				}
			}
			HX_STACK_LINE(95)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(95)
			bool tmp24 = (_this->listen_x != null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(95)
			bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(95)
			if ((tmp24)){
				HX_STACK_LINE(95)
				bool tmp26 = _this->ignore_listeners;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(95)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(95)
				tmp25 = !(tmp27);
			}
			else{
				HX_STACK_LINE(95)
				tmp25 = false;
			}
			HX_STACK_LINE(95)
			if ((tmp25)){
				HX_STACK_LINE(95)
				Float tmp26 = _this->x;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(95)
				_this->listen_x(tmp26);
			}
			HX_STACK_LINE(95)
			bool tmp26 = (_this->listen_y != null());		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(95)
			bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(95)
			if ((tmp26)){
				HX_STACK_LINE(95)
				bool tmp28 = _this->ignore_listeners;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(95)
				bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(95)
				tmp27 = !(tmp29);
			}
			else{
				HX_STACK_LINE(95)
				tmp27 = false;
			}
			HX_STACK_LINE(95)
			if ((tmp27)){
				HX_STACK_LINE(95)
				Float tmp28 = _this->y;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(95)
				_this->listen_y(tmp28);
			}
			HX_STACK_LINE(95)
			_this;
		}
		HX_STACK_LINE(96)
		::phoenix::geometry::QuadGeometry tmp = this->bar;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		::mint::Control tmp1 = this->control;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(96)
		Float tmp2 = tmp1->canvas->scale;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(96)
		::mint::Slider tmp3 = this->slider;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(96)
		Float tmp4 = tmp3->bar_w;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(96)
		Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(96)
		::mint::Control tmp6 = this->control;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(96)
		Float tmp7 = tmp6->canvas->scale;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(96)
		::mint::Slider tmp8 = this->slider;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(96)
		Float tmp9 = tmp8->bar_h;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(96)
		Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(96)
		tmp->resize_xy(tmp5,tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Slider_obj,onchange,(void))

Void Slider_obj::ondestroy( ){
{
		HX_STACK_FRAME("mint.render.luxe.Slider","ondestroy",0x9c04433a,"mint.render.luxe.Slider.ondestroy","mint/render/luxe/Slider.hx",100,0x2351fdb0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(102)
		::phoenix::geometry::QuadGeometry tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		tmp->drop(null());
		HX_STACK_LINE(103)
		::phoenix::geometry::QuadGeometry tmp1 = this->bar;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(103)
		tmp1->drop(null());
		HX_STACK_LINE(104)
		this->visual = null();
		HX_STACK_LINE(105)
		this->bar = null();
	}
return null();
}


Void Slider_obj::onbounds( ){
{
		HX_STACK_FRAME("mint.render.luxe.Slider","onbounds",0x8b62f835,"mint.render.luxe.Slider.onbounds","mint/render/luxe/Slider.hx",109,0x2351fdb0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(111)
		{
			HX_STACK_LINE(111)
			::phoenix::geometry::QuadGeometry tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(111)
			::phoenix::Spatial tmp1 = tmp->transform->local;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(111)
			::phoenix::Vector _this = tmp1->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(111)
			::mint::Control tmp2 = this->control;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(111)
			Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(111)
			::mint::Control tmp4 = this->control;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(111)
			Float tmp5 = tmp4->canvas->scale;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(111)
			Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(111)
			Float _x = tmp6;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(111)
			::mint::Control tmp7 = this->control;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(111)
			Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(111)
			::mint::Control tmp9 = this->control;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(111)
			Float tmp10 = tmp9->canvas->scale;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(111)
			Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(111)
			Float _y = tmp11;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(111)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(111)
			_this->ignore_listeners = true;
			HX_STACK_LINE(111)
			{
				HX_STACK_LINE(111)
				_this->x = _x;
				HX_STACK_LINE(111)
				bool tmp12 = _this->_construct;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(111)
				if ((tmp12)){
					HX_STACK_LINE(111)
					_this->x;
				}
				else{
					HX_STACK_LINE(111)
					bool tmp13 = (_this->listen_x != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(111)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(111)
					if ((tmp13)){
						HX_STACK_LINE(111)
						bool tmp15 = _this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(111)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(111)
						tmp14 = !(tmp16);
					}
					else{
						HX_STACK_LINE(111)
						tmp14 = false;
					}
					HX_STACK_LINE(111)
					if ((tmp14)){
						HX_STACK_LINE(111)
						Float tmp15 = _x;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(111)
						_this->listen_x(tmp15);
					}
					HX_STACK_LINE(111)
					_this->x;
				}
			}
			HX_STACK_LINE(111)
			{
				HX_STACK_LINE(111)
				_this->y = _y;
				HX_STACK_LINE(111)
				bool tmp12 = _this->_construct;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(111)
				if ((tmp12)){
					HX_STACK_LINE(111)
					_this->y;
				}
				else{
					HX_STACK_LINE(111)
					bool tmp13 = (_this->listen_y != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(111)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(111)
					if ((tmp13)){
						HX_STACK_LINE(111)
						bool tmp15 = _this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(111)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(111)
						tmp14 = !(tmp16);
					}
					else{
						HX_STACK_LINE(111)
						tmp14 = false;
					}
					HX_STACK_LINE(111)
					if ((tmp14)){
						HX_STACK_LINE(111)
						Float tmp15 = _y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(111)
						_this->listen_y(tmp15);
					}
					HX_STACK_LINE(111)
					_this->y;
				}
			}
			HX_STACK_LINE(111)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(111)
			bool tmp12 = (_this->listen_x != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(111)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(111)
			if ((tmp12)){
				HX_STACK_LINE(111)
				bool tmp14 = _this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(111)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(111)
				tmp13 = !(tmp15);
			}
			else{
				HX_STACK_LINE(111)
				tmp13 = false;
			}
			HX_STACK_LINE(111)
			if ((tmp13)){
				HX_STACK_LINE(111)
				Float tmp14 = _this->x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(111)
				_this->listen_x(tmp14);
			}
			HX_STACK_LINE(111)
			bool tmp14 = (_this->listen_y != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(111)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(111)
			if ((tmp14)){
				HX_STACK_LINE(111)
				bool tmp16 = _this->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(111)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(111)
				tmp15 = !(tmp17);
			}
			else{
				HX_STACK_LINE(111)
				tmp15 = false;
			}
			HX_STACK_LINE(111)
			if ((tmp15)){
				HX_STACK_LINE(111)
				Float tmp16 = _this->y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(111)
				_this->listen_y(tmp16);
			}
			HX_STACK_LINE(111)
			_this;
		}
		HX_STACK_LINE(112)
		::phoenix::geometry::QuadGeometry tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(112)
		::mint::Control tmp1 = this->control;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(112)
		Float tmp2 = tmp1->w;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(112)
		::mint::Control tmp3 = this->control;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(112)
		Float tmp4 = tmp3->canvas->scale;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(112)
		Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(112)
		::mint::Control tmp6 = this->control;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(112)
		Float tmp7 = tmp6->h;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(112)
		::mint::Control tmp8 = this->control;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(112)
		Float tmp9 = tmp8->canvas->scale;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(112)
		Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(112)
		tmp->resize_xy(tmp5,tmp10);
		HX_STACK_LINE(114)
		{
			HX_STACK_LINE(114)
			::phoenix::geometry::QuadGeometry tmp11 = this->bar;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(114)
			::phoenix::Spatial tmp12 = tmp11->transform->local;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(114)
			::phoenix::Vector _this = tmp12->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(114)
			::mint::Control tmp13 = this->control;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(114)
			Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(114)
			::mint::Control tmp15 = this->control;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(114)
			Float tmp16 = tmp15->canvas->scale;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(114)
			Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(114)
			::mint::Control tmp18 = this->control;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(114)
			Float tmp19 = tmp18->canvas->scale;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(114)
			::mint::Slider tmp20 = this->slider;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(114)
			Float tmp21 = tmp20->bar_x;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(114)
			Float tmp22 = (tmp19 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(114)
			Float tmp23 = (tmp17 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(114)
			Float _x = tmp23;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(114)
			::mint::Control tmp24 = this->control;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(114)
			Float tmp25 = tmp24->y;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(114)
			::mint::Control tmp26 = this->control;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(114)
			Float tmp27 = tmp26->canvas->scale;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(114)
			Float tmp28 = (tmp25 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(114)
			::mint::Control tmp29 = this->control;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(114)
			Float tmp30 = tmp29->canvas->scale;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(114)
			::mint::Slider tmp31 = this->slider;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(114)
			Float tmp32 = tmp31->bar_y;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(114)
			Float tmp33 = (tmp30 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(114)
			Float tmp34 = (tmp28 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(114)
			Float _y = tmp34;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(114)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(114)
			_this->ignore_listeners = true;
			HX_STACK_LINE(114)
			{
				HX_STACK_LINE(114)
				_this->x = _x;
				HX_STACK_LINE(114)
				bool tmp35 = _this->_construct;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(114)
				if ((tmp35)){
					HX_STACK_LINE(114)
					_this->x;
				}
				else{
					HX_STACK_LINE(114)
					bool tmp36 = (_this->listen_x != null());		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(114)
					bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(114)
					if ((tmp36)){
						HX_STACK_LINE(114)
						bool tmp38 = _this->ignore_listeners;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(114)
						bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(114)
						tmp37 = !(tmp39);
					}
					else{
						HX_STACK_LINE(114)
						tmp37 = false;
					}
					HX_STACK_LINE(114)
					if ((tmp37)){
						HX_STACK_LINE(114)
						Float tmp38 = _x;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(114)
						_this->listen_x(tmp38);
					}
					HX_STACK_LINE(114)
					_this->x;
				}
			}
			HX_STACK_LINE(114)
			{
				HX_STACK_LINE(114)
				_this->y = _y;
				HX_STACK_LINE(114)
				bool tmp35 = _this->_construct;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(114)
				if ((tmp35)){
					HX_STACK_LINE(114)
					_this->y;
				}
				else{
					HX_STACK_LINE(114)
					bool tmp36 = (_this->listen_y != null());		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(114)
					bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(114)
					if ((tmp36)){
						HX_STACK_LINE(114)
						bool tmp38 = _this->ignore_listeners;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(114)
						bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(114)
						tmp37 = !(tmp39);
					}
					else{
						HX_STACK_LINE(114)
						tmp37 = false;
					}
					HX_STACK_LINE(114)
					if ((tmp37)){
						HX_STACK_LINE(114)
						Float tmp38 = _y;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(114)
						_this->listen_y(tmp38);
					}
					HX_STACK_LINE(114)
					_this->y;
				}
			}
			HX_STACK_LINE(114)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(114)
			bool tmp35 = (_this->listen_x != null());		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(114)
			bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(114)
			if ((tmp35)){
				HX_STACK_LINE(114)
				bool tmp37 = _this->ignore_listeners;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(114)
				bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(114)
				tmp36 = !(tmp38);
			}
			else{
				HX_STACK_LINE(114)
				tmp36 = false;
			}
			HX_STACK_LINE(114)
			if ((tmp36)){
				HX_STACK_LINE(114)
				Float tmp37 = _this->x;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(114)
				_this->listen_x(tmp37);
			}
			HX_STACK_LINE(114)
			bool tmp37 = (_this->listen_y != null());		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(114)
			bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(114)
			if ((tmp37)){
				HX_STACK_LINE(114)
				bool tmp39 = _this->ignore_listeners;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(114)
				bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(114)
				tmp38 = !(tmp40);
			}
			else{
				HX_STACK_LINE(114)
				tmp38 = false;
			}
			HX_STACK_LINE(114)
			if ((tmp38)){
				HX_STACK_LINE(114)
				Float tmp39 = _this->y;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(114)
				_this->listen_y(tmp39);
			}
			HX_STACK_LINE(114)
			_this;
		}
		HX_STACK_LINE(115)
		::phoenix::geometry::QuadGeometry tmp11 = this->bar;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(115)
		::mint::Control tmp12 = this->control;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(115)
		Float tmp13 = tmp12->canvas->scale;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(115)
		::mint::Slider tmp14 = this->slider;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(115)
		Float tmp15 = tmp14->bar_w;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(115)
		Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(115)
		::mint::Control tmp17 = this->control;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(115)
		Float tmp18 = tmp17->canvas->scale;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(115)
		::mint::Slider tmp19 = this->slider;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(115)
		Float tmp20 = tmp19->bar_h;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(115)
		Float tmp21 = (tmp18 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(115)
		tmp11->resize_xy(tmp16,tmp21);
	}
return null();
}


Void Slider_obj::onclip( bool _disable,Float _x,Float _y,Float _w,Float _h){
{
		HX_STACK_FRAME("mint.render.luxe.Slider","onclip",0xfe53f090,"mint.render.luxe.Slider.onclip","mint/render/luxe/Slider.hx",119,0x2351fdb0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_disable,"_disable")
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_w,"_w")
		HX_STACK_ARG(_h,"_h")
		HX_STACK_LINE(121)
		::mint::Control tmp = this->control;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(121)
		Float tmp1 = tmp->canvas->scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(121)
		this->update_clip(tmp1);
	}
return null();
}


Void Slider_obj::onvisible( bool _visible){
{
		HX_STACK_FRAME("mint.render.luxe.Slider","onvisible",0x1aa28eb2,"mint.render.luxe.Slider.onvisible","mint/render/luxe/Slider.hx",125,0x2351fdb0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_visible,"_visible")
		HX_STACK_LINE(127)
		::phoenix::geometry::QuadGeometry tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(127)
		bool tmp1 = _visible;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(127)
		tmp->set_visible(tmp1);
		HX_STACK_LINE(128)
		::phoenix::geometry::QuadGeometry tmp2 = this->bar;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(128)
		bool tmp3 = _visible;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(128)
		tmp2->set_visible(tmp3);
	}
return null();
}


Void Slider_obj::ondepth( Float _depth){
{
		HX_STACK_FRAME("mint.render.luxe.Slider","ondepth",0x19e9f743,"mint.render.luxe.Slider.ondepth","mint/render/luxe/Slider.hx",132,0x2351fdb0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_depth,"_depth")
		HX_STACK_LINE(134)
		::phoenix::geometry::QuadGeometry tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(134)
		::mint::render::luxe::LuxeMintRender tmp1 = this->render;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(134)
		Dynamic tmp2 = tmp1->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(134)
		Float tmp3 = _depth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(134)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(134)
		tmp->set_depth(tmp4);
		HX_STACK_LINE(135)
		::phoenix::geometry::QuadGeometry tmp5 = this->bar;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(135)
		::phoenix::geometry::QuadGeometry tmp6 = this->visual;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(135)
		Float tmp7 = tmp6->state->depth;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(135)
		Float tmp8 = (tmp7 + ((Float)0.001));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(135)
		tmp5->set_depth(tmp8);
	}
return null();
}



Slider_obj::Slider_obj()
{
}

void Slider_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Slider);
	HX_MARK_MEMBER_NAME(slider,"slider");
	HX_MARK_MEMBER_NAME(visual,"visual");
	HX_MARK_MEMBER_NAME(bar,"bar");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(color_bar,"color_bar");
	HX_MARK_MEMBER_NAME(color_bar_hover,"color_bar_hover");
	HX_MARK_MEMBER_NAME(render,"render");
	::mint::render::Render_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Slider_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(slider,"slider");
	HX_VISIT_MEMBER_NAME(visual,"visual");
	HX_VISIT_MEMBER_NAME(bar,"bar");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(color_bar,"color_bar");
	HX_VISIT_MEMBER_NAME(color_bar_hover,"color_bar_hover");
	HX_VISIT_MEMBER_NAME(render,"render");
	::mint::render::Render_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Slider_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bar") ) { return bar; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"slider") ) { return slider; }
		if (HX_FIELD_EQ(inName,"visual") ) { return visual; }
		if (HX_FIELD_EQ(inName,"render") ) { return render; }
		if (HX_FIELD_EQ(inName,"onclip") ) { return onclip_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onscale") ) { return onscale_dyn(); }
		if (HX_FIELD_EQ(inName,"ondepth") ) { return ondepth_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onchange") ) { return onchange_dyn(); }
		if (HX_FIELD_EQ(inName,"onbounds") ) { return onbounds_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"color_bar") ) { return color_bar; }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onvisible") ) { return onvisible_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"update_clip") ) { return update_clip_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"color_bar_hover") ) { return color_bar_hover; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Slider_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bar") ) { bar=inValue.Cast< ::phoenix::geometry::QuadGeometry >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"slider") ) { slider=inValue.Cast< ::mint::Slider >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visual") ) { visual=inValue.Cast< ::phoenix::geometry::QuadGeometry >(); return inValue; }
		if (HX_FIELD_EQ(inName,"render") ) { render=inValue.Cast< ::mint::render::luxe::LuxeMintRender >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"color_bar") ) { color_bar=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"color_bar_hover") ) { color_bar_hover=inValue.Cast< ::phoenix::Color >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Slider_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("slider","\x21","\xc6","\x04","\x70"));
	outFields->push(HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef"));
	outFields->push(HX_HCSTRING("bar","\xd3","\xb1","\x4a","\x00"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("color_bar","\xb7","\x55","\xaa","\x2f"));
	outFields->push(HX_HCSTRING("color_bar_hover","\xf4","\x25","\xbc","\xcc"));
	outFields->push(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::mint::Slider*/ ,(int)offsetof(Slider_obj,slider),HX_HCSTRING("slider","\x21","\xc6","\x04","\x70")},
	{hx::fsObject /*::phoenix::geometry::QuadGeometry*/ ,(int)offsetof(Slider_obj,visual),HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef")},
	{hx::fsObject /*::phoenix::geometry::QuadGeometry*/ ,(int)offsetof(Slider_obj,bar),HX_HCSTRING("bar","\xd3","\xb1","\x4a","\x00")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Slider_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Slider_obj,color_bar),HX_HCSTRING("color_bar","\xb7","\x55","\xaa","\x2f")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Slider_obj,color_bar_hover),HX_HCSTRING("color_bar_hover","\xf4","\x25","\xbc","\xcc")},
	{hx::fsObject /*::mint::render::luxe::LuxeMintRender*/ ,(int)offsetof(Slider_obj,render),HX_HCSTRING("render","\x56","\x6b","\x29","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("slider","\x21","\xc6","\x04","\x70"),
	HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef"),
	HX_HCSTRING("bar","\xd3","\xb1","\x4a","\x00"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("color_bar","\xb7","\x55","\xaa","\x2f"),
	HX_HCSTRING("color_bar_hover","\xf4","\x25","\xbc","\xcc"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("update_clip","\x06","\x84","\x3e","\x47"),
	HX_HCSTRING("onscale","\x0b","\xfd","\xde","\x7b"),
	HX_HCSTRING("onchange","\xcf","\x13","\x8b","\x62"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onbounds","\xd4","\x08","\x36","\x11"),
	HX_HCSTRING("onclip","\x6f","\x4b","\x73","\xf9"),
	HX_HCSTRING("onvisible","\x33","\x09","\x7e","\xad"),
	HX_HCSTRING("ondepth","\x84","\x1f","\x3a","\xda"),
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
	__mClass->mName = HX_HCSTRING("mint.render.luxe.Slider","\x2d","\xe1","\xe6","\x60");
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
} // end namespace render
} // end namespace luxe
