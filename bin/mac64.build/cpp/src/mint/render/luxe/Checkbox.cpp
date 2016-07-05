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
#ifndef INCLUDED_mint_Checkbox
#include <mint/Checkbox.h>
#endif
#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
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
#ifndef INCLUDED_mint_render_luxe_Checkbox
#include <mint/render/luxe/Checkbox.h>
#endif
#ifndef INCLUDED_mint_render_luxe_Convert
#include <mint/render/luxe/Convert.h>
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

Void Checkbox_obj::__construct(::mint::render::luxe::LuxeMintRender _render,::mint::Checkbox _control)
{
HX_STACK_FRAME("mint.render.luxe.Checkbox","new",0x20c53cc1,"mint.render.luxe.Checkbox.new","mint/render/luxe/Checkbox.hx",37,0x913a758e)
HX_STACK_THIS(this)
HX_STACK_ARG(_render,"_render")
HX_STACK_ARG(_control,"_control")
{
	HX_STACK_LINE(37)
	::mint::render::luxe::Checkbox _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(39)
	this->checkbox = _control;
	HX_STACK_LINE(40)
	this->render = _render;
	HX_STACK_LINE(42)
	::mint::render::luxe::LuxeMintRender tmp = this->render;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	::mint::Checkbox tmp1 = _control;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(44)
	::mint::Checkbox tmp2 = this->checkbox;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	Dynamic tmp3 = tmp2->options->__Field(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(44)
	Dynamic _opt = tmp3;		HX_STACK_VAR(_opt,"_opt");
	HX_STACK_LINE(46)
	::phoenix::Color tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		bool tmp5 = (_opt->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(46)
		if ((tmp5)){
			HX_STACK_LINE(46)
			::phoenix::Color tmp6 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(46)
			::phoenix::Color tmp7 = tmp6->rgb((int)3618615);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(46)
			_opt->__FieldRef(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")) = tmp7;
		}
		HX_STACK_LINE(46)
		tmp4 = _opt->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );
	}
	HX_STACK_LINE(46)
	this->color = tmp4;
	HX_STACK_LINE(47)
	::phoenix::Color tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		bool tmp6 = (_opt->__Field(HX_HCSTRING("color_hover","\xa0","\x4a","\xe0","\xac"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(47)
		if ((tmp6)){
			HX_STACK_LINE(47)
			::phoenix::Color tmp7 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(47)
			::phoenix::Color tmp8 = tmp7->rgb((int)4477272);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(47)
			_opt->__FieldRef(HX_HCSTRING("color_hover","\xa0","\x4a","\xe0","\xac")) = tmp8;
		}
		HX_STACK_LINE(47)
		tmp5 = _opt->__Field(HX_HCSTRING("color_hover","\xa0","\x4a","\xe0","\xac"), hx::paccDynamic );
	}
	HX_STACK_LINE(47)
	this->color_hover = tmp5;
	HX_STACK_LINE(48)
	::phoenix::Color tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(48)
	{
		HX_STACK_LINE(48)
		bool tmp7 = (_opt->__Field(HX_HCSTRING("color_node","\x9e","\xcd","\x59","\x8d"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(48)
		if ((tmp7)){
			HX_STACK_LINE(48)
			::phoenix::Color tmp8 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(48)
			::phoenix::Color tmp9 = tmp8->rgb((int)10340963);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(48)
			_opt->__FieldRef(HX_HCSTRING("color_node","\x9e","\xcd","\x59","\x8d")) = tmp9;
		}
		HX_STACK_LINE(48)
		tmp6 = _opt->__Field(HX_HCSTRING("color_node","\x9e","\xcd","\x59","\x8d"), hx::paccDynamic );
	}
	HX_STACK_LINE(48)
	this->color_node = tmp6;
	HX_STACK_LINE(49)
	::phoenix::Color tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(49)
		bool tmp8 = (_opt->__Field(HX_HCSTRING("color_node_hover","\x1b","\x05","\xbd","\x17"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(49)
		if ((tmp8)){
			HX_STACK_LINE(49)
			::phoenix::Color tmp9 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(49)
			::phoenix::Color tmp10 = tmp9->rgb((int)11389539);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(49)
			_opt->__FieldRef(HX_HCSTRING("color_node_hover","\x1b","\x05","\xbd","\x17")) = tmp10;
		}
		HX_STACK_LINE(49)
		tmp7 = _opt->__Field(HX_HCSTRING("color_node_hover","\x1b","\x05","\xbd","\x17"), hx::paccDynamic );
	}
	HX_STACK_LINE(49)
	this->color_node_hover = tmp7;
	HX_STACK_LINE(50)
	Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(50)
	{
		HX_STACK_LINE(50)
		bool tmp9 = (_opt->__Field(HX_HCSTRING("size_margin","\x2c","\xeb","\x4c","\x03"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(50)
		if ((tmp9)){
			HX_STACK_LINE(50)
			_opt->__FieldRef(HX_HCSTRING("size_margin","\x2c","\xeb","\x4c","\x03")) = (int)4;
		}
		HX_STACK_LINE(50)
		tmp8 = _opt->__Field(HX_HCSTRING("size_margin","\x2c","\xeb","\x4c","\x03"), hx::paccDynamic );
	}
	HX_STACK_LINE(50)
	this->size_margin = tmp8;
	HX_STACK_LINE(53)
	::mint::Control tmp9 = this->control;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(53)
	::String tmp10 = tmp9->name;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(53)
	::String tmp11 = (tmp10 + HX_HCSTRING(".visual","\x6e","\x79","\x67","\x68"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(54)
	::mint::render::luxe::LuxeMintRender tmp12 = this->render;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(54)
	::phoenix::Batcher tmp13 = tmp12->options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(57)
	::mint::Control tmp14 = this->control;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(57)
	Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(57)
	::mint::Control tmp16 = this->control;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(57)
	Float tmp17 = tmp16->canvas->scale;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(57)
	Float tmp18 = (tmp15 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(57)
	::mint::Control tmp19 = this->control;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(57)
	Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(57)
	::mint::Control tmp21 = this->control;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(57)
	Float tmp22 = tmp21->canvas->scale;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(57)
	Float tmp23 = (tmp20 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(57)
	::phoenix::Vector tmp24 = ::phoenix::Vector_obj::__new(tmp18,tmp23,null(),null());		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(58)
	::mint::Control tmp25 = this->control;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(58)
	Float tmp26 = tmp25->w;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(58)
	::mint::Control tmp27 = this->control;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(58)
	Float tmp28 = tmp27->canvas->scale;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(58)
	Float tmp29 = (tmp26 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(58)
	::mint::Control tmp30 = this->control;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(58)
	Float tmp31 = tmp30->h;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(58)
	::mint::Control tmp32 = this->control;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(58)
	Float tmp33 = tmp32->canvas->scale;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(58)
	Float tmp34 = (tmp31 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(58)
	::phoenix::Vector tmp35 = ::phoenix::Vector_obj::__new(tmp29,tmp34,null(),null());		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(59)
	::phoenix::Color tmp36 = this->color;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(60)
	::mint::render::luxe::LuxeMintRender tmp37 = this->render;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(60)
	Dynamic tmp38 = tmp37->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(60)
	::mint::Control tmp39 = this->control;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(60)
	Float tmp40 = tmp39->depth;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(60)
	Float tmp41 = (tmp38 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(61)
	::mint::Control tmp42 = this->control;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(61)
	bool tmp43 = tmp42->visible;		HX_STACK_VAR(tmp43,"tmp43");
	struct _Function_1_1{
		inline static Dynamic Block( ::phoenix::Batcher &tmp13,::String &tmp11,::phoenix::Color &tmp36,::phoenix::Vector &tmp24,Float &tmp41,::phoenix::Vector &tmp35,bool &tmp43){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/render/luxe/Checkbox.hx",52,0x913a758e)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp11,false);
				__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp13,false);
				__result->Add(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10") , true,false);
				__result->Add(HX_HCSTRING("centered","\x74","\x5d","\x50","\x8f") , false,false);
				__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp24,false);
				__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , tmp35,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp36,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp41,false);
				__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , tmp43,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(52)
	Dynamic tmp44 = _Function_1_1::Block(tmp13,tmp11,tmp36,tmp24,tmp41,tmp35,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(52)
	::luxe::Sprite tmp45 = ::luxe::Sprite_obj::__new(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(52)
	this->visual = tmp45;
	HX_STACK_LINE(64)
	::mint::Control tmp46 = this->control;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(64)
	Float tmp47 = tmp46->canvas->scale;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(64)
	Float tmp48 = this->size_margin;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(64)
	Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(64)
	Float _margin = tmp49;		HX_STACK_VAR(_margin,"_margin");
	HX_STACK_LINE(66)
	::mint::Control tmp50 = this->control;		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(66)
	::String tmp51 = tmp50->name;		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(66)
	::String tmp52 = (tmp51 + HX_HCSTRING(".node_off","\xa0","\xe9","\x24","\xe5"));		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(67)
	::mint::render::luxe::LuxeMintRender tmp53 = this->render;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(67)
	::phoenix::Batcher tmp54 = tmp53->options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(70)
	::mint::Control tmp55 = this->control;		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(70)
	Float tmp56 = tmp55->x;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(70)
	::mint::Control tmp57 = this->control;		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(70)
	Float tmp58 = tmp57->canvas->scale;		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(70)
	Float tmp59 = (tmp56 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(70)
	Float tmp60 = _margin;		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(70)
	Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(70)
	::mint::Control tmp62 = this->control;		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(70)
	Float tmp63 = tmp62->y;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(70)
	::mint::Control tmp64 = this->control;		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(70)
	Float tmp65 = tmp64->canvas->scale;		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(70)
	Float tmp66 = (tmp63 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(70)
	Float tmp67 = _margin;		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(70)
	Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(70)
	::phoenix::Vector tmp69 = ::phoenix::Vector_obj::__new(tmp61,tmp68,null(),null());		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(71)
	::mint::Control tmp70 = this->control;		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(71)
	Float tmp71 = tmp70->w;		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(71)
	::mint::Control tmp72 = this->control;		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(71)
	Float tmp73 = tmp72->canvas->scale;		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(71)
	Float tmp74 = (tmp71 * tmp73);		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(71)
	Float tmp75 = (_margin * (int)2);		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(71)
	Float tmp76 = (tmp74 - tmp75);		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(71)
	::mint::Control tmp77 = this->control;		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(71)
	Float tmp78 = tmp77->h;		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(71)
	::mint::Control tmp79 = this->control;		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(71)
	Float tmp80 = tmp79->canvas->scale;		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(71)
	Float tmp81 = (tmp78 * tmp80);		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(71)
	Float tmp82 = (_margin * (int)2);		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(71)
	Float tmp83 = (tmp81 - tmp82);		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(71)
	::phoenix::Vector tmp84 = ::phoenix::Vector_obj::__new(tmp76,tmp83,null(),null());		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(72)
	::phoenix::Color tmp85 = this->color_node;		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(72)
	::phoenix::Color tmp86 = tmp85->clone();		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(72)
	::phoenix::Color tmp87 = tmp86->set(null(),null(),null(),((Float)0.25));		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(73)
	::mint::render::luxe::LuxeMintRender tmp88 = this->render;		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(73)
	Dynamic tmp89 = tmp88->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp89,"tmp89");
	HX_STACK_LINE(73)
	::mint::Control tmp90 = this->control;		HX_STACK_VAR(tmp90,"tmp90");
	HX_STACK_LINE(73)
	Float tmp91 = tmp90->depth;		HX_STACK_VAR(tmp91,"tmp91");
	HX_STACK_LINE(73)
	Float tmp92 = (tmp89 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
	HX_STACK_LINE(73)
	Float tmp93 = (tmp92 + ((Float)0.001));		HX_STACK_VAR(tmp93,"tmp93");
	HX_STACK_LINE(74)
	::mint::Control tmp94 = this->control;		HX_STACK_VAR(tmp94,"tmp94");
	HX_STACK_LINE(74)
	bool tmp95 = tmp94->visible;		HX_STACK_VAR(tmp95,"tmp95");
	struct _Function_1_2{
		inline static Dynamic Block( ::phoenix::Batcher &tmp54,::String &tmp52,::phoenix::Vector &tmp84,bool &tmp95,::phoenix::Vector &tmp69,::phoenix::Color &tmp87,Float &tmp93){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/render/luxe/Checkbox.hx",65,0x913a758e)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp52,false);
				__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp54,false);
				__result->Add(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10") , true,false);
				__result->Add(HX_HCSTRING("centered","\x74","\x5d","\x50","\x8f") , false,false);
				__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp69,false);
				__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , tmp84,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp87,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp93,false);
				__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , tmp95,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(65)
	Dynamic tmp96 = _Function_1_2::Block(tmp54,tmp52,tmp84,tmp95,tmp69,tmp87,tmp93);		HX_STACK_VAR(tmp96,"tmp96");
	HX_STACK_LINE(65)
	::luxe::Sprite tmp97 = ::luxe::Sprite_obj::__new(tmp96);		HX_STACK_VAR(tmp97,"tmp97");
	HX_STACK_LINE(65)
	this->node_off = tmp97;
	HX_STACK_LINE(78)
	::mint::Control tmp98 = this->control;		HX_STACK_VAR(tmp98,"tmp98");
	HX_STACK_LINE(78)
	::String tmp99 = tmp98->name;		HX_STACK_VAR(tmp99,"tmp99");
	HX_STACK_LINE(78)
	::String tmp100 = (tmp99 + HX_HCSTRING(".node_on","\x0e","\x9c","\x03","\x5e"));		HX_STACK_VAR(tmp100,"tmp100");
	HX_STACK_LINE(79)
	::mint::render::luxe::LuxeMintRender tmp101 = this->render;		HX_STACK_VAR(tmp101,"tmp101");
	HX_STACK_LINE(79)
	::phoenix::Batcher tmp102 = tmp101->options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp102,"tmp102");
	HX_STACK_LINE(82)
	::mint::Control tmp103 = this->control;		HX_STACK_VAR(tmp103,"tmp103");
	HX_STACK_LINE(82)
	Float tmp104 = tmp103->x;		HX_STACK_VAR(tmp104,"tmp104");
	HX_STACK_LINE(82)
	::mint::Control tmp105 = this->control;		HX_STACK_VAR(tmp105,"tmp105");
	HX_STACK_LINE(82)
	Float tmp106 = tmp105->canvas->scale;		HX_STACK_VAR(tmp106,"tmp106");
	HX_STACK_LINE(82)
	Float tmp107 = (tmp104 * tmp106);		HX_STACK_VAR(tmp107,"tmp107");
	HX_STACK_LINE(82)
	Float tmp108 = _margin;		HX_STACK_VAR(tmp108,"tmp108");
	HX_STACK_LINE(82)
	Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
	HX_STACK_LINE(82)
	::mint::Control tmp110 = this->control;		HX_STACK_VAR(tmp110,"tmp110");
	HX_STACK_LINE(82)
	Float tmp111 = tmp110->y;		HX_STACK_VAR(tmp111,"tmp111");
	HX_STACK_LINE(82)
	::mint::Control tmp112 = this->control;		HX_STACK_VAR(tmp112,"tmp112");
	HX_STACK_LINE(82)
	Float tmp113 = tmp112->canvas->scale;		HX_STACK_VAR(tmp113,"tmp113");
	HX_STACK_LINE(82)
	Float tmp114 = (tmp111 * tmp113);		HX_STACK_VAR(tmp114,"tmp114");
	HX_STACK_LINE(82)
	Float tmp115 = _margin;		HX_STACK_VAR(tmp115,"tmp115");
	HX_STACK_LINE(82)
	Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
	HX_STACK_LINE(82)
	::phoenix::Vector tmp117 = ::phoenix::Vector_obj::__new(tmp109,tmp116,null(),null());		HX_STACK_VAR(tmp117,"tmp117");
	HX_STACK_LINE(83)
	::mint::Control tmp118 = this->control;		HX_STACK_VAR(tmp118,"tmp118");
	HX_STACK_LINE(83)
	Float tmp119 = tmp118->w;		HX_STACK_VAR(tmp119,"tmp119");
	HX_STACK_LINE(83)
	::mint::Control tmp120 = this->control;		HX_STACK_VAR(tmp120,"tmp120");
	HX_STACK_LINE(83)
	Float tmp121 = tmp120->canvas->scale;		HX_STACK_VAR(tmp121,"tmp121");
	HX_STACK_LINE(83)
	Float tmp122 = (tmp119 * tmp121);		HX_STACK_VAR(tmp122,"tmp122");
	HX_STACK_LINE(83)
	Float tmp123 = (_margin * (int)2);		HX_STACK_VAR(tmp123,"tmp123");
	HX_STACK_LINE(83)
	Float tmp124 = (tmp122 - tmp123);		HX_STACK_VAR(tmp124,"tmp124");
	HX_STACK_LINE(83)
	::mint::Control tmp125 = this->control;		HX_STACK_VAR(tmp125,"tmp125");
	HX_STACK_LINE(83)
	Float tmp126 = tmp125->h;		HX_STACK_VAR(tmp126,"tmp126");
	HX_STACK_LINE(83)
	::mint::Control tmp127 = this->control;		HX_STACK_VAR(tmp127,"tmp127");
	HX_STACK_LINE(83)
	Float tmp128 = tmp127->canvas->scale;		HX_STACK_VAR(tmp128,"tmp128");
	HX_STACK_LINE(83)
	Float tmp129 = (tmp126 * tmp128);		HX_STACK_VAR(tmp129,"tmp129");
	HX_STACK_LINE(83)
	Float tmp130 = (_margin * (int)2);		HX_STACK_VAR(tmp130,"tmp130");
	HX_STACK_LINE(83)
	Float tmp131 = (tmp129 - tmp130);		HX_STACK_VAR(tmp131,"tmp131");
	HX_STACK_LINE(83)
	::phoenix::Vector tmp132 = ::phoenix::Vector_obj::__new(tmp124,tmp131,null(),null());		HX_STACK_VAR(tmp132,"tmp132");
	HX_STACK_LINE(84)
	::phoenix::Color tmp133 = this->color_node;		HX_STACK_VAR(tmp133,"tmp133");
	HX_STACK_LINE(85)
	::mint::render::luxe::LuxeMintRender tmp134 = this->render;		HX_STACK_VAR(tmp134,"tmp134");
	HX_STACK_LINE(85)
	Dynamic tmp135 = tmp134->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp135,"tmp135");
	HX_STACK_LINE(85)
	::mint::Control tmp136 = this->control;		HX_STACK_VAR(tmp136,"tmp136");
	HX_STACK_LINE(85)
	Float tmp137 = tmp136->depth;		HX_STACK_VAR(tmp137,"tmp137");
	HX_STACK_LINE(85)
	Float tmp138 = (tmp135 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
	HX_STACK_LINE(85)
	Float tmp139 = (tmp138 + ((Float)0.002));		HX_STACK_VAR(tmp139,"tmp139");
	HX_STACK_LINE(86)
	::mint::Control tmp140 = this->control;		HX_STACK_VAR(tmp140,"tmp140");
	HX_STACK_LINE(86)
	bool tmp141 = tmp140->visible;		HX_STACK_VAR(tmp141,"tmp141");
	HX_STACK_LINE(86)
	bool tmp142;		HX_STACK_VAR(tmp142,"tmp142");
	HX_STACK_LINE(86)
	if ((tmp141)){
		HX_STACK_LINE(86)
		::mint::Checkbox tmp143 = this->checkbox;		HX_STACK_VAR(tmp143,"tmp143");
		HX_STACK_LINE(86)
		::mint::Checkbox tmp144 = tmp143;		HX_STACK_VAR(tmp144,"tmp144");
		HX_STACK_LINE(86)
		tmp142 = tmp144->state;
	}
	else{
		HX_STACK_LINE(86)
		tmp142 = false;
	}
	struct _Function_1_3{
		inline static Dynamic Block( bool &tmp142,Float &tmp139,::String &tmp100,::phoenix::Vector &tmp132,::phoenix::Color &tmp133,::phoenix::Batcher &tmp102,::phoenix::Vector &tmp117){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/render/luxe/Checkbox.hx",77,0x913a758e)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp100,false);
				__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp102,false);
				__result->Add(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10") , true,false);
				__result->Add(HX_HCSTRING("centered","\x74","\x5d","\x50","\x8f") , false,false);
				__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp117,false);
				__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , tmp132,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp133,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp139,false);
				__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , tmp142,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(77)
	Dynamic tmp143 = _Function_1_3::Block(tmp142,tmp139,tmp100,tmp132,tmp133,tmp102,tmp117);		HX_STACK_VAR(tmp143,"tmp143");
	HX_STACK_LINE(77)
	::luxe::Sprite tmp144 = ::luxe::Sprite_obj::__new(tmp143);		HX_STACK_VAR(tmp144,"tmp144");
	HX_STACK_LINE(77)
	this->node = tmp144;
	HX_STACK_LINE(89)
	::mint::Control tmp145 = this->control;		HX_STACK_VAR(tmp145,"tmp145");
	HX_STACK_LINE(89)
	Float tmp146 = tmp145->canvas->scale;		HX_STACK_VAR(tmp146,"tmp146");
	HX_STACK_LINE(89)
	this->update_clip(tmp146);
	HX_STACK_LINE(91)
	::mint::Checkbox tmp147 = this->checkbox;		HX_STACK_VAR(tmp147,"tmp147");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_4,::mint::render::luxe::Checkbox,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic e,::mint::Control c){
		HX_STACK_FRAME("*","_Function_1_4",0x5200ed3a,"*._Function_1_4","mint/render/luxe/Checkbox.hx",91,0x913a758e)
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(c,"c")
		{
			HX_STACK_LINE(91)
			::phoenix::Color tmp148 = _g->color_node_hover;		HX_STACK_VAR(tmp148,"tmp148");
			HX_STACK_LINE(91)
			_g->node->set_color(tmp148);
			HX_STACK_LINE(91)
			::phoenix::Color tmp149 = _g->color_hover;		HX_STACK_VAR(tmp149,"tmp149");
			HX_STACK_LINE(91)
			_g->visual->set_color(tmp149);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(91)
	tmp147->onmouseenter->listen( Dynamic(new _Function_1_4(_g)));
	HX_STACK_LINE(92)
	::mint::Checkbox tmp148 = this->checkbox;		HX_STACK_VAR(tmp148,"tmp148");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_5,::mint::render::luxe::Checkbox,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic e,::mint::Control c){
		HX_STACK_FRAME("*","_Function_1_5",0x5200ed3b,"*._Function_1_5","mint/render/luxe/Checkbox.hx",92,0x913a758e)
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(c,"c")
		{
			HX_STACK_LINE(92)
			::phoenix::Color tmp149 = _g->color_node;		HX_STACK_VAR(tmp149,"tmp149");
			HX_STACK_LINE(92)
			_g->node->set_color(tmp149);
			HX_STACK_LINE(92)
			::phoenix::Color tmp150 = _g->color;		HX_STACK_VAR(tmp150,"tmp150");
			HX_STACK_LINE(92)
			_g->visual->set_color(tmp150);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(92)
	tmp148->onmouseleave->listen( Dynamic(new _Function_1_5(_g)));
	HX_STACK_LINE(94)
	::mint::Checkbox tmp149 = this->checkbox;		HX_STACK_VAR(tmp149,"tmp149");
	HX_STACK_LINE(94)
	Dynamic tmp150 = this->oncheck_dyn();		HX_STACK_VAR(tmp150,"tmp150");
	HX_STACK_LINE(94)
	tmp149->onchange->listen(tmp150);
}
;
	return null();
}

//Checkbox_obj::~Checkbox_obj() { }

Dynamic Checkbox_obj::__CreateEmpty() { return  new Checkbox_obj; }
hx::ObjectPtr< Checkbox_obj > Checkbox_obj::__new(::mint::render::luxe::LuxeMintRender _render,::mint::Checkbox _control)
{  hx::ObjectPtr< Checkbox_obj > _result_ = new Checkbox_obj();
	_result_->__construct(_render,_control);
	return _result_;}

Dynamic Checkbox_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Checkbox_obj > _result_ = new Checkbox_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Checkbox_obj::update_clip( Float _scale){
{
		HX_STACK_FRAME("mint.render.luxe.Checkbox","update_clip",0x8674b967,"mint.render.luxe.Checkbox.update_clip","mint/render/luxe/Checkbox.hx",98,0x913a758e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_scale,"_scale")
		HX_STACK_LINE(100)
		::mint::Control tmp = this->control;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(100)
		::mint::Control tmp1 = tmp->clip_with;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(100)
		Float tmp2 = _scale;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(100)
		::phoenix::Rectangle tmp3 = ::mint::render::luxe::Convert_obj::bounds(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(100)
		::phoenix::Rectangle _clip = tmp3;		HX_STACK_VAR(_clip,"_clip");
		HX_STACK_LINE(102)
		::luxe::Sprite tmp4 = this->visual;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(102)
		::phoenix::Rectangle tmp5 = _clip;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(102)
		tmp4->set_clip_rect(tmp5);
		HX_STACK_LINE(103)
		::luxe::Sprite tmp6 = this->node_off;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(103)
		::phoenix::Rectangle tmp7 = _clip;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(103)
		tmp6->set_clip_rect(tmp7);
		HX_STACK_LINE(104)
		::luxe::Sprite tmp8 = this->node;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(104)
		::phoenix::Rectangle tmp9 = _clip;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(104)
		tmp8->set_clip_rect(tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Checkbox_obj,update_clip,(void))

Void Checkbox_obj::onscale( Float _scale,Float _prev_scale){
{
		HX_STACK_FRAME("mint.render.luxe.Checkbox","onscale",0x4954adec,"mint.render.luxe.Checkbox.onscale","mint/render/luxe/Checkbox.hx",108,0x913a758e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_scale,"_scale")
		HX_STACK_ARG(_prev_scale,"_prev_scale")
		HX_STACK_LINE(110)
		Float tmp = _scale;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(110)
		this->update_clip(tmp);
	}
return null();
}


Void Checkbox_obj::oncheck( bool _new,bool _old){
{
		HX_STACK_FRAME("mint.render.luxe.Checkbox","oncheck",0x163c782a,"mint.render.luxe.Checkbox.oncheck","mint/render/luxe/Checkbox.hx",114,0x913a758e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_new,"_new")
		HX_STACK_ARG(_old,"_old")
		HX_STACK_LINE(116)
		::luxe::Sprite tmp = this->node;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(116)
		bool tmp1 = _new;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		tmp->set_visible(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Checkbox_obj,oncheck,(void))

Void Checkbox_obj::onbounds( ){
{
		HX_STACK_FRAME("mint.render.luxe.Checkbox","onbounds",0x0abb1cd3,"mint.render.luxe.Checkbox.onbounds","mint/render/luxe/Checkbox.hx",120,0x913a758e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(122)
		::mint::Control tmp = this->control;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(122)
		Float tmp1 = tmp->canvas->scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(122)
		Float tmp2 = this->size_margin;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(122)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(122)
		Float _margin = tmp3;		HX_STACK_VAR(_margin,"_margin");
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			::phoenix::Vector tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(124)
			{
				HX_STACK_LINE(124)
				::luxe::Sprite tmp5 = this->visual;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(124)
				::phoenix::Transform tmp6 = tmp5->get_transform();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(124)
				::phoenix::Transform _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(124)
				tmp4 = _this->local->pos;
			}
			HX_STACK_LINE(124)
			::phoenix::Vector _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(124)
			::mint::Control tmp5 = this->control;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(124)
			Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(124)
			::mint::Control tmp7 = this->control;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(124)
			Float tmp8 = tmp7->canvas->scale;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(124)
			Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(124)
			Float _x = tmp9;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(124)
			::mint::Control tmp10 = this->control;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(124)
			Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(124)
			::mint::Control tmp12 = this->control;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(124)
			Float tmp13 = tmp12->canvas->scale;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(124)
			Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(124)
			Float _y = tmp14;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(124)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(124)
			_this->ignore_listeners = true;
			HX_STACK_LINE(124)
			{
				HX_STACK_LINE(124)
				_this->x = _x;
				HX_STACK_LINE(124)
				bool tmp15 = _this->_construct;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(124)
				if ((tmp15)){
					HX_STACK_LINE(124)
					_this->x;
				}
				else{
					HX_STACK_LINE(124)
					bool tmp16 = (_this->listen_x != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(124)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(124)
					if ((tmp16)){
						HX_STACK_LINE(124)
						bool tmp18 = _this->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(124)
						bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(124)
						tmp17 = !(tmp19);
					}
					else{
						HX_STACK_LINE(124)
						tmp17 = false;
					}
					HX_STACK_LINE(124)
					if ((tmp17)){
						HX_STACK_LINE(124)
						Float tmp18 = _x;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(124)
						_this->listen_x(tmp18);
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
				bool tmp15 = _this->_construct;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(124)
				if ((tmp15)){
					HX_STACK_LINE(124)
					_this->y;
				}
				else{
					HX_STACK_LINE(124)
					bool tmp16 = (_this->listen_y != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(124)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(124)
					if ((tmp16)){
						HX_STACK_LINE(124)
						bool tmp18 = _this->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(124)
						bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(124)
						tmp17 = !(tmp19);
					}
					else{
						HX_STACK_LINE(124)
						tmp17 = false;
					}
					HX_STACK_LINE(124)
					if ((tmp17)){
						HX_STACK_LINE(124)
						Float tmp18 = _y;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(124)
						_this->listen_y(tmp18);
					}
					HX_STACK_LINE(124)
					_this->y;
				}
			}
			HX_STACK_LINE(124)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(124)
			bool tmp15 = (_this->listen_x != null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(124)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(124)
			if ((tmp15)){
				HX_STACK_LINE(124)
				bool tmp17 = _this->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(124)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(124)
				tmp16 = !(tmp18);
			}
			else{
				HX_STACK_LINE(124)
				tmp16 = false;
			}
			HX_STACK_LINE(124)
			if ((tmp16)){
				HX_STACK_LINE(124)
				Float tmp17 = _this->x;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(124)
				_this->listen_x(tmp17);
			}
			HX_STACK_LINE(124)
			bool tmp17 = (_this->listen_y != null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(124)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(124)
			if ((tmp17)){
				HX_STACK_LINE(124)
				bool tmp19 = _this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(124)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(124)
				tmp18 = !(tmp20);
			}
			else{
				HX_STACK_LINE(124)
				tmp18 = false;
			}
			HX_STACK_LINE(124)
			if ((tmp18)){
				HX_STACK_LINE(124)
				Float tmp19 = _this->y;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(124)
				_this->listen_y(tmp19);
			}
			HX_STACK_LINE(124)
			_this;
		}
		HX_STACK_LINE(125)
		::luxe::Sprite tmp4 = this->visual;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(125)
		::mint::Control tmp5 = this->control;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(125)
		Float tmp6 = tmp5->w;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(125)
		::mint::Control tmp7 = this->control;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(125)
		Float tmp8 = tmp7->canvas->scale;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(125)
		Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(125)
		::mint::Control tmp10 = this->control;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(125)
		Float tmp11 = tmp10->h;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(125)
		::mint::Control tmp12 = this->control;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(125)
		Float tmp13 = tmp12->canvas->scale;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(125)
		Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(125)
		tmp4->geometry_quad->resize_xy(tmp9,tmp14);
		HX_STACK_LINE(126)
		{
			HX_STACK_LINE(126)
			::phoenix::Vector tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(126)
			{
				HX_STACK_LINE(126)
				::luxe::Sprite tmp16 = this->node_off;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(126)
				::phoenix::Transform tmp17 = tmp16->get_transform();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(126)
				::phoenix::Transform _this = tmp17;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(126)
				tmp15 = _this->local->pos;
			}
			HX_STACK_LINE(126)
			::phoenix::Vector _this = tmp15;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(126)
			::mint::Control tmp16 = this->control;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(126)
			Float tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(126)
			::mint::Control tmp18 = this->control;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(126)
			Float tmp19 = tmp18->canvas->scale;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(126)
			Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(126)
			Float tmp21 = _margin;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(126)
			Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(126)
			Float _x = tmp22;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(126)
			::mint::Control tmp23 = this->control;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(126)
			Float tmp24 = tmp23->y;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(126)
			::mint::Control tmp25 = this->control;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(126)
			Float tmp26 = tmp25->canvas->scale;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(126)
			Float tmp27 = (tmp24 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(126)
			Float tmp28 = _margin;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(126)
			Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(126)
			Float _y = tmp29;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(126)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(126)
			_this->ignore_listeners = true;
			HX_STACK_LINE(126)
			{
				HX_STACK_LINE(126)
				_this->x = _x;
				HX_STACK_LINE(126)
				bool tmp30 = _this->_construct;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(126)
				if ((tmp30)){
					HX_STACK_LINE(126)
					_this->x;
				}
				else{
					HX_STACK_LINE(126)
					bool tmp31 = (_this->listen_x != null());		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(126)
					bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(126)
					if ((tmp31)){
						HX_STACK_LINE(126)
						bool tmp33 = _this->ignore_listeners;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(126)
						bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(126)
						tmp32 = !(tmp34);
					}
					else{
						HX_STACK_LINE(126)
						tmp32 = false;
					}
					HX_STACK_LINE(126)
					if ((tmp32)){
						HX_STACK_LINE(126)
						Float tmp33 = _x;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(126)
						_this->listen_x(tmp33);
					}
					HX_STACK_LINE(126)
					_this->x;
				}
			}
			HX_STACK_LINE(126)
			{
				HX_STACK_LINE(126)
				_this->y = _y;
				HX_STACK_LINE(126)
				bool tmp30 = _this->_construct;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(126)
				if ((tmp30)){
					HX_STACK_LINE(126)
					_this->y;
				}
				else{
					HX_STACK_LINE(126)
					bool tmp31 = (_this->listen_y != null());		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(126)
					bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(126)
					if ((tmp31)){
						HX_STACK_LINE(126)
						bool tmp33 = _this->ignore_listeners;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(126)
						bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(126)
						tmp32 = !(tmp34);
					}
					else{
						HX_STACK_LINE(126)
						tmp32 = false;
					}
					HX_STACK_LINE(126)
					if ((tmp32)){
						HX_STACK_LINE(126)
						Float tmp33 = _y;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(126)
						_this->listen_y(tmp33);
					}
					HX_STACK_LINE(126)
					_this->y;
				}
			}
			HX_STACK_LINE(126)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(126)
			bool tmp30 = (_this->listen_x != null());		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(126)
			bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(126)
			if ((tmp30)){
				HX_STACK_LINE(126)
				bool tmp32 = _this->ignore_listeners;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(126)
				bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(126)
				tmp31 = !(tmp33);
			}
			else{
				HX_STACK_LINE(126)
				tmp31 = false;
			}
			HX_STACK_LINE(126)
			if ((tmp31)){
				HX_STACK_LINE(126)
				Float tmp32 = _this->x;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(126)
				_this->listen_x(tmp32);
			}
			HX_STACK_LINE(126)
			bool tmp32 = (_this->listen_y != null());		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(126)
			bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(126)
			if ((tmp32)){
				HX_STACK_LINE(126)
				bool tmp34 = _this->ignore_listeners;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(126)
				bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(126)
				tmp33 = !(tmp35);
			}
			else{
				HX_STACK_LINE(126)
				tmp33 = false;
			}
			HX_STACK_LINE(126)
			if ((tmp33)){
				HX_STACK_LINE(126)
				Float tmp34 = _this->y;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(126)
				_this->listen_y(tmp34);
			}
			HX_STACK_LINE(126)
			_this;
		}
		HX_STACK_LINE(127)
		::luxe::Sprite tmp15 = this->node_off;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(127)
		::mint::Control tmp16 = this->control;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(127)
		Float tmp17 = tmp16->w;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(127)
		::mint::Control tmp18 = this->control;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(127)
		Float tmp19 = tmp18->canvas->scale;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(127)
		Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(127)
		Float tmp21 = (_margin * (int)2);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(127)
		Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(127)
		::mint::Control tmp23 = this->control;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(127)
		Float tmp24 = tmp23->h;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(127)
		::mint::Control tmp25 = this->control;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(127)
		Float tmp26 = tmp25->canvas->scale;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(127)
		Float tmp27 = (tmp24 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(127)
		Float tmp28 = (_margin * (int)2);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(127)
		Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(127)
		tmp15->geometry_quad->resize_xy(tmp22,tmp29);
		HX_STACK_LINE(128)
		{
			HX_STACK_LINE(128)
			::phoenix::Vector tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(128)
			{
				HX_STACK_LINE(128)
				::luxe::Sprite tmp31 = this->node;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(128)
				::phoenix::Transform tmp32 = tmp31->get_transform();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(128)
				::phoenix::Transform _this = tmp32;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(128)
				tmp30 = _this->local->pos;
			}
			HX_STACK_LINE(128)
			::phoenix::Vector _this = tmp30;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(128)
			::mint::Control tmp31 = this->control;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(128)
			Float tmp32 = tmp31->x;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(128)
			::mint::Control tmp33 = this->control;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(128)
			Float tmp34 = tmp33->canvas->scale;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(128)
			Float tmp35 = (tmp32 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(128)
			Float tmp36 = _margin;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(128)
			Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(128)
			Float _x = tmp37;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(128)
			::mint::Control tmp38 = this->control;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(128)
			Float tmp39 = tmp38->y;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(128)
			::mint::Control tmp40 = this->control;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(128)
			Float tmp41 = tmp40->canvas->scale;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(128)
			Float tmp42 = (tmp39 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(128)
			Float tmp43 = _margin;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(128)
			Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(128)
			Float _y = tmp44;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(128)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(128)
			_this->ignore_listeners = true;
			HX_STACK_LINE(128)
			{
				HX_STACK_LINE(128)
				_this->x = _x;
				HX_STACK_LINE(128)
				bool tmp45 = _this->_construct;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(128)
				if ((tmp45)){
					HX_STACK_LINE(128)
					_this->x;
				}
				else{
					HX_STACK_LINE(128)
					bool tmp46 = (_this->listen_x != null());		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(128)
					bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(128)
					if ((tmp46)){
						HX_STACK_LINE(128)
						bool tmp48 = _this->ignore_listeners;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(128)
						bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(128)
						tmp47 = !(tmp49);
					}
					else{
						HX_STACK_LINE(128)
						tmp47 = false;
					}
					HX_STACK_LINE(128)
					if ((tmp47)){
						HX_STACK_LINE(128)
						Float tmp48 = _x;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(128)
						_this->listen_x(tmp48);
					}
					HX_STACK_LINE(128)
					_this->x;
				}
			}
			HX_STACK_LINE(128)
			{
				HX_STACK_LINE(128)
				_this->y = _y;
				HX_STACK_LINE(128)
				bool tmp45 = _this->_construct;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(128)
				if ((tmp45)){
					HX_STACK_LINE(128)
					_this->y;
				}
				else{
					HX_STACK_LINE(128)
					bool tmp46 = (_this->listen_y != null());		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(128)
					bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(128)
					if ((tmp46)){
						HX_STACK_LINE(128)
						bool tmp48 = _this->ignore_listeners;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(128)
						bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(128)
						tmp47 = !(tmp49);
					}
					else{
						HX_STACK_LINE(128)
						tmp47 = false;
					}
					HX_STACK_LINE(128)
					if ((tmp47)){
						HX_STACK_LINE(128)
						Float tmp48 = _y;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(128)
						_this->listen_y(tmp48);
					}
					HX_STACK_LINE(128)
					_this->y;
				}
			}
			HX_STACK_LINE(128)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(128)
			bool tmp45 = (_this->listen_x != null());		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(128)
			bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(128)
			if ((tmp45)){
				HX_STACK_LINE(128)
				bool tmp47 = _this->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(128)
				bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(128)
				tmp46 = !(tmp48);
			}
			else{
				HX_STACK_LINE(128)
				tmp46 = false;
			}
			HX_STACK_LINE(128)
			if ((tmp46)){
				HX_STACK_LINE(128)
				Float tmp47 = _this->x;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(128)
				_this->listen_x(tmp47);
			}
			HX_STACK_LINE(128)
			bool tmp47 = (_this->listen_y != null());		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(128)
			bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(128)
			if ((tmp47)){
				HX_STACK_LINE(128)
				bool tmp49 = _this->ignore_listeners;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(128)
				bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(128)
				tmp48 = !(tmp50);
			}
			else{
				HX_STACK_LINE(128)
				tmp48 = false;
			}
			HX_STACK_LINE(128)
			if ((tmp48)){
				HX_STACK_LINE(128)
				Float tmp49 = _this->y;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(128)
				_this->listen_y(tmp49);
			}
			HX_STACK_LINE(128)
			_this;
		}
		HX_STACK_LINE(129)
		::luxe::Sprite tmp30 = this->node;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(129)
		::mint::Control tmp31 = this->control;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(129)
		Float tmp32 = tmp31->w;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(129)
		::mint::Control tmp33 = this->control;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(129)
		Float tmp34 = tmp33->canvas->scale;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(129)
		Float tmp35 = (tmp32 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(129)
		Float tmp36 = (_margin * (int)2);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(129)
		Float tmp37 = (tmp35 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(129)
		::mint::Control tmp38 = this->control;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(129)
		Float tmp39 = tmp38->h;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(129)
		::mint::Control tmp40 = this->control;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(129)
		Float tmp41 = tmp40->canvas->scale;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(129)
		Float tmp42 = (tmp39 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(129)
		Float tmp43 = (_margin * (int)2);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(129)
		Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(129)
		tmp30->geometry_quad->resize_xy(tmp37,tmp44);
	}
return null();
}


Void Checkbox_obj::ondestroy( ){
{
		HX_STACK_FRAME("mint.render.luxe.Checkbox","ondestroy",0x89cc28dc,"mint.render.luxe.Checkbox.ondestroy","mint/render/luxe/Checkbox.hx",133,0x913a758e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(135)
		::luxe::Sprite tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(135)
		tmp->destroy(null());
		HX_STACK_LINE(136)
		::luxe::Sprite tmp1 = this->node_off;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(136)
		tmp1->destroy(null());
		HX_STACK_LINE(137)
		::luxe::Sprite tmp2 = this->node;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(137)
		tmp2->destroy(null());
		HX_STACK_LINE(139)
		::luxe::Sprite tmp3 = this->node_off = null();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(139)
		::luxe::Sprite tmp4 = this->node = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(139)
		this->visual = tmp4;
	}
return null();
}


Void Checkbox_obj::onclip( bool _disable,Float _x,Float _y,Float _w,Float _h){
{
		HX_STACK_FRAME("mint.render.luxe.Checkbox","onclip",0x98cb11ae,"mint.render.luxe.Checkbox.onclip","mint/render/luxe/Checkbox.hx",143,0x913a758e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_disable,"_disable")
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_w,"_w")
		HX_STACK_ARG(_h,"_h")
		HX_STACK_LINE(145)
		::mint::Control tmp = this->control;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(145)
		Float tmp1 = tmp->canvas->scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(145)
		this->update_clip(tmp1);
	}
return null();
}


Void Checkbox_obj::onvisible( bool _visible){
{
		HX_STACK_FRAME("mint.render.luxe.Checkbox","onvisible",0x086a7454,"mint.render.luxe.Checkbox.onvisible","mint/render/luxe/Checkbox.hx",149,0x913a758e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_visible,"_visible")
		HX_STACK_LINE(151)
		::luxe::Sprite tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(151)
		::luxe::Sprite tmp1 = this->node_off;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(151)
		bool tmp2 = _visible;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(151)
		bool tmp3 = tmp1->set_visible(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(151)
		tmp->set_visible(tmp3);
		HX_STACK_LINE(153)
		bool tmp4 = _visible;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(153)
		if ((tmp4)){
			HX_STACK_LINE(154)
			::mint::Checkbox tmp5 = this->checkbox;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(154)
			bool tmp6 = tmp5->state;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(154)
			if ((tmp6)){
				HX_STACK_LINE(154)
				::luxe::Sprite tmp7 = this->node;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(154)
				bool tmp8 = _visible;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(154)
				tmp7->set_visible(tmp8);
			}
		}
		else{
			HX_STACK_LINE(156)
			::luxe::Sprite tmp5 = this->node;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(156)
			bool tmp6 = _visible;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(156)
			tmp5->set_visible(tmp6);
		}
	}
return null();
}


Void Checkbox_obj::ondepth( Float _depth){
{
		HX_STACK_FRAME("mint.render.luxe.Checkbox","ondepth",0xa7afd065,"mint.render.luxe.Checkbox.ondepth","mint/render/luxe/Checkbox.hx",161,0x913a758e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_depth,"_depth")
		HX_STACK_LINE(163)
		::luxe::Sprite tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(163)
		::mint::render::luxe::LuxeMintRender tmp1 = this->render;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(163)
		Dynamic tmp2 = tmp1->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(163)
		Float tmp3 = _depth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(163)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(163)
		tmp->set_depth(tmp4);
		HX_STACK_LINE(164)
		::luxe::Sprite tmp5 = this->node_off;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(164)
		::luxe::Sprite tmp6 = this->visual;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(164)
		Float tmp7 = tmp6->depth;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(164)
		Float tmp8 = (tmp7 + ((Float)0.001));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(164)
		tmp5->set_depth(tmp8);
		HX_STACK_LINE(165)
		::luxe::Sprite tmp9 = this->node;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(165)
		::luxe::Sprite tmp10 = this->visual;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(165)
		Float tmp11 = tmp10->depth;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(165)
		Float tmp12 = (tmp11 + ((Float)0.002));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(165)
		tmp9->set_depth(tmp12);
	}
return null();
}



Checkbox_obj::Checkbox_obj()
{
}

void Checkbox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Checkbox);
	HX_MARK_MEMBER_NAME(checkbox,"checkbox");
	HX_MARK_MEMBER_NAME(visual,"visual");
	HX_MARK_MEMBER_NAME(node,"node");
	HX_MARK_MEMBER_NAME(node_off,"node_off");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(color_hover,"color_hover");
	HX_MARK_MEMBER_NAME(color_node,"color_node");
	HX_MARK_MEMBER_NAME(color_node_hover,"color_node_hover");
	HX_MARK_MEMBER_NAME(size_margin,"size_margin");
	HX_MARK_MEMBER_NAME(render,"render");
	::mint::render::Render_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Checkbox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(checkbox,"checkbox");
	HX_VISIT_MEMBER_NAME(visual,"visual");
	HX_VISIT_MEMBER_NAME(node,"node");
	HX_VISIT_MEMBER_NAME(node_off,"node_off");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(color_hover,"color_hover");
	HX_VISIT_MEMBER_NAME(color_node,"color_node");
	HX_VISIT_MEMBER_NAME(color_node_hover,"color_node_hover");
	HX_VISIT_MEMBER_NAME(size_margin,"size_margin");
	HX_VISIT_MEMBER_NAME(render,"render");
	::mint::render::Render_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Checkbox_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"node") ) { return node; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"visual") ) { return visual; }
		if (HX_FIELD_EQ(inName,"render") ) { return render; }
		if (HX_FIELD_EQ(inName,"onclip") ) { return onclip_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onscale") ) { return onscale_dyn(); }
		if (HX_FIELD_EQ(inName,"oncheck") ) { return oncheck_dyn(); }
		if (HX_FIELD_EQ(inName,"ondepth") ) { return ondepth_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"checkbox") ) { return checkbox; }
		if (HX_FIELD_EQ(inName,"node_off") ) { return node_off; }
		if (HX_FIELD_EQ(inName,"onbounds") ) { return onbounds_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onvisible") ) { return onvisible_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"color_node") ) { return color_node; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"color_hover") ) { return color_hover; }
		if (HX_FIELD_EQ(inName,"size_margin") ) { return size_margin; }
		if (HX_FIELD_EQ(inName,"update_clip") ) { return update_clip_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"color_node_hover") ) { return color_node_hover; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Checkbox_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"node") ) { node=inValue.Cast< ::luxe::Sprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"visual") ) { visual=inValue.Cast< ::luxe::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"render") ) { render=inValue.Cast< ::mint::render::luxe::LuxeMintRender >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"checkbox") ) { checkbox=inValue.Cast< ::mint::Checkbox >(); return inValue; }
		if (HX_FIELD_EQ(inName,"node_off") ) { node_off=inValue.Cast< ::luxe::Sprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"color_node") ) { color_node=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"color_hover") ) { color_hover=inValue.Cast< ::phoenix::Color >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size_margin") ) { size_margin=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"color_node_hover") ) { color_node_hover=inValue.Cast< ::phoenix::Color >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Checkbox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("checkbox","\x43","\xd2","\xf5","\xac"));
	outFields->push(HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef"));
	outFields->push(HX_HCSTRING("node","\x02","\x0a","\x0a","\x49"));
	outFields->push(HX_HCSTRING("node_off","\x72","\x0b","\xc4","\xfd"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("color_hover","\xa0","\x4a","\xe0","\xac"));
	outFields->push(HX_HCSTRING("color_node","\x9e","\xcd","\x59","\x8d"));
	outFields->push(HX_HCSTRING("color_node_hover","\x1b","\x05","\xbd","\x17"));
	outFields->push(HX_HCSTRING("size_margin","\x2c","\xeb","\x4c","\x03"));
	outFields->push(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::mint::Checkbox*/ ,(int)offsetof(Checkbox_obj,checkbox),HX_HCSTRING("checkbox","\x43","\xd2","\xf5","\xac")},
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(Checkbox_obj,visual),HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef")},
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(Checkbox_obj,node),HX_HCSTRING("node","\x02","\x0a","\x0a","\x49")},
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(Checkbox_obj,node_off),HX_HCSTRING("node_off","\x72","\x0b","\xc4","\xfd")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Checkbox_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Checkbox_obj,color_hover),HX_HCSTRING("color_hover","\xa0","\x4a","\xe0","\xac")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Checkbox_obj,color_node),HX_HCSTRING("color_node","\x9e","\xcd","\x59","\x8d")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Checkbox_obj,color_node_hover),HX_HCSTRING("color_node_hover","\x1b","\x05","\xbd","\x17")},
	{hx::fsFloat,(int)offsetof(Checkbox_obj,size_margin),HX_HCSTRING("size_margin","\x2c","\xeb","\x4c","\x03")},
	{hx::fsObject /*::mint::render::luxe::LuxeMintRender*/ ,(int)offsetof(Checkbox_obj,render),HX_HCSTRING("render","\x56","\x6b","\x29","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("checkbox","\x43","\xd2","\xf5","\xac"),
	HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef"),
	HX_HCSTRING("node","\x02","\x0a","\x0a","\x49"),
	HX_HCSTRING("node_off","\x72","\x0b","\xc4","\xfd"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("color_hover","\xa0","\x4a","\xe0","\xac"),
	HX_HCSTRING("color_node","\x9e","\xcd","\x59","\x8d"),
	HX_HCSTRING("color_node_hover","\x1b","\x05","\xbd","\x17"),
	HX_HCSTRING("size_margin","\x2c","\xeb","\x4c","\x03"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("update_clip","\x06","\x84","\x3e","\x47"),
	HX_HCSTRING("onscale","\x0b","\xfd","\xde","\x7b"),
	HX_HCSTRING("oncheck","\x49","\xc7","\xc6","\x48"),
	HX_HCSTRING("onbounds","\xd4","\x08","\x36","\x11"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onclip","\x6f","\x4b","\x73","\xf9"),
	HX_HCSTRING("onvisible","\x33","\x09","\x7e","\xad"),
	HX_HCSTRING("ondepth","\x84","\x1f","\x3a","\xda"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Checkbox_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Checkbox_obj::__mClass,"__mClass");
};

#endif

hx::Class Checkbox_obj::__mClass;

void Checkbox_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mint.render.luxe.Checkbox","\x4f","\xc8","\xdd","\x2e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Checkbox_obj >;
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
