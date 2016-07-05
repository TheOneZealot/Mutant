#include <hxcpp.h>

#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
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
#ifndef INCLUDED_mint_Scroll
#include <mint/Scroll.h>
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
#ifndef INCLUDED_mint_render_luxe_Scroll
#include <mint/render/luxe/Scroll.h>
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
#ifndef INCLUDED_phoenix_geometry_QuadGeometry
#include <phoenix/geometry/QuadGeometry.h>
#endif
namespace mint{
namespace render{
namespace luxe{

Void Scroll_obj::__construct(::mint::render::luxe::LuxeMintRender _render,::mint::Scroll _control)
{
HX_STACK_FRAME("mint.render.luxe.Scroll","new",0xb5fc948b,"mint.render.luxe.Scroll.new","mint/render/luxe/Scroll.hx",32,0x0090e744)
HX_STACK_THIS(this)
HX_STACK_ARG(_render,"_render")
HX_STACK_ARG(_control,"_control")
{
	HX_STACK_LINE(34)
	this->scroll = _control;
	HX_STACK_LINE(35)
	this->render = _render;
	HX_STACK_LINE(37)
	::mint::render::luxe::LuxeMintRender tmp = this->render;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	::mint::Scroll tmp1 = _control;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(39)
	::mint::Scroll tmp2 = this->scroll;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(39)
	Dynamic tmp3 = tmp2->options->__Field(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(39)
	Dynamic _opt = tmp3;		HX_STACK_VAR(_opt,"_opt");
	HX_STACK_LINE(41)
	::phoenix::Color tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		bool tmp5 = (_opt->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(41)
		if ((tmp5)){
			HX_STACK_LINE(41)
			::phoenix::Color tmp6 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(41)
			::phoenix::Color tmp7 = tmp6->rgb((int)1644826);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(41)
			_opt->__FieldRef(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")) = tmp7;
		}
		HX_STACK_LINE(41)
		tmp4 = _opt->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );
	}
	HX_STACK_LINE(41)
	this->color = tmp4;
	HX_STACK_LINE(42)
	::phoenix::Color tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		bool tmp6 = (_opt->__Field(HX_HCSTRING("color_handles","\xaf","\x15","\x9f","\xa8"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(42)
		if ((tmp6)){
			HX_STACK_LINE(42)
			::phoenix::Color tmp7 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(42)
			::phoenix::Color tmp8 = tmp7->rgb((int)10340963);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(42)
			_opt->__FieldRef(HX_HCSTRING("color_handles","\xaf","\x15","\x9f","\xa8")) = tmp8;
		}
		HX_STACK_LINE(42)
		tmp5 = _opt->__Field(HX_HCSTRING("color_handles","\xaf","\x15","\x9f","\xa8"), hx::paccDynamic );
	}
	HX_STACK_LINE(42)
	this->color_handles = tmp5;
	HX_STACK_LINE(45)
	::mint::Control tmp6 = this->control;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(45)
	::String tmp7 = tmp6->name;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(45)
	::String tmp8 = (tmp7 + HX_HCSTRING(".visual","\x6e","\x79","\x67","\x68"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(46)
	::mint::render::luxe::LuxeMintRender tmp9 = this->render;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(46)
	::phoenix::Batcher tmp10 = tmp9->options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(49)
	::mint::Control tmp11 = this->control;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(49)
	Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(49)
	::mint::Control tmp13 = this->control;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(49)
	Float tmp14 = tmp13->canvas->scale;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(49)
	Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(49)
	::mint::Control tmp16 = this->control;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(49)
	Float tmp17 = tmp16->y;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(49)
	::mint::Control tmp18 = this->control;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(49)
	Float tmp19 = tmp18->canvas->scale;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(49)
	Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(49)
	::phoenix::Vector tmp21 = ::phoenix::Vector_obj::__new(tmp15,tmp20,null(),null());		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(50)
	::mint::Control tmp22 = this->control;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(50)
	Float tmp23 = tmp22->w;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(50)
	::mint::Control tmp24 = this->control;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(50)
	Float tmp25 = tmp24->canvas->scale;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(50)
	Float tmp26 = (tmp23 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(50)
	::mint::Control tmp27 = this->control;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(50)
	Float tmp28 = tmp27->h;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(50)
	::mint::Control tmp29 = this->control;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(50)
	Float tmp30 = tmp29->canvas->scale;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(50)
	Float tmp31 = (tmp28 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(50)
	::phoenix::Vector tmp32 = ::phoenix::Vector_obj::__new(tmp26,tmp31,null(),null());		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(51)
	::phoenix::Color tmp33 = this->color;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(52)
	::mint::render::luxe::LuxeMintRender tmp34 = this->render;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(52)
	Dynamic tmp35 = tmp34->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(52)
	::mint::Control tmp36 = this->control;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(52)
	Float tmp37 = tmp36->depth;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(52)
	Float tmp38 = (tmp35 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(53)
	::mint::Control tmp39 = this->control;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(53)
	bool tmp40 = tmp39->visible;		HX_STACK_VAR(tmp40,"tmp40");
	struct _Function_1_1{
		inline static Dynamic Block( ::phoenix::Color &tmp33,Float &tmp38,bool &tmp40,::phoenix::Batcher &tmp10,::phoenix::Vector &tmp21,::String &tmp8,::phoenix::Vector &tmp32){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/render/luxe/Scroll.hx",44,0x0090e744)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp8,false);
				__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp10,false);
				__result->Add(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10") , true,false);
				__result->Add(HX_HCSTRING("centered","\x74","\x5d","\x50","\x8f") , false,false);
				__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp21,false);
				__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , tmp32,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp33,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp38,false);
				__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , tmp40,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(44)
	Dynamic tmp41 = _Function_1_1::Block(tmp33,tmp38,tmp40,tmp10,tmp21,tmp8,tmp32);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(44)
	::luxe::Sprite tmp42 = ::luxe::Sprite_obj::__new(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(44)
	this->visual = tmp42;
	HX_STACK_LINE(57)
	::mint::Control tmp43 = this->control;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(57)
	::String tmp44 = tmp43->name;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(57)
	::String tmp45 = (tmp44 + HX_HCSTRING(".scrollh","\x4d","\xb5","\xe8","\x77"));		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(58)
	::mint::render::luxe::LuxeMintRender tmp46 = this->render;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(58)
	::phoenix::Batcher tmp47 = tmp46->options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(61)
	::mint::Control tmp48 = this->control;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(61)
	Float tmp49 = tmp48->canvas->scale;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(61)
	::mint::Scroll tmp50 = this->scroll;		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(61)
	Float tmp51 = tmp50->scrollh->x;		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(61)
	Float tmp52 = (tmp49 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(61)
	::mint::Control tmp53 = this->control;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(61)
	Float tmp54 = tmp53->canvas->scale;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(61)
	::mint::Scroll tmp55 = this->scroll;		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(61)
	Float tmp56 = tmp55->scrollh->y;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(61)
	Float tmp57 = (tmp54 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(61)
	::phoenix::Vector tmp58 = ::phoenix::Vector_obj::__new(tmp52,tmp57,null(),null());		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(62)
	::mint::Control tmp59 = this->control;		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(62)
	Float tmp60 = tmp59->canvas->scale;		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(62)
	::mint::Scroll tmp61 = this->scroll;		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(62)
	Float tmp62 = tmp61->scrollh->w;		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(62)
	Float tmp63 = (tmp60 * tmp62);		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(62)
	::mint::Control tmp64 = this->control;		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(62)
	Float tmp65 = tmp64->canvas->scale;		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(62)
	::mint::Scroll tmp66 = this->scroll;		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(62)
	Float tmp67 = tmp66->scrollh->h;		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(62)
	Float tmp68 = (tmp65 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(62)
	::phoenix::Vector tmp69 = ::phoenix::Vector_obj::__new(tmp63,tmp68,null(),null());		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(63)
	::phoenix::Color tmp70 = this->color_handles;		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(64)
	::mint::render::luxe::LuxeMintRender tmp71 = this->render;		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(64)
	Dynamic tmp72 = tmp71->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(64)
	::mint::Scroll tmp73 = this->scroll;		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(64)
	Float tmp74 = tmp73->scrollh->depth;		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(64)
	Float tmp75 = (tmp72 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(65)
	::mint::Scroll tmp76 = this->scroll;		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(65)
	bool tmp77 = tmp76->visible_h;		HX_STACK_VAR(tmp77,"tmp77");
	struct _Function_1_2{
		inline static Dynamic Block( Float &tmp75,::phoenix::Batcher &tmp47,::phoenix::Color &tmp70,::String &tmp45,::phoenix::Vector &tmp58,bool &tmp77,::phoenix::Vector &tmp69){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/render/luxe/Scroll.hx",56,0x0090e744)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp45,false);
				__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp47,false);
				__result->Add(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10") , true,false);
				__result->Add(HX_HCSTRING("centered","\x74","\x5d","\x50","\x8f") , false,false);
				__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp58,false);
				__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , tmp69,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp70,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp75,false);
				__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , tmp77,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(56)
	Dynamic tmp78 = _Function_1_2::Block(tmp75,tmp47,tmp70,tmp45,tmp58,tmp77,tmp69);		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(56)
	::luxe::Sprite tmp79 = ::luxe::Sprite_obj::__new(tmp78);		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(56)
	this->scrollh = tmp79;
	HX_STACK_LINE(69)
	::mint::Control tmp80 = this->control;		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(69)
	::String tmp81 = tmp80->name;		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(69)
	::String tmp82 = (tmp81 + HX_HCSTRING(".scrollv","\x5b","\xb5","\xe8","\x77"));		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(70)
	::mint::render::luxe::LuxeMintRender tmp83 = this->render;		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(70)
	::phoenix::Batcher tmp84 = tmp83->options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(73)
	::mint::Control tmp85 = this->control;		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(73)
	Float tmp86 = tmp85->canvas->scale;		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(73)
	::mint::Scroll tmp87 = this->scroll;		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(73)
	Float tmp88 = tmp87->scrollv->x;		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(73)
	Float tmp89 = (tmp86 * tmp88);		HX_STACK_VAR(tmp89,"tmp89");
	HX_STACK_LINE(73)
	::mint::Control tmp90 = this->control;		HX_STACK_VAR(tmp90,"tmp90");
	HX_STACK_LINE(73)
	Float tmp91 = tmp90->canvas->scale;		HX_STACK_VAR(tmp91,"tmp91");
	HX_STACK_LINE(73)
	::mint::Scroll tmp92 = this->scroll;		HX_STACK_VAR(tmp92,"tmp92");
	HX_STACK_LINE(73)
	Float tmp93 = tmp92->scrollv->y;		HX_STACK_VAR(tmp93,"tmp93");
	HX_STACK_LINE(73)
	Float tmp94 = (tmp91 * tmp93);		HX_STACK_VAR(tmp94,"tmp94");
	HX_STACK_LINE(73)
	::phoenix::Vector tmp95 = ::phoenix::Vector_obj::__new(tmp89,tmp94,null(),null());		HX_STACK_VAR(tmp95,"tmp95");
	HX_STACK_LINE(74)
	::mint::Control tmp96 = this->control;		HX_STACK_VAR(tmp96,"tmp96");
	HX_STACK_LINE(74)
	Float tmp97 = tmp96->canvas->scale;		HX_STACK_VAR(tmp97,"tmp97");
	HX_STACK_LINE(74)
	::mint::Scroll tmp98 = this->scroll;		HX_STACK_VAR(tmp98,"tmp98");
	HX_STACK_LINE(74)
	Float tmp99 = tmp98->scrollv->w;		HX_STACK_VAR(tmp99,"tmp99");
	HX_STACK_LINE(74)
	Float tmp100 = (tmp97 * tmp99);		HX_STACK_VAR(tmp100,"tmp100");
	HX_STACK_LINE(74)
	::mint::Control tmp101 = this->control;		HX_STACK_VAR(tmp101,"tmp101");
	HX_STACK_LINE(74)
	Float tmp102 = tmp101->canvas->scale;		HX_STACK_VAR(tmp102,"tmp102");
	HX_STACK_LINE(74)
	::mint::Scroll tmp103 = this->scroll;		HX_STACK_VAR(tmp103,"tmp103");
	HX_STACK_LINE(74)
	Float tmp104 = tmp103->scrollv->h;		HX_STACK_VAR(tmp104,"tmp104");
	HX_STACK_LINE(74)
	Float tmp105 = (tmp102 * tmp104);		HX_STACK_VAR(tmp105,"tmp105");
	HX_STACK_LINE(74)
	::phoenix::Vector tmp106 = ::phoenix::Vector_obj::__new(tmp100,tmp105,null(),null());		HX_STACK_VAR(tmp106,"tmp106");
	HX_STACK_LINE(75)
	::phoenix::Color tmp107 = this->color_handles;		HX_STACK_VAR(tmp107,"tmp107");
	HX_STACK_LINE(76)
	::mint::render::luxe::LuxeMintRender tmp108 = this->render;		HX_STACK_VAR(tmp108,"tmp108");
	HX_STACK_LINE(76)
	Dynamic tmp109 = tmp108->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp109,"tmp109");
	HX_STACK_LINE(76)
	::mint::Scroll tmp110 = this->scroll;		HX_STACK_VAR(tmp110,"tmp110");
	HX_STACK_LINE(76)
	Float tmp111 = tmp110->scrollv->depth;		HX_STACK_VAR(tmp111,"tmp111");
	HX_STACK_LINE(76)
	Float tmp112 = (tmp109 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
	HX_STACK_LINE(77)
	::mint::Scroll tmp113 = this->scroll;		HX_STACK_VAR(tmp113,"tmp113");
	HX_STACK_LINE(77)
	bool tmp114 = tmp113->visible_v;		HX_STACK_VAR(tmp114,"tmp114");
	struct _Function_1_3{
		inline static Dynamic Block( ::phoenix::Batcher &tmp84,::phoenix::Color &tmp107,Float &tmp112,bool &tmp114,::phoenix::Vector &tmp95,::String &tmp82,::phoenix::Vector &tmp106){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/render/luxe/Scroll.hx",68,0x0090e744)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp82,false);
				__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp84,false);
				__result->Add(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10") , true,false);
				__result->Add(HX_HCSTRING("centered","\x74","\x5d","\x50","\x8f") , false,false);
				__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp95,false);
				__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , tmp106,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp107,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp112,false);
				__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , tmp114,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(68)
	Dynamic tmp115 = _Function_1_3::Block(tmp84,tmp107,tmp112,tmp114,tmp95,tmp82,tmp106);		HX_STACK_VAR(tmp115,"tmp115");
	HX_STACK_LINE(68)
	::luxe::Sprite tmp116 = ::luxe::Sprite_obj::__new(tmp115);		HX_STACK_VAR(tmp116,"tmp116");
	HX_STACK_LINE(68)
	this->scrollv = tmp116;
	HX_STACK_LINE(80)
	::mint::Control tmp117 = this->control;		HX_STACK_VAR(tmp117,"tmp117");
	HX_STACK_LINE(80)
	Float tmp118 = tmp117->canvas->scale;		HX_STACK_VAR(tmp118,"tmp118");
	HX_STACK_LINE(80)
	this->update_clip(tmp118);
	HX_STACK_LINE(82)
	::mint::Scroll tmp119 = this->scroll;		HX_STACK_VAR(tmp119,"tmp119");
	HX_STACK_LINE(82)
	Dynamic tmp120 = this->onchange_dyn();		HX_STACK_VAR(tmp120,"tmp120");
	HX_STACK_LINE(82)
	tmp119->onchange->listen(tmp120);
	HX_STACK_LINE(83)
	::mint::Scroll tmp121 = this->scroll;		HX_STACK_VAR(tmp121,"tmp121");
	HX_STACK_LINE(83)
	Dynamic tmp122 = this->onhandlevis_dyn();		HX_STACK_VAR(tmp122,"tmp122");
	HX_STACK_LINE(83)
	tmp121->onhandlevis->listen(tmp122);
}
;
	return null();
}

//Scroll_obj::~Scroll_obj() { }

Dynamic Scroll_obj::__CreateEmpty() { return  new Scroll_obj; }
hx::ObjectPtr< Scroll_obj > Scroll_obj::__new(::mint::render::luxe::LuxeMintRender _render,::mint::Scroll _control)
{  hx::ObjectPtr< Scroll_obj > _result_ = new Scroll_obj();
	_result_->__construct(_render,_control);
	return _result_;}

Dynamic Scroll_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Scroll_obj > _result_ = new Scroll_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Scroll_obj::update_clip( Float _scale){
{
		HX_STACK_FRAME("mint.render.luxe.Scroll","update_clip",0x27d7eb31,"mint.render.luxe.Scroll.update_clip","mint/render/luxe/Scroll.hx",87,0x0090e744)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_scale,"_scale")
		HX_STACK_LINE(89)
		::mint::Control tmp = this->control;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		::mint::Control tmp1 = tmp->clip_with;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		Float tmp2 = _scale;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(89)
		::phoenix::Rectangle tmp3 = ::mint::render::luxe::Convert_obj::bounds(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(89)
		::phoenix::Rectangle _clip = tmp3;		HX_STACK_VAR(_clip,"_clip");
		HX_STACK_LINE(91)
		::luxe::Sprite tmp4 = this->visual;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(91)
		::phoenix::Rectangle tmp5 = _clip;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(91)
		tmp4->set_clip_rect(tmp5);
		HX_STACK_LINE(92)
		::luxe::Sprite tmp6 = this->scrollh;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(92)
		::phoenix::Rectangle tmp7 = _clip;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(92)
		tmp6->set_clip_rect(tmp7);
		HX_STACK_LINE(93)
		::luxe::Sprite tmp8 = this->scrollv;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(93)
		::phoenix::Rectangle tmp9 = _clip;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(93)
		tmp8->set_clip_rect(tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scroll_obj,update_clip,(void))

Void Scroll_obj::onscale( Float _scale,Float _prev_scale){
{
		HX_STACK_FRAME("mint.render.luxe.Scroll","onscale",0x7174b2b6,"mint.render.luxe.Scroll.onscale","mint/render/luxe/Scroll.hx",97,0x0090e744)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_scale,"_scale")
		HX_STACK_ARG(_prev_scale,"_prev_scale")
		HX_STACK_LINE(99)
		::luxe::Sprite tmp = this->scrollh;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(99)
		::mint::Control tmp1 = this->control;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		Float tmp2 = tmp1->canvas->scale;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(99)
		::mint::Scroll tmp3 = this->scroll;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(99)
		Float tmp4 = tmp3->scrollh->w;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(99)
		Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(99)
		::mint::Control tmp6 = this->control;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(99)
		Float tmp7 = tmp6->canvas->scale;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(99)
		::mint::Scroll tmp8 = this->scroll;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(99)
		Float tmp9 = tmp8->scrollh->h;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(99)
		Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(99)
		tmp->geometry_quad->resize_xy(tmp5,tmp10);
		HX_STACK_LINE(100)
		::luxe::Sprite tmp11 = this->scrollv;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(100)
		::mint::Control tmp12 = this->control;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(100)
		Float tmp13 = tmp12->canvas->scale;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(100)
		::mint::Scroll tmp14 = this->scroll;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(100)
		Float tmp15 = tmp14->scrollv->w;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(100)
		Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(100)
		::mint::Control tmp17 = this->control;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(100)
		Float tmp18 = tmp17->canvas->scale;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(100)
		::mint::Scroll tmp19 = this->scroll;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(100)
		Float tmp20 = tmp19->scrollv->h;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(100)
		Float tmp21 = (tmp18 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(100)
		tmp11->geometry_quad->resize_xy(tmp16,tmp21);
		HX_STACK_LINE(102)
		Float tmp22 = _scale;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(102)
		this->update_clip(tmp22);
	}
return null();
}


Void Scroll_obj::ondestroy( ){
{
		HX_STACK_FRAME("mint.render.luxe.Scroll","ondestroy",0xfd8e7426,"mint.render.luxe.Scroll.ondestroy","mint/render/luxe/Scroll.hx",106,0x0090e744)
		HX_STACK_THIS(this)
		HX_STACK_LINE(108)
		::mint::Scroll tmp = this->scroll;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		Dynamic tmp1 = this->onchange_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(108)
		tmp->onchange->remove(tmp1);
		HX_STACK_LINE(110)
		::luxe::Sprite tmp2 = this->scrollh;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(110)
		tmp2->destroy(null());
		HX_STACK_LINE(111)
		::luxe::Sprite tmp3 = this->scrollv;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(111)
		tmp3->destroy(null());
		HX_STACK_LINE(112)
		::luxe::Sprite tmp4 = this->visual;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(112)
		tmp4->destroy(null());
		HX_STACK_LINE(113)
		this->visual = null();
	}
return null();
}


Void Scroll_obj::onbounds( ){
{
		HX_STACK_FRAME("mint.render.luxe.Scroll","onbounds",0xfe9f48c9,"mint.render.luxe.Scroll.onbounds","mint/render/luxe/Scroll.hx",117,0x0090e744)
		HX_STACK_THIS(this)
		HX_STACK_LINE(119)
		{
			HX_STACK_LINE(119)
			::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(119)
			{
				HX_STACK_LINE(119)
				::luxe::Sprite tmp1 = this->visual;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(119)
				::phoenix::Transform tmp2 = tmp1->get_transform();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(119)
				::phoenix::Transform _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(119)
				tmp = _this->local->pos;
			}
			HX_STACK_LINE(119)
			::phoenix::Vector _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(119)
			::mint::Control tmp1 = this->control;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(119)
			Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(119)
			::mint::Control tmp3 = this->control;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(119)
			Float tmp4 = tmp3->canvas->scale;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(119)
			Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(119)
			Float _x = tmp5;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(119)
			::mint::Control tmp6 = this->control;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(119)
			Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(119)
			::mint::Control tmp8 = this->control;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(119)
			Float tmp9 = tmp8->canvas->scale;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(119)
			Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(119)
			Float _y = tmp10;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(119)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(119)
			_this->ignore_listeners = true;
			HX_STACK_LINE(119)
			{
				HX_STACK_LINE(119)
				_this->x = _x;
				HX_STACK_LINE(119)
				bool tmp11 = _this->_construct;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(119)
				if ((tmp11)){
					HX_STACK_LINE(119)
					_this->x;
				}
				else{
					HX_STACK_LINE(119)
					bool tmp12 = (_this->listen_x != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(119)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(119)
					if ((tmp12)){
						HX_STACK_LINE(119)
						bool tmp14 = _this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(119)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(119)
						tmp13 = !(tmp15);
					}
					else{
						HX_STACK_LINE(119)
						tmp13 = false;
					}
					HX_STACK_LINE(119)
					if ((tmp13)){
						HX_STACK_LINE(119)
						Float tmp14 = _x;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(119)
						_this->listen_x(tmp14);
					}
					HX_STACK_LINE(119)
					_this->x;
				}
			}
			HX_STACK_LINE(119)
			{
				HX_STACK_LINE(119)
				_this->y = _y;
				HX_STACK_LINE(119)
				bool tmp11 = _this->_construct;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(119)
				if ((tmp11)){
					HX_STACK_LINE(119)
					_this->y;
				}
				else{
					HX_STACK_LINE(119)
					bool tmp12 = (_this->listen_y != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(119)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(119)
					if ((tmp12)){
						HX_STACK_LINE(119)
						bool tmp14 = _this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(119)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(119)
						tmp13 = !(tmp15);
					}
					else{
						HX_STACK_LINE(119)
						tmp13 = false;
					}
					HX_STACK_LINE(119)
					if ((tmp13)){
						HX_STACK_LINE(119)
						Float tmp14 = _y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(119)
						_this->listen_y(tmp14);
					}
					HX_STACK_LINE(119)
					_this->y;
				}
			}
			HX_STACK_LINE(119)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(119)
			bool tmp11 = (_this->listen_x != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(119)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(119)
			if ((tmp11)){
				HX_STACK_LINE(119)
				bool tmp13 = _this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(119)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(119)
				tmp12 = !(tmp14);
			}
			else{
				HX_STACK_LINE(119)
				tmp12 = false;
			}
			HX_STACK_LINE(119)
			if ((tmp12)){
				HX_STACK_LINE(119)
				Float tmp13 = _this->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(119)
				_this->listen_x(tmp13);
			}
			HX_STACK_LINE(119)
			bool tmp13 = (_this->listen_y != null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(119)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(119)
			if ((tmp13)){
				HX_STACK_LINE(119)
				bool tmp15 = _this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(119)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(119)
				tmp14 = !(tmp16);
			}
			else{
				HX_STACK_LINE(119)
				tmp14 = false;
			}
			HX_STACK_LINE(119)
			if ((tmp14)){
				HX_STACK_LINE(119)
				Float tmp15 = _this->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(119)
				_this->listen_y(tmp15);
			}
			HX_STACK_LINE(119)
			_this;
		}
		HX_STACK_LINE(120)
		::luxe::Sprite tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(120)
		::mint::Control tmp1 = this->control;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(120)
		Float tmp2 = tmp1->w;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(120)
		::mint::Control tmp3 = this->control;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(120)
		Float tmp4 = tmp3->canvas->scale;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(120)
		Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(120)
		::mint::Control tmp6 = this->control;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(120)
		Float tmp7 = tmp6->h;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(120)
		::mint::Control tmp8 = this->control;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(120)
		Float tmp9 = tmp8->canvas->scale;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(120)
		Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(120)
		tmp->geometry_quad->resize_xy(tmp5,tmp10);
		HX_STACK_LINE(123)
		{
			HX_STACK_LINE(123)
			::luxe::Sprite tmp11 = this->scrollh;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(123)
			::phoenix::Vector tmp12 = tmp11->get_pos();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(123)
			::phoenix::Vector _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(123)
			::mint::Control tmp13 = this->control;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(123)
			Float tmp14 = tmp13->canvas->scale;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(123)
			::mint::Scroll tmp15 = this->scroll;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(123)
			Float tmp16 = tmp15->scrollh->x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(123)
			Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(123)
			Float _x = tmp17;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(123)
			::mint::Control tmp18 = this->control;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(123)
			Float tmp19 = tmp18->canvas->scale;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(123)
			::mint::Scroll tmp20 = this->scroll;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(123)
			Float tmp21 = tmp20->scrollh->y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(123)
			Float tmp22 = (tmp19 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(123)
			Float _y = tmp22;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(123)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(123)
			_this->ignore_listeners = true;
			HX_STACK_LINE(123)
			{
				HX_STACK_LINE(123)
				_this->x = _x;
				HX_STACK_LINE(123)
				bool tmp23 = _this->_construct;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(123)
				if ((tmp23)){
					HX_STACK_LINE(123)
					_this->x;
				}
				else{
					HX_STACK_LINE(123)
					bool tmp24 = (_this->listen_x != null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(123)
					bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(123)
					if ((tmp24)){
						HX_STACK_LINE(123)
						bool tmp26 = _this->ignore_listeners;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(123)
						bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(123)
						tmp25 = !(tmp27);
					}
					else{
						HX_STACK_LINE(123)
						tmp25 = false;
					}
					HX_STACK_LINE(123)
					if ((tmp25)){
						HX_STACK_LINE(123)
						Float tmp26 = _x;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(123)
						_this->listen_x(tmp26);
					}
					HX_STACK_LINE(123)
					_this->x;
				}
			}
			HX_STACK_LINE(123)
			{
				HX_STACK_LINE(123)
				_this->y = _y;
				HX_STACK_LINE(123)
				bool tmp23 = _this->_construct;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(123)
				if ((tmp23)){
					HX_STACK_LINE(123)
					_this->y;
				}
				else{
					HX_STACK_LINE(123)
					bool tmp24 = (_this->listen_y != null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(123)
					bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(123)
					if ((tmp24)){
						HX_STACK_LINE(123)
						bool tmp26 = _this->ignore_listeners;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(123)
						bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(123)
						tmp25 = !(tmp27);
					}
					else{
						HX_STACK_LINE(123)
						tmp25 = false;
					}
					HX_STACK_LINE(123)
					if ((tmp25)){
						HX_STACK_LINE(123)
						Float tmp26 = _y;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(123)
						_this->listen_y(tmp26);
					}
					HX_STACK_LINE(123)
					_this->y;
				}
			}
			HX_STACK_LINE(123)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(123)
			bool tmp23 = (_this->listen_x != null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(123)
			bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(123)
			if ((tmp23)){
				HX_STACK_LINE(123)
				bool tmp25 = _this->ignore_listeners;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(123)
				bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(123)
				tmp24 = !(tmp26);
			}
			else{
				HX_STACK_LINE(123)
				tmp24 = false;
			}
			HX_STACK_LINE(123)
			if ((tmp24)){
				HX_STACK_LINE(123)
				Float tmp25 = _this->x;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(123)
				_this->listen_x(tmp25);
			}
			HX_STACK_LINE(123)
			bool tmp25 = (_this->listen_y != null());		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(123)
			bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(123)
			if ((tmp25)){
				HX_STACK_LINE(123)
				bool tmp27 = _this->ignore_listeners;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(123)
				bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(123)
				tmp26 = !(tmp28);
			}
			else{
				HX_STACK_LINE(123)
				tmp26 = false;
			}
			HX_STACK_LINE(123)
			if ((tmp26)){
				HX_STACK_LINE(123)
				Float tmp27 = _this->y;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(123)
				_this->listen_y(tmp27);
			}
			HX_STACK_LINE(123)
			_this;
		}
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			::luxe::Sprite tmp11 = this->scrollv;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(124)
			::phoenix::Vector tmp12 = tmp11->get_pos();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(124)
			::phoenix::Vector _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(124)
			::mint::Control tmp13 = this->control;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(124)
			Float tmp14 = tmp13->canvas->scale;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(124)
			::mint::Scroll tmp15 = this->scroll;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(124)
			Float tmp16 = tmp15->scrollv->x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(124)
			Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(124)
			Float _x = tmp17;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(124)
			::mint::Control tmp18 = this->control;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(124)
			Float tmp19 = tmp18->canvas->scale;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(124)
			::mint::Scroll tmp20 = this->scroll;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(124)
			Float tmp21 = tmp20->scrollv->y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(124)
			Float tmp22 = (tmp19 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(124)
			Float _y = tmp22;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(124)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(124)
			_this->ignore_listeners = true;
			HX_STACK_LINE(124)
			{
				HX_STACK_LINE(124)
				_this->x = _x;
				HX_STACK_LINE(124)
				bool tmp23 = _this->_construct;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(124)
				if ((tmp23)){
					HX_STACK_LINE(124)
					_this->x;
				}
				else{
					HX_STACK_LINE(124)
					bool tmp24 = (_this->listen_x != null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(124)
					bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(124)
					if ((tmp24)){
						HX_STACK_LINE(124)
						bool tmp26 = _this->ignore_listeners;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(124)
						bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(124)
						tmp25 = !(tmp27);
					}
					else{
						HX_STACK_LINE(124)
						tmp25 = false;
					}
					HX_STACK_LINE(124)
					if ((tmp25)){
						HX_STACK_LINE(124)
						Float tmp26 = _x;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(124)
						_this->listen_x(tmp26);
					}
					HX_STACK_LINE(124)
					_this->x;
				}
			}
			HX_STACK_LINE(124)
			{
				HX_STACK_LINE(124)
				_this->y = _y;
				HX_STACK_LINE(124)
				bool tmp23 = _this->_construct;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(124)
				if ((tmp23)){
					HX_STACK_LINE(124)
					_this->y;
				}
				else{
					HX_STACK_LINE(124)
					bool tmp24 = (_this->listen_y != null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(124)
					bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(124)
					if ((tmp24)){
						HX_STACK_LINE(124)
						bool tmp26 = _this->ignore_listeners;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(124)
						bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(124)
						tmp25 = !(tmp27);
					}
					else{
						HX_STACK_LINE(124)
						tmp25 = false;
					}
					HX_STACK_LINE(124)
					if ((tmp25)){
						HX_STACK_LINE(124)
						Float tmp26 = _y;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(124)
						_this->listen_y(tmp26);
					}
					HX_STACK_LINE(124)
					_this->y;
				}
			}
			HX_STACK_LINE(124)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(124)
			bool tmp23 = (_this->listen_x != null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(124)
			bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(124)
			if ((tmp23)){
				HX_STACK_LINE(124)
				bool tmp25 = _this->ignore_listeners;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(124)
				bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(124)
				tmp24 = !(tmp26);
			}
			else{
				HX_STACK_LINE(124)
				tmp24 = false;
			}
			HX_STACK_LINE(124)
			if ((tmp24)){
				HX_STACK_LINE(124)
				Float tmp25 = _this->x;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(124)
				_this->listen_x(tmp25);
			}
			HX_STACK_LINE(124)
			bool tmp25 = (_this->listen_y != null());		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(124)
			bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(124)
			if ((tmp25)){
				HX_STACK_LINE(124)
				bool tmp27 = _this->ignore_listeners;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(124)
				bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(124)
				tmp26 = !(tmp28);
			}
			else{
				HX_STACK_LINE(124)
				tmp26 = false;
			}
			HX_STACK_LINE(124)
			if ((tmp26)){
				HX_STACK_LINE(124)
				Float tmp27 = _this->y;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(124)
				_this->listen_y(tmp27);
			}
			HX_STACK_LINE(124)
			_this;
		}
	}
return null();
}


Void Scroll_obj::onhandlevis( bool _h,bool _v){
{
		HX_STACK_FRAME("mint.render.luxe.Scroll","onhandlevis",0x0b858564,"mint.render.luxe.Scroll.onhandlevis","mint/render/luxe/Scroll.hx",128,0x0090e744)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_h,"_h")
		HX_STACK_ARG(_v,"_v")
		HX_STACK_LINE(130)
		::luxe::Sprite tmp = this->scrollh;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(130)
		bool tmp1 = _h;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(130)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(130)
		if ((tmp1)){
			HX_STACK_LINE(130)
			::mint::Scroll tmp3 = this->scroll;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(130)
			::mint::Scroll tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(130)
			tmp2 = tmp4->visible;
		}
		else{
			HX_STACK_LINE(130)
			tmp2 = false;
		}
		HX_STACK_LINE(130)
		tmp->set_visible(tmp2);
		HX_STACK_LINE(131)
		::luxe::Sprite tmp3 = this->scrollv;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(131)
		bool tmp4 = _v;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(131)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(131)
		if ((tmp4)){
			HX_STACK_LINE(131)
			::mint::Scroll tmp6 = this->scroll;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(131)
			::mint::Scroll tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(131)
			tmp5 = tmp7->visible;
		}
		else{
			HX_STACK_LINE(131)
			tmp5 = false;
		}
		HX_STACK_LINE(131)
		tmp3->set_visible(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scroll_obj,onhandlevis,(void))

Void Scroll_obj::onchange( ){
{
		HX_STACK_FRAME("mint.render.luxe.Scroll","onchange",0x4ff453c4,"mint.render.luxe.Scroll.onchange","mint/render/luxe/Scroll.hx",135,0x0090e744)
		HX_STACK_THIS(this)
		HX_STACK_LINE(137)
		{
			HX_STACK_LINE(137)
			::luxe::Sprite tmp = this->scrollh;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(137)
			::phoenix::Vector tmp1 = tmp->get_pos();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(137)
			::phoenix::Vector _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(137)
			::mint::Control tmp2 = this->control;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(137)
			Float tmp3 = tmp2->canvas->scale;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(137)
			::mint::Scroll tmp4 = this->scroll;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(137)
			Float tmp5 = tmp4->scrollh->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(137)
			Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(137)
			Float _x = tmp6;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(137)
			_this->x = _x;
			HX_STACK_LINE(137)
			bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(137)
			if ((tmp7)){
				HX_STACK_LINE(137)
				_this->x;
			}
			else{
				HX_STACK_LINE(137)
				bool tmp8 = (_this->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(137)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(137)
				if ((tmp8)){
					HX_STACK_LINE(137)
					bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(137)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(137)
					tmp9 = !(tmp11);
				}
				else{
					HX_STACK_LINE(137)
					tmp9 = false;
				}
				HX_STACK_LINE(137)
				if ((tmp9)){
					HX_STACK_LINE(137)
					Float tmp10 = _x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(137)
					_this->listen_x(tmp10);
				}
				HX_STACK_LINE(137)
				_this->x;
			}
		}
		HX_STACK_LINE(138)
		{
			HX_STACK_LINE(138)
			::luxe::Sprite tmp = this->scrollv;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(138)
			::phoenix::Vector tmp1 = tmp->get_pos();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(138)
			::phoenix::Vector _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(138)
			::mint::Control tmp2 = this->control;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(138)
			Float tmp3 = tmp2->canvas->scale;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(138)
			::mint::Scroll tmp4 = this->scroll;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(138)
			Float tmp5 = tmp4->scrollv->y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(138)
			Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(138)
			Float _y = tmp6;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(138)
			_this->y = _y;
			HX_STACK_LINE(138)
			bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(138)
			if ((tmp7)){
				HX_STACK_LINE(138)
				_this->y;
			}
			else{
				HX_STACK_LINE(138)
				bool tmp8 = (_this->listen_y != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(138)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(138)
				if ((tmp8)){
					HX_STACK_LINE(138)
					bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(138)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(138)
					tmp9 = !(tmp11);
				}
				else{
					HX_STACK_LINE(138)
					tmp9 = false;
				}
				HX_STACK_LINE(138)
				if ((tmp9)){
					HX_STACK_LINE(138)
					Float tmp10 = _y;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(138)
					_this->listen_y(tmp10);
				}
				HX_STACK_LINE(138)
				_this->y;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scroll_obj,onchange,(void))

Void Scroll_obj::onclip( bool _disable,Float _x,Float _y,Float _w,Float _h){
{
		HX_STACK_FRAME("mint.render.luxe.Scroll","onclip",0xe7093424,"mint.render.luxe.Scroll.onclip","mint/render/luxe/Scroll.hx",142,0x0090e744)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_disable,"_disable")
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_w,"_w")
		HX_STACK_ARG(_h,"_h")
		HX_STACK_LINE(144)
		::mint::Control tmp = this->control;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(144)
		Float tmp1 = tmp->canvas->scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(144)
		this->update_clip(tmp1);
	}
return null();
}


Void Scroll_obj::onvisible( bool _visible){
{
		HX_STACK_FRAME("mint.render.luxe.Scroll","onvisible",0x7c2cbf9e,"mint.render.luxe.Scroll.onvisible","mint/render/luxe/Scroll.hx",149,0x0090e744)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_visible,"_visible")
		HX_STACK_LINE(151)
		::luxe::Sprite tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(151)
		bool tmp1 = _visible;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(151)
		tmp->set_visible(tmp1);
		HX_STACK_LINE(152)
		::luxe::Sprite tmp2 = this->scrollh;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(152)
		::mint::Scroll tmp3 = this->scroll;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(152)
		bool tmp4 = tmp3->visible_h;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(152)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(152)
		if ((tmp4)){
			HX_STACK_LINE(152)
			tmp5 = _visible;
		}
		else{
			HX_STACK_LINE(152)
			tmp5 = false;
		}
		HX_STACK_LINE(152)
		tmp2->set_visible(tmp5);
		HX_STACK_LINE(153)
		::luxe::Sprite tmp6 = this->scrollv;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(153)
		::mint::Scroll tmp7 = this->scroll;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(153)
		bool tmp8 = tmp7->visible_v;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(153)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(153)
		if ((tmp8)){
			HX_STACK_LINE(153)
			tmp9 = _visible;
		}
		else{
			HX_STACK_LINE(153)
			tmp9 = false;
		}
		HX_STACK_LINE(153)
		tmp6->set_visible(tmp9);
	}
return null();
}


Void Scroll_obj::ondepth( Float _depth){
{
		HX_STACK_FRAME("mint.render.luxe.Scroll","ondepth",0xcfcfd52f,"mint.render.luxe.Scroll.ondepth","mint/render/luxe/Scroll.hx",157,0x0090e744)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_depth,"_depth")
		HX_STACK_LINE(159)
		::luxe::Sprite tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(159)
		::mint::render::luxe::LuxeMintRender tmp1 = this->render;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(159)
		Dynamic tmp2 = tmp1->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(159)
		Float tmp3 = _depth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(159)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(159)
		tmp->set_depth(tmp4);
		HX_STACK_LINE(160)
		::luxe::Sprite tmp5 = this->scrollv;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(160)
		::mint::render::luxe::LuxeMintRender tmp6 = this->render;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(160)
		Dynamic tmp7 = tmp6->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(160)
		::mint::Scroll tmp8 = this->scroll;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(160)
		Float tmp9 = tmp8->scrollv->depth;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(160)
		Float tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(160)
		tmp5->set_depth(tmp10);
		HX_STACK_LINE(161)
		::luxe::Sprite tmp11 = this->scrollh;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(161)
		::mint::render::luxe::LuxeMintRender tmp12 = this->render;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(161)
		Dynamic tmp13 = tmp12->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(161)
		::mint::Scroll tmp14 = this->scroll;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(161)
		Float tmp15 = tmp14->scrollh->depth;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(161)
		Float tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(161)
		tmp11->set_depth(tmp16);
	}
return null();
}



Scroll_obj::Scroll_obj()
{
}

void Scroll_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scroll);
	HX_MARK_MEMBER_NAME(scroll,"scroll");
	HX_MARK_MEMBER_NAME(visual,"visual");
	HX_MARK_MEMBER_NAME(scrollh,"scrollh");
	HX_MARK_MEMBER_NAME(scrollv,"scrollv");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(color_handles,"color_handles");
	HX_MARK_MEMBER_NAME(render,"render");
	::mint::render::Render_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Scroll_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(scroll,"scroll");
	HX_VISIT_MEMBER_NAME(visual,"visual");
	HX_VISIT_MEMBER_NAME(scrollh,"scrollh");
	HX_VISIT_MEMBER_NAME(scrollv,"scrollv");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(color_handles,"color_handles");
	HX_VISIT_MEMBER_NAME(render,"render");
	::mint::render::Render_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Scroll_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll; }
		if (HX_FIELD_EQ(inName,"visual") ) { return visual; }
		if (HX_FIELD_EQ(inName,"render") ) { return render; }
		if (HX_FIELD_EQ(inName,"onclip") ) { return onclip_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollh") ) { return scrollh; }
		if (HX_FIELD_EQ(inName,"scrollv") ) { return scrollv; }
		if (HX_FIELD_EQ(inName,"onscale") ) { return onscale_dyn(); }
		if (HX_FIELD_EQ(inName,"ondepth") ) { return ondepth_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onbounds") ) { return onbounds_dyn(); }
		if (HX_FIELD_EQ(inName,"onchange") ) { return onchange_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onvisible") ) { return onvisible_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"update_clip") ) { return update_clip_dyn(); }
		if (HX_FIELD_EQ(inName,"onhandlevis") ) { return onhandlevis_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"color_handles") ) { return color_handles; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Scroll_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scroll") ) { scroll=inValue.Cast< ::mint::Scroll >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visual") ) { visual=inValue.Cast< ::luxe::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"render") ) { render=inValue.Cast< ::mint::render::luxe::LuxeMintRender >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollh") ) { scrollh=inValue.Cast< ::luxe::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollv") ) { scrollv=inValue.Cast< ::luxe::Sprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"color_handles") ) { color_handles=inValue.Cast< ::phoenix::Color >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Scroll_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"));
	outFields->push(HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef"));
	outFields->push(HX_HCSTRING("scrollh","\xbb","\x33","\xd8","\x30"));
	outFields->push(HX_HCSTRING("scrollv","\xc9","\x33","\xd8","\x30"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("color_handles","\xaf","\x15","\x9f","\xa8"));
	outFields->push(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::mint::Scroll*/ ,(int)offsetof(Scroll_obj,scroll),HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47")},
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(Scroll_obj,visual),HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef")},
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(Scroll_obj,scrollh),HX_HCSTRING("scrollh","\xbb","\x33","\xd8","\x30")},
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(Scroll_obj,scrollv),HX_HCSTRING("scrollv","\xc9","\x33","\xd8","\x30")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Scroll_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Scroll_obj,color_handles),HX_HCSTRING("color_handles","\xaf","\x15","\x9f","\xa8")},
	{hx::fsObject /*::mint::render::luxe::LuxeMintRender*/ ,(int)offsetof(Scroll_obj,render),HX_HCSTRING("render","\x56","\x6b","\x29","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"),
	HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef"),
	HX_HCSTRING("scrollh","\xbb","\x33","\xd8","\x30"),
	HX_HCSTRING("scrollv","\xc9","\x33","\xd8","\x30"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("color_handles","\xaf","\x15","\x9f","\xa8"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("update_clip","\x06","\x84","\x3e","\x47"),
	HX_HCSTRING("onscale","\x0b","\xfd","\xde","\x7b"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onbounds","\xd4","\x08","\x36","\x11"),
	HX_HCSTRING("onhandlevis","\x39","\x1e","\xec","\x2a"),
	HX_HCSTRING("onchange","\xcf","\x13","\x8b","\x62"),
	HX_HCSTRING("onclip","\x6f","\x4b","\x73","\xf9"),
	HX_HCSTRING("onvisible","\x33","\x09","\x7e","\xad"),
	HX_HCSTRING("ondepth","\x84","\x1f","\x3a","\xda"),
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
	__mClass->mName = HX_HCSTRING("mint.render.luxe.Scroll","\x19","\xf3","\x46","\x38");
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
} // end namespace render
} // end namespace luxe
