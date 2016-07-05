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
#ifndef INCLUDED_mint_Label
#include <mint/Label.h>
#endif
#ifndef INCLUDED_mint_Window
#include <mint/Window.h>
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
#ifndef INCLUDED_mint_render_luxe_Window
#include <mint/render/luxe/Window.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Quaternion
#include <phoenix/Quaternion.h>
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
#ifndef INCLUDED_phoenix_geometry_RectangleGeometry
#include <phoenix/geometry/RectangleGeometry.h>
#endif
namespace mint{
namespace render{
namespace luxe{

Void Window_obj::__construct(::mint::render::luxe::LuxeMintRender _render,::mint::Window _control)
{
HX_STACK_FRAME("mint.render.luxe.Window","new",0x83137dee,"mint.render.luxe.Window.new","mint/render/luxe/Window.hx",47,0x58bb7b41)
HX_STACK_THIS(this)
HX_STACK_ARG(_render,"_render")
HX_STACK_ARG(_control,"_control")
{
	HX_STACK_LINE(47)
	::mint::render::luxe::Window _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(49)
	this->window = _control;
	HX_STACK_LINE(50)
	this->render = _render;
	HX_STACK_LINE(52)
	::mint::render::luxe::LuxeMintRender tmp = this->render;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	::mint::Window tmp1 = _control;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(54)
	::mint::Window tmp2 = this->window;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(54)
	Dynamic tmp3 = tmp2->options->__Field(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(54)
	Dynamic _opt = tmp3;		HX_STACK_VAR(_opt,"_opt");
	HX_STACK_LINE(56)
	::phoenix::Color tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(56)
	{
		HX_STACK_LINE(56)
		bool tmp5 = (_opt->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(56)
		if ((tmp5)){
			HX_STACK_LINE(56)
			::phoenix::Color tmp6 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(56)
			::phoenix::Color tmp7 = tmp6->rgb((int)2039583);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(56)
			_opt->__FieldRef(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")) = tmp7;
		}
		HX_STACK_LINE(56)
		tmp4 = _opt->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );
	}
	HX_STACK_LINE(56)
	this->color = tmp4;
	HX_STACK_LINE(57)
	::phoenix::Color tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(57)
	{
		HX_STACK_LINE(57)
		bool tmp6 = (_opt->__Field(HX_HCSTRING("color_border","\x88","\x2f","\x97","\x2e"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(57)
		if ((tmp6)){
			HX_STACK_LINE(57)
			::phoenix::Color tmp7 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(57)
			::phoenix::Color tmp8 = tmp7->rgb((int)394758);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(57)
			_opt->__FieldRef(HX_HCSTRING("color_border","\x88","\x2f","\x97","\x2e")) = tmp8;
		}
		HX_STACK_LINE(57)
		tmp5 = _opt->__Field(HX_HCSTRING("color_border","\x88","\x2f","\x97","\x2e"), hx::paccDynamic );
	}
	HX_STACK_LINE(57)
	this->color_border = tmp5;
	HX_STACK_LINE(58)
	::phoenix::Color tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(58)
	{
		HX_STACK_LINE(58)
		bool tmp7 = (_opt->__Field(HX_HCSTRING("color_titlebar","\xd7","\xec","\x52","\xda"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(58)
		if ((tmp7)){
			HX_STACK_LINE(58)
			::phoenix::Color tmp8 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(58)
			::phoenix::Color tmp9 = tmp8->rgb((int)2434341);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(58)
			_opt->__FieldRef(HX_HCSTRING("color_titlebar","\xd7","\xec","\x52","\xda")) = tmp9;
		}
		HX_STACK_LINE(58)
		tmp6 = _opt->__Field(HX_HCSTRING("color_titlebar","\xd7","\xec","\x52","\xda"), hx::paccDynamic );
	}
	HX_STACK_LINE(58)
	this->color_titlebar = tmp6;
	HX_STACK_LINE(59)
	::phoenix::Color tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(59)
	{
		HX_STACK_LINE(59)
		bool tmp8 = (_opt->__Field(HX_HCSTRING("color_close","\x9c","\x7c","\xde","\xc9"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(59)
		if ((tmp8)){
			HX_STACK_LINE(59)
			::phoenix::Color tmp9 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(59)
			::phoenix::Color tmp10 = tmp9->rgb((int)4473924);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(59)
			_opt->__FieldRef(HX_HCSTRING("color_close","\x9c","\x7c","\xde","\xc9")) = tmp10;
		}
		HX_STACK_LINE(59)
		tmp7 = _opt->__Field(HX_HCSTRING("color_close","\x9c","\x7c","\xde","\xc9"), hx::paccDynamic );
	}
	HX_STACK_LINE(59)
	this->color_close = tmp7;
	HX_STACK_LINE(60)
	::phoenix::Color tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(60)
	{
		HX_STACK_LINE(60)
		bool tmp9 = (_opt->__Field(HX_HCSTRING("color_collapse","\x09","\x13","\x05","\xd2"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(60)
		if ((tmp9)){
			HX_STACK_LINE(60)
			::phoenix::Color tmp10 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(60)
			::phoenix::Color tmp11 = tmp10->rgb((int)4473924);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(60)
			_opt->__FieldRef(HX_HCSTRING("color_collapse","\x09","\x13","\x05","\xd2")) = tmp11;
		}
		HX_STACK_LINE(60)
		tmp8 = _opt->__Field(HX_HCSTRING("color_collapse","\x09","\x13","\x05","\xd2"), hx::paccDynamic );
	}
	HX_STACK_LINE(60)
	this->color_collapse = tmp8;
	HX_STACK_LINE(61)
	::phoenix::Color tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		bool tmp10 = (_opt->__Field(HX_HCSTRING("color_close_hover","\x99","\x06","\x44","\x68"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(61)
		if ((tmp10)){
			HX_STACK_LINE(61)
			::phoenix::Color tmp11 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(61)
			::phoenix::Color tmp12 = tmp11->rgb((int)8947848);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(61)
			_opt->__FieldRef(HX_HCSTRING("color_close_hover","\x99","\x06","\x44","\x68")) = tmp12;
		}
		HX_STACK_LINE(61)
		tmp9 = _opt->__Field(HX_HCSTRING("color_close_hover","\x99","\x06","\x44","\x68"), hx::paccDynamic );
	}
	HX_STACK_LINE(61)
	this->color_close_hover = tmp9;
	HX_STACK_LINE(62)
	::phoenix::Color tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(62)
	{
		HX_STACK_LINE(62)
		bool tmp11 = (_opt->__Field(HX_HCSTRING("color_collapse_hover","\xc6","\xac","\x22","\x59"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(62)
		if ((tmp11)){
			HX_STACK_LINE(62)
			::phoenix::Color tmp12 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(62)
			::phoenix::Color tmp13 = tmp12->rgb((int)8947848);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(62)
			_opt->__FieldRef(HX_HCSTRING("color_collapse_hover","\xc6","\xac","\x22","\x59")) = tmp13;
		}
		HX_STACK_LINE(62)
		tmp10 = _opt->__Field(HX_HCSTRING("color_collapse_hover","\xc6","\xac","\x22","\x59"), hx::paccDynamic );
	}
	HX_STACK_LINE(62)
	this->color_collapse_hover = tmp10;
	HX_STACK_LINE(64)
	::luxe::Draw tmp11 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(65)
	::mint::Control tmp12 = this->control;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(65)
	::String tmp13 = tmp12->name;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(65)
	::String tmp14 = (tmp13 + HX_HCSTRING(".visual","\x6e","\x79","\x67","\x68"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(66)
	::mint::render::luxe::LuxeMintRender tmp15 = this->render;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(66)
	::phoenix::Batcher tmp16 = tmp15->options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(67)
	::mint::Control tmp17 = this->control;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(67)
	Float tmp18 = tmp17->x;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(67)
	::mint::Control tmp19 = this->control;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(67)
	Float tmp20 = tmp19->canvas->scale;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(67)
	Float tmp21 = (tmp18 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(68)
	::mint::Control tmp22 = this->control;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(68)
	Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(68)
	::mint::Control tmp24 = this->control;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(68)
	Float tmp25 = tmp24->canvas->scale;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(68)
	Float tmp26 = (tmp23 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(69)
	::mint::Control tmp27 = this->control;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(69)
	Float tmp28 = tmp27->w;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(69)
	::mint::Control tmp29 = this->control;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(69)
	Float tmp30 = tmp29->canvas->scale;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(69)
	Float tmp31 = (tmp28 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(70)
	::mint::Control tmp32 = this->control;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(70)
	Float tmp33 = tmp32->h;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(70)
	::mint::Control tmp34 = this->control;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(70)
	Float tmp35 = tmp34->canvas->scale;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(70)
	Float tmp36 = (tmp33 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(71)
	::phoenix::Color tmp37 = this->color;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(72)
	::mint::render::luxe::LuxeMintRender tmp38 = this->render;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(72)
	Dynamic tmp39 = tmp38->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(72)
	::mint::Window tmp40 = this->window;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(72)
	Float tmp41 = tmp40->depth;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(72)
	Float tmp42 = (tmp39 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(73)
	::mint::Window tmp43 = this->window;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(73)
	bool tmp44 = tmp43->visible;		HX_STACK_VAR(tmp44,"tmp44");
	struct _Function_1_1{
		inline static Dynamic Block( Float &tmp42,bool &tmp44,Float &tmp36,Float &tmp26,Float &tmp21,Float &tmp31,::phoenix::Batcher &tmp16,::phoenix::Color &tmp37,::String &tmp14){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/render/luxe/Window.hx",64,0x58bb7b41)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tmp14,false);
				__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp16,false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp21,false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp26,false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp31,false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp36,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp37,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp42,false);
				__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , tmp44,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(64)
	Dynamic tmp45 = _Function_1_1::Block(tmp42,tmp44,tmp36,tmp26,tmp21,tmp31,tmp16,tmp37,tmp14);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(64)
	::phoenix::geometry::QuadGeometry tmp46 = tmp11->box(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(64)
	this->visual = tmp46;
	HX_STACK_LINE(76)
	::luxe::Draw tmp47 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(77)
	::mint::Control tmp48 = this->control;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(77)
	::String tmp49 = tmp48->name;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(77)
	::String tmp50 = (tmp49 + HX_HCSTRING(".top","\x27","\x37","\xc0","\x1e"));		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(78)
	::mint::render::luxe::LuxeMintRender tmp51 = this->render;		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(78)
	::phoenix::Batcher tmp52 = tmp51->options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(79)
	::mint::Control tmp53 = this->control;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(79)
	Float tmp54 = tmp53->canvas->scale;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(79)
	::mint::Window tmp55 = this->window;		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(79)
	Float tmp56 = tmp55->title->x;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(79)
	Float tmp57 = (tmp54 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(80)
	::mint::Control tmp58 = this->control;		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(80)
	Float tmp59 = tmp58->canvas->scale;		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(80)
	::mint::Window tmp60 = this->window;		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(80)
	Float tmp61 = tmp60->title->y;		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(80)
	Float tmp62 = (tmp59 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(81)
	::mint::Control tmp63 = this->control;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(81)
	Float tmp64 = tmp63->canvas->scale;		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(81)
	::mint::Window tmp65 = this->window;		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(81)
	Float tmp66 = tmp65->title->w;		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(81)
	Float tmp67 = (tmp64 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(82)
	::mint::Control tmp68 = this->control;		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(82)
	Float tmp69 = tmp68->canvas->scale;		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(82)
	::mint::Window tmp70 = this->window;		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(82)
	Float tmp71 = tmp70->title->h;		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(82)
	Float tmp72 = (tmp69 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(83)
	::phoenix::Color tmp73 = this->color_titlebar;		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(84)
	::mint::render::luxe::LuxeMintRender tmp74 = this->render;		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(84)
	Dynamic tmp75 = tmp74->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(84)
	::mint::Window tmp76 = this->window;		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(84)
	Float tmp77 = tmp76->depth;		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(84)
	Float tmp78 = (tmp75 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(84)
	Float tmp79 = (tmp78 + ((Float)0.001));		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(85)
	::mint::Window tmp80 = this->window;		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(85)
	bool tmp81 = tmp80->visible;		HX_STACK_VAR(tmp81,"tmp81");
	struct _Function_1_2{
		inline static Dynamic Block( bool &tmp81,::phoenix::Color &tmp73,::phoenix::Batcher &tmp52,Float &tmp72,Float &tmp62,Float &tmp79,Float &tmp67,::String &tmp50,Float &tmp57){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/render/luxe/Window.hx",76,0x58bb7b41)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tmp50,false);
				__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp52,false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp57,false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp62,false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp67,false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp72,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp73,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp79,false);
				__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , tmp81,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(76)
	Dynamic tmp82 = _Function_1_2::Block(tmp81,tmp73,tmp52,tmp72,tmp62,tmp79,tmp67,tmp50,tmp57);		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(76)
	::phoenix::geometry::QuadGeometry tmp83 = tmp47->box(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(76)
	this->top = tmp83;
	HX_STACK_LINE(88)
	::luxe::Draw tmp84 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(89)
	::mint::Control tmp85 = this->control;		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(89)
	::String tmp86 = tmp85->name;		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(89)
	::String tmp87 = (tmp86 + HX_HCSTRING(".border","\x9a","\xa3","\xf5","\xdc"));		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(90)
	::mint::render::luxe::LuxeMintRender tmp88 = this->render;		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(90)
	::phoenix::Batcher tmp89 = tmp88->options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp89,"tmp89");
	HX_STACK_LINE(91)
	::mint::Control tmp90 = this->control;		HX_STACK_VAR(tmp90,"tmp90");
	HX_STACK_LINE(91)
	Float tmp91 = tmp90->x;		HX_STACK_VAR(tmp91,"tmp91");
	HX_STACK_LINE(91)
	::mint::Control tmp92 = this->control;		HX_STACK_VAR(tmp92,"tmp92");
	HX_STACK_LINE(91)
	Float tmp93 = tmp92->canvas->scale;		HX_STACK_VAR(tmp93,"tmp93");
	HX_STACK_LINE(91)
	Float tmp94 = (tmp91 * tmp93);		HX_STACK_VAR(tmp94,"tmp94");
	HX_STACK_LINE(92)
	::mint::Control tmp95 = this->control;		HX_STACK_VAR(tmp95,"tmp95");
	HX_STACK_LINE(92)
	Float tmp96 = tmp95->y;		HX_STACK_VAR(tmp96,"tmp96");
	HX_STACK_LINE(92)
	::mint::Control tmp97 = this->control;		HX_STACK_VAR(tmp97,"tmp97");
	HX_STACK_LINE(92)
	Float tmp98 = tmp97->canvas->scale;		HX_STACK_VAR(tmp98,"tmp98");
	HX_STACK_LINE(92)
	Float tmp99 = (tmp96 * tmp98);		HX_STACK_VAR(tmp99,"tmp99");
	HX_STACK_LINE(93)
	::mint::Control tmp100 = this->control;		HX_STACK_VAR(tmp100,"tmp100");
	HX_STACK_LINE(93)
	Float tmp101 = tmp100->w;		HX_STACK_VAR(tmp101,"tmp101");
	HX_STACK_LINE(93)
	::mint::Control tmp102 = this->control;		HX_STACK_VAR(tmp102,"tmp102");
	HX_STACK_LINE(93)
	Float tmp103 = tmp102->canvas->scale;		HX_STACK_VAR(tmp103,"tmp103");
	HX_STACK_LINE(93)
	Float tmp104 = (tmp101 * tmp103);		HX_STACK_VAR(tmp104,"tmp104");
	HX_STACK_LINE(93)
	Float tmp105 = (tmp104 + (int)1);		HX_STACK_VAR(tmp105,"tmp105");
	HX_STACK_LINE(94)
	::mint::Control tmp106 = this->control;		HX_STACK_VAR(tmp106,"tmp106");
	HX_STACK_LINE(94)
	Float tmp107 = tmp106->h;		HX_STACK_VAR(tmp107,"tmp107");
	HX_STACK_LINE(94)
	::mint::Control tmp108 = this->control;		HX_STACK_VAR(tmp108,"tmp108");
	HX_STACK_LINE(94)
	Float tmp109 = tmp108->canvas->scale;		HX_STACK_VAR(tmp109,"tmp109");
	HX_STACK_LINE(94)
	Float tmp110 = (tmp107 * tmp109);		HX_STACK_VAR(tmp110,"tmp110");
	HX_STACK_LINE(95)
	::phoenix::Color tmp111 = this->color_border;		HX_STACK_VAR(tmp111,"tmp111");
	HX_STACK_LINE(96)
	::mint::render::luxe::LuxeMintRender tmp112 = this->render;		HX_STACK_VAR(tmp112,"tmp112");
	HX_STACK_LINE(96)
	Dynamic tmp113 = tmp112->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp113,"tmp113");
	HX_STACK_LINE(96)
	::mint::Window tmp114 = this->window;		HX_STACK_VAR(tmp114,"tmp114");
	HX_STACK_LINE(96)
	Float tmp115 = tmp114->depth;		HX_STACK_VAR(tmp115,"tmp115");
	HX_STACK_LINE(96)
	Float tmp116 = (tmp113 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
	HX_STACK_LINE(96)
	Float tmp117 = (tmp116 + ((Float)0.002));		HX_STACK_VAR(tmp117,"tmp117");
	HX_STACK_LINE(97)
	::mint::Window tmp118 = this->window;		HX_STACK_VAR(tmp118,"tmp118");
	HX_STACK_LINE(97)
	bool tmp119 = tmp118->visible;		HX_STACK_VAR(tmp119,"tmp119");
	struct _Function_1_3{
		inline static Dynamic Block( Float &tmp110,Float &tmp99,::phoenix::Color &tmp111,bool &tmp119,Float &tmp117,Float &tmp94,::phoenix::Batcher &tmp89,::String &tmp87,Float &tmp105){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/render/luxe/Window.hx",88,0x58bb7b41)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tmp87,false);
				__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp89,false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp94,false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp99,false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp105,false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp110,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp111,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp117,false);
				__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , tmp119,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(88)
	Dynamic tmp120 = _Function_1_3::Block(tmp110,tmp99,tmp111,tmp119,tmp117,tmp94,tmp89,tmp87,tmp105);		HX_STACK_VAR(tmp120,"tmp120");
	HX_STACK_LINE(88)
	::phoenix::geometry::RectangleGeometry tmp121 = tmp84->rectangle(tmp120);		HX_STACK_VAR(tmp121,"tmp121");
	HX_STACK_LINE(88)
	this->border = tmp121;
	HX_STACK_LINE(100)
	::luxe::Draw tmp122 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp122,"tmp122");
	HX_STACK_LINE(101)
	::mint::Control tmp123 = this->control;		HX_STACK_VAR(tmp123,"tmp123");
	HX_STACK_LINE(101)
	::String tmp124 = tmp123->name;		HX_STACK_VAR(tmp124,"tmp124");
	HX_STACK_LINE(101)
	::String tmp125 = (tmp124 + HX_HCSTRING(".border","\x9a","\xa3","\xf5","\xdc"));		HX_STACK_VAR(tmp125,"tmp125");
	HX_STACK_LINE(102)
	::mint::render::luxe::LuxeMintRender tmp126 = this->render;		HX_STACK_VAR(tmp126,"tmp126");
	HX_STACK_LINE(102)
	::phoenix::Batcher tmp127 = tmp126->options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp127,"tmp127");
	HX_STACK_LINE(107)
	::phoenix::Color tmp128 = this->color_collapse;		HX_STACK_VAR(tmp128,"tmp128");
	HX_STACK_LINE(108)
	::mint::render::luxe::LuxeMintRender tmp129 = this->render;		HX_STACK_VAR(tmp129,"tmp129");
	HX_STACK_LINE(108)
	Dynamic tmp130 = tmp129->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp130,"tmp130");
	HX_STACK_LINE(108)
	::mint::Window tmp131 = this->window;		HX_STACK_VAR(tmp131,"tmp131");
	HX_STACK_LINE(108)
	Float tmp132 = tmp131->depth;		HX_STACK_VAR(tmp132,"tmp132");
	HX_STACK_LINE(108)
	Float tmp133 = (tmp130 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
	HX_STACK_LINE(108)
	Float tmp134 = (tmp133 + ((Float)0.003));		HX_STACK_VAR(tmp134,"tmp134");
	HX_STACK_LINE(109)
	::mint::Window tmp135 = this->window;		HX_STACK_VAR(tmp135,"tmp135");
	HX_STACK_LINE(109)
	bool tmp136 = tmp135->collapsible;		HX_STACK_VAR(tmp136,"tmp136");
	HX_STACK_LINE(109)
	bool tmp137;		HX_STACK_VAR(tmp137,"tmp137");
	HX_STACK_LINE(109)
	if ((tmp136)){
		HX_STACK_LINE(109)
		::mint::Window tmp138 = this->window;		HX_STACK_VAR(tmp138,"tmp138");
		HX_STACK_LINE(109)
		::mint::Window tmp139 = tmp138;		HX_STACK_VAR(tmp139,"tmp139");
		HX_STACK_LINE(109)
		tmp137 = tmp139->visible;
	}
	else{
		HX_STACK_LINE(109)
		tmp137 = false;
	}
	struct _Function_1_4{
		inline static Dynamic Block( ::phoenix::Color &tmp128,bool &tmp137,Float &tmp134,::phoenix::Batcher &tmp127,::String &tmp125){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/render/luxe/Window.hx",100,0x58bb7b41)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tmp125,false);
				__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp127,false);
				__result->Add(HX_HCSTRING("r","\x72","\x00","\x00","\x00") , ((Dynamic)((int)5)),false);
				__result->Add(HX_HCSTRING("solid","\x2b","\xb4","\xc5","\x80") , true,false);
				__result->Add(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22") , ((Dynamic)((int)180)),false);
				__result->Add(HX_HCSTRING("sides","\xfc","\x56","\xc8","\x7c") , (int)3,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp128,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp134,false);
				__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , tmp137,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(100)
	Dynamic tmp138 = _Function_1_4::Block(tmp128,tmp137,tmp134,tmp127,tmp125);		HX_STACK_VAR(tmp138,"tmp138");
	HX_STACK_LINE(100)
	::phoenix::geometry::Geometry tmp139 = tmp122->ngon(tmp138);		HX_STACK_VAR(tmp139,"tmp139");
	HX_STACK_LINE(100)
	this->collapse = tmp139;
	HX_STACK_LINE(113)
	::phoenix::Vector tmp140 = ::phoenix::Vector_obj::__new(((Float)0.00),((Float)0.00),null(),null());		HX_STACK_VAR(tmp140,"tmp140");
	HX_STACK_LINE(114)
	::phoenix::Vector tmp141 = ::phoenix::Vector_obj::__new(((Float)-0.50),((Float)0.33),null(),null());		HX_STACK_VAR(tmp141,"tmp141");
	HX_STACK_LINE(115)
	::phoenix::Vector tmp142 = ::phoenix::Vector_obj::__new(((Float)-0.17),((Float)0.00),null(),null());		HX_STACK_VAR(tmp142,"tmp142");
	HX_STACK_LINE(116)
	::phoenix::Vector tmp143 = ::phoenix::Vector_obj::__new(((Float)-0.50),((Float)-0.33),null(),null());		HX_STACK_VAR(tmp143,"tmp143");
	HX_STACK_LINE(117)
	::phoenix::Vector tmp144 = ::phoenix::Vector_obj::__new(((Float)-0.33),((Float)-0.50),null(),null());		HX_STACK_VAR(tmp144,"tmp144");
	HX_STACK_LINE(118)
	::phoenix::Vector tmp145 = ::phoenix::Vector_obj::__new(((Float)0.00),((Float)-0.17),null(),null());		HX_STACK_VAR(tmp145,"tmp145");
	HX_STACK_LINE(119)
	::phoenix::Vector tmp146 = ::phoenix::Vector_obj::__new(((Float)0.33),((Float)-0.50),null(),null());		HX_STACK_VAR(tmp146,"tmp146");
	HX_STACK_LINE(120)
	::phoenix::Vector tmp147 = ::phoenix::Vector_obj::__new(((Float)0.50),((Float)-0.33),null(),null());		HX_STACK_VAR(tmp147,"tmp147");
	HX_STACK_LINE(121)
	::phoenix::Vector tmp148 = ::phoenix::Vector_obj::__new(((Float)0.17),((Float)0.00),null(),null());		HX_STACK_VAR(tmp148,"tmp148");
	HX_STACK_LINE(122)
	::phoenix::Vector tmp149 = ::phoenix::Vector_obj::__new(((Float)0.50),((Float)0.33),null(),null());		HX_STACK_VAR(tmp149,"tmp149");
	HX_STACK_LINE(123)
	::phoenix::Vector tmp150 = ::phoenix::Vector_obj::__new(((Float)0.33),((Float)0.50),null(),null());		HX_STACK_VAR(tmp150,"tmp150");
	HX_STACK_LINE(124)
	::phoenix::Vector tmp151 = ::phoenix::Vector_obj::__new(((Float)0.00),((Float)0.17),null(),null());		HX_STACK_VAR(tmp151,"tmp151");
	HX_STACK_LINE(125)
	::phoenix::Vector tmp152 = ::phoenix::Vector_obj::__new(((Float)-0.33),((Float)0.50),null(),null());		HX_STACK_VAR(tmp152,"tmp152");
	HX_STACK_LINE(126)
	::phoenix::Vector tmp153 = ::phoenix::Vector_obj::__new(((Float)-0.50),((Float)0.33),null(),null());		HX_STACK_VAR(tmp153,"tmp153");
	HX_STACK_LINE(112)
	Array< ::Dynamic > _close_poly = Array_obj< ::Dynamic >::__new().Add(tmp140).Add(tmp141).Add(tmp142).Add(tmp143).Add(tmp144).Add(tmp145).Add(tmp146).Add(tmp147).Add(tmp148).Add(tmp149).Add(tmp150).Add(tmp151).Add(tmp152).Add(tmp153);		HX_STACK_VAR(_close_poly,"_close_poly");
	HX_STACK_LINE(129)
	Dynamic tmp154;		HX_STACK_VAR(tmp154,"tmp154");
	HX_STACK_LINE(129)
	{
		HX_STACK_LINE(129)
		bool tmp155 = (_opt->__Field(HX_HCSTRING("size_close","\x7a","\x86","\xc4","\xd4"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp155,"tmp155");
		HX_STACK_LINE(129)
		if ((tmp155)){
			HX_STACK_LINE(129)
			_opt->__FieldRef(HX_HCSTRING("size_close","\x7a","\x86","\xc4","\xd4")) = (int)10;
		}
		HX_STACK_LINE(129)
		tmp154 = _opt->__Field(HX_HCSTRING("size_close","\x7a","\x86","\xc4","\xd4"), hx::paccDynamic );
	}
	HX_STACK_LINE(129)
	Dynamic _close_size = tmp154;		HX_STACK_VAR(_close_size,"_close_size");
	HX_STACK_LINE(130)
	{
		HX_STACK_LINE(130)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(130)
		while((true)){
			HX_STACK_LINE(130)
			bool tmp155 = (_g1 < _close_poly->length);		HX_STACK_VAR(tmp155,"tmp155");
			HX_STACK_LINE(130)
			bool tmp156 = !(tmp155);		HX_STACK_VAR(tmp156,"tmp156");
			HX_STACK_LINE(130)
			if ((tmp156)){
				HX_STACK_LINE(130)
				break;
			}
			HX_STACK_LINE(130)
			::phoenix::Vector tmp157 = _close_poly->__get(_g1).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp157,"tmp157");
			HX_STACK_LINE(130)
			::phoenix::Vector _point = tmp157;		HX_STACK_VAR(_point,"_point");
			HX_STACK_LINE(130)
			++(_g1);
			HX_STACK_LINE(130)
			Float v = _close_size;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(130)
			{
				HX_STACK_LINE(130)
				Float tmp158 = (_point->x * v);		HX_STACK_VAR(tmp158,"tmp158");
				HX_STACK_LINE(130)
				Float _x = tmp158;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(130)
				Float tmp159 = (_point->y * v);		HX_STACK_VAR(tmp159,"tmp159");
				HX_STACK_LINE(130)
				Float _y = tmp159;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(130)
				Float tmp160 = (_point->z * v);		HX_STACK_VAR(tmp160,"tmp160");
				HX_STACK_LINE(130)
				Float _z = tmp160;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(130)
				bool prev = _point->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(130)
				_point->ignore_listeners = true;
				HX_STACK_LINE(130)
				{
					HX_STACK_LINE(130)
					_point->x = _x;
					HX_STACK_LINE(130)
					bool tmp161 = _point->_construct;		HX_STACK_VAR(tmp161,"tmp161");
					HX_STACK_LINE(130)
					if ((tmp161)){
						HX_STACK_LINE(130)
						_point->x;
					}
					else{
						HX_STACK_LINE(130)
						bool tmp162 = (_point->listen_x != null());		HX_STACK_VAR(tmp162,"tmp162");
						HX_STACK_LINE(130)
						bool tmp163;		HX_STACK_VAR(tmp163,"tmp163");
						HX_STACK_LINE(130)
						if ((tmp162)){
							HX_STACK_LINE(130)
							bool tmp164 = _point->ignore_listeners;		HX_STACK_VAR(tmp164,"tmp164");
							HX_STACK_LINE(130)
							bool tmp165 = tmp164;		HX_STACK_VAR(tmp165,"tmp165");
							HX_STACK_LINE(130)
							tmp163 = !(tmp165);
						}
						else{
							HX_STACK_LINE(130)
							tmp163 = false;
						}
						HX_STACK_LINE(130)
						if ((tmp163)){
							HX_STACK_LINE(130)
							Float tmp164 = _x;		HX_STACK_VAR(tmp164,"tmp164");
							HX_STACK_LINE(130)
							_point->listen_x(tmp164);
						}
						HX_STACK_LINE(130)
						_point->x;
					}
				}
				HX_STACK_LINE(130)
				{
					HX_STACK_LINE(130)
					_point->y = _y;
					HX_STACK_LINE(130)
					bool tmp161 = _point->_construct;		HX_STACK_VAR(tmp161,"tmp161");
					HX_STACK_LINE(130)
					if ((tmp161)){
						HX_STACK_LINE(130)
						_point->y;
					}
					else{
						HX_STACK_LINE(130)
						bool tmp162 = (_point->listen_y != null());		HX_STACK_VAR(tmp162,"tmp162");
						HX_STACK_LINE(130)
						bool tmp163;		HX_STACK_VAR(tmp163,"tmp163");
						HX_STACK_LINE(130)
						if ((tmp162)){
							HX_STACK_LINE(130)
							bool tmp164 = _point->ignore_listeners;		HX_STACK_VAR(tmp164,"tmp164");
							HX_STACK_LINE(130)
							bool tmp165 = tmp164;		HX_STACK_VAR(tmp165,"tmp165");
							HX_STACK_LINE(130)
							tmp163 = !(tmp165);
						}
						else{
							HX_STACK_LINE(130)
							tmp163 = false;
						}
						HX_STACK_LINE(130)
						if ((tmp163)){
							HX_STACK_LINE(130)
							Float tmp164 = _y;		HX_STACK_VAR(tmp164,"tmp164");
							HX_STACK_LINE(130)
							_point->listen_y(tmp164);
						}
						HX_STACK_LINE(130)
						_point->y;
					}
				}
				HX_STACK_LINE(130)
				{
					HX_STACK_LINE(130)
					_point->z = _z;
					HX_STACK_LINE(130)
					bool tmp161 = _point->_construct;		HX_STACK_VAR(tmp161,"tmp161");
					HX_STACK_LINE(130)
					if ((tmp161)){
						HX_STACK_LINE(130)
						_point->z;
					}
					else{
						HX_STACK_LINE(130)
						bool tmp162 = (_point->listen_z != null());		HX_STACK_VAR(tmp162,"tmp162");
						HX_STACK_LINE(130)
						bool tmp163;		HX_STACK_VAR(tmp163,"tmp163");
						HX_STACK_LINE(130)
						if ((tmp162)){
							HX_STACK_LINE(130)
							bool tmp164 = _point->ignore_listeners;		HX_STACK_VAR(tmp164,"tmp164");
							HX_STACK_LINE(130)
							bool tmp165 = tmp164;		HX_STACK_VAR(tmp165,"tmp165");
							HX_STACK_LINE(130)
							tmp163 = !(tmp165);
						}
						else{
							HX_STACK_LINE(130)
							tmp163 = false;
						}
						HX_STACK_LINE(130)
						if ((tmp163)){
							HX_STACK_LINE(130)
							Float tmp164 = _z;		HX_STACK_VAR(tmp164,"tmp164");
							HX_STACK_LINE(130)
							_point->listen_z(tmp164);
						}
						HX_STACK_LINE(130)
						_point->z;
					}
				}
				HX_STACK_LINE(130)
				_point->ignore_listeners = prev;
				HX_STACK_LINE(130)
				bool tmp161 = (_point->listen_x != null());		HX_STACK_VAR(tmp161,"tmp161");
				HX_STACK_LINE(130)
				bool tmp162;		HX_STACK_VAR(tmp162,"tmp162");
				HX_STACK_LINE(130)
				if ((tmp161)){
					HX_STACK_LINE(130)
					bool tmp163 = _point->ignore_listeners;		HX_STACK_VAR(tmp163,"tmp163");
					HX_STACK_LINE(130)
					bool tmp164 = tmp163;		HX_STACK_VAR(tmp164,"tmp164");
					HX_STACK_LINE(130)
					tmp162 = !(tmp164);
				}
				else{
					HX_STACK_LINE(130)
					tmp162 = false;
				}
				HX_STACK_LINE(130)
				if ((tmp162)){
					HX_STACK_LINE(130)
					Float tmp163 = _point->x;		HX_STACK_VAR(tmp163,"tmp163");
					HX_STACK_LINE(130)
					_point->listen_x(tmp163);
				}
				HX_STACK_LINE(130)
				bool tmp163 = (_point->listen_y != null());		HX_STACK_VAR(tmp163,"tmp163");
				HX_STACK_LINE(130)
				bool tmp164;		HX_STACK_VAR(tmp164,"tmp164");
				HX_STACK_LINE(130)
				if ((tmp163)){
					HX_STACK_LINE(130)
					bool tmp165 = _point->ignore_listeners;		HX_STACK_VAR(tmp165,"tmp165");
					HX_STACK_LINE(130)
					bool tmp166 = tmp165;		HX_STACK_VAR(tmp166,"tmp166");
					HX_STACK_LINE(130)
					tmp164 = !(tmp166);
				}
				else{
					HX_STACK_LINE(130)
					tmp164 = false;
				}
				HX_STACK_LINE(130)
				if ((tmp164)){
					HX_STACK_LINE(130)
					Float tmp165 = _point->y;		HX_STACK_VAR(tmp165,"tmp165");
					HX_STACK_LINE(130)
					_point->listen_y(tmp165);
				}
				HX_STACK_LINE(130)
				bool tmp165 = (_point->listen_z != null());		HX_STACK_VAR(tmp165,"tmp165");
				HX_STACK_LINE(130)
				bool tmp166;		HX_STACK_VAR(tmp166,"tmp166");
				HX_STACK_LINE(130)
				if ((tmp165)){
					HX_STACK_LINE(130)
					bool tmp167 = _point->ignore_listeners;		HX_STACK_VAR(tmp167,"tmp167");
					HX_STACK_LINE(130)
					bool tmp168 = tmp167;		HX_STACK_VAR(tmp168,"tmp168");
					HX_STACK_LINE(130)
					tmp166 = !(tmp168);
				}
				else{
					HX_STACK_LINE(130)
					tmp166 = false;
				}
				HX_STACK_LINE(130)
				if ((tmp166)){
					HX_STACK_LINE(130)
					Float tmp167 = _point->z;		HX_STACK_VAR(tmp167,"tmp167");
					HX_STACK_LINE(130)
					_point->listen_z(tmp167);
				}
				HX_STACK_LINE(130)
				_point;
			}
			HX_STACK_LINE(130)
			_point;
		}
	}
	HX_STACK_LINE(132)
	::luxe::Draw tmp155 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp155,"tmp155");
	HX_STACK_LINE(133)
	::mint::Control tmp156 = this->control;		HX_STACK_VAR(tmp156,"tmp156");
	HX_STACK_LINE(133)
	::String tmp157 = tmp156->name;		HX_STACK_VAR(tmp157,"tmp157");
	HX_STACK_LINE(133)
	::String tmp158 = (tmp157 + HX_HCSTRING(".border","\x9a","\xa3","\xf5","\xdc"));		HX_STACK_VAR(tmp158,"tmp158");
	HX_STACK_LINE(134)
	::mint::render::luxe::LuxeMintRender tmp159 = this->render;		HX_STACK_VAR(tmp159,"tmp159");
	HX_STACK_LINE(134)
	::phoenix::Batcher tmp160 = tmp159->options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp160,"tmp160");
	HX_STACK_LINE(138)
	::phoenix::Color tmp161 = this->color_close;		HX_STACK_VAR(tmp161,"tmp161");
	HX_STACK_LINE(139)
	::mint::render::luxe::LuxeMintRender tmp162 = this->render;		HX_STACK_VAR(tmp162,"tmp162");
	HX_STACK_LINE(139)
	Dynamic tmp163 = tmp162->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp163,"tmp163");
	HX_STACK_LINE(139)
	::mint::Window tmp164 = this->window;		HX_STACK_VAR(tmp164,"tmp164");
	HX_STACK_LINE(139)
	Float tmp165 = tmp164->depth;		HX_STACK_VAR(tmp165,"tmp165");
	HX_STACK_LINE(139)
	Float tmp166 = (tmp163 + tmp165);		HX_STACK_VAR(tmp166,"tmp166");
	HX_STACK_LINE(139)
	Float tmp167 = (tmp166 + ((Float)0.004));		HX_STACK_VAR(tmp167,"tmp167");
	HX_STACK_LINE(140)
	::mint::Window tmp168 = this->window;		HX_STACK_VAR(tmp168,"tmp168");
	HX_STACK_LINE(140)
	bool tmp169 = tmp168->closable;		HX_STACK_VAR(tmp169,"tmp169");
	HX_STACK_LINE(140)
	bool tmp170;		HX_STACK_VAR(tmp170,"tmp170");
	HX_STACK_LINE(140)
	if ((tmp169)){
		HX_STACK_LINE(140)
		::mint::Window tmp171 = this->window;		HX_STACK_VAR(tmp171,"tmp171");
		HX_STACK_LINE(140)
		::mint::Window tmp172 = tmp171;		HX_STACK_VAR(tmp172,"tmp172");
		HX_STACK_LINE(140)
		tmp170 = tmp172->visible;
	}
	else{
		HX_STACK_LINE(140)
		tmp170 = false;
	}
	struct _Function_1_5{
		inline static Dynamic Block( ::String &tmp158,Array< ::Dynamic > &_close_poly,::phoenix::Batcher &tmp160,Float &tmp167,bool &tmp170,::phoenix::Color &tmp161){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/render/luxe/Window.hx",132,0x58bb7b41)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tmp158,false);
				__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp160,false);
				__result->Add(HX_HCSTRING("points","\x23","\x12","\x2e","\xf7") , _close_poly,false);
				__result->Add(HX_HCSTRING("close","\xb8","\x17","\x63","\x48") , true,false);
				__result->Add(HX_HCSTRING("solid","\x2b","\xb4","\xc5","\x80") , true,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp161,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp167,false);
				__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , tmp170,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(132)
	Dynamic tmp171 = _Function_1_5::Block(tmp158,_close_poly,tmp160,tmp167,tmp170,tmp161);		HX_STACK_VAR(tmp171,"tmp171");
	HX_STACK_LINE(132)
	::phoenix::geometry::Geometry tmp172 = tmp155->poly(tmp171);		HX_STACK_VAR(tmp172,"tmp172");
	HX_STACK_LINE(132)
	this->close = tmp172;
	HX_STACK_LINE(143)
	::mint::Window tmp173 = this->window;		HX_STACK_VAR(tmp173,"tmp173");
	HX_STACK_LINE(143)
	::mint::Control _closer = tmp173->close_handle;		HX_STACK_VAR(_closer,"_closer");
	HX_STACK_LINE(144)
	::mint::Window tmp174 = this->window;		HX_STACK_VAR(tmp174,"tmp174");
	HX_STACK_LINE(144)
	::mint::Control _collapser = tmp174->collapse_handle;		HX_STACK_VAR(_collapser,"_collapser");
	HX_STACK_LINE(146)
	{
		HX_STACK_LINE(146)
		::phoenix::geometry::Geometry tmp175 = this->close;		HX_STACK_VAR(tmp175,"tmp175");
		HX_STACK_LINE(146)
		::phoenix::Spatial tmp176 = tmp175->transform->local;		HX_STACK_VAR(tmp176,"tmp176");
		HX_STACK_LINE(146)
		::phoenix::Vector _this = tmp176->scale;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(146)
		::mint::Control tmp177 = this->control;		HX_STACK_VAR(tmp177,"tmp177");
		HX_STACK_LINE(146)
		Float tmp178 = tmp177->canvas->scale;		HX_STACK_VAR(tmp178,"tmp178");
		HX_STACK_LINE(146)
		Float _x = tmp178;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(146)
		::mint::Control tmp179 = this->control;		HX_STACK_VAR(tmp179,"tmp179");
		HX_STACK_LINE(146)
		Float tmp180 = tmp179->canvas->scale;		HX_STACK_VAR(tmp180,"tmp180");
		HX_STACK_LINE(146)
		Float _y = tmp180;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(146)
		bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(146)
		_this->ignore_listeners = true;
		HX_STACK_LINE(146)
		{
			HX_STACK_LINE(146)
			_this->x = _x;
			HX_STACK_LINE(146)
			bool tmp181 = _this->_construct;		HX_STACK_VAR(tmp181,"tmp181");
			HX_STACK_LINE(146)
			if ((tmp181)){
				HX_STACK_LINE(146)
				_this->x;
			}
			else{
				HX_STACK_LINE(146)
				bool tmp182 = (_this->listen_x != null());		HX_STACK_VAR(tmp182,"tmp182");
				HX_STACK_LINE(146)
				bool tmp183;		HX_STACK_VAR(tmp183,"tmp183");
				HX_STACK_LINE(146)
				if ((tmp182)){
					HX_STACK_LINE(146)
					bool tmp184 = _this->ignore_listeners;		HX_STACK_VAR(tmp184,"tmp184");
					HX_STACK_LINE(146)
					bool tmp185 = tmp184;		HX_STACK_VAR(tmp185,"tmp185");
					HX_STACK_LINE(146)
					tmp183 = !(tmp185);
				}
				else{
					HX_STACK_LINE(146)
					tmp183 = false;
				}
				HX_STACK_LINE(146)
				if ((tmp183)){
					HX_STACK_LINE(146)
					Float tmp184 = _x;		HX_STACK_VAR(tmp184,"tmp184");
					HX_STACK_LINE(146)
					_this->listen_x(tmp184);
				}
				HX_STACK_LINE(146)
				_this->x;
			}
		}
		HX_STACK_LINE(146)
		{
			HX_STACK_LINE(146)
			_this->y = _y;
			HX_STACK_LINE(146)
			bool tmp181 = _this->_construct;		HX_STACK_VAR(tmp181,"tmp181");
			HX_STACK_LINE(146)
			if ((tmp181)){
				HX_STACK_LINE(146)
				_this->y;
			}
			else{
				HX_STACK_LINE(146)
				bool tmp182 = (_this->listen_y != null());		HX_STACK_VAR(tmp182,"tmp182");
				HX_STACK_LINE(146)
				bool tmp183;		HX_STACK_VAR(tmp183,"tmp183");
				HX_STACK_LINE(146)
				if ((tmp182)){
					HX_STACK_LINE(146)
					bool tmp184 = _this->ignore_listeners;		HX_STACK_VAR(tmp184,"tmp184");
					HX_STACK_LINE(146)
					bool tmp185 = tmp184;		HX_STACK_VAR(tmp185,"tmp185");
					HX_STACK_LINE(146)
					tmp183 = !(tmp185);
				}
				else{
					HX_STACK_LINE(146)
					tmp183 = false;
				}
				HX_STACK_LINE(146)
				if ((tmp183)){
					HX_STACK_LINE(146)
					Float tmp184 = _y;		HX_STACK_VAR(tmp184,"tmp184");
					HX_STACK_LINE(146)
					_this->listen_y(tmp184);
				}
				HX_STACK_LINE(146)
				_this->y;
			}
		}
		HX_STACK_LINE(146)
		_this->ignore_listeners = prev;
		HX_STACK_LINE(146)
		bool tmp181 = (_this->listen_x != null());		HX_STACK_VAR(tmp181,"tmp181");
		HX_STACK_LINE(146)
		bool tmp182;		HX_STACK_VAR(tmp182,"tmp182");
		HX_STACK_LINE(146)
		if ((tmp181)){
			HX_STACK_LINE(146)
			bool tmp183 = _this->ignore_listeners;		HX_STACK_VAR(tmp183,"tmp183");
			HX_STACK_LINE(146)
			bool tmp184 = tmp183;		HX_STACK_VAR(tmp184,"tmp184");
			HX_STACK_LINE(146)
			tmp182 = !(tmp184);
		}
		else{
			HX_STACK_LINE(146)
			tmp182 = false;
		}
		HX_STACK_LINE(146)
		if ((tmp182)){
			HX_STACK_LINE(146)
			Float tmp183 = _this->x;		HX_STACK_VAR(tmp183,"tmp183");
			HX_STACK_LINE(146)
			_this->listen_x(tmp183);
		}
		HX_STACK_LINE(146)
		bool tmp183 = (_this->listen_y != null());		HX_STACK_VAR(tmp183,"tmp183");
		HX_STACK_LINE(146)
		bool tmp184;		HX_STACK_VAR(tmp184,"tmp184");
		HX_STACK_LINE(146)
		if ((tmp183)){
			HX_STACK_LINE(146)
			bool tmp185 = _this->ignore_listeners;		HX_STACK_VAR(tmp185,"tmp185");
			HX_STACK_LINE(146)
			bool tmp186 = tmp185;		HX_STACK_VAR(tmp186,"tmp186");
			HX_STACK_LINE(146)
			tmp184 = !(tmp186);
		}
		else{
			HX_STACK_LINE(146)
			tmp184 = false;
		}
		HX_STACK_LINE(146)
		if ((tmp184)){
			HX_STACK_LINE(146)
			Float tmp185 = _this->y;		HX_STACK_VAR(tmp185,"tmp185");
			HX_STACK_LINE(146)
			_this->listen_y(tmp185);
		}
		HX_STACK_LINE(146)
		_this;
	}
	HX_STACK_LINE(147)
	{
		HX_STACK_LINE(147)
		::phoenix::geometry::Geometry tmp175 = this->close;		HX_STACK_VAR(tmp175,"tmp175");
		HX_STACK_LINE(147)
		::phoenix::Spatial tmp176 = tmp175->transform->local;		HX_STACK_VAR(tmp176,"tmp176");
		HX_STACK_LINE(147)
		::phoenix::Vector _this = tmp176->pos;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(147)
		::mint::Control tmp177 = this->control;		HX_STACK_VAR(tmp177,"tmp177");
		HX_STACK_LINE(147)
		Float tmp178 = tmp177->canvas->scale;		HX_STACK_VAR(tmp178,"tmp178");
		HX_STACK_LINE(147)
		Float tmp179 = _closer->x;		HX_STACK_VAR(tmp179,"tmp179");
		HX_STACK_LINE(147)
		Float tmp180 = (Float(_closer->w) / Float((int)2));		HX_STACK_VAR(tmp180,"tmp180");
		HX_STACK_LINE(147)
		Float tmp181 = (tmp179 + tmp180);		HX_STACK_VAR(tmp181,"tmp181");
		HX_STACK_LINE(147)
		Float tmp182 = (tmp178 * tmp181);		HX_STACK_VAR(tmp182,"tmp182");
		HX_STACK_LINE(147)
		Float _x = tmp182;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(147)
		::mint::Control tmp183 = this->control;		HX_STACK_VAR(tmp183,"tmp183");
		HX_STACK_LINE(147)
		Float tmp184 = tmp183->canvas->scale;		HX_STACK_VAR(tmp184,"tmp184");
		HX_STACK_LINE(147)
		Float tmp185 = _closer->y;		HX_STACK_VAR(tmp185,"tmp185");
		HX_STACK_LINE(147)
		Float tmp186 = (Float(_closer->h) / Float((int)2));		HX_STACK_VAR(tmp186,"tmp186");
		HX_STACK_LINE(147)
		Float tmp187 = (tmp185 + tmp186);		HX_STACK_VAR(tmp187,"tmp187");
		HX_STACK_LINE(147)
		Float tmp188 = (tmp184 * tmp187);		HX_STACK_VAR(tmp188,"tmp188");
		HX_STACK_LINE(147)
		Float _y = tmp188;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(147)
		bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(147)
		_this->ignore_listeners = true;
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			_this->x = _x;
			HX_STACK_LINE(147)
			bool tmp189 = _this->_construct;		HX_STACK_VAR(tmp189,"tmp189");
			HX_STACK_LINE(147)
			if ((tmp189)){
				HX_STACK_LINE(147)
				_this->x;
			}
			else{
				HX_STACK_LINE(147)
				bool tmp190 = (_this->listen_x != null());		HX_STACK_VAR(tmp190,"tmp190");
				HX_STACK_LINE(147)
				bool tmp191;		HX_STACK_VAR(tmp191,"tmp191");
				HX_STACK_LINE(147)
				if ((tmp190)){
					HX_STACK_LINE(147)
					bool tmp192 = _this->ignore_listeners;		HX_STACK_VAR(tmp192,"tmp192");
					HX_STACK_LINE(147)
					bool tmp193 = tmp192;		HX_STACK_VAR(tmp193,"tmp193");
					HX_STACK_LINE(147)
					tmp191 = !(tmp193);
				}
				else{
					HX_STACK_LINE(147)
					tmp191 = false;
				}
				HX_STACK_LINE(147)
				if ((tmp191)){
					HX_STACK_LINE(147)
					Float tmp192 = _x;		HX_STACK_VAR(tmp192,"tmp192");
					HX_STACK_LINE(147)
					_this->listen_x(tmp192);
				}
				HX_STACK_LINE(147)
				_this->x;
			}
		}
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			_this->y = _y;
			HX_STACK_LINE(147)
			bool tmp189 = _this->_construct;		HX_STACK_VAR(tmp189,"tmp189");
			HX_STACK_LINE(147)
			if ((tmp189)){
				HX_STACK_LINE(147)
				_this->y;
			}
			else{
				HX_STACK_LINE(147)
				bool tmp190 = (_this->listen_y != null());		HX_STACK_VAR(tmp190,"tmp190");
				HX_STACK_LINE(147)
				bool tmp191;		HX_STACK_VAR(tmp191,"tmp191");
				HX_STACK_LINE(147)
				if ((tmp190)){
					HX_STACK_LINE(147)
					bool tmp192 = _this->ignore_listeners;		HX_STACK_VAR(tmp192,"tmp192");
					HX_STACK_LINE(147)
					bool tmp193 = tmp192;		HX_STACK_VAR(tmp193,"tmp193");
					HX_STACK_LINE(147)
					tmp191 = !(tmp193);
				}
				else{
					HX_STACK_LINE(147)
					tmp191 = false;
				}
				HX_STACK_LINE(147)
				if ((tmp191)){
					HX_STACK_LINE(147)
					Float tmp192 = _y;		HX_STACK_VAR(tmp192,"tmp192");
					HX_STACK_LINE(147)
					_this->listen_y(tmp192);
				}
				HX_STACK_LINE(147)
				_this->y;
			}
		}
		HX_STACK_LINE(147)
		_this->ignore_listeners = prev;
		HX_STACK_LINE(147)
		bool tmp189 = (_this->listen_x != null());		HX_STACK_VAR(tmp189,"tmp189");
		HX_STACK_LINE(147)
		bool tmp190;		HX_STACK_VAR(tmp190,"tmp190");
		HX_STACK_LINE(147)
		if ((tmp189)){
			HX_STACK_LINE(147)
			bool tmp191 = _this->ignore_listeners;		HX_STACK_VAR(tmp191,"tmp191");
			HX_STACK_LINE(147)
			bool tmp192 = tmp191;		HX_STACK_VAR(tmp192,"tmp192");
			HX_STACK_LINE(147)
			tmp190 = !(tmp192);
		}
		else{
			HX_STACK_LINE(147)
			tmp190 = false;
		}
		HX_STACK_LINE(147)
		if ((tmp190)){
			HX_STACK_LINE(147)
			Float tmp191 = _this->x;		HX_STACK_VAR(tmp191,"tmp191");
			HX_STACK_LINE(147)
			_this->listen_x(tmp191);
		}
		HX_STACK_LINE(147)
		bool tmp191 = (_this->listen_y != null());		HX_STACK_VAR(tmp191,"tmp191");
		HX_STACK_LINE(147)
		bool tmp192;		HX_STACK_VAR(tmp192,"tmp192");
		HX_STACK_LINE(147)
		if ((tmp191)){
			HX_STACK_LINE(147)
			bool tmp193 = _this->ignore_listeners;		HX_STACK_VAR(tmp193,"tmp193");
			HX_STACK_LINE(147)
			bool tmp194 = tmp193;		HX_STACK_VAR(tmp194,"tmp194");
			HX_STACK_LINE(147)
			tmp192 = !(tmp194);
		}
		else{
			HX_STACK_LINE(147)
			tmp192 = false;
		}
		HX_STACK_LINE(147)
		if ((tmp192)){
			HX_STACK_LINE(147)
			Float tmp193 = _this->y;		HX_STACK_VAR(tmp193,"tmp193");
			HX_STACK_LINE(147)
			_this->listen_y(tmp193);
		}
		HX_STACK_LINE(147)
		_this;
	}
	HX_STACK_LINE(149)
	{
		HX_STACK_LINE(149)
		::phoenix::geometry::Geometry tmp175 = this->collapse;		HX_STACK_VAR(tmp175,"tmp175");
		HX_STACK_LINE(149)
		::phoenix::Spatial tmp176 = tmp175->transform->local;		HX_STACK_VAR(tmp176,"tmp176");
		HX_STACK_LINE(149)
		::phoenix::Vector _this = tmp176->scale;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(149)
		::mint::Control tmp177 = this->control;		HX_STACK_VAR(tmp177,"tmp177");
		HX_STACK_LINE(149)
		Float tmp178 = tmp177->canvas->scale;		HX_STACK_VAR(tmp178,"tmp178");
		HX_STACK_LINE(149)
		Float _x = tmp178;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(149)
		::mint::Control tmp179 = this->control;		HX_STACK_VAR(tmp179,"tmp179");
		HX_STACK_LINE(149)
		Float tmp180 = tmp179->canvas->scale;		HX_STACK_VAR(tmp180,"tmp180");
		HX_STACK_LINE(149)
		Float _y = tmp180;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(149)
		bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(149)
		_this->ignore_listeners = true;
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(149)
			_this->x = _x;
			HX_STACK_LINE(149)
			bool tmp181 = _this->_construct;		HX_STACK_VAR(tmp181,"tmp181");
			HX_STACK_LINE(149)
			if ((tmp181)){
				HX_STACK_LINE(149)
				_this->x;
			}
			else{
				HX_STACK_LINE(149)
				bool tmp182 = (_this->listen_x != null());		HX_STACK_VAR(tmp182,"tmp182");
				HX_STACK_LINE(149)
				bool tmp183;		HX_STACK_VAR(tmp183,"tmp183");
				HX_STACK_LINE(149)
				if ((tmp182)){
					HX_STACK_LINE(149)
					bool tmp184 = _this->ignore_listeners;		HX_STACK_VAR(tmp184,"tmp184");
					HX_STACK_LINE(149)
					bool tmp185 = tmp184;		HX_STACK_VAR(tmp185,"tmp185");
					HX_STACK_LINE(149)
					tmp183 = !(tmp185);
				}
				else{
					HX_STACK_LINE(149)
					tmp183 = false;
				}
				HX_STACK_LINE(149)
				if ((tmp183)){
					HX_STACK_LINE(149)
					Float tmp184 = _x;		HX_STACK_VAR(tmp184,"tmp184");
					HX_STACK_LINE(149)
					_this->listen_x(tmp184);
				}
				HX_STACK_LINE(149)
				_this->x;
			}
		}
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(149)
			_this->y = _y;
			HX_STACK_LINE(149)
			bool tmp181 = _this->_construct;		HX_STACK_VAR(tmp181,"tmp181");
			HX_STACK_LINE(149)
			if ((tmp181)){
				HX_STACK_LINE(149)
				_this->y;
			}
			else{
				HX_STACK_LINE(149)
				bool tmp182 = (_this->listen_y != null());		HX_STACK_VAR(tmp182,"tmp182");
				HX_STACK_LINE(149)
				bool tmp183;		HX_STACK_VAR(tmp183,"tmp183");
				HX_STACK_LINE(149)
				if ((tmp182)){
					HX_STACK_LINE(149)
					bool tmp184 = _this->ignore_listeners;		HX_STACK_VAR(tmp184,"tmp184");
					HX_STACK_LINE(149)
					bool tmp185 = tmp184;		HX_STACK_VAR(tmp185,"tmp185");
					HX_STACK_LINE(149)
					tmp183 = !(tmp185);
				}
				else{
					HX_STACK_LINE(149)
					tmp183 = false;
				}
				HX_STACK_LINE(149)
				if ((tmp183)){
					HX_STACK_LINE(149)
					Float tmp184 = _y;		HX_STACK_VAR(tmp184,"tmp184");
					HX_STACK_LINE(149)
					_this->listen_y(tmp184);
				}
				HX_STACK_LINE(149)
				_this->y;
			}
		}
		HX_STACK_LINE(149)
		_this->ignore_listeners = prev;
		HX_STACK_LINE(149)
		bool tmp181 = (_this->listen_x != null());		HX_STACK_VAR(tmp181,"tmp181");
		HX_STACK_LINE(149)
		bool tmp182;		HX_STACK_VAR(tmp182,"tmp182");
		HX_STACK_LINE(149)
		if ((tmp181)){
			HX_STACK_LINE(149)
			bool tmp183 = _this->ignore_listeners;		HX_STACK_VAR(tmp183,"tmp183");
			HX_STACK_LINE(149)
			bool tmp184 = tmp183;		HX_STACK_VAR(tmp184,"tmp184");
			HX_STACK_LINE(149)
			tmp182 = !(tmp184);
		}
		else{
			HX_STACK_LINE(149)
			tmp182 = false;
		}
		HX_STACK_LINE(149)
		if ((tmp182)){
			HX_STACK_LINE(149)
			Float tmp183 = _this->x;		HX_STACK_VAR(tmp183,"tmp183");
			HX_STACK_LINE(149)
			_this->listen_x(tmp183);
		}
		HX_STACK_LINE(149)
		bool tmp183 = (_this->listen_y != null());		HX_STACK_VAR(tmp183,"tmp183");
		HX_STACK_LINE(149)
		bool tmp184;		HX_STACK_VAR(tmp184,"tmp184");
		HX_STACK_LINE(149)
		if ((tmp183)){
			HX_STACK_LINE(149)
			bool tmp185 = _this->ignore_listeners;		HX_STACK_VAR(tmp185,"tmp185");
			HX_STACK_LINE(149)
			bool tmp186 = tmp185;		HX_STACK_VAR(tmp186,"tmp186");
			HX_STACK_LINE(149)
			tmp184 = !(tmp186);
		}
		else{
			HX_STACK_LINE(149)
			tmp184 = false;
		}
		HX_STACK_LINE(149)
		if ((tmp184)){
			HX_STACK_LINE(149)
			Float tmp185 = _this->y;		HX_STACK_VAR(tmp185,"tmp185");
			HX_STACK_LINE(149)
			_this->listen_y(tmp185);
		}
		HX_STACK_LINE(149)
		_this;
	}
	HX_STACK_LINE(150)
	{
		HX_STACK_LINE(150)
		::phoenix::geometry::Geometry tmp175 = this->collapse;		HX_STACK_VAR(tmp175,"tmp175");
		HX_STACK_LINE(150)
		::phoenix::Spatial tmp176 = tmp175->transform->local;		HX_STACK_VAR(tmp176,"tmp176");
		HX_STACK_LINE(150)
		::phoenix::Vector _this = tmp176->pos;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(150)
		::mint::Control tmp177 = this->control;		HX_STACK_VAR(tmp177,"tmp177");
		HX_STACK_LINE(150)
		Float tmp178 = tmp177->canvas->scale;		HX_STACK_VAR(tmp178,"tmp178");
		HX_STACK_LINE(150)
		Float tmp179 = _collapser->x;		HX_STACK_VAR(tmp179,"tmp179");
		HX_STACK_LINE(150)
		Float tmp180 = (Float(_collapser->w) / Float((int)2));		HX_STACK_VAR(tmp180,"tmp180");
		HX_STACK_LINE(150)
		Float tmp181 = (tmp179 + tmp180);		HX_STACK_VAR(tmp181,"tmp181");
		HX_STACK_LINE(150)
		Float tmp182 = (tmp178 * tmp181);		HX_STACK_VAR(tmp182,"tmp182");
		HX_STACK_LINE(150)
		Float _x = tmp182;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(150)
		::mint::Control tmp183 = this->control;		HX_STACK_VAR(tmp183,"tmp183");
		HX_STACK_LINE(150)
		Float tmp184 = tmp183->canvas->scale;		HX_STACK_VAR(tmp184,"tmp184");
		HX_STACK_LINE(150)
		Float tmp185 = _collapser->y;		HX_STACK_VAR(tmp185,"tmp185");
		HX_STACK_LINE(150)
		Float tmp186 = (Float(_collapser->h) / Float((int)2));		HX_STACK_VAR(tmp186,"tmp186");
		HX_STACK_LINE(150)
		Float tmp187 = (tmp185 + tmp186);		HX_STACK_VAR(tmp187,"tmp187");
		HX_STACK_LINE(150)
		Float tmp188 = (tmp184 * tmp187);		HX_STACK_VAR(tmp188,"tmp188");
		HX_STACK_LINE(150)
		Float _y = tmp188;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(150)
		bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(150)
		_this->ignore_listeners = true;
		HX_STACK_LINE(150)
		{
			HX_STACK_LINE(150)
			_this->x = _x;
			HX_STACK_LINE(150)
			bool tmp189 = _this->_construct;		HX_STACK_VAR(tmp189,"tmp189");
			HX_STACK_LINE(150)
			if ((tmp189)){
				HX_STACK_LINE(150)
				_this->x;
			}
			else{
				HX_STACK_LINE(150)
				bool tmp190 = (_this->listen_x != null());		HX_STACK_VAR(tmp190,"tmp190");
				HX_STACK_LINE(150)
				bool tmp191;		HX_STACK_VAR(tmp191,"tmp191");
				HX_STACK_LINE(150)
				if ((tmp190)){
					HX_STACK_LINE(150)
					bool tmp192 = _this->ignore_listeners;		HX_STACK_VAR(tmp192,"tmp192");
					HX_STACK_LINE(150)
					bool tmp193 = tmp192;		HX_STACK_VAR(tmp193,"tmp193");
					HX_STACK_LINE(150)
					tmp191 = !(tmp193);
				}
				else{
					HX_STACK_LINE(150)
					tmp191 = false;
				}
				HX_STACK_LINE(150)
				if ((tmp191)){
					HX_STACK_LINE(150)
					Float tmp192 = _x;		HX_STACK_VAR(tmp192,"tmp192");
					HX_STACK_LINE(150)
					_this->listen_x(tmp192);
				}
				HX_STACK_LINE(150)
				_this->x;
			}
		}
		HX_STACK_LINE(150)
		{
			HX_STACK_LINE(150)
			_this->y = _y;
			HX_STACK_LINE(150)
			bool tmp189 = _this->_construct;		HX_STACK_VAR(tmp189,"tmp189");
			HX_STACK_LINE(150)
			if ((tmp189)){
				HX_STACK_LINE(150)
				_this->y;
			}
			else{
				HX_STACK_LINE(150)
				bool tmp190 = (_this->listen_y != null());		HX_STACK_VAR(tmp190,"tmp190");
				HX_STACK_LINE(150)
				bool tmp191;		HX_STACK_VAR(tmp191,"tmp191");
				HX_STACK_LINE(150)
				if ((tmp190)){
					HX_STACK_LINE(150)
					bool tmp192 = _this->ignore_listeners;		HX_STACK_VAR(tmp192,"tmp192");
					HX_STACK_LINE(150)
					bool tmp193 = tmp192;		HX_STACK_VAR(tmp193,"tmp193");
					HX_STACK_LINE(150)
					tmp191 = !(tmp193);
				}
				else{
					HX_STACK_LINE(150)
					tmp191 = false;
				}
				HX_STACK_LINE(150)
				if ((tmp191)){
					HX_STACK_LINE(150)
					Float tmp192 = _y;		HX_STACK_VAR(tmp192,"tmp192");
					HX_STACK_LINE(150)
					_this->listen_y(tmp192);
				}
				HX_STACK_LINE(150)
				_this->y;
			}
		}
		HX_STACK_LINE(150)
		_this->ignore_listeners = prev;
		HX_STACK_LINE(150)
		bool tmp189 = (_this->listen_x != null());		HX_STACK_VAR(tmp189,"tmp189");
		HX_STACK_LINE(150)
		bool tmp190;		HX_STACK_VAR(tmp190,"tmp190");
		HX_STACK_LINE(150)
		if ((tmp189)){
			HX_STACK_LINE(150)
			bool tmp191 = _this->ignore_listeners;		HX_STACK_VAR(tmp191,"tmp191");
			HX_STACK_LINE(150)
			bool tmp192 = tmp191;		HX_STACK_VAR(tmp192,"tmp192");
			HX_STACK_LINE(150)
			tmp190 = !(tmp192);
		}
		else{
			HX_STACK_LINE(150)
			tmp190 = false;
		}
		HX_STACK_LINE(150)
		if ((tmp190)){
			HX_STACK_LINE(150)
			Float tmp191 = _this->x;		HX_STACK_VAR(tmp191,"tmp191");
			HX_STACK_LINE(150)
			_this->listen_x(tmp191);
		}
		HX_STACK_LINE(150)
		bool tmp191 = (_this->listen_y != null());		HX_STACK_VAR(tmp191,"tmp191");
		HX_STACK_LINE(150)
		bool tmp192;		HX_STACK_VAR(tmp192,"tmp192");
		HX_STACK_LINE(150)
		if ((tmp191)){
			HX_STACK_LINE(150)
			bool tmp193 = _this->ignore_listeners;		HX_STACK_VAR(tmp193,"tmp193");
			HX_STACK_LINE(150)
			bool tmp194 = tmp193;		HX_STACK_VAR(tmp194,"tmp194");
			HX_STACK_LINE(150)
			tmp192 = !(tmp194);
		}
		else{
			HX_STACK_LINE(150)
			tmp192 = false;
		}
		HX_STACK_LINE(150)
		if ((tmp192)){
			HX_STACK_LINE(150)
			Float tmp193 = _this->y;		HX_STACK_VAR(tmp193,"tmp193");
			HX_STACK_LINE(150)
			_this->listen_y(tmp193);
		}
		HX_STACK_LINE(150)
		_this;
	}

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_6,::mint::render::luxe::Window,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic _,::mint::Control _1){
		HX_STACK_FRAME("*","_Function_1_6",0x5200ed3c,"*._Function_1_6","mint/render/luxe/Window.hx",152,0x58bb7b41)
		HX_STACK_ARG(_,"_")
		HX_STACK_ARG(_1,"_1")
		{
			HX_STACK_LINE(152)
			::phoenix::Color tmp175 = _g->color_close_hover;		HX_STACK_VAR(tmp175,"tmp175");
			HX_STACK_LINE(152)
			_g->close->set_color(tmp175);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(152)
	_closer->onmouseenter->listen( Dynamic(new _Function_1_6(_g)));

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_7,::mint::render::luxe::Window,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic _,::mint::Control _1){
		HX_STACK_FRAME("*","_Function_1_7",0x5200ed3d,"*._Function_1_7","mint/render/luxe/Window.hx",153,0x58bb7b41)
		HX_STACK_ARG(_,"_")
		HX_STACK_ARG(_1,"_1")
		{
			HX_STACK_LINE(153)
			::phoenix::Color tmp175 = _g->color_close;		HX_STACK_VAR(tmp175,"tmp175");
			HX_STACK_LINE(153)
			_g->close->set_color(tmp175);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(153)
	_closer->onmouseleave->listen( Dynamic(new _Function_1_7(_g)));

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_8,::mint::Control,_closer,::mint::render::luxe::Window,_g)
	int __ArgCount() const { return 0; }
	Void run(){
		HX_STACK_FRAME("*","_Function_1_8",0x5200ed3e,"*._Function_1_8","mint/render/luxe/Window.hx",154,0x58bb7b41)
		{
			HX_STACK_LINE(154)
			::phoenix::Transform tmp175 = _g->close->transform;		HX_STACK_VAR(tmp175,"tmp175");
			HX_STACK_LINE(154)
			::phoenix::Vector tmp176 = tmp175->local->pos;		HX_STACK_VAR(tmp176,"tmp176");
			HX_STACK_LINE(154)
			::phoenix::Vector _this = tmp176;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(154)
			::mint::Canvas tmp177 = _g->control->canvas;		HX_STACK_VAR(tmp177,"tmp177");
			HX_STACK_LINE(154)
			Float tmp178 = tmp177->scale;		HX_STACK_VAR(tmp178,"tmp178");
			HX_STACK_LINE(154)
			Float tmp179 = _closer->x;		HX_STACK_VAR(tmp179,"tmp179");
			HX_STACK_LINE(154)
			Float tmp180 = (Float(_closer->w) / Float((int)2));		HX_STACK_VAR(tmp180,"tmp180");
			HX_STACK_LINE(154)
			Float tmp181 = (tmp179 + tmp180);		HX_STACK_VAR(tmp181,"tmp181");
			HX_STACK_LINE(154)
			Float tmp182 = (tmp178 * tmp181);		HX_STACK_VAR(tmp182,"tmp182");
			HX_STACK_LINE(154)
			Float _x = tmp182;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(154)
			::mint::Canvas tmp183 = _g->control->canvas;		HX_STACK_VAR(tmp183,"tmp183");
			HX_STACK_LINE(154)
			Float tmp184 = tmp183->scale;		HX_STACK_VAR(tmp184,"tmp184");
			HX_STACK_LINE(154)
			Float tmp185 = _closer->y;		HX_STACK_VAR(tmp185,"tmp185");
			HX_STACK_LINE(154)
			Float tmp186 = (Float(_closer->h) / Float((int)2));		HX_STACK_VAR(tmp186,"tmp186");
			HX_STACK_LINE(154)
			Float tmp187 = (tmp185 + tmp186);		HX_STACK_VAR(tmp187,"tmp187");
			HX_STACK_LINE(154)
			Float tmp188 = (tmp184 * tmp187);		HX_STACK_VAR(tmp188,"tmp188");
			HX_STACK_LINE(154)
			Float _y = tmp188;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(154)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(154)
			_this->ignore_listeners = true;
			HX_STACK_LINE(154)
			{
				HX_STACK_LINE(154)
				_this->x = _x;
				HX_STACK_LINE(154)
				bool tmp189 = _this->_construct;		HX_STACK_VAR(tmp189,"tmp189");
				HX_STACK_LINE(154)
				if ((tmp189)){
					HX_STACK_LINE(154)
					_this->x;
				}
				else{
					HX_STACK_LINE(154)
					bool tmp190 = (_this->listen_x != null());		HX_STACK_VAR(tmp190,"tmp190");
					HX_STACK_LINE(154)
					bool tmp191;		HX_STACK_VAR(tmp191,"tmp191");
					HX_STACK_LINE(154)
					if ((tmp190)){
						HX_STACK_LINE(154)
						bool tmp192 = _this->ignore_listeners;		HX_STACK_VAR(tmp192,"tmp192");
						HX_STACK_LINE(154)
						bool tmp193 = tmp192;		HX_STACK_VAR(tmp193,"tmp193");
						HX_STACK_LINE(154)
						tmp191 = !(tmp193);
					}
					else{
						HX_STACK_LINE(154)
						tmp191 = false;
					}
					HX_STACK_LINE(154)
					if ((tmp191)){
						HX_STACK_LINE(154)
						Float tmp192 = _x;		HX_STACK_VAR(tmp192,"tmp192");
						HX_STACK_LINE(154)
						_this->listen_x(tmp192);
					}
					HX_STACK_LINE(154)
					_this->x;
				}
			}
			HX_STACK_LINE(154)
			{
				HX_STACK_LINE(154)
				_this->y = _y;
				HX_STACK_LINE(154)
				bool tmp189 = _this->_construct;		HX_STACK_VAR(tmp189,"tmp189");
				HX_STACK_LINE(154)
				if ((tmp189)){
					HX_STACK_LINE(154)
					_this->y;
				}
				else{
					HX_STACK_LINE(154)
					bool tmp190 = (_this->listen_y != null());		HX_STACK_VAR(tmp190,"tmp190");
					HX_STACK_LINE(154)
					bool tmp191;		HX_STACK_VAR(tmp191,"tmp191");
					HX_STACK_LINE(154)
					if ((tmp190)){
						HX_STACK_LINE(154)
						bool tmp192 = _this->ignore_listeners;		HX_STACK_VAR(tmp192,"tmp192");
						HX_STACK_LINE(154)
						bool tmp193 = tmp192;		HX_STACK_VAR(tmp193,"tmp193");
						HX_STACK_LINE(154)
						tmp191 = !(tmp193);
					}
					else{
						HX_STACK_LINE(154)
						tmp191 = false;
					}
					HX_STACK_LINE(154)
					if ((tmp191)){
						HX_STACK_LINE(154)
						Float tmp192 = _y;		HX_STACK_VAR(tmp192,"tmp192");
						HX_STACK_LINE(154)
						_this->listen_y(tmp192);
					}
					HX_STACK_LINE(154)
					_this->y;
				}
			}
			HX_STACK_LINE(154)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(154)
			bool tmp189 = (_this->listen_x != null());		HX_STACK_VAR(tmp189,"tmp189");
			HX_STACK_LINE(154)
			bool tmp190;		HX_STACK_VAR(tmp190,"tmp190");
			HX_STACK_LINE(154)
			if ((tmp189)){
				HX_STACK_LINE(154)
				bool tmp191 = _this->ignore_listeners;		HX_STACK_VAR(tmp191,"tmp191");
				HX_STACK_LINE(154)
				bool tmp192 = tmp191;		HX_STACK_VAR(tmp192,"tmp192");
				HX_STACK_LINE(154)
				tmp190 = !(tmp192);
			}
			else{
				HX_STACK_LINE(154)
				tmp190 = false;
			}
			HX_STACK_LINE(154)
			if ((tmp190)){
				HX_STACK_LINE(154)
				Float tmp191 = _this->x;		HX_STACK_VAR(tmp191,"tmp191");
				HX_STACK_LINE(154)
				_this->listen_x(tmp191);
			}
			HX_STACK_LINE(154)
			bool tmp191 = (_this->listen_y != null());		HX_STACK_VAR(tmp191,"tmp191");
			HX_STACK_LINE(154)
			bool tmp192;		HX_STACK_VAR(tmp192,"tmp192");
			HX_STACK_LINE(154)
			if ((tmp191)){
				HX_STACK_LINE(154)
				bool tmp193 = _this->ignore_listeners;		HX_STACK_VAR(tmp193,"tmp193");
				HX_STACK_LINE(154)
				bool tmp194 = tmp193;		HX_STACK_VAR(tmp194,"tmp194");
				HX_STACK_LINE(154)
				tmp192 = !(tmp194);
			}
			else{
				HX_STACK_LINE(154)
				tmp192 = false;
			}
			HX_STACK_LINE(154)
			if ((tmp192)){
				HX_STACK_LINE(154)
				Float tmp193 = _this->y;		HX_STACK_VAR(tmp193,"tmp193");
				HX_STACK_LINE(154)
				_this->listen_y(tmp193);
			}
			HX_STACK_LINE(154)
			_this;
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_STACK_LINE(154)
	_closer->onbounds->listen( Dynamic(new _Function_1_8(_closer,_g)));

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_9,::mint::render::luxe::Window,_g)
	int __ArgCount() const { return 1; }
	Void run(bool _visible){
		HX_STACK_FRAME("*","_Function_1_9",0x5200ed3f,"*._Function_1_9","mint/render/luxe/Window.hx",155,0x58bb7b41)
		HX_STACK_ARG(_visible,"_visible")
		{
			HX_STACK_LINE(155)
			bool tmp175 = _visible;		HX_STACK_VAR(tmp175,"tmp175");
			HX_STACK_LINE(155)
			_g->close->set_visible(tmp175);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(155)
	_closer->onvisible->listen( Dynamic(new _Function_1_9(_g)));

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_10,::mint::render::luxe::Window,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic _,::mint::Control _1){
		HX_STACK_FRAME("*","_Function_1_10",0x6ecea319,"*._Function_1_10","mint/render/luxe/Window.hx",157,0x58bb7b41)
		HX_STACK_ARG(_,"_")
		HX_STACK_ARG(_1,"_1")
		{
			HX_STACK_LINE(157)
			::phoenix::Color tmp175 = _g->color_collapse_hover;		HX_STACK_VAR(tmp175,"tmp175");
			HX_STACK_LINE(157)
			_g->collapse->set_color(tmp175);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(157)
	_collapser->onmouseenter->listen( Dynamic(new _Function_1_10(_g)));

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_11,::mint::render::luxe::Window,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic _,::mint::Control _1){
		HX_STACK_FRAME("*","_Function_1_11",0x6ecea31a,"*._Function_1_11","mint/render/luxe/Window.hx",158,0x58bb7b41)
		HX_STACK_ARG(_,"_")
		HX_STACK_ARG(_1,"_1")
		{
			HX_STACK_LINE(158)
			::phoenix::Color tmp175 = _g->color_collapse;		HX_STACK_VAR(tmp175,"tmp175");
			HX_STACK_LINE(158)
			_g->collapse->set_color(tmp175);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(158)
	_collapser->onmouseleave->listen( Dynamic(new _Function_1_11(_g)));

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_12,::mint::render::luxe::Window,_g,::mint::Control,_collapser)
	int __ArgCount() const { return 0; }
	Void run(){
		HX_STACK_FRAME("*","_Function_1_12",0x6ecea31b,"*._Function_1_12","mint/render/luxe/Window.hx",159,0x58bb7b41)
		{
			HX_STACK_LINE(159)
			::phoenix::Transform tmp175 = _g->collapse->transform;		HX_STACK_VAR(tmp175,"tmp175");
			HX_STACK_LINE(159)
			::phoenix::Vector tmp176 = tmp175->local->pos;		HX_STACK_VAR(tmp176,"tmp176");
			HX_STACK_LINE(159)
			::phoenix::Vector _this = tmp176;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(159)
			::mint::Canvas tmp177 = _g->control->canvas;		HX_STACK_VAR(tmp177,"tmp177");
			HX_STACK_LINE(159)
			Float tmp178 = tmp177->scale;		HX_STACK_VAR(tmp178,"tmp178");
			HX_STACK_LINE(159)
			Float tmp179 = _collapser->x;		HX_STACK_VAR(tmp179,"tmp179");
			HX_STACK_LINE(159)
			Float tmp180 = (Float(_collapser->w) / Float((int)2));		HX_STACK_VAR(tmp180,"tmp180");
			HX_STACK_LINE(159)
			Float tmp181 = (tmp179 + tmp180);		HX_STACK_VAR(tmp181,"tmp181");
			HX_STACK_LINE(159)
			Float tmp182 = (tmp178 * tmp181);		HX_STACK_VAR(tmp182,"tmp182");
			HX_STACK_LINE(159)
			Float _x = tmp182;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(159)
			::mint::Canvas tmp183 = _g->control->canvas;		HX_STACK_VAR(tmp183,"tmp183");
			HX_STACK_LINE(159)
			Float tmp184 = tmp183->scale;		HX_STACK_VAR(tmp184,"tmp184");
			HX_STACK_LINE(159)
			Float tmp185 = _collapser->y;		HX_STACK_VAR(tmp185,"tmp185");
			HX_STACK_LINE(159)
			Float tmp186 = (Float(_collapser->h) / Float((int)2));		HX_STACK_VAR(tmp186,"tmp186");
			HX_STACK_LINE(159)
			Float tmp187 = (tmp185 + tmp186);		HX_STACK_VAR(tmp187,"tmp187");
			HX_STACK_LINE(159)
			Float tmp188 = (tmp184 * tmp187);		HX_STACK_VAR(tmp188,"tmp188");
			HX_STACK_LINE(159)
			Float _y = tmp188;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(159)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(159)
			_this->ignore_listeners = true;
			HX_STACK_LINE(159)
			{
				HX_STACK_LINE(159)
				_this->x = _x;
				HX_STACK_LINE(159)
				bool tmp189 = _this->_construct;		HX_STACK_VAR(tmp189,"tmp189");
				HX_STACK_LINE(159)
				if ((tmp189)){
					HX_STACK_LINE(159)
					_this->x;
				}
				else{
					HX_STACK_LINE(159)
					bool tmp190 = (_this->listen_x != null());		HX_STACK_VAR(tmp190,"tmp190");
					HX_STACK_LINE(159)
					bool tmp191;		HX_STACK_VAR(tmp191,"tmp191");
					HX_STACK_LINE(159)
					if ((tmp190)){
						HX_STACK_LINE(159)
						bool tmp192 = _this->ignore_listeners;		HX_STACK_VAR(tmp192,"tmp192");
						HX_STACK_LINE(159)
						bool tmp193 = tmp192;		HX_STACK_VAR(tmp193,"tmp193");
						HX_STACK_LINE(159)
						tmp191 = !(tmp193);
					}
					else{
						HX_STACK_LINE(159)
						tmp191 = false;
					}
					HX_STACK_LINE(159)
					if ((tmp191)){
						HX_STACK_LINE(159)
						Float tmp192 = _x;		HX_STACK_VAR(tmp192,"tmp192");
						HX_STACK_LINE(159)
						_this->listen_x(tmp192);
					}
					HX_STACK_LINE(159)
					_this->x;
				}
			}
			HX_STACK_LINE(159)
			{
				HX_STACK_LINE(159)
				_this->y = _y;
				HX_STACK_LINE(159)
				bool tmp189 = _this->_construct;		HX_STACK_VAR(tmp189,"tmp189");
				HX_STACK_LINE(159)
				if ((tmp189)){
					HX_STACK_LINE(159)
					_this->y;
				}
				else{
					HX_STACK_LINE(159)
					bool tmp190 = (_this->listen_y != null());		HX_STACK_VAR(tmp190,"tmp190");
					HX_STACK_LINE(159)
					bool tmp191;		HX_STACK_VAR(tmp191,"tmp191");
					HX_STACK_LINE(159)
					if ((tmp190)){
						HX_STACK_LINE(159)
						bool tmp192 = _this->ignore_listeners;		HX_STACK_VAR(tmp192,"tmp192");
						HX_STACK_LINE(159)
						bool tmp193 = tmp192;		HX_STACK_VAR(tmp193,"tmp193");
						HX_STACK_LINE(159)
						tmp191 = !(tmp193);
					}
					else{
						HX_STACK_LINE(159)
						tmp191 = false;
					}
					HX_STACK_LINE(159)
					if ((tmp191)){
						HX_STACK_LINE(159)
						Float tmp192 = _y;		HX_STACK_VAR(tmp192,"tmp192");
						HX_STACK_LINE(159)
						_this->listen_y(tmp192);
					}
					HX_STACK_LINE(159)
					_this->y;
				}
			}
			HX_STACK_LINE(159)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(159)
			bool tmp189 = (_this->listen_x != null());		HX_STACK_VAR(tmp189,"tmp189");
			HX_STACK_LINE(159)
			bool tmp190;		HX_STACK_VAR(tmp190,"tmp190");
			HX_STACK_LINE(159)
			if ((tmp189)){
				HX_STACK_LINE(159)
				bool tmp191 = _this->ignore_listeners;		HX_STACK_VAR(tmp191,"tmp191");
				HX_STACK_LINE(159)
				bool tmp192 = tmp191;		HX_STACK_VAR(tmp192,"tmp192");
				HX_STACK_LINE(159)
				tmp190 = !(tmp192);
			}
			else{
				HX_STACK_LINE(159)
				tmp190 = false;
			}
			HX_STACK_LINE(159)
			if ((tmp190)){
				HX_STACK_LINE(159)
				Float tmp191 = _this->x;		HX_STACK_VAR(tmp191,"tmp191");
				HX_STACK_LINE(159)
				_this->listen_x(tmp191);
			}
			HX_STACK_LINE(159)
			bool tmp191 = (_this->listen_y != null());		HX_STACK_VAR(tmp191,"tmp191");
			HX_STACK_LINE(159)
			bool tmp192;		HX_STACK_VAR(tmp192,"tmp192");
			HX_STACK_LINE(159)
			if ((tmp191)){
				HX_STACK_LINE(159)
				bool tmp193 = _this->ignore_listeners;		HX_STACK_VAR(tmp193,"tmp193");
				HX_STACK_LINE(159)
				bool tmp194 = tmp193;		HX_STACK_VAR(tmp194,"tmp194");
				HX_STACK_LINE(159)
				tmp192 = !(tmp194);
			}
			else{
				HX_STACK_LINE(159)
				tmp192 = false;
			}
			HX_STACK_LINE(159)
			if ((tmp192)){
				HX_STACK_LINE(159)
				Float tmp193 = _this->y;		HX_STACK_VAR(tmp193,"tmp193");
				HX_STACK_LINE(159)
				_this->listen_y(tmp193);
			}
			HX_STACK_LINE(159)
			_this;
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_STACK_LINE(159)
	_collapser->onbounds->listen( Dynamic(new _Function_1_12(_g,_collapser)));

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_13,::mint::render::luxe::Window,_g)
	int __ArgCount() const { return 1; }
	Void run(bool _visible){
		HX_STACK_FRAME("*","_Function_1_13",0x6ecea31c,"*._Function_1_13","mint/render/luxe/Window.hx",160,0x58bb7b41)
		HX_STACK_ARG(_visible,"_visible")
		{
			HX_STACK_LINE(160)
			bool tmp175 = _visible;		HX_STACK_VAR(tmp175,"tmp175");
			HX_STACK_LINE(160)
			_g->collapse->set_visible(tmp175);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(160)
	_collapser->onvisible->listen( Dynamic(new _Function_1_13(_g)));
	HX_STACK_LINE(162)
	::mint::Window tmp175 = this->window;		HX_STACK_VAR(tmp175,"tmp175");
	HX_STACK_LINE(162)
	Dynamic tmp176 = this->oncollapse_dyn();		HX_STACK_VAR(tmp176,"tmp176");
	HX_STACK_LINE(162)
	tmp175->oncollapse->listen(tmp176);
	HX_STACK_LINE(164)
	::mint::Control tmp177 = this->control;		HX_STACK_VAR(tmp177,"tmp177");
	HX_STACK_LINE(164)
	Float tmp178 = tmp177->canvas->scale;		HX_STACK_VAR(tmp178,"tmp178");
	HX_STACK_LINE(164)
	this->update_clip(tmp178);
}
;
	return null();
}

//Window_obj::~Window_obj() { }

Dynamic Window_obj::__CreateEmpty() { return  new Window_obj; }
hx::ObjectPtr< Window_obj > Window_obj::__new(::mint::render::luxe::LuxeMintRender _render,::mint::Window _control)
{  hx::ObjectPtr< Window_obj > _result_ = new Window_obj();
	_result_->__construct(_render,_control);
	return _result_;}

Dynamic Window_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Window_obj > _result_ = new Window_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Window_obj::update_clip( Float _scale){
{
		HX_STACK_FRAME("mint.render.luxe.Window","update_clip",0x46db6f94,"mint.render.luxe.Window.update_clip","mint/render/luxe/Window.hx",168,0x58bb7b41)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_scale,"_scale")
		HX_STACK_LINE(170)
		::mint::Control tmp = this->control;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(170)
		::mint::Control tmp1 = tmp->clip_with;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(170)
		Float tmp2 = _scale;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(170)
		::phoenix::Rectangle tmp3 = ::mint::render::luxe::Convert_obj::bounds(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(170)
		::phoenix::Rectangle _clip = tmp3;		HX_STACK_VAR(_clip,"_clip");
		HX_STACK_LINE(172)
		::phoenix::geometry::QuadGeometry tmp4 = this->visual;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(172)
		::phoenix::Rectangle tmp5 = _clip;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(172)
		tmp4->set_clip_rect(tmp5);
		HX_STACK_LINE(173)
		::phoenix::geometry::QuadGeometry tmp6 = this->top;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(173)
		::phoenix::Rectangle tmp7 = _clip;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(173)
		tmp6->set_clip_rect(tmp7);
		HX_STACK_LINE(174)
		::phoenix::geometry::Geometry tmp8 = this->collapse;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(174)
		::phoenix::Rectangle tmp9 = _clip;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(174)
		tmp8->set_clip_rect(tmp9);
		HX_STACK_LINE(175)
		::phoenix::geometry::Geometry tmp10 = this->close;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(175)
		::phoenix::Rectangle tmp11 = _clip;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(175)
		tmp10->set_clip_rect(tmp11);
		HX_STACK_LINE(176)
		::phoenix::geometry::RectangleGeometry tmp12 = this->border;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(176)
		::phoenix::Rectangle tmp13 = _clip;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(176)
		tmp12->set_clip_rect(tmp13);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,update_clip,(void))

Void Window_obj::onscale( Float _scale,Float _prev_scale){
{
		HX_STACK_FRAME("mint.render.luxe.Window","onscale",0xdf5f8999,"mint.render.luxe.Window.onscale","mint/render/luxe/Window.hx",180,0x58bb7b41)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_scale,"_scale")
		HX_STACK_ARG(_prev_scale,"_prev_scale")
		HX_STACK_LINE(182)
		Float tmp = _scale;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(182)
		this->update_clip(tmp);
		HX_STACK_LINE(183)
		{
			HX_STACK_LINE(183)
			::phoenix::geometry::Geometry tmp1 = this->close;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(183)
			::phoenix::Spatial tmp2 = tmp1->transform->local;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(183)
			::phoenix::Vector _this = tmp2->scale;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(183)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(183)
			_this->ignore_listeners = true;
			HX_STACK_LINE(183)
			{
				HX_STACK_LINE(183)
				_this->x = _scale;
				HX_STACK_LINE(183)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(183)
				if ((tmp3)){
					HX_STACK_LINE(183)
					_this->x;
				}
				else{
					HX_STACK_LINE(183)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(183)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(183)
					if ((tmp4)){
						HX_STACK_LINE(183)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(183)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(183)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(183)
						tmp5 = false;
					}
					HX_STACK_LINE(183)
					if ((tmp5)){
						HX_STACK_LINE(183)
						Float tmp6 = _scale;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(183)
						_this->listen_x(tmp6);
					}
					HX_STACK_LINE(183)
					_this->x;
				}
			}
			HX_STACK_LINE(183)
			{
				HX_STACK_LINE(183)
				_this->y = _scale;
				HX_STACK_LINE(183)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(183)
				if ((tmp3)){
					HX_STACK_LINE(183)
					_this->y;
				}
				else{
					HX_STACK_LINE(183)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(183)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(183)
					if ((tmp4)){
						HX_STACK_LINE(183)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(183)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(183)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(183)
						tmp5 = false;
					}
					HX_STACK_LINE(183)
					if ((tmp5)){
						HX_STACK_LINE(183)
						Float tmp6 = _scale;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(183)
						_this->listen_y(tmp6);
					}
					HX_STACK_LINE(183)
					_this->y;
				}
			}
			HX_STACK_LINE(183)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(183)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(183)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(183)
			if ((tmp3)){
				HX_STACK_LINE(183)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(183)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(183)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(183)
				tmp4 = false;
			}
			HX_STACK_LINE(183)
			if ((tmp4)){
				HX_STACK_LINE(183)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(183)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(183)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(183)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(183)
			if ((tmp5)){
				HX_STACK_LINE(183)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(183)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(183)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(183)
				tmp6 = false;
			}
			HX_STACK_LINE(183)
			if ((tmp6)){
				HX_STACK_LINE(183)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(183)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(183)
			_this;
		}
		HX_STACK_LINE(184)
		{
			HX_STACK_LINE(184)
			::phoenix::geometry::Geometry tmp1 = this->collapse;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(184)
			::phoenix::Spatial tmp2 = tmp1->transform->local;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(184)
			::phoenix::Vector _this = tmp2->scale;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(184)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(184)
			_this->ignore_listeners = true;
			HX_STACK_LINE(184)
			{
				HX_STACK_LINE(184)
				_this->x = _scale;
				HX_STACK_LINE(184)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(184)
				if ((tmp3)){
					HX_STACK_LINE(184)
					_this->x;
				}
				else{
					HX_STACK_LINE(184)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(184)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(184)
					if ((tmp4)){
						HX_STACK_LINE(184)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(184)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(184)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(184)
						tmp5 = false;
					}
					HX_STACK_LINE(184)
					if ((tmp5)){
						HX_STACK_LINE(184)
						Float tmp6 = _scale;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(184)
						_this->listen_x(tmp6);
					}
					HX_STACK_LINE(184)
					_this->x;
				}
			}
			HX_STACK_LINE(184)
			{
				HX_STACK_LINE(184)
				_this->y = _scale;
				HX_STACK_LINE(184)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(184)
				if ((tmp3)){
					HX_STACK_LINE(184)
					_this->y;
				}
				else{
					HX_STACK_LINE(184)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(184)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(184)
					if ((tmp4)){
						HX_STACK_LINE(184)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(184)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(184)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(184)
						tmp5 = false;
					}
					HX_STACK_LINE(184)
					if ((tmp5)){
						HX_STACK_LINE(184)
						Float tmp6 = _scale;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(184)
						_this->listen_y(tmp6);
					}
					HX_STACK_LINE(184)
					_this->y;
				}
			}
			HX_STACK_LINE(184)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(184)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(184)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(184)
			if ((tmp3)){
				HX_STACK_LINE(184)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(184)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(184)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(184)
				tmp4 = false;
			}
			HX_STACK_LINE(184)
			if ((tmp4)){
				HX_STACK_LINE(184)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(184)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(184)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(184)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(184)
			if ((tmp5)){
				HX_STACK_LINE(184)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(184)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(184)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(184)
				tmp6 = false;
			}
			HX_STACK_LINE(184)
			if ((tmp6)){
				HX_STACK_LINE(184)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(184)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(184)
			_this;
		}
	}
return null();
}


Void Window_obj::ondestroy( ){
{
		HX_STACK_FRAME("mint.render.luxe.Window","ondestroy",0xdd0709c9,"mint.render.luxe.Window.ondestroy","mint/render/luxe/Window.hx",188,0x58bb7b41)
		HX_STACK_THIS(this)
		HX_STACK_LINE(190)
		::phoenix::geometry::QuadGeometry tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(190)
		tmp->drop(null());
		HX_STACK_LINE(191)
		::phoenix::geometry::QuadGeometry tmp1 = this->top;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(191)
		tmp1->drop(null());
		HX_STACK_LINE(192)
		::phoenix::geometry::RectangleGeometry tmp2 = this->border;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(192)
		tmp2->drop(null());
		HX_STACK_LINE(193)
		::phoenix::geometry::Geometry tmp3 = this->collapse;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(193)
		tmp3->drop(null());
		HX_STACK_LINE(194)
		::phoenix::geometry::Geometry tmp4 = this->close;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(194)
		tmp4->drop(null());
		HX_STACK_LINE(196)
		this->visual = null();
		HX_STACK_LINE(197)
		this->top = null();
		HX_STACK_LINE(198)
		this->border = null();
		HX_STACK_LINE(199)
		this->collapse = null();
		HX_STACK_LINE(200)
		this->close = null();
	}
return null();
}


Void Window_obj::onbounds( ){
{
		HX_STACK_FRAME("mint.render.luxe.Window","onbounds",0xbe307886,"mint.render.luxe.Window.onbounds","mint/render/luxe/Window.hx",204,0x58bb7b41)
		HX_STACK_THIS(this)
		HX_STACK_LINE(206)
		{
			HX_STACK_LINE(206)
			::phoenix::geometry::QuadGeometry tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(206)
			::phoenix::Spatial tmp1 = tmp->transform->local;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(206)
			::phoenix::Vector _this = tmp1->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(206)
			::mint::Control tmp2 = this->control;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(206)
			Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(206)
			::mint::Control tmp4 = this->control;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(206)
			Float tmp5 = tmp4->canvas->scale;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(206)
			Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(206)
			Float _x = tmp6;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(206)
			::mint::Control tmp7 = this->control;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(206)
			Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(206)
			::mint::Control tmp9 = this->control;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(206)
			Float tmp10 = tmp9->canvas->scale;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(206)
			Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(206)
			Float _y = tmp11;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(206)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(206)
			_this->ignore_listeners = true;
			HX_STACK_LINE(206)
			{
				HX_STACK_LINE(206)
				_this->x = _x;
				HX_STACK_LINE(206)
				bool tmp12 = _this->_construct;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(206)
				if ((tmp12)){
					HX_STACK_LINE(206)
					_this->x;
				}
				else{
					HX_STACK_LINE(206)
					bool tmp13 = (_this->listen_x != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(206)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(206)
					if ((tmp13)){
						HX_STACK_LINE(206)
						bool tmp15 = _this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(206)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(206)
						tmp14 = !(tmp16);
					}
					else{
						HX_STACK_LINE(206)
						tmp14 = false;
					}
					HX_STACK_LINE(206)
					if ((tmp14)){
						HX_STACK_LINE(206)
						Float tmp15 = _x;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(206)
						_this->listen_x(tmp15);
					}
					HX_STACK_LINE(206)
					_this->x;
				}
			}
			HX_STACK_LINE(206)
			{
				HX_STACK_LINE(206)
				_this->y = _y;
				HX_STACK_LINE(206)
				bool tmp12 = _this->_construct;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(206)
				if ((tmp12)){
					HX_STACK_LINE(206)
					_this->y;
				}
				else{
					HX_STACK_LINE(206)
					bool tmp13 = (_this->listen_y != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(206)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(206)
					if ((tmp13)){
						HX_STACK_LINE(206)
						bool tmp15 = _this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(206)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(206)
						tmp14 = !(tmp16);
					}
					else{
						HX_STACK_LINE(206)
						tmp14 = false;
					}
					HX_STACK_LINE(206)
					if ((tmp14)){
						HX_STACK_LINE(206)
						Float tmp15 = _y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(206)
						_this->listen_y(tmp15);
					}
					HX_STACK_LINE(206)
					_this->y;
				}
			}
			HX_STACK_LINE(206)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(206)
			bool tmp12 = (_this->listen_x != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(206)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(206)
			if ((tmp12)){
				HX_STACK_LINE(206)
				bool tmp14 = _this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(206)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(206)
				tmp13 = !(tmp15);
			}
			else{
				HX_STACK_LINE(206)
				tmp13 = false;
			}
			HX_STACK_LINE(206)
			if ((tmp13)){
				HX_STACK_LINE(206)
				Float tmp14 = _this->x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(206)
				_this->listen_x(tmp14);
			}
			HX_STACK_LINE(206)
			bool tmp14 = (_this->listen_y != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(206)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(206)
			if ((tmp14)){
				HX_STACK_LINE(206)
				bool tmp16 = _this->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(206)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(206)
				tmp15 = !(tmp17);
			}
			else{
				HX_STACK_LINE(206)
				tmp15 = false;
			}
			HX_STACK_LINE(206)
			if ((tmp15)){
				HX_STACK_LINE(206)
				Float tmp16 = _this->y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(206)
				_this->listen_y(tmp16);
			}
			HX_STACK_LINE(206)
			_this;
		}
		HX_STACK_LINE(207)
		::phoenix::geometry::QuadGeometry tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(207)
		::mint::Control tmp1 = this->control;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(207)
		Float tmp2 = tmp1->w;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(207)
		::mint::Control tmp3 = this->control;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(207)
		Float tmp4 = tmp3->canvas->scale;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(207)
		Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(207)
		::mint::Control tmp6 = this->control;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(207)
		Float tmp7 = tmp6->h;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(207)
		::mint::Control tmp8 = this->control;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(207)
		Float tmp9 = tmp8->canvas->scale;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(207)
		Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(207)
		tmp->resize_xy(tmp5,tmp10);
		HX_STACK_LINE(209)
		{
			HX_STACK_LINE(209)
			::phoenix::geometry::QuadGeometry tmp11 = this->top;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(209)
			::phoenix::Spatial tmp12 = tmp11->transform->local;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(209)
			::phoenix::Vector _this = tmp12->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(209)
			::mint::Control tmp13 = this->control;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(209)
			Float tmp14 = tmp13->canvas->scale;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(209)
			::mint::Window tmp15 = this->window;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(209)
			Float tmp16 = tmp15->title->x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(209)
			Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(209)
			Float _x = tmp17;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(209)
			::mint::Control tmp18 = this->control;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(209)
			Float tmp19 = tmp18->canvas->scale;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(209)
			::mint::Window tmp20 = this->window;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(209)
			Float tmp21 = tmp20->title->y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(209)
			Float tmp22 = (tmp19 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(209)
			Float _y = tmp22;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(209)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(209)
			_this->ignore_listeners = true;
			HX_STACK_LINE(209)
			{
				HX_STACK_LINE(209)
				_this->x = _x;
				HX_STACK_LINE(209)
				bool tmp23 = _this->_construct;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(209)
				if ((tmp23)){
					HX_STACK_LINE(209)
					_this->x;
				}
				else{
					HX_STACK_LINE(209)
					bool tmp24 = (_this->listen_x != null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(209)
					bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(209)
					if ((tmp24)){
						HX_STACK_LINE(209)
						bool tmp26 = _this->ignore_listeners;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(209)
						bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(209)
						tmp25 = !(tmp27);
					}
					else{
						HX_STACK_LINE(209)
						tmp25 = false;
					}
					HX_STACK_LINE(209)
					if ((tmp25)){
						HX_STACK_LINE(209)
						Float tmp26 = _x;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(209)
						_this->listen_x(tmp26);
					}
					HX_STACK_LINE(209)
					_this->x;
				}
			}
			HX_STACK_LINE(209)
			{
				HX_STACK_LINE(209)
				_this->y = _y;
				HX_STACK_LINE(209)
				bool tmp23 = _this->_construct;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(209)
				if ((tmp23)){
					HX_STACK_LINE(209)
					_this->y;
				}
				else{
					HX_STACK_LINE(209)
					bool tmp24 = (_this->listen_y != null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(209)
					bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(209)
					if ((tmp24)){
						HX_STACK_LINE(209)
						bool tmp26 = _this->ignore_listeners;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(209)
						bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(209)
						tmp25 = !(tmp27);
					}
					else{
						HX_STACK_LINE(209)
						tmp25 = false;
					}
					HX_STACK_LINE(209)
					if ((tmp25)){
						HX_STACK_LINE(209)
						Float tmp26 = _y;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(209)
						_this->listen_y(tmp26);
					}
					HX_STACK_LINE(209)
					_this->y;
				}
			}
			HX_STACK_LINE(209)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(209)
			bool tmp23 = (_this->listen_x != null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(209)
			bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(209)
			if ((tmp23)){
				HX_STACK_LINE(209)
				bool tmp25 = _this->ignore_listeners;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(209)
				bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(209)
				tmp24 = !(tmp26);
			}
			else{
				HX_STACK_LINE(209)
				tmp24 = false;
			}
			HX_STACK_LINE(209)
			if ((tmp24)){
				HX_STACK_LINE(209)
				Float tmp25 = _this->x;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(209)
				_this->listen_x(tmp25);
			}
			HX_STACK_LINE(209)
			bool tmp25 = (_this->listen_y != null());		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(209)
			bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(209)
			if ((tmp25)){
				HX_STACK_LINE(209)
				bool tmp27 = _this->ignore_listeners;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(209)
				bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(209)
				tmp26 = !(tmp28);
			}
			else{
				HX_STACK_LINE(209)
				tmp26 = false;
			}
			HX_STACK_LINE(209)
			if ((tmp26)){
				HX_STACK_LINE(209)
				Float tmp27 = _this->y;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(209)
				_this->listen_y(tmp27);
			}
			HX_STACK_LINE(209)
			_this;
		}
		HX_STACK_LINE(210)
		::phoenix::geometry::QuadGeometry tmp11 = this->top;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(210)
		::mint::Control tmp12 = this->control;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(210)
		Float tmp13 = tmp12->canvas->scale;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(210)
		::mint::Window tmp14 = this->window;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(210)
		Float tmp15 = tmp14->title->w;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(210)
		Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(210)
		::mint::Control tmp17 = this->control;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(210)
		Float tmp18 = tmp17->canvas->scale;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(210)
		::mint::Window tmp19 = this->window;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(210)
		Float tmp20 = tmp19->title->h;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(210)
		Float tmp21 = (tmp18 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(210)
		tmp11->resize_xy(tmp16,tmp21);
		HX_STACK_LINE(212)
		::phoenix::geometry::RectangleGeometry tmp22 = this->border;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(212)
		::mint::Control tmp23 = this->control;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(212)
		Float tmp24 = tmp23->x;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(212)
		::mint::Control tmp25 = this->control;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(212)
		Float tmp26 = tmp25->canvas->scale;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(212)
		Float tmp27 = (tmp24 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(212)
		::mint::Control tmp28 = this->control;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(212)
		Float tmp29 = tmp28->y;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(212)
		::mint::Control tmp30 = this->control;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(212)
		Float tmp31 = tmp30->canvas->scale;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(212)
		Float tmp32 = (tmp29 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(212)
		::mint::Control tmp33 = this->control;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(212)
		Float tmp34 = tmp33->w;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(212)
		::mint::Control tmp35 = this->control;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(212)
		Float tmp36 = tmp35->canvas->scale;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(212)
		Float tmp37 = (tmp34 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(212)
		Float tmp38 = (tmp37 + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(212)
		::mint::Control tmp39 = this->control;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(212)
		Float tmp40 = tmp39->h;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(212)
		::mint::Control tmp41 = this->control;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(212)
		Float tmp42 = tmp41->canvas->scale;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(212)
		Float tmp43 = (tmp40 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(212)
		tmp22->set_xywh(tmp27,tmp32,tmp38,tmp43);
	}
return null();
}


Void Window_obj::onclip( bool _disable,Float _x,Float _y,Float _w,Float _h){
{
		HX_STACK_FRAME("mint.render.luxe.Window","onclip",0x2fda0aa1,"mint.render.luxe.Window.onclip","mint/render/luxe/Window.hx",216,0x58bb7b41)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_disable,"_disable")
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_w,"_w")
		HX_STACK_ARG(_h,"_h")
		HX_STACK_LINE(218)
		::mint::Control tmp = this->control;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(218)
		Float tmp1 = tmp->canvas->scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(218)
		this->update_clip(tmp1);
	}
return null();
}


Void Window_obj::onvisible( bool _visible){
{
		HX_STACK_FRAME("mint.render.luxe.Window","onvisible",0x5ba55541,"mint.render.luxe.Window.onvisible","mint/render/luxe/Window.hx",222,0x58bb7b41)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_visible,"_visible")
		HX_STACK_LINE(224)
		::phoenix::geometry::QuadGeometry tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(224)
		bool tmp1 = _visible;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(224)
		tmp->set_visible(tmp1);
		HX_STACK_LINE(225)
		::phoenix::geometry::QuadGeometry tmp2 = this->top;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(225)
		bool tmp3 = _visible;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(225)
		tmp2->set_visible(tmp3);
		HX_STACK_LINE(226)
		::phoenix::geometry::RectangleGeometry tmp4 = this->border;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(226)
		bool tmp5 = _visible;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(226)
		tmp4->set_visible(tmp5);
	}
return null();
}


Void Window_obj::ondepth( Float _depth){
{
		HX_STACK_FRAME("mint.render.luxe.Window","ondepth",0x3dbaac12,"mint.render.luxe.Window.ondepth","mint/render/luxe/Window.hx",230,0x58bb7b41)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_depth,"_depth")
		HX_STACK_LINE(232)
		::phoenix::geometry::QuadGeometry tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(232)
		::mint::render::luxe::LuxeMintRender tmp1 = this->render;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(232)
		Dynamic tmp2 = tmp1->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(232)
		Float tmp3 = _depth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(232)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(232)
		tmp->set_depth(tmp4);
		HX_STACK_LINE(233)
		::phoenix::geometry::QuadGeometry tmp5 = this->top;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(233)
		::phoenix::geometry::QuadGeometry tmp6 = this->visual;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(233)
		Float tmp7 = tmp6->state->depth;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(233)
		Float tmp8 = (tmp7 + ((Float)0.001));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(233)
		tmp5->set_depth(tmp8);
		HX_STACK_LINE(234)
		::phoenix::geometry::RectangleGeometry tmp9 = this->border;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(234)
		::phoenix::geometry::QuadGeometry tmp10 = this->visual;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(234)
		Float tmp11 = tmp10->state->depth;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(234)
		Float tmp12 = (tmp11 + ((Float)0.002));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(234)
		tmp9->set_depth(tmp12);
		HX_STACK_LINE(235)
		::phoenix::geometry::Geometry tmp13 = this->collapse;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(235)
		::phoenix::geometry::QuadGeometry tmp14 = this->visual;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(235)
		Float tmp15 = tmp14->state->depth;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(235)
		Float tmp16 = (tmp15 + ((Float)0.003));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(235)
		tmp13->set_depth(tmp16);
		HX_STACK_LINE(236)
		::phoenix::geometry::Geometry tmp17 = this->close;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(236)
		::phoenix::geometry::QuadGeometry tmp18 = this->visual;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(236)
		Float tmp19 = tmp18->state->depth;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(236)
		Float tmp20 = (tmp19 + ((Float)0.004));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(236)
		tmp17->set_depth(tmp20);
	}
return null();
}


Void Window_obj::oncollapse( bool state){
{
		HX_STACK_FRAME("mint.render.luxe.Window","oncollapse",0x7cd5a9be,"mint.render.luxe.Window.oncollapse","mint/render/luxe/Window.hx",240,0x58bb7b41)
		HX_STACK_THIS(this)
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(242)
		bool tmp = state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(242)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(242)
		if ((tmp)){
			HX_STACK_LINE(242)
			tmp1 = (int)-90;
		}
		else{
			HX_STACK_LINE(242)
			tmp1 = (int)0;
		}
		HX_STACK_LINE(242)
		int a = tmp1;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(243)
		::phoenix::geometry::Geometry tmp2 = this->collapse;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(243)
		::phoenix::Spatial tmp3 = tmp2->transform->local;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(243)
		Float tmp4 = (a * ((Float)0.0174532925199432781));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(243)
		::phoenix::Vector tmp5 = ::phoenix::Vector_obj::__new((int)0,(int)0,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(243)
		tmp3->rotation->setFromEuler(tmp5,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,oncollapse,(void))


Window_obj::Window_obj()
{
}

void Window_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Window);
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(visual,"visual");
	HX_MARK_MEMBER_NAME(top,"top");
	HX_MARK_MEMBER_NAME(collapse,"collapse");
	HX_MARK_MEMBER_NAME(close,"close");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(color_titlebar,"color_titlebar");
	HX_MARK_MEMBER_NAME(color_border,"color_border");
	HX_MARK_MEMBER_NAME(color_close,"color_close");
	HX_MARK_MEMBER_NAME(color_collapse,"color_collapse");
	HX_MARK_MEMBER_NAME(color_close_hover,"color_close_hover");
	HX_MARK_MEMBER_NAME(color_collapse_hover,"color_collapse_hover");
	HX_MARK_MEMBER_NAME(render,"render");
	::mint::render::Render_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Window_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(visual,"visual");
	HX_VISIT_MEMBER_NAME(top,"top");
	HX_VISIT_MEMBER_NAME(collapse,"collapse");
	HX_VISIT_MEMBER_NAME(close,"close");
	HX_VISIT_MEMBER_NAME(border,"border");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(color_titlebar,"color_titlebar");
	HX_VISIT_MEMBER_NAME(color_border,"color_border");
	HX_VISIT_MEMBER_NAME(color_close,"color_close");
	HX_VISIT_MEMBER_NAME(color_collapse,"color_collapse");
	HX_VISIT_MEMBER_NAME(color_close_hover,"color_close_hover");
	HX_VISIT_MEMBER_NAME(color_collapse_hover,"color_collapse_hover");
	HX_VISIT_MEMBER_NAME(render,"render");
	::mint::render::Render_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Window_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { return top; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { return window; }
		if (HX_FIELD_EQ(inName,"visual") ) { return visual; }
		if (HX_FIELD_EQ(inName,"border") ) { return border; }
		if (HX_FIELD_EQ(inName,"render") ) { return render; }
		if (HX_FIELD_EQ(inName,"onclip") ) { return onclip_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onscale") ) { return onscale_dyn(); }
		if (HX_FIELD_EQ(inName,"ondepth") ) { return ondepth_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"collapse") ) { return collapse; }
		if (HX_FIELD_EQ(inName,"onbounds") ) { return onbounds_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onvisible") ) { return onvisible_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"oncollapse") ) { return oncollapse_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"color_close") ) { return color_close; }
		if (HX_FIELD_EQ(inName,"update_clip") ) { return update_clip_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"color_border") ) { return color_border; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"color_titlebar") ) { return color_titlebar; }
		if (HX_FIELD_EQ(inName,"color_collapse") ) { return color_collapse; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"color_close_hover") ) { return color_close_hover; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"color_collapse_hover") ) { return color_collapse_hover; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Window_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { top=inValue.Cast< ::phoenix::geometry::QuadGeometry >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { close=inValue.Cast< ::phoenix::geometry::Geometry >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::mint::Window >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visual") ) { visual=inValue.Cast< ::phoenix::geometry::QuadGeometry >(); return inValue; }
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast< ::phoenix::geometry::RectangleGeometry >(); return inValue; }
		if (HX_FIELD_EQ(inName,"render") ) { render=inValue.Cast< ::mint::render::luxe::LuxeMintRender >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"collapse") ) { collapse=inValue.Cast< ::phoenix::geometry::Geometry >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"color_close") ) { color_close=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"color_border") ) { color_border=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"color_titlebar") ) { color_titlebar=inValue.Cast< ::phoenix::Color >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color_collapse") ) { color_collapse=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"color_close_hover") ) { color_close_hover=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"color_collapse_hover") ) { color_collapse_hover=inValue.Cast< ::phoenix::Color >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Window_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"));
	outFields->push(HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef"));
	outFields->push(HX_HCSTRING("top","\x95","\x66","\x58","\x00"));
	outFields->push(HX_HCSTRING("collapse","\x6d","\x51","\x95","\xc4"));
	outFields->push(HX_HCSTRING("close","\xb8","\x17","\x63","\x48"));
	outFields->push(HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("color_titlebar","\xd7","\xec","\x52","\xda"));
	outFields->push(HX_HCSTRING("color_border","\x88","\x2f","\x97","\x2e"));
	outFields->push(HX_HCSTRING("color_close","\x9c","\x7c","\xde","\xc9"));
	outFields->push(HX_HCSTRING("color_collapse","\x09","\x13","\x05","\xd2"));
	outFields->push(HX_HCSTRING("color_close_hover","\x99","\x06","\x44","\x68"));
	outFields->push(HX_HCSTRING("color_collapse_hover","\xc6","\xac","\x22","\x59"));
	outFields->push(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::mint::Window*/ ,(int)offsetof(Window_obj,window),HX_HCSTRING("window","\xf0","\x93","\x8c","\x52")},
	{hx::fsObject /*::phoenix::geometry::QuadGeometry*/ ,(int)offsetof(Window_obj,visual),HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef")},
	{hx::fsObject /*::phoenix::geometry::QuadGeometry*/ ,(int)offsetof(Window_obj,top),HX_HCSTRING("top","\x95","\x66","\x58","\x00")},
	{hx::fsObject /*::phoenix::geometry::Geometry*/ ,(int)offsetof(Window_obj,collapse),HX_HCSTRING("collapse","\x6d","\x51","\x95","\xc4")},
	{hx::fsObject /*::phoenix::geometry::Geometry*/ ,(int)offsetof(Window_obj,close),HX_HCSTRING("close","\xb8","\x17","\x63","\x48")},
	{hx::fsObject /*::phoenix::geometry::RectangleGeometry*/ ,(int)offsetof(Window_obj,border),HX_HCSTRING("border","\xec","\x4c","\x1a","\x64")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Window_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Window_obj,color_titlebar),HX_HCSTRING("color_titlebar","\xd7","\xec","\x52","\xda")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Window_obj,color_border),HX_HCSTRING("color_border","\x88","\x2f","\x97","\x2e")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Window_obj,color_close),HX_HCSTRING("color_close","\x9c","\x7c","\xde","\xc9")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Window_obj,color_collapse),HX_HCSTRING("color_collapse","\x09","\x13","\x05","\xd2")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Window_obj,color_close_hover),HX_HCSTRING("color_close_hover","\x99","\x06","\x44","\x68")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Window_obj,color_collapse_hover),HX_HCSTRING("color_collapse_hover","\xc6","\xac","\x22","\x59")},
	{hx::fsObject /*::mint::render::luxe::LuxeMintRender*/ ,(int)offsetof(Window_obj,render),HX_HCSTRING("render","\x56","\x6b","\x29","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"),
	HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef"),
	HX_HCSTRING("top","\x95","\x66","\x58","\x00"),
	HX_HCSTRING("collapse","\x6d","\x51","\x95","\xc4"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("color_titlebar","\xd7","\xec","\x52","\xda"),
	HX_HCSTRING("color_border","\x88","\x2f","\x97","\x2e"),
	HX_HCSTRING("color_close","\x9c","\x7c","\xde","\xc9"),
	HX_HCSTRING("color_collapse","\x09","\x13","\x05","\xd2"),
	HX_HCSTRING("color_close_hover","\x99","\x06","\x44","\x68"),
	HX_HCSTRING("color_collapse_hover","\xc6","\xac","\x22","\x59"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("update_clip","\x06","\x84","\x3e","\x47"),
	HX_HCSTRING("onscale","\x0b","\xfd","\xde","\x7b"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onbounds","\xd4","\x08","\x36","\x11"),
	HX_HCSTRING("onclip","\x6f","\x4b","\x73","\xf9"),
	HX_HCSTRING("onvisible","\x33","\x09","\x7e","\xad"),
	HX_HCSTRING("ondepth","\x84","\x1f","\x3a","\xda"),
	HX_HCSTRING("oncollapse","\x8c","\x69","\x9a","\xc8"),
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
	__mClass->mName = HX_HCSTRING("mint.render.luxe.Window","\xfc","\xae","\x6e","\x43");
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
} // end namespace render
} // end namespace luxe
