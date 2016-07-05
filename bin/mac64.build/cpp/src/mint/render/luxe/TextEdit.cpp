#include <hxcpp.h>

#include "hxMath.h"
#include "linc_sdl.h"
#include "linc_timestamp.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_luxe_Draw
#include <luxe/Draw.h>
#endif
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
#ifndef INCLUDED_luxe_Text
#include <luxe/Text.h>
#endif
#ifndef INCLUDED_luxe_Timer
#include <luxe/Timer.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_Unifill
#include <luxe/utils/unifill/Unifill.h>
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
#ifndef INCLUDED_mint_render_luxe_TextEdit
#include <mint/render/luxe/TextEdit.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_BitmapFont
#include <phoenix/BitmapFont.h>
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
#ifndef INCLUDED_phoenix_geometry_LineGeometry
#include <phoenix/geometry/LineGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_QuadGeometry
#include <phoenix/geometry/QuadGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_RectangleGeometry
#include <phoenix/geometry/RectangleGeometry.h>
#endif
#ifndef INCLUDED_snow_api_Timer
#include <snow/api/Timer.h>
#endif
#ifndef INCLUDED_snow_core_Runtime
#include <snow/core/Runtime.h>
#endif
#ifndef INCLUDED_snow_core_native_Runtime
#include <snow/core/native/Runtime.h>
#endif
#ifndef INCLUDED_snow_modules_sdl_Runtime
#include <snow/modules/sdl/Runtime.h>
#endif
namespace mint{
namespace render{
namespace luxe{

Void TextEdit_obj::__construct(::mint::render::luxe::LuxeMintRender _render,::mint::TextEdit _control)
{
HX_STACK_FRAME("mint.render.luxe.TextEdit","new",0x655ea1d5,"mint.render.luxe.TextEdit.new","mint/render/luxe/TextEdit.hx",23,0x7cdf4efa)
HX_STACK_THIS(this)
HX_STACK_ARG(_render,"_render")
HX_STACK_ARG(_control,"_control")
{
	HX_STACK_LINE(34)
	this->cursor_blink_rate = ((Float)0.5);
	HX_STACK_LINE(38)
	::mint::render::luxe::TextEdit _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(40)
	this->textedit = _control;
	HX_STACK_LINE(41)
	this->render = _render;
	HX_STACK_LINE(43)
	::mint::render::luxe::LuxeMintRender tmp = this->render;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	::mint::TextEdit tmp1 = _control;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(45)
	::mint::TextEdit tmp2 = this->textedit;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	Dynamic tmp3 = tmp2->options->__Field(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(45)
	Dynamic _opt = tmp3;		HX_STACK_VAR(_opt,"_opt");
	HX_STACK_LINE(47)
	::phoenix::Color tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		bool tmp5 = (_opt->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(47)
		if ((tmp5)){
			HX_STACK_LINE(47)
			::phoenix::Color tmp6 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(47)
			::phoenix::Color tmp7 = tmp6->rgb((int)6579305);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(47)
			_opt->__FieldRef(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")) = tmp7;
		}
		HX_STACK_LINE(47)
		tmp4 = _opt->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );
	}
	HX_STACK_LINE(47)
	this->color = tmp4;
	HX_STACK_LINE(48)
	::phoenix::Color tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(48)
	{
		HX_STACK_LINE(48)
		bool tmp6 = (_opt->__Field(HX_HCSTRING("color_hover","\xa0","\x4a","\xe0","\xac"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(48)
		if ((tmp6)){
			HX_STACK_LINE(48)
			::phoenix::Color tmp7 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(48)
			::phoenix::Color tmp8 = tmp7->rgb((int)4473929);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(48)
			_opt->__FieldRef(HX_HCSTRING("color_hover","\xa0","\x4a","\xe0","\xac")) = tmp8;
		}
		HX_STACK_LINE(48)
		tmp5 = _opt->__Field(HX_HCSTRING("color_hover","\xa0","\x4a","\xe0","\xac"), hx::paccDynamic );
	}
	HX_STACK_LINE(48)
	this->color_hover = tmp5;
	HX_STACK_LINE(49)
	::phoenix::Color tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(49)
		bool tmp7 = (_opt->__Field(HX_HCSTRING("color_cursor","\x72","\x71","\x65","\x09"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(49)
		if ((tmp7)){
			HX_STACK_LINE(49)
			::phoenix::Color tmp8 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(49)
			::phoenix::Color tmp9 = tmp8->rgb((int)10340963);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(49)
			_opt->__FieldRef(HX_HCSTRING("color_cursor","\x72","\x71","\x65","\x09")) = tmp9;
		}
		HX_STACK_LINE(49)
		tmp6 = _opt->__Field(HX_HCSTRING("color_cursor","\x72","\x71","\x65","\x09"), hx::paccDynamic );
	}
	HX_STACK_LINE(49)
	this->color_cursor = tmp6;
	HX_STACK_LINE(50)
	Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(50)
	{
		HX_STACK_LINE(50)
		bool tmp8 = (_opt->__Field(HX_HCSTRING("cursor_blink_rate","\xec","\xb1","\x9e","\x86"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(50)
		if ((tmp8)){
			HX_STACK_LINE(50)
			_opt->__FieldRef(HX_HCSTRING("cursor_blink_rate","\xec","\xb1","\x9e","\x86")) = ((Float)0.5);
		}
		HX_STACK_LINE(50)
		tmp7 = _opt->__Field(HX_HCSTRING("cursor_blink_rate","\xec","\xb1","\x9e","\x86"), hx::paccDynamic );
	}
	HX_STACK_LINE(50)
	this->cursor_blink_rate = tmp7;
	HX_STACK_LINE(52)
	::luxe::Draw tmp8 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp8,"tmp8");
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
	HX_STACK_LINE(55)
	::mint::Control tmp14 = this->control;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(55)
	Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(55)
	::mint::Control tmp16 = this->control;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(55)
	Float tmp17 = tmp16->canvas->scale;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(55)
	Float tmp18 = (tmp15 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(56)
	::mint::Control tmp19 = this->control;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(56)
	Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(56)
	::mint::Control tmp21 = this->control;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(56)
	Float tmp22 = tmp21->canvas->scale;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(56)
	Float tmp23 = (tmp20 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(57)
	::mint::Control tmp24 = this->control;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(57)
	Float tmp25 = tmp24->w;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(57)
	::mint::Control tmp26 = this->control;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(57)
	Float tmp27 = tmp26->canvas->scale;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(57)
	Float tmp28 = (tmp25 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(58)
	::mint::Control tmp29 = this->control;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(58)
	Float tmp30 = tmp29->h;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(58)
	::mint::Control tmp31 = this->control;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(58)
	Float tmp32 = tmp31->canvas->scale;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(58)
	Float tmp33 = (tmp30 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(59)
	::phoenix::Color tmp34 = this->color;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(60)
	::mint::render::luxe::LuxeMintRender tmp35 = this->render;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(60)
	Dynamic tmp36 = tmp35->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(60)
	::mint::Control tmp37 = this->control;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(60)
	Float tmp38 = tmp37->depth;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(60)
	Float tmp39 = (tmp36 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(61)
	::mint::Control tmp40 = this->control;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(61)
	bool tmp41 = tmp40->visible;		HX_STACK_VAR(tmp41,"tmp41");
	struct _Function_1_1{
		inline static Dynamic Block( Float &tmp28,Float &tmp33,::phoenix::Batcher &tmp13,::String &tmp11,Float &tmp23,bool &tmp41,::phoenix::Color &tmp34,Float &tmp18,Float &tmp39){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/render/luxe/TextEdit.hx",52,0x7cdf4efa)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tmp11,false);
				__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp13,false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp18,false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp23,false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp28,false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp33,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp34,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp39,false);
				__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , tmp41,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(52)
	Dynamic tmp42 = _Function_1_1::Block(tmp28,tmp33,tmp13,tmp11,tmp23,tmp41,tmp34,tmp18,tmp39);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(52)
	::phoenix::geometry::QuadGeometry tmp43 = tmp8->box(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(52)
	this->visual = tmp43;
	HX_STACK_LINE(64)
	::luxe::Draw tmp44 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(65)
	::mint::Control tmp45 = this->control;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(65)
	::String tmp46 = tmp45->name;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(65)
	::String tmp47 = (tmp46 + HX_HCSTRING(".focus","\xea","\xf8","\xf3","\x68"));		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(66)
	::mint::render::luxe::LuxeMintRender tmp48 = this->render;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(66)
	::phoenix::Batcher tmp49 = tmp48->options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(67)
	::mint::Control tmp50 = this->control;		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(67)
	Float tmp51 = tmp50->x;		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(67)
	::mint::Control tmp52 = this->control;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(67)
	Float tmp53 = tmp52->canvas->scale;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(67)
	Float tmp54 = (tmp51 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(68)
	::mint::Control tmp55 = this->control;		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(68)
	Float tmp56 = tmp55->y;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(68)
	::mint::Control tmp57 = this->control;		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(68)
	Float tmp58 = tmp57->canvas->scale;		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(68)
	Float tmp59 = (tmp56 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(69)
	::mint::Control tmp60 = this->control;		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(69)
	Float tmp61 = tmp60->w;		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(69)
	::mint::Control tmp62 = this->control;		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(69)
	Float tmp63 = tmp62->canvas->scale;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(69)
	Float tmp64 = (tmp61 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(70)
	::mint::Control tmp65 = this->control;		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(70)
	Float tmp66 = tmp65->h;		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(70)
	::mint::Control tmp67 = this->control;		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(70)
	Float tmp68 = tmp67->canvas->scale;		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(70)
	Float tmp69 = (tmp66 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(71)
	::phoenix::Color tmp70 = this->color_cursor;		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(72)
	::mint::render::luxe::LuxeMintRender tmp71 = this->render;		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(72)
	Dynamic tmp72 = tmp71->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(72)
	::mint::Control tmp73 = this->control;		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(72)
	Float tmp74 = tmp73->depth;		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(72)
	Float tmp75 = (tmp72 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(72)
	Float tmp76 = (tmp75 + ((Float)0.001));		HX_STACK_VAR(tmp76,"tmp76");
	struct _Function_1_2{
		inline static Dynamic Block( Float &tmp54,Float &tmp76,::String &tmp47,::phoenix::Color &tmp70,Float &tmp64,::phoenix::Batcher &tmp49,Float &tmp59,Float &tmp69){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/render/luxe/TextEdit.hx",64,0x7cdf4efa)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tmp47,false);
				__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp49,false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp54,false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp59,false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp64,false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp69,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp70,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp76,false);
				__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , false,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(64)
	Dynamic tmp77 = _Function_1_2::Block(tmp54,tmp76,tmp47,tmp70,tmp64,tmp49,tmp59,tmp69);		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(64)
	::phoenix::geometry::RectangleGeometry tmp78 = tmp44->rectangle(tmp77);		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(64)
	this->focus = tmp78;
	HX_STACK_LINE(76)
	::luxe::Draw tmp79 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(77)
	::mint::Control tmp80 = this->control;		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(77)
	::String tmp81 = tmp80->name;		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(77)
	::String tmp82 = (tmp81 + HX_HCSTRING(".cursor","\x84","\xe5","\xc3","\xb7"));		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(78)
	::mint::render::luxe::LuxeMintRender tmp83 = this->render;		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(78)
	::phoenix::Batcher tmp84 = tmp83->options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(79)
	::phoenix::Vector tmp85 = ::phoenix::Vector_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(80)
	::phoenix::Vector tmp86 = ::phoenix::Vector_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(81)
	::phoenix::Color tmp87 = this->color_cursor;		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(82)
	::mint::render::luxe::LuxeMintRender tmp88 = this->render;		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(82)
	Dynamic tmp89 = tmp88->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp89,"tmp89");
	HX_STACK_LINE(82)
	::mint::Control tmp90 = this->control;		HX_STACK_VAR(tmp90,"tmp90");
	HX_STACK_LINE(82)
	Float tmp91 = tmp90->depth;		HX_STACK_VAR(tmp91,"tmp91");
	HX_STACK_LINE(82)
	Float tmp92 = (tmp89 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
	HX_STACK_LINE(82)
	Float tmp93 = (tmp92 + ((Float)0.002));		HX_STACK_VAR(tmp93,"tmp93");
	struct _Function_1_3{
		inline static Dynamic Block( ::phoenix::Vector &tmp86,::phoenix::Batcher &tmp84,::String &tmp82,::phoenix::Vector &tmp85,::phoenix::Color &tmp87,Float &tmp93){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/render/luxe/TextEdit.hx",76,0x7cdf4efa)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tmp82,false);
				__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp84,false);
				__result->Add(HX_HCSTRING("p0","\xc0","\x61","\x00","\x00") , tmp85,false);
				__result->Add(HX_HCSTRING("p1","\xc1","\x61","\x00","\x00") , tmp86,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp87,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp93,false);
				__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , false,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(76)
	Dynamic tmp94 = _Function_1_3::Block(tmp86,tmp84,tmp82,tmp85,tmp87,tmp93);		HX_STACK_VAR(tmp94,"tmp94");
	HX_STACK_LINE(76)
	::phoenix::geometry::LineGeometry tmp95 = tmp79->line(tmp94);		HX_STACK_VAR(tmp95,"tmp95");
	HX_STACK_LINE(76)
	this->cursor = tmp95;
	HX_STACK_LINE(86)
	::mint::TextEdit tmp96 = this->textedit;		HX_STACK_VAR(tmp96,"tmp96");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_4,::mint::render::luxe::TextEdit,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic e,::mint::Control c){
		HX_STACK_FRAME("*","_Function_1_4",0x5200ed3a,"*._Function_1_4","mint/render/luxe/TextEdit.hx",86,0x7cdf4efa)
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(c,"c")
		{
			HX_STACK_LINE(87)
			::phoenix::Color tmp97 = _g->color_hover;		HX_STACK_VAR(tmp97,"tmp97");
			HX_STACK_LINE(87)
			_g->visual->set_color(tmp97);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(86)
	tmp96->onmouseenter->listen( Dynamic(new _Function_1_4(_g)));
	HX_STACK_LINE(90)
	::mint::TextEdit tmp97 = this->textedit;		HX_STACK_VAR(tmp97,"tmp97");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_5,::mint::render::luxe::TextEdit,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic e,::mint::Control c){
		HX_STACK_FRAME("*","_Function_1_5",0x5200ed3b,"*._Function_1_5","mint/render/luxe/TextEdit.hx",90,0x7cdf4efa)
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(c,"c")
		{
			HX_STACK_LINE(91)
			::phoenix::Color tmp98 = _g->color;		HX_STACK_VAR(tmp98,"tmp98");
			HX_STACK_LINE(91)
			_g->visual->set_color(tmp98);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(90)
	tmp97->onmouseleave->listen( Dynamic(new _Function_1_5(_g)));
	HX_STACK_LINE(94)
	::mint::TextEdit tmp98 = this->textedit;		HX_STACK_VAR(tmp98,"tmp98");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_6,::mint::render::luxe::TextEdit,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic _,::mint::Control _1){
		HX_STACK_FRAME("*","_Function_1_6",0x5200ed3c,"*._Function_1_6","mint/render/luxe/TextEdit.hx",94,0x7cdf4efa)
		HX_STACK_ARG(_,"_")
		HX_STACK_ARG(_1,"_1")
		{
			HX_STACK_LINE(95)
			bool tmp99 = _g->textedit->isfocused;		HX_STACK_VAR(tmp99,"tmp99");
			HX_STACK_LINE(95)
			bool tmp100 = !(tmp99);		HX_STACK_VAR(tmp100,"tmp100");
			HX_STACK_LINE(95)
			bool tmp101;		HX_STACK_VAR(tmp101,"tmp101");
			HX_STACK_LINE(95)
			if ((tmp100)){
				HX_STACK_LINE(95)
				tmp101 = _g->textedit->iscaptured;
			}
			else{
				HX_STACK_LINE(95)
				tmp101 = true;
			}
			HX_STACK_LINE(95)
			if ((tmp101)){
				HX_STACK_LINE(97)
				Float tmp102 = _g->textedit->x;		HX_STACK_VAR(tmp102,"tmp102");
				HX_STACK_LINE(97)
				::mint::Canvas tmp103 = _g->control->canvas;		HX_STACK_VAR(tmp103,"tmp103");
				HX_STACK_LINE(97)
				Float tmp104 = tmp103->scale;		HX_STACK_VAR(tmp104,"tmp104");
				HX_STACK_LINE(97)
				Float tmp105 = (tmp102 * tmp104);		HX_STACK_VAR(tmp105,"tmp105");
				HX_STACK_LINE(97)
				int tmp106 = ::Std_obj::_int(tmp105);		HX_STACK_VAR(tmp106,"tmp106");
				HX_STACK_LINE(97)
				Float tmp107 = _g->textedit->y;		HX_STACK_VAR(tmp107,"tmp107");
				HX_STACK_LINE(97)
				::mint::Canvas tmp108 = _g->control->canvas;		HX_STACK_VAR(tmp108,"tmp108");
				HX_STACK_LINE(97)
				Float tmp109 = tmp108->scale;		HX_STACK_VAR(tmp109,"tmp109");
				HX_STACK_LINE(97)
				Float tmp110 = (tmp107 * tmp109);		HX_STACK_VAR(tmp110,"tmp110");
				HX_STACK_LINE(97)
				int tmp111 = ::Std_obj::_int(tmp110);		HX_STACK_VAR(tmp111,"tmp111");
				HX_STACK_LINE(97)
				Float tmp112 = _g->textedit->w;		HX_STACK_VAR(tmp112,"tmp112");
				HX_STACK_LINE(97)
				::mint::Canvas tmp113 = _g->control->canvas;		HX_STACK_VAR(tmp113,"tmp113");
				HX_STACK_LINE(97)
				Float tmp114 = tmp113->scale;		HX_STACK_VAR(tmp114,"tmp114");
				HX_STACK_LINE(97)
				Float tmp115 = (tmp112 * tmp114);		HX_STACK_VAR(tmp115,"tmp115");
				HX_STACK_LINE(97)
				int tmp116 = ::Std_obj::_int(tmp115);		HX_STACK_VAR(tmp116,"tmp116");
				HX_STACK_LINE(97)
				Float tmp117 = _g->textedit->h;		HX_STACK_VAR(tmp117,"tmp117");
				HX_STACK_LINE(97)
				::mint::Canvas tmp118 = _g->control->canvas;		HX_STACK_VAR(tmp118,"tmp118");
				HX_STACK_LINE(97)
				Float tmp119 = tmp118->scale;		HX_STACK_VAR(tmp119,"tmp119");
				HX_STACK_LINE(97)
				Float tmp120 = (tmp117 * tmp119);		HX_STACK_VAR(tmp120,"tmp120");
				HX_STACK_LINE(97)
				int tmp121 = ::Std_obj::_int(tmp120);		HX_STACK_VAR(tmp121,"tmp121");
				HX_STACK_LINE(97)
				linc::sdl::setTextInputRect(tmp106,tmp111,tmp116,tmp121);
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(94)
	tmp98->ontextinput->listen( Dynamic(new _Function_1_6(_g)));
	HX_STACK_LINE(102)
	::mint::TextEdit tmp99 = this->textedit;		HX_STACK_VAR(tmp99,"tmp99");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_7,::mint::render::luxe::TextEdit,_g)
	int __ArgCount() const { return 1; }
	Void run(bool state){
		HX_STACK_FRAME("*","_Function_1_7",0x5200ed3d,"*._Function_1_7","mint/render/luxe/TextEdit.hx",102,0x7cdf4efa)
		HX_STACK_ARG(state,"state")
		{
			HX_STACK_LINE(103)
			bool tmp100 = state;		HX_STACK_VAR(tmp100,"tmp100");
			HX_STACK_LINE(103)
			_g->focus->set_visible(tmp100);
			HX_STACK_LINE(104)
			bool tmp101 = state;		HX_STACK_VAR(tmp101,"tmp101");
			HX_STACK_LINE(104)
			if ((tmp101)){
				HX_STACK_LINE(105)
				_g->start_cursor();
				HX_STACK_LINE(107)
				SDL_StartTextInput();
				HX_STACK_LINE(108)
				Float tmp102 = _g->textedit->x;		HX_STACK_VAR(tmp102,"tmp102");
				HX_STACK_LINE(108)
				::mint::Canvas tmp103 = _g->control->canvas;		HX_STACK_VAR(tmp103,"tmp103");
				HX_STACK_LINE(108)
				Float tmp104 = tmp103->scale;		HX_STACK_VAR(tmp104,"tmp104");
				HX_STACK_LINE(108)
				Float tmp105 = (tmp102 * tmp104);		HX_STACK_VAR(tmp105,"tmp105");
				HX_STACK_LINE(108)
				int tmp106 = ::Std_obj::_int(tmp105);		HX_STACK_VAR(tmp106,"tmp106");
				HX_STACK_LINE(108)
				Float tmp107 = _g->textedit->y;		HX_STACK_VAR(tmp107,"tmp107");
				HX_STACK_LINE(108)
				::mint::Canvas tmp108 = _g->control->canvas;		HX_STACK_VAR(tmp108,"tmp108");
				HX_STACK_LINE(108)
				Float tmp109 = tmp108->scale;		HX_STACK_VAR(tmp109,"tmp109");
				HX_STACK_LINE(108)
				Float tmp110 = (tmp107 * tmp109);		HX_STACK_VAR(tmp110,"tmp110");
				HX_STACK_LINE(108)
				int tmp111 = ::Std_obj::_int(tmp110);		HX_STACK_VAR(tmp111,"tmp111");
				HX_STACK_LINE(108)
				Float tmp112 = _g->textedit->w;		HX_STACK_VAR(tmp112,"tmp112");
				HX_STACK_LINE(108)
				::mint::Canvas tmp113 = _g->control->canvas;		HX_STACK_VAR(tmp113,"tmp113");
				HX_STACK_LINE(108)
				Float tmp114 = tmp113->scale;		HX_STACK_VAR(tmp114,"tmp114");
				HX_STACK_LINE(108)
				Float tmp115 = (tmp112 * tmp114);		HX_STACK_VAR(tmp115,"tmp115");
				HX_STACK_LINE(108)
				int tmp116 = ::Std_obj::_int(tmp115);		HX_STACK_VAR(tmp116,"tmp116");
				HX_STACK_LINE(108)
				Float tmp117 = _g->textedit->h;		HX_STACK_VAR(tmp117,"tmp117");
				HX_STACK_LINE(108)
				::mint::Canvas tmp118 = _g->control->canvas;		HX_STACK_VAR(tmp118,"tmp118");
				HX_STACK_LINE(108)
				Float tmp119 = tmp118->scale;		HX_STACK_VAR(tmp119,"tmp119");
				HX_STACK_LINE(108)
				Float tmp120 = (tmp117 * tmp119);		HX_STACK_VAR(tmp120,"tmp120");
				HX_STACK_LINE(108)
				int tmp121 = ::Std_obj::_int(tmp120);		HX_STACK_VAR(tmp121,"tmp121");
				HX_STACK_LINE(108)
				linc::sdl::setTextInputRect(tmp106,tmp111,tmp116,tmp121);
			}
			else{
				HX_STACK_LINE(111)
				_g->stop_cursor();
				HX_STACK_LINE(113)
				SDL_StopTextInput();
				HX_STACK_LINE(114)
				linc::sdl::setTextInputRect((int)0,(int)0,(int)0,(int)0);
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(102)
	tmp99->onfocused->listen( Dynamic(new _Function_1_7(_g)));
	HX_STACK_LINE(119)
	::mint::TextEdit tmp100 = this->textedit;		HX_STACK_VAR(tmp100,"tmp100");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_8,::mint::render::luxe::TextEdit,_g)
	int __ArgCount() const { return 1; }
	Void run(int index){
		HX_STACK_FRAME("*","_Function_1_8",0x5200ed3e,"*._Function_1_8","mint/render/luxe/TextEdit.hx",120,0x7cdf4efa)
		HX_STACK_ARG(index,"index")
		{
			HX_STACK_LINE(120)
			_g->update_cursor();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(119)
	tmp100->onchangeindex->listen( Dynamic(new _Function_1_8(_g)));
	HX_STACK_LINE(123)
	::mint::Control tmp101 = this->control;		HX_STACK_VAR(tmp101,"tmp101");
	HX_STACK_LINE(123)
	Float tmp102 = tmp101->canvas->scale;		HX_STACK_VAR(tmp102,"tmp102");
	HX_STACK_LINE(123)
	this->update_clip(tmp102);
}
;
	return null();
}

//TextEdit_obj::~TextEdit_obj() { }

Dynamic TextEdit_obj::__CreateEmpty() { return  new TextEdit_obj; }
hx::ObjectPtr< TextEdit_obj > TextEdit_obj::__new(::mint::render::luxe::LuxeMintRender _render,::mint::TextEdit _control)
{  hx::ObjectPtr< TextEdit_obj > _result_ = new TextEdit_obj();
	_result_->__construct(_render,_control);
	return _result_;}

Dynamic TextEdit_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextEdit_obj > _result_ = new TextEdit_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void TextEdit_obj::update_clip( Float _scale){
{
		HX_STACK_FRAME("mint.render.luxe.TextEdit","update_clip",0x4557527b,"mint.render.luxe.TextEdit.update_clip","mint/render/luxe/TextEdit.hx",127,0x7cdf4efa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_scale,"_scale")
		HX_STACK_LINE(129)
		::mint::Control tmp = this->control;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(129)
		::mint::Control tmp1 = tmp->clip_with;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(129)
		Float tmp2 = _scale;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(129)
		::phoenix::Rectangle tmp3 = ::mint::render::luxe::Convert_obj::bounds(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(129)
		::phoenix::Rectangle _clip = tmp3;		HX_STACK_VAR(_clip,"_clip");
		HX_STACK_LINE(131)
		::phoenix::geometry::QuadGeometry tmp4 = this->visual;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(131)
		::phoenix::Rectangle tmp5 = _clip;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(131)
		tmp4->set_clip_rect(tmp5);
		HX_STACK_LINE(132)
		::phoenix::geometry::RectangleGeometry tmp6 = this->focus;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(132)
		::phoenix::Rectangle tmp7 = _clip;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(132)
		tmp6->set_clip_rect(tmp7);
		HX_STACK_LINE(133)
		::phoenix::geometry::LineGeometry tmp8 = this->cursor;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(133)
		::phoenix::Rectangle tmp9 = _clip;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(133)
		tmp8->set_clip_rect(tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextEdit_obj,update_clip,(void))

Void TextEdit_obj::onscale( Float _scale,Float _prev_scale){
{
		HX_STACK_FRAME("mint.render.luxe.TextEdit","onscale",0x4b082d00,"mint.render.luxe.TextEdit.onscale","mint/render/luxe/TextEdit.hx",137,0x7cdf4efa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_scale,"_scale")
		HX_STACK_ARG(_prev_scale,"_prev_scale")
		HX_STACK_LINE(139)
		Float tmp = _scale;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		this->update_clip(tmp);
		HX_STACK_LINE(140)
		this->update_cursor();
	}
return null();
}


Void TextEdit_obj::start_cursor( ){
{
		HX_STACK_FRAME("mint.render.luxe.TextEdit","start_cursor",0xa956343e,"mint.render.luxe.TextEdit.start_cursor","mint/render/luxe/TextEdit.hx",147,0x7cdf4efa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(148)
		::phoenix::geometry::LineGeometry tmp = this->cursor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(148)
		tmp->set_visible(true);
		HX_STACK_LINE(149)
		this->update_cursor();
		HX_STACK_LINE(150)
		::luxe::Timer tmp1 = ::Luxe_obj::timer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(150)
		Float tmp2 = this->cursor_blink_rate;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(150)
		Dynamic tmp3 = this->blink_cursor_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(150)
		::snow::api::Timer tmp4 = tmp1->schedule(tmp2,tmp3,true);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(150)
		this->timer = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextEdit_obj,start_cursor,(void))

Void TextEdit_obj::stop_cursor( ){
{
		HX_STACK_FRAME("mint.render.luxe.TextEdit","stop_cursor",0x2ddf6328,"mint.render.luxe.TextEdit.stop_cursor","mint/render/luxe/TextEdit.hx",153,0x7cdf4efa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(154)
		::snow::api::Timer tmp = this->timer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(154)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(154)
		if ((tmp1)){
			HX_STACK_LINE(154)
			::snow::api::Timer tmp2 = this->timer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(154)
			tmp2->stop();
		}
		HX_STACK_LINE(155)
		this->timer = null();
		HX_STACK_LINE(156)
		::phoenix::geometry::LineGeometry tmp2 = this->cursor;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(156)
		tmp2->set_visible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextEdit_obj,stop_cursor,(void))

Void TextEdit_obj::blink_cursor( ){
{
		HX_STACK_FRAME("mint.render.luxe.TextEdit","blink_cursor",0xf874aa84,"mint.render.luxe.TextEdit.blink_cursor","mint/render/luxe/TextEdit.hx",159,0x7cdf4efa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(160)
		::snow::api::Timer tmp = this->timer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(160)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(160)
		if ((tmp1)){
			HX_STACK_LINE(160)
			return null();
		}
		HX_STACK_LINE(161)
		::phoenix::geometry::LineGeometry tmp2 = this->cursor;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(161)
		::phoenix::geometry::LineGeometry tmp3 = this->cursor;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(161)
		bool tmp4 = tmp3->visible;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(161)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(161)
		tmp2->set_visible(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextEdit_obj,blink_cursor,(void))

Void TextEdit_obj::reset_cursor( ){
{
		HX_STACK_FRAME("mint.render.luxe.TextEdit","reset_cursor",0xa9889671,"mint.render.luxe.TextEdit.reset_cursor","mint/render/luxe/TextEdit.hx",164,0x7cdf4efa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(165)
		::snow::api::Timer tmp = this->timer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(165)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(165)
		if ((tmp1)){
			HX_STACK_LINE(166)
			::phoenix::geometry::LineGeometry tmp2 = this->cursor;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(166)
			tmp2->set_visible(true);
			HX_STACK_LINE(167)
			Float tmp3 = linc::timestamp::now();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(167)
			Float tmp4 = ::snow::modules::sdl::Runtime_obj::timestamp_start;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(167)
			Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(167)
			Float tmp6 = this->cursor_blink_rate;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(167)
			Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(167)
			::snow::api::Timer tmp8 = this->timer;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(167)
			tmp8->fire_at = tmp7;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextEdit_obj,reset_cursor,(void))

Void TextEdit_obj::update_cursor( ){
{
		HX_STACK_FRAME("mint.render.luxe.TextEdit","update_cursor",0xfc3df341,"mint.render.luxe.TextEdit.update_cursor","mint/render/luxe/TextEdit.hx",171,0x7cdf4efa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(173)
		::mint::TextEdit tmp = this->textedit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(173)
		::mint::render::Renderer tmp1 = tmp->label->renderer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(173)
		::luxe::Text tmp2 = ((::mint::render::luxe::Label)(tmp1))->text;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(173)
		::luxe::Text _text_visual = tmp2;		HX_STACK_VAR(_text_visual,"_text_visual");
		HX_STACK_LINE(174)
		::phoenix::BitmapFont tmp3 = _text_visual->get_font();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(174)
		::phoenix::BitmapFont _font = tmp3;		HX_STACK_VAR(_font,"_font");
		HX_STACK_LINE(175)
		Float tmp4 = _text_visual->get_point_size();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(175)
		Float _point_size = tmp4;		HX_STACK_VAR(_point_size,"_point_size");
		HX_STACK_LINE(176)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(176)
		{
			HX_STACK_LINE(176)
			Float tmp6 = _text_visual->get_letter_spacing();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(176)
			Float _value = tmp6;		HX_STACK_VAR(_value,"_value");
			HX_STACK_LINE(176)
			::mint::Control tmp7 = this->control;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(176)
			Float tmp8 = tmp7->canvas->scale;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(176)
			Float tmp9 = _value;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(176)
			tmp5 = (tmp8 * tmp9);
		}
		HX_STACK_LINE(176)
		Float _letter_space = tmp5;		HX_STACK_VAR(_letter_space,"_letter_space");
		HX_STACK_LINE(178)
		::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(178)
		{
			HX_STACK_LINE(178)
			::mint::TextEdit tmp7 = this->textedit;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(178)
			int cur = tmp7->index;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(178)
			{
				HX_STACK_LINE(178)
				::mint::TextEdit tmp8 = this->textedit;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(178)
				::String s = tmp8->display;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(178)
				int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(178)
				{
					HX_STACK_LINE(178)
					bool tmp10 = true;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(178)
					int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(178)
					if ((tmp10)){
						HX_STACK_LINE(178)
						tmp11 = (int)0;
					}
					else{
						HX_STACK_LINE(178)
						tmp11 = s.length;
					}
					HX_STACK_LINE(178)
					int index = tmp11;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(178)
					{
						HX_STACK_LINE(178)
						::String this1 = s;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(178)
						bool tmp12 = true;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(178)
						if ((tmp12)){
							HX_STACK_LINE(178)
							int index1 = index;		HX_STACK_VAR(index1,"index1");
							HX_STACK_LINE(178)
							int tmp13 = this1.length;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(178)
							int len = tmp13;		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(178)
							int i = (int)0;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(178)
							while((true)){
								HX_STACK_LINE(178)
								bool tmp14 = (i < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(178)
								bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(178)
								if ((tmp14)){
									HX_STACK_LINE(178)
									tmp15 = (index1 < len);
								}
								else{
									HX_STACK_LINE(178)
									tmp15 = false;
								}
								HX_STACK_LINE(178)
								bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(178)
								if ((tmp16)){
									HX_STACK_LINE(178)
									break;
								}
								HX_STACK_LINE(178)
								int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(178)
								{
									HX_STACK_LINE(178)
									int tmp18 = index1;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(178)
									int tmp19 = this1.cca(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(178)
									int c = tmp19;		HX_STACK_VAR(c,"c");
									HX_STACK_LINE(178)
									bool tmp20 = (c < (int)192);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(178)
									if ((tmp20)){
										HX_STACK_LINE(178)
										tmp17 = (int)1;
									}
									else{
										HX_STACK_LINE(178)
										bool tmp21 = (c < (int)224);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(178)
										if ((tmp21)){
											HX_STACK_LINE(178)
											tmp17 = (int)2;
										}
										else{
											HX_STACK_LINE(178)
											bool tmp22 = (c < (int)240);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(178)
											if ((tmp22)){
												HX_STACK_LINE(178)
												tmp17 = (int)3;
											}
											else{
												HX_STACK_LINE(178)
												bool tmp23 = (c < (int)248);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(178)
												if ((tmp23)){
													HX_STACK_LINE(178)
													tmp17 = (int)4;
												}
												else{
													HX_STACK_LINE(178)
													tmp17 = (int)1;
												}
											}
										}
									}
								}
								HX_STACK_LINE(178)
								hx::AddEq(index1,tmp17);
								HX_STACK_LINE(178)
								++(i);
							}
							HX_STACK_LINE(178)
							tmp9 = index1;
						}
						else{
							HX_STACK_LINE(178)
							int index1 = index;		HX_STACK_VAR(index1,"index1");
							HX_STACK_LINE(178)
							int count = (int)0;		HX_STACK_VAR(count,"count");
							HX_STACK_LINE(178)
							while((true)){
								HX_STACK_LINE(178)
								int tmp13 = count;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(178)
								int tmp14 = (int)0;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(178)
								bool tmp15 = (tmp13 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(178)
								bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(178)
								if ((tmp15)){
									HX_STACK_LINE(178)
									tmp16 = ((int)0 < index1);
								}
								else{
									HX_STACK_LINE(178)
									tmp16 = false;
								}
								HX_STACK_LINE(178)
								bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(178)
								if ((tmp17)){
									HX_STACK_LINE(178)
									break;
								}
								HX_STACK_LINE(178)
								int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(178)
								{
									HX_STACK_LINE(178)
									::String this2 = this1;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(178)
									{
										HX_STACK_LINE(178)
										int tmp19 = (index1 - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(178)
										int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(178)
										{
											HX_STACK_LINE(178)
											int tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(178)
											int tmp22 = this2.cca(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(178)
											tmp20 = tmp22;
										}
										HX_STACK_LINE(178)
										int c1 = tmp20;		HX_STACK_VAR(c1,"c1");
										HX_STACK_LINE(178)
										bool tmp21 = (c1 < (int)128);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(178)
										bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(178)
										bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(178)
										if ((tmp22)){
											HX_STACK_LINE(178)
											tmp23 = (c1 >= (int)192);
										}
										else{
											HX_STACK_LINE(178)
											tmp23 = true;
										}
										HX_STACK_LINE(178)
										if ((tmp23)){
											HX_STACK_LINE(178)
											tmp18 = (int)1;
										}
										else{
											HX_STACK_LINE(178)
											int tmp24 = (index1 - (int)2);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(178)
											int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(178)
											{
												HX_STACK_LINE(178)
												int tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(178)
												int tmp27 = this2.cca(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(178)
												tmp25 = tmp27;
											}
											HX_STACK_LINE(178)
											int tmp26 = (int(tmp25) & int((int)224));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(178)
											bool tmp27 = (tmp26 == (int)192);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(178)
											if ((tmp27)){
												HX_STACK_LINE(178)
												tmp18 = (int)2;
											}
											else{
												HX_STACK_LINE(178)
												int tmp28 = (index1 - (int)3);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(178)
												int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(178)
												{
													HX_STACK_LINE(178)
													int tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(178)
													int tmp31 = this2.cca(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(178)
													tmp29 = tmp31;
												}
												HX_STACK_LINE(178)
												int tmp30 = (int(tmp29) & int((int)240));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(178)
												bool tmp31 = (tmp30 == (int)224);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(178)
												if ((tmp31)){
													HX_STACK_LINE(178)
													tmp18 = (int)3;
												}
												else{
													HX_STACK_LINE(178)
													int tmp32 = (index1 - (int)4);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(178)
													int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(178)
													{
														HX_STACK_LINE(178)
														int tmp34 = tmp32;		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(178)
														int tmp35 = this2.cca(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(178)
														tmp33 = tmp35;
													}
													HX_STACK_LINE(178)
													int tmp34 = (int(tmp33) & int((int)248));		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(178)
													bool tmp35 = (tmp34 == (int)240);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(178)
													if ((tmp35)){
														HX_STACK_LINE(178)
														tmp18 = (int)4;
													}
													else{
														HX_STACK_LINE(178)
														tmp18 = (int)1;
													}
												}
											}
										}
									}
								}
								HX_STACK_LINE(178)
								hx::SubEq(index1,tmp18);
								HX_STACK_LINE(178)
								++(count);
							}
							HX_STACK_LINE(178)
							tmp9 = index1;
						}
					}
				}
				HX_STACK_LINE(178)
				int si = tmp9;		HX_STACK_VAR(si,"si");
				HX_STACK_LINE(178)
				bool tmp10 = (cur == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(178)
				int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(178)
				if ((tmp10)){
					HX_STACK_LINE(178)
					tmp11 = s.length;
				}
				else{
					HX_STACK_LINE(178)
					bool tmp12 = (cur < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(178)
					if ((tmp12)){
						HX_STACK_LINE(178)
						tmp11 = si;
					}
					else{
						HX_STACK_LINE(178)
						int codePointOffset = cur;		HX_STACK_VAR(codePointOffset,"codePointOffset");
						HX_STACK_LINE(178)
						{
							HX_STACK_LINE(178)
							::String this1 = s;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(178)
							bool tmp13 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(178)
							if ((tmp13)){
								HX_STACK_LINE(178)
								int index = si;		HX_STACK_VAR(index,"index");
								HX_STACK_LINE(178)
								int tmp14 = this1.length;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(178)
								int len = tmp14;		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(178)
								int i = (int)0;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(178)
								while((true)){
									HX_STACK_LINE(178)
									bool tmp15 = (i < codePointOffset);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(178)
									bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(178)
									if ((tmp15)){
										HX_STACK_LINE(178)
										tmp16 = (index < len);
									}
									else{
										HX_STACK_LINE(178)
										tmp16 = false;
									}
									HX_STACK_LINE(178)
									bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(178)
									if ((tmp17)){
										HX_STACK_LINE(178)
										break;
									}
									HX_STACK_LINE(178)
									int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(178)
									{
										HX_STACK_LINE(178)
										int tmp19 = index;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(178)
										int tmp20 = this1.cca(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(178)
										int c = tmp20;		HX_STACK_VAR(c,"c");
										HX_STACK_LINE(178)
										bool tmp21 = (c < (int)192);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(178)
										if ((tmp21)){
											HX_STACK_LINE(178)
											tmp18 = (int)1;
										}
										else{
											HX_STACK_LINE(178)
											bool tmp22 = (c < (int)224);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(178)
											if ((tmp22)){
												HX_STACK_LINE(178)
												tmp18 = (int)2;
											}
											else{
												HX_STACK_LINE(178)
												bool tmp23 = (c < (int)240);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(178)
												if ((tmp23)){
													HX_STACK_LINE(178)
													tmp18 = (int)3;
												}
												else{
													HX_STACK_LINE(178)
													bool tmp24 = (c < (int)248);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(178)
													if ((tmp24)){
														HX_STACK_LINE(178)
														tmp18 = (int)4;
													}
													else{
														HX_STACK_LINE(178)
														tmp18 = (int)1;
													}
												}
											}
										}
									}
									HX_STACK_LINE(178)
									hx::AddEq(index,tmp18);
									HX_STACK_LINE(178)
									++(i);
								}
								HX_STACK_LINE(178)
								tmp11 = index;
							}
							else{
								HX_STACK_LINE(178)
								int index = si;		HX_STACK_VAR(index,"index");
								HX_STACK_LINE(178)
								int count = (int)0;		HX_STACK_VAR(count,"count");
								HX_STACK_LINE(178)
								while((true)){
									HX_STACK_LINE(178)
									int tmp14 = count;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(178)
									int tmp15 = codePointOffset;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(178)
									int tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(178)
									bool tmp17 = (tmp14 < tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(178)
									bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(178)
									if ((tmp17)){
										HX_STACK_LINE(178)
										tmp18 = ((int)0 < index);
									}
									else{
										HX_STACK_LINE(178)
										tmp18 = false;
									}
									HX_STACK_LINE(178)
									bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(178)
									if ((tmp19)){
										HX_STACK_LINE(178)
										break;
									}
									HX_STACK_LINE(178)
									int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(178)
									{
										HX_STACK_LINE(178)
										::String this2 = this1;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(178)
										{
											HX_STACK_LINE(178)
											int tmp21 = (index - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(178)
											int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(178)
											{
												HX_STACK_LINE(178)
												int tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(178)
												int tmp24 = this2.cca(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(178)
												tmp22 = tmp24;
											}
											HX_STACK_LINE(178)
											int c1 = tmp22;		HX_STACK_VAR(c1,"c1");
											HX_STACK_LINE(178)
											bool tmp23 = (c1 < (int)128);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(178)
											bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(178)
											bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(178)
											if ((tmp24)){
												HX_STACK_LINE(178)
												tmp25 = (c1 >= (int)192);
											}
											else{
												HX_STACK_LINE(178)
												tmp25 = true;
											}
											HX_STACK_LINE(178)
											if ((tmp25)){
												HX_STACK_LINE(178)
												tmp20 = (int)1;
											}
											else{
												HX_STACK_LINE(178)
												int tmp26 = (index - (int)2);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(178)
												int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(178)
												{
													HX_STACK_LINE(178)
													int tmp28 = tmp26;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(178)
													int tmp29 = this2.cca(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(178)
													tmp27 = tmp29;
												}
												HX_STACK_LINE(178)
												int tmp28 = (int(tmp27) & int((int)224));		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(178)
												bool tmp29 = (tmp28 == (int)192);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(178)
												if ((tmp29)){
													HX_STACK_LINE(178)
													tmp20 = (int)2;
												}
												else{
													HX_STACK_LINE(178)
													int tmp30 = (index - (int)3);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(178)
													int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(178)
													{
														HX_STACK_LINE(178)
														int tmp32 = tmp30;		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(178)
														int tmp33 = this2.cca(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(178)
														tmp31 = tmp33;
													}
													HX_STACK_LINE(178)
													int tmp32 = (int(tmp31) & int((int)240));		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(178)
													bool tmp33 = (tmp32 == (int)224);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(178)
													if ((tmp33)){
														HX_STACK_LINE(178)
														tmp20 = (int)3;
													}
													else{
														HX_STACK_LINE(178)
														int tmp34 = (index - (int)4);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(178)
														int tmp35;		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(178)
														{
															HX_STACK_LINE(178)
															int tmp36 = tmp34;		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(178)
															int tmp37 = this2.cca(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(178)
															tmp35 = tmp37;
														}
														HX_STACK_LINE(178)
														int tmp36 = (int(tmp35) & int((int)248));		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(178)
														bool tmp37 = (tmp36 == (int)240);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(178)
														if ((tmp37)){
															HX_STACK_LINE(178)
															tmp20 = (int)4;
														}
														else{
															HX_STACK_LINE(178)
															tmp20 = (int)1;
														}
													}
												}
											}
										}
									}
									HX_STACK_LINE(178)
									hx::SubEq(index,tmp20);
									HX_STACK_LINE(178)
									++(count);
								}
								HX_STACK_LINE(178)
								tmp11 = index;
							}
						}
					}
				}
				HX_STACK_LINE(178)
				int ei = tmp11;		HX_STACK_VAR(ei,"ei");
				HX_STACK_LINE(178)
				int tmp12 = si;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(178)
				int tmp13 = ei;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(178)
				tmp6 = s.substring(tmp12,tmp13);
			}
		}
		HX_STACK_LINE(178)
		::String _text_before = tmp6;		HX_STACK_VAR(_text_before,"_text_before");
		HX_STACK_LINE(179)
		::mint::TextEdit tmp7 = this->textedit;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(179)
		::String _text_all = tmp7->edit;		HX_STACK_VAR(_text_all,"_text_all");
		HX_STACK_LINE(181)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(181)
		{
			HX_STACK_LINE(181)
			Float _max_w = ((Float)0.0);		HX_STACK_VAR(_max_w,"_max_w");
			HX_STACK_LINE(181)
			bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(181)
			bool _push_widths = tmp9;		HX_STACK_VAR(_push_widths,"_push_widths");
			HX_STACK_LINE(181)
			::String tmp10 = _text_all;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(181)
			Array< ::String > _lines = ::luxe::utils::unifill::Unifill_obj::uSplit(tmp10,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(_lines,"_lines");
			HX_STACK_LINE(181)
			{
				HX_STACK_LINE(181)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(181)
				while((true)){
					HX_STACK_LINE(181)
					bool tmp11 = (_g < _lines->length);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(181)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(181)
					if ((tmp12)){
						HX_STACK_LINE(181)
						break;
					}
					HX_STACK_LINE(181)
					::String tmp13 = _lines->__get(_g);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(181)
					::String _line = tmp13;		HX_STACK_VAR(_line,"_line");
					HX_STACK_LINE(181)
					++(_g);
					HX_STACK_LINE(181)
					::String tmp14 = _line;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(181)
					Float tmp15 = _point_size;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(181)
					Float tmp16 = _letter_space;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(181)
					Float tmp17 = _font->width_of_line(tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(181)
					Float _cur_w = tmp17;		HX_STACK_VAR(_cur_w,"_cur_w");
					HX_STACK_LINE(181)
					Float tmp18 = _max_w;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(181)
					Float tmp19 = _cur_w;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(181)
					Float tmp20 = ::Math_obj::max(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(181)
					_max_w = tmp20;
					HX_STACK_LINE(181)
					bool tmp21 = _push_widths;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(181)
					if ((tmp21)){
						HX_STACK_LINE(181)
						Float tmp22 = _cur_w;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(181)
						hx::Throw(HX_CSTRING("Invalid field access on null object"))(tmp22);
					}
				}
			}
			HX_STACK_LINE(181)
			tmp8 = _max_w;
		}
		HX_STACK_LINE(181)
		Float _text_width = tmp8;		HX_STACK_VAR(_text_width,"_text_width");
		HX_STACK_LINE(182)
		Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(182)
		{
			HX_STACK_LINE(182)
			Float _line_spc = ((Float)0.0);		HX_STACK_VAR(_line_spc,"_line_spc");
			HX_STACK_LINE(182)
			{
				HX_STACK_LINE(182)
				Array< ::String > _lines = _text_before.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(_lines,"_lines");
				HX_STACK_LINE(182)
				Float tmp10 = _point_size;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(182)
				Float tmp11 = _font->info->__Field(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(182)
				Float tmp12 = (Float(tmp10) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(182)
				Float _ratio = tmp12;		HX_STACK_VAR(_ratio,"_ratio");
				HX_STACK_LINE(182)
				int tmp13 = _lines->length;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(182)
				Float tmp14 = _font->info->__Field(HX_HCSTRING("line_height","\x12","\xa8","\xc5","\xe1"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(182)
				Float tmp15 = _line_spc;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(182)
				Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(182)
				Float tmp17 = _ratio;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(182)
				Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(182)
				tmp9 = (tmp13 * tmp18);
			}
		}
		HX_STACK_LINE(182)
		Float _text_height = tmp9;		HX_STACK_VAR(_text_height,"_text_height");
		HX_STACK_LINE(184)
		::mint::Control tmp10 = this->control;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(184)
		Float tmp11 = tmp10->canvas->scale;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(184)
		::mint::TextEdit tmp12 = this->textedit;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(184)
		Float tmp13 = tmp12->label->x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(184)
		Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(184)
		Float _label_x = tmp14;		HX_STACK_VAR(_label_x,"_label_x");
		HX_STACK_LINE(185)
		::mint::Control tmp15 = this->control;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(185)
		Float tmp16 = tmp15->canvas->scale;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(185)
		::mint::TextEdit tmp17 = this->textedit;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(185)
		Float tmp18 = tmp17->label->y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(185)
		Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(185)
		Float _label_y = tmp19;		HX_STACK_VAR(_label_y,"_label_y");
		HX_STACK_LINE(186)
		::mint::Control tmp20 = this->control;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(186)
		Float tmp21 = tmp20->canvas->scale;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(186)
		::mint::TextEdit tmp22 = this->textedit;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(186)
		Float tmp23 = tmp22->label->w;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(186)
		Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(186)
		Float _label_w = tmp24;		HX_STACK_VAR(_label_w,"_label_w");
		HX_STACK_LINE(187)
		::mint::Control tmp25 = this->control;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(187)
		Float tmp26 = tmp25->canvas->scale;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(187)
		::mint::TextEdit tmp27 = this->textedit;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(187)
		Float tmp28 = tmp27->label->h;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(187)
		Float tmp29 = (tmp26 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(187)
		Float _label_h = tmp29;		HX_STACK_VAR(_label_h,"_label_h");
		HX_STACK_LINE(189)
		Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(189)
		{
			HX_STACK_LINE(189)
			Float _max_w = ((Float)0.0);		HX_STACK_VAR(_max_w,"_max_w");
			HX_STACK_LINE(189)
			bool tmp31 = false;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(189)
			bool _push_widths = tmp31;		HX_STACK_VAR(_push_widths,"_push_widths");
			HX_STACK_LINE(189)
			::String tmp32 = _text_before;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(189)
			Array< ::String > _lines = ::luxe::utils::unifill::Unifill_obj::uSplit(tmp32,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(_lines,"_lines");
			HX_STACK_LINE(189)
			{
				HX_STACK_LINE(189)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(189)
				while((true)){
					HX_STACK_LINE(189)
					bool tmp33 = (_g < _lines->length);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(189)
					bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(189)
					if ((tmp34)){
						HX_STACK_LINE(189)
						break;
					}
					HX_STACK_LINE(189)
					::String tmp35 = _lines->__get(_g);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(189)
					::String _line = tmp35;		HX_STACK_VAR(_line,"_line");
					HX_STACK_LINE(189)
					++(_g);
					HX_STACK_LINE(189)
					::String tmp36 = _line;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(189)
					Float tmp37 = _point_size;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(189)
					Float tmp38 = _letter_space;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(189)
					Float tmp39 = _font->width_of_line(tmp36,tmp37,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(189)
					Float _cur_w = tmp39;		HX_STACK_VAR(_cur_w,"_cur_w");
					HX_STACK_LINE(189)
					Float tmp40 = _max_w;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(189)
					Float tmp41 = _cur_w;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(189)
					Float tmp42 = ::Math_obj::max(tmp40,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(189)
					_max_w = tmp42;
					HX_STACK_LINE(189)
					bool tmp43 = _push_widths;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(189)
					if ((tmp43)){
						HX_STACK_LINE(189)
						Float tmp44 = _cur_w;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(189)
						hx::Throw(HX_CSTRING("Invalid field access on null object"))(tmp44);
					}
				}
			}
			HX_STACK_LINE(189)
			tmp30 = _max_w;
		}
		HX_STACK_LINE(189)
		Float _x = tmp30;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(190)
		Float tmp31 = (_text_height * ((Float)0.2));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(190)
		Float _y = tmp31;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(191)
		Float _left = _label_x;		HX_STACK_VAR(_left,"_left");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			int tmp32 = _text_visual->get_align();		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(193)
			int _g = tmp32;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(193)
			int tmp33 = _g;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(193)
			switch( (int)(tmp33)){
				case (int)2: {
					HX_STACK_LINE(195)
					Float tmp34 = (Float(_text_width) / Float(((Float)2.0)));		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(195)
					hx::SubEq(_x,tmp34);
					HX_STACK_LINE(196)
					Float tmp35 = _label_x;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(196)
					Float tmp36 = (Float(_label_w) / Float((int)2));		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(196)
					Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(196)
					_left = tmp37;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(199)
					hx::SubEq(_x,_text_width);
					HX_STACK_LINE(200)
					_left = _label_w;
				}
				;break;
				default: {
				}
			}
		}
		HX_STACK_LINE(205)
		::mint::Control tmp32 = this->control;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(205)
		Float tmp33 = tmp32->canvas->scale;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(205)
		Float tmp34 = (tmp33 * (int)2);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(205)
		Float _cursor_pad = tmp34;		HX_STACK_VAR(_cursor_pad,"_cursor_pad");
		HX_STACK_LINE(206)
		Float tmp35 = (_left + _x);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(206)
		Float _cursor_x = tmp35;		HX_STACK_VAR(_cursor_x,"_cursor_x");
		HX_STACK_LINE(207)
		Float tmp36 = (_label_y + _cursor_pad);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(207)
		Float _cursor_y = tmp36;		HX_STACK_VAR(_cursor_y,"_cursor_y");
		HX_STACK_LINE(209)
		::phoenix::geometry::LineGeometry tmp37 = this->cursor;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(209)
		::phoenix::Vector tmp38 = ::phoenix::Vector_obj::__new(_cursor_x,_cursor_y,null(),null());		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(209)
		tmp37->set_p0(tmp38);
		HX_STACK_LINE(210)
		::phoenix::geometry::LineGeometry tmp39 = this->cursor;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(210)
		Float tmp40 = _cursor_x;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(210)
		Float tmp41 = (_cursor_y + _label_h);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(210)
		Float tmp42 = (_cursor_pad * (int)2);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(210)
		Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(210)
		::phoenix::Vector tmp44 = ::phoenix::Vector_obj::__new(tmp40,tmp43,null(),null());		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(210)
		tmp39->set_p1(tmp44);
		HX_STACK_LINE(212)
		{
			HX_STACK_LINE(212)
			::snow::api::Timer tmp45 = this->timer;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(212)
			bool tmp46 = (tmp45 != null());		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(212)
			if ((tmp46)){
				HX_STACK_LINE(212)
				::phoenix::geometry::LineGeometry tmp47 = this->cursor;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(212)
				tmp47->set_visible(true);
				HX_STACK_LINE(212)
				Float tmp48 = linc::timestamp::now();		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(212)
				Float tmp49 = ::snow::modules::sdl::Runtime_obj::timestamp_start;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(212)
				Float tmp50 = (tmp48 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(212)
				Float tmp51 = this->cursor_blink_rate;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(212)
				Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(212)
				::snow::api::Timer tmp53 = this->timer;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(212)
				tmp53->fire_at = tmp52;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextEdit_obj,update_cursor,(void))

Void TextEdit_obj::ondestroy( ){
{
		HX_STACK_FRAME("mint.render.luxe.TextEdit","ondestroy",0xfeac94f0,"mint.render.luxe.TextEdit.ondestroy","mint/render/luxe/TextEdit.hx",216,0x7cdf4efa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(218)
		this->stop_cursor();
		HX_STACK_LINE(220)
		::phoenix::geometry::LineGeometry tmp = this->cursor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(220)
		tmp->drop(null());
		HX_STACK_LINE(221)
		::phoenix::geometry::QuadGeometry tmp1 = this->visual;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(221)
		tmp1->drop(null());
		HX_STACK_LINE(222)
		::phoenix::geometry::RectangleGeometry tmp2 = this->focus;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(222)
		tmp2->drop(null());
		HX_STACK_LINE(224)
		this->visual = null();
		HX_STACK_LINE(225)
		this->cursor = null();
		HX_STACK_LINE(226)
		this->focus = null();
	}
return null();
}


Void TextEdit_obj::onbounds( ){
{
		HX_STACK_FRAME("mint.render.luxe.TextEdit","onbounds",0x8616cf3f,"mint.render.luxe.TextEdit.onbounds","mint/render/luxe/TextEdit.hx",230,0x7cdf4efa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(232)
		{
			HX_STACK_LINE(232)
			::phoenix::geometry::QuadGeometry tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(232)
			::phoenix::Spatial tmp1 = tmp->transform->local;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(232)
			::phoenix::Vector _this = tmp1->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(232)
			::mint::Control tmp2 = this->control;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(232)
			Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(232)
			::mint::Control tmp4 = this->control;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(232)
			Float tmp5 = tmp4->canvas->scale;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(232)
			Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(232)
			Float _x = tmp6;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(232)
			::mint::Control tmp7 = this->control;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(232)
			Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(232)
			::mint::Control tmp9 = this->control;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(232)
			Float tmp10 = tmp9->canvas->scale;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(232)
			Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(232)
			Float _y = tmp11;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(232)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(232)
			_this->ignore_listeners = true;
			HX_STACK_LINE(232)
			{
				HX_STACK_LINE(232)
				_this->x = _x;
				HX_STACK_LINE(232)
				bool tmp12 = _this->_construct;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(232)
				if ((tmp12)){
					HX_STACK_LINE(232)
					_this->x;
				}
				else{
					HX_STACK_LINE(232)
					bool tmp13 = (_this->listen_x != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(232)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(232)
					if ((tmp13)){
						HX_STACK_LINE(232)
						bool tmp15 = _this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(232)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(232)
						tmp14 = !(tmp16);
					}
					else{
						HX_STACK_LINE(232)
						tmp14 = false;
					}
					HX_STACK_LINE(232)
					if ((tmp14)){
						HX_STACK_LINE(232)
						Float tmp15 = _x;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(232)
						_this->listen_x(tmp15);
					}
					HX_STACK_LINE(232)
					_this->x;
				}
			}
			HX_STACK_LINE(232)
			{
				HX_STACK_LINE(232)
				_this->y = _y;
				HX_STACK_LINE(232)
				bool tmp12 = _this->_construct;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(232)
				if ((tmp12)){
					HX_STACK_LINE(232)
					_this->y;
				}
				else{
					HX_STACK_LINE(232)
					bool tmp13 = (_this->listen_y != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(232)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(232)
					if ((tmp13)){
						HX_STACK_LINE(232)
						bool tmp15 = _this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(232)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(232)
						tmp14 = !(tmp16);
					}
					else{
						HX_STACK_LINE(232)
						tmp14 = false;
					}
					HX_STACK_LINE(232)
					if ((tmp14)){
						HX_STACK_LINE(232)
						Float tmp15 = _y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(232)
						_this->listen_y(tmp15);
					}
					HX_STACK_LINE(232)
					_this->y;
				}
			}
			HX_STACK_LINE(232)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(232)
			bool tmp12 = (_this->listen_x != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(232)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(232)
			if ((tmp12)){
				HX_STACK_LINE(232)
				bool tmp14 = _this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(232)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(232)
				tmp13 = !(tmp15);
			}
			else{
				HX_STACK_LINE(232)
				tmp13 = false;
			}
			HX_STACK_LINE(232)
			if ((tmp13)){
				HX_STACK_LINE(232)
				Float tmp14 = _this->x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(232)
				_this->listen_x(tmp14);
			}
			HX_STACK_LINE(232)
			bool tmp14 = (_this->listen_y != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(232)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(232)
			if ((tmp14)){
				HX_STACK_LINE(232)
				bool tmp16 = _this->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(232)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(232)
				tmp15 = !(tmp17);
			}
			else{
				HX_STACK_LINE(232)
				tmp15 = false;
			}
			HX_STACK_LINE(232)
			if ((tmp15)){
				HX_STACK_LINE(232)
				Float tmp16 = _this->y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(232)
				_this->listen_y(tmp16);
			}
			HX_STACK_LINE(232)
			_this;
		}
		HX_STACK_LINE(233)
		::phoenix::geometry::QuadGeometry tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(233)
		::mint::Control tmp1 = this->control;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(233)
		Float tmp2 = tmp1->w;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(233)
		::mint::Control tmp3 = this->control;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(233)
		Float tmp4 = tmp3->canvas->scale;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(233)
		Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(233)
		::mint::Control tmp6 = this->control;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(233)
		Float tmp7 = tmp6->h;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(233)
		::mint::Control tmp8 = this->control;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(233)
		Float tmp9 = tmp8->canvas->scale;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(233)
		Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(233)
		tmp->resize_xy(tmp5,tmp10);
		HX_STACK_LINE(235)
		{
			HX_STACK_LINE(235)
			::phoenix::geometry::RectangleGeometry tmp11 = this->focus;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(235)
			::phoenix::Spatial tmp12 = tmp11->transform->local;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(235)
			::phoenix::Vector _this = tmp12->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(235)
			::mint::Control tmp13 = this->control;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(235)
			Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(235)
			::mint::Control tmp15 = this->control;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(235)
			Float tmp16 = tmp15->canvas->scale;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(235)
			Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(235)
			Float _x = tmp17;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(235)
			::mint::Control tmp18 = this->control;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(235)
			Float tmp19 = tmp18->y;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(235)
			::mint::Control tmp20 = this->control;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(235)
			Float tmp21 = tmp20->canvas->scale;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(235)
			Float tmp22 = (tmp19 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(235)
			Float _y = tmp22;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(235)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(235)
			_this->ignore_listeners = true;
			HX_STACK_LINE(235)
			{
				HX_STACK_LINE(235)
				_this->x = _x;
				HX_STACK_LINE(235)
				bool tmp23 = _this->_construct;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(235)
				if ((tmp23)){
					HX_STACK_LINE(235)
					_this->x;
				}
				else{
					HX_STACK_LINE(235)
					bool tmp24 = (_this->listen_x != null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(235)
					bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(235)
					if ((tmp24)){
						HX_STACK_LINE(235)
						bool tmp26 = _this->ignore_listeners;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(235)
						bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(235)
						tmp25 = !(tmp27);
					}
					else{
						HX_STACK_LINE(235)
						tmp25 = false;
					}
					HX_STACK_LINE(235)
					if ((tmp25)){
						HX_STACK_LINE(235)
						Float tmp26 = _x;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(235)
						_this->listen_x(tmp26);
					}
					HX_STACK_LINE(235)
					_this->x;
				}
			}
			HX_STACK_LINE(235)
			{
				HX_STACK_LINE(235)
				_this->y = _y;
				HX_STACK_LINE(235)
				bool tmp23 = _this->_construct;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(235)
				if ((tmp23)){
					HX_STACK_LINE(235)
					_this->y;
				}
				else{
					HX_STACK_LINE(235)
					bool tmp24 = (_this->listen_y != null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(235)
					bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(235)
					if ((tmp24)){
						HX_STACK_LINE(235)
						bool tmp26 = _this->ignore_listeners;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(235)
						bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(235)
						tmp25 = !(tmp27);
					}
					else{
						HX_STACK_LINE(235)
						tmp25 = false;
					}
					HX_STACK_LINE(235)
					if ((tmp25)){
						HX_STACK_LINE(235)
						Float tmp26 = _y;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(235)
						_this->listen_y(tmp26);
					}
					HX_STACK_LINE(235)
					_this->y;
				}
			}
			HX_STACK_LINE(235)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(235)
			bool tmp23 = (_this->listen_x != null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(235)
			bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(235)
			if ((tmp23)){
				HX_STACK_LINE(235)
				bool tmp25 = _this->ignore_listeners;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(235)
				bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(235)
				tmp24 = !(tmp26);
			}
			else{
				HX_STACK_LINE(235)
				tmp24 = false;
			}
			HX_STACK_LINE(235)
			if ((tmp24)){
				HX_STACK_LINE(235)
				Float tmp25 = _this->x;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(235)
				_this->listen_x(tmp25);
			}
			HX_STACK_LINE(235)
			bool tmp25 = (_this->listen_y != null());		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(235)
			bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(235)
			if ((tmp25)){
				HX_STACK_LINE(235)
				bool tmp27 = _this->ignore_listeners;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(235)
				bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(235)
				tmp26 = !(tmp28);
			}
			else{
				HX_STACK_LINE(235)
				tmp26 = false;
			}
			HX_STACK_LINE(235)
			if ((tmp26)){
				HX_STACK_LINE(235)
				Float tmp27 = _this->y;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(235)
				_this->listen_y(tmp27);
			}
			HX_STACK_LINE(235)
			_this;
		}
		HX_STACK_LINE(236)
		::phoenix::geometry::RectangleGeometry tmp11 = this->focus;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(236)
		::mint::Control tmp12 = this->control;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(236)
		Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(236)
		::mint::Control tmp14 = this->control;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(236)
		Float tmp15 = tmp14->canvas->scale;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(236)
		Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(236)
		::mint::Control tmp17 = this->control;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(236)
		Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(236)
		::mint::Control tmp19 = this->control;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(236)
		Float tmp20 = tmp19->canvas->scale;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(236)
		Float tmp21 = (tmp18 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(236)
		::mint::Control tmp22 = this->control;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(236)
		Float tmp23 = tmp22->w;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(236)
		::mint::Control tmp24 = this->control;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(236)
		Float tmp25 = tmp24->canvas->scale;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(236)
		Float tmp26 = (tmp23 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(236)
		::mint::Control tmp27 = this->control;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(236)
		Float tmp28 = tmp27->h;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(236)
		::mint::Control tmp29 = this->control;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(236)
		Float tmp30 = tmp29->canvas->scale;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(236)
		Float tmp31 = (tmp28 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(236)
		tmp11->set_xywh(tmp16,tmp21,tmp26,tmp31);
		HX_STACK_LINE(238)
		{
			HX_STACK_LINE(238)
			::snow::api::Timer tmp32 = this->timer;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(238)
			bool tmp33 = (tmp32 != null());		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(238)
			if ((tmp33)){
				HX_STACK_LINE(238)
				::phoenix::geometry::LineGeometry tmp34 = this->cursor;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(238)
				tmp34->set_visible(true);
				HX_STACK_LINE(238)
				Float tmp35 = linc::timestamp::now();		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(238)
				Float tmp36 = ::snow::modules::sdl::Runtime_obj::timestamp_start;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(238)
				Float tmp37 = (tmp35 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(238)
				Float tmp38 = this->cursor_blink_rate;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(238)
				Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(238)
				::snow::api::Timer tmp40 = this->timer;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(238)
				tmp40->fire_at = tmp39;
			}
		}
		HX_STACK_LINE(239)
		this->update_cursor();
	}
return null();
}


Void TextEdit_obj::onclip( bool _disable,Float _x,Float _y,Float _w,Float _h){
{
		HX_STACK_FRAME("mint.render.luxe.TextEdit","onclip",0x4997111a,"mint.render.luxe.TextEdit.onclip","mint/render/luxe/TextEdit.hx",243,0x7cdf4efa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_disable,"_disable")
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_w,"_w")
		HX_STACK_ARG(_h,"_h")
		HX_STACK_LINE(245)
		::mint::Control tmp = this->control;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(245)
		Float tmp1 = tmp->canvas->scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(245)
		this->update_clip(tmp1);
	}
return null();
}


Void TextEdit_obj::onvisible( bool _visible){
{
		HX_STACK_FRAME("mint.render.luxe.TextEdit","onvisible",0x7d4ae068,"mint.render.luxe.TextEdit.onvisible","mint/render/luxe/TextEdit.hx",249,0x7cdf4efa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_visible,"_visible")
		HX_STACK_LINE(251)
		::phoenix::geometry::QuadGeometry tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(251)
		bool tmp1 = _visible;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(251)
		tmp->set_visible(tmp1);
		HX_STACK_LINE(253)
		bool tmp2 = _visible;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(253)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(253)
		if ((tmp3)){
			HX_STACK_LINE(254)
			this->stop_cursor();
			HX_STACK_LINE(255)
			::phoenix::geometry::RectangleGeometry tmp4 = this->focus;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(255)
			tmp4->set_visible(false);
		}
		else{
			HX_STACK_LINE(256)
			bool tmp4 = _visible;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(256)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(256)
			if ((tmp4)){
				HX_STACK_LINE(256)
				::mint::TextEdit tmp6 = this->textedit;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(256)
				::mint::TextEdit tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(256)
				tmp5 = tmp7->isfocused;
			}
			else{
				HX_STACK_LINE(256)
				tmp5 = false;
			}
			HX_STACK_LINE(256)
			if ((tmp5)){
				HX_STACK_LINE(257)
				this->start_cursor();
				HX_STACK_LINE(258)
				::phoenix::geometry::RectangleGeometry tmp6 = this->focus;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(258)
				tmp6->set_visible(true);
			}
		}
	}
return null();
}


Void TextEdit_obj::ondepth( Float _depth){
{
		HX_STACK_FRAME("mint.render.luxe.TextEdit","ondepth",0xa9634f79,"mint.render.luxe.TextEdit.ondepth","mint/render/luxe/TextEdit.hx",263,0x7cdf4efa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_depth,"_depth")
		HX_STACK_LINE(265)
		::phoenix::geometry::QuadGeometry tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(265)
		::mint::render::luxe::LuxeMintRender tmp1 = this->render;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(265)
		Dynamic tmp2 = tmp1->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(265)
		Float tmp3 = _depth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(265)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(265)
		tmp->set_depth(tmp4);
		HX_STACK_LINE(266)
		::phoenix::geometry::RectangleGeometry tmp5 = this->focus;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(266)
		::phoenix::geometry::QuadGeometry tmp6 = this->visual;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(266)
		Float tmp7 = tmp6->state->depth;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(266)
		Float tmp8 = (tmp7 + ((Float)0.001));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(266)
		tmp5->set_depth(tmp8);
		HX_STACK_LINE(267)
		::phoenix::geometry::LineGeometry tmp9 = this->cursor;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(267)
		::phoenix::geometry::QuadGeometry tmp10 = this->visual;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(267)
		Float tmp11 = tmp10->state->depth;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(267)
		Float tmp12 = (tmp11 + ((Float)0.002));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(267)
		tmp9->set_depth(tmp12);
	}
return null();
}



TextEdit_obj::TextEdit_obj()
{
}

void TextEdit_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextEdit);
	HX_MARK_MEMBER_NAME(textedit,"textedit");
	HX_MARK_MEMBER_NAME(visual,"visual");
	HX_MARK_MEMBER_NAME(cursor,"cursor");
	HX_MARK_MEMBER_NAME(focus,"focus");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(color_hover,"color_hover");
	HX_MARK_MEMBER_NAME(color_cursor,"color_cursor");
	HX_MARK_MEMBER_NAME(cursor_blink_rate,"cursor_blink_rate");
	HX_MARK_MEMBER_NAME(render,"render");
	HX_MARK_MEMBER_NAME(timer,"timer");
	::mint::render::Render_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextEdit_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(textedit,"textedit");
	HX_VISIT_MEMBER_NAME(visual,"visual");
	HX_VISIT_MEMBER_NAME(cursor,"cursor");
	HX_VISIT_MEMBER_NAME(focus,"focus");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(color_hover,"color_hover");
	HX_VISIT_MEMBER_NAME(color_cursor,"color_cursor");
	HX_VISIT_MEMBER_NAME(cursor_blink_rate,"cursor_blink_rate");
	HX_VISIT_MEMBER_NAME(render,"render");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	::mint::render::Render_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TextEdit_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"focus") ) { return focus; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"visual") ) { return visual; }
		if (HX_FIELD_EQ(inName,"cursor") ) { return cursor; }
		if (HX_FIELD_EQ(inName,"render") ) { return render; }
		if (HX_FIELD_EQ(inName,"onclip") ) { return onclip_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onscale") ) { return onscale_dyn(); }
		if (HX_FIELD_EQ(inName,"ondepth") ) { return ondepth_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textedit") ) { return textedit; }
		if (HX_FIELD_EQ(inName,"onbounds") ) { return onbounds_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onvisible") ) { return onvisible_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"color_hover") ) { return color_hover; }
		if (HX_FIELD_EQ(inName,"update_clip") ) { return update_clip_dyn(); }
		if (HX_FIELD_EQ(inName,"stop_cursor") ) { return stop_cursor_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"color_cursor") ) { return color_cursor; }
		if (HX_FIELD_EQ(inName,"start_cursor") ) { return start_cursor_dyn(); }
		if (HX_FIELD_EQ(inName,"blink_cursor") ) { return blink_cursor_dyn(); }
		if (HX_FIELD_EQ(inName,"reset_cursor") ) { return reset_cursor_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"update_cursor") ) { return update_cursor_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"cursor_blink_rate") ) { return cursor_blink_rate; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextEdit_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"focus") ) { focus=inValue.Cast< ::phoenix::geometry::RectangleGeometry >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::snow::api::Timer >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"visual") ) { visual=inValue.Cast< ::phoenix::geometry::QuadGeometry >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cursor") ) { cursor=inValue.Cast< ::phoenix::geometry::LineGeometry >(); return inValue; }
		if (HX_FIELD_EQ(inName,"render") ) { render=inValue.Cast< ::mint::render::luxe::LuxeMintRender >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textedit") ) { textedit=inValue.Cast< ::mint::TextEdit >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"color_hover") ) { color_hover=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"color_cursor") ) { color_cursor=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"cursor_blink_rate") ) { cursor_blink_rate=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextEdit_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("textedit","\x37","\xf1","\x30","\x5b"));
	outFields->push(HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef"));
	outFields->push(HX_HCSTRING("cursor","\xd6","\x8e","\xe8","\x3e"));
	outFields->push(HX_HCSTRING("focus","\xd8","\x5f","\x89","\x04"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("color_hover","\xa0","\x4a","\xe0","\xac"));
	outFields->push(HX_HCSTRING("color_cursor","\x72","\x71","\x65","\x09"));
	outFields->push(HX_HCSTRING("cursor_blink_rate","\xec","\xb1","\x9e","\x86"));
	outFields->push(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"));
	outFields->push(HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::mint::TextEdit*/ ,(int)offsetof(TextEdit_obj,textedit),HX_HCSTRING("textedit","\x37","\xf1","\x30","\x5b")},
	{hx::fsObject /*::phoenix::geometry::QuadGeometry*/ ,(int)offsetof(TextEdit_obj,visual),HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef")},
	{hx::fsObject /*::phoenix::geometry::LineGeometry*/ ,(int)offsetof(TextEdit_obj,cursor),HX_HCSTRING("cursor","\xd6","\x8e","\xe8","\x3e")},
	{hx::fsObject /*::phoenix::geometry::RectangleGeometry*/ ,(int)offsetof(TextEdit_obj,focus),HX_HCSTRING("focus","\xd8","\x5f","\x89","\x04")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(TextEdit_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(TextEdit_obj,color_hover),HX_HCSTRING("color_hover","\xa0","\x4a","\xe0","\xac")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(TextEdit_obj,color_cursor),HX_HCSTRING("color_cursor","\x72","\x71","\x65","\x09")},
	{hx::fsFloat,(int)offsetof(TextEdit_obj,cursor_blink_rate),HX_HCSTRING("cursor_blink_rate","\xec","\xb1","\x9e","\x86")},
	{hx::fsObject /*::mint::render::luxe::LuxeMintRender*/ ,(int)offsetof(TextEdit_obj,render),HX_HCSTRING("render","\x56","\x6b","\x29","\x05")},
	{hx::fsObject /*::snow::api::Timer*/ ,(int)offsetof(TextEdit_obj,timer),HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("textedit","\x37","\xf1","\x30","\x5b"),
	HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef"),
	HX_HCSTRING("cursor","\xd6","\x8e","\xe8","\x3e"),
	HX_HCSTRING("focus","\xd8","\x5f","\x89","\x04"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("color_hover","\xa0","\x4a","\xe0","\xac"),
	HX_HCSTRING("color_cursor","\x72","\x71","\x65","\x09"),
	HX_HCSTRING("cursor_blink_rate","\xec","\xb1","\x9e","\x86"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("update_clip","\x06","\x84","\x3e","\x47"),
	HX_HCSTRING("onscale","\x0b","\xfd","\xde","\x7b"),
	HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),
	HX_HCSTRING("start_cursor","\x53","\x5c","\xba","\x51"),
	HX_HCSTRING("stop_cursor","\xb3","\x94","\xc6","\x2f"),
	HX_HCSTRING("blink_cursor","\x99","\xd2","\xd8","\xa0"),
	HX_HCSTRING("reset_cursor","\x86","\xbe","\xec","\x51"),
	HX_HCSTRING("update_cursor","\x8c","\xdd","\x7c","\xab"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onbounds","\xd4","\x08","\x36","\x11"),
	HX_HCSTRING("onclip","\x6f","\x4b","\x73","\xf9"),
	HX_HCSTRING("onvisible","\x33","\x09","\x7e","\xad"),
	HX_HCSTRING("ondepth","\x84","\x1f","\x3a","\xda"),
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
	__mClass->mName = HX_HCSTRING("mint.render.luxe.TextEdit","\x63","\x13","\xf2","\xc7");
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
} // end namespace render
} // end namespace luxe
