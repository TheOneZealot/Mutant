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
#ifndef INCLUDED_mint_Progress
#include <mint/Progress.h>
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
#ifndef INCLUDED_mint_render_luxe_Progress
#include <mint/render/luxe/Progress.h>
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

Void Progress_obj::__construct(::mint::render::luxe::LuxeMintRender _render,::mint::Progress _control)
{
HX_STACK_FRAME("mint.render.luxe.Progress","new",0x146a5f2b,"mint.render.luxe.Progress.new","mint/render/luxe/Progress.hx",20,0x621b0e64)
HX_STACK_THIS(this)
HX_STACK_ARG(_render,"_render")
HX_STACK_ARG(_control,"_control")
{
	HX_STACK_LINE(30)
	this->margin = ((Float)2.0);
	HX_STACK_LINE(32)
	::mint::render::luxe::Progress _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(34)
	this->progress = _control;
	HX_STACK_LINE(35)
	this->render = _render;
	HX_STACK_LINE(37)
	::mint::render::luxe::LuxeMintRender tmp = this->render;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	::mint::Progress tmp1 = _control;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(39)
	::mint::Progress tmp2 = this->progress;		HX_STACK_VAR(tmp2,"tmp2");
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
			::phoenix::Color tmp7 = tmp6->rgb((int)2697513);		HX_STACK_VAR(tmp7,"tmp7");
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
		bool tmp6 = (_opt->__Field(HX_HCSTRING("color_bar","\xb7","\x55","\xaa","\x2f"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(42)
		if ((tmp6)){
			HX_STACK_LINE(42)
			::phoenix::Color tmp7 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(42)
			::phoenix::Color tmp8 = tmp7->rgb((int)10340963);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(42)
			_opt->__FieldRef(HX_HCSTRING("color_bar","\xb7","\x55","\xaa","\x2f")) = tmp8;
		}
		HX_STACK_LINE(42)
		tmp5 = _opt->__Field(HX_HCSTRING("color_bar","\xb7","\x55","\xaa","\x2f"), hx::paccDynamic );
	}
	HX_STACK_LINE(42)
	this->color_bar = tmp5;
	HX_STACK_LINE(43)
	Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(43)
	{
		HX_STACK_LINE(43)
		bool tmp7 = (_opt->__Field(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(43)
		if ((tmp7)){
			HX_STACK_LINE(43)
			_opt->__FieldRef(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba")) = ((Float)2.0);
		}
		HX_STACK_LINE(43)
		tmp6 = _opt->__Field(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"), hx::paccDynamic );
	}
	HX_STACK_LINE(43)
	this->margin = tmp6;
	HX_STACK_LINE(45)
	::luxe::Draw tmp7 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(46)
	::mint::Control tmp8 = this->control;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(46)
	::String tmp9 = tmp8->name;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(46)
	::String tmp10 = (tmp9 + HX_HCSTRING(".visual","\x6e","\x79","\x67","\x68"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(47)
	::mint::render::luxe::LuxeMintRender tmp11 = this->render;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(47)
	::phoenix::Batcher tmp12 = tmp11->options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(48)
	::mint::Control tmp13 = this->control;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(48)
	Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(48)
	::mint::Control tmp15 = this->control;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(48)
	Float tmp16 = tmp15->canvas->scale;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(48)
	Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(49)
	::mint::Control tmp18 = this->control;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(49)
	Float tmp19 = tmp18->y;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(49)
	::mint::Control tmp20 = this->control;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(49)
	Float tmp21 = tmp20->canvas->scale;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(49)
	Float tmp22 = (tmp19 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(50)
	::mint::Control tmp23 = this->control;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(50)
	Float tmp24 = tmp23->w;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(50)
	::mint::Control tmp25 = this->control;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(50)
	Float tmp26 = tmp25->canvas->scale;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(50)
	Float tmp27 = (tmp24 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(51)
	::mint::Control tmp28 = this->control;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(51)
	Float tmp29 = tmp28->h;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(51)
	::mint::Control tmp30 = this->control;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(51)
	Float tmp31 = tmp30->canvas->scale;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(51)
	Float tmp32 = (tmp29 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(52)
	::phoenix::Color tmp33 = this->color;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(53)
	::mint::render::luxe::LuxeMintRender tmp34 = this->render;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(53)
	Dynamic tmp35 = tmp34->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(53)
	::mint::Control tmp36 = this->control;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(53)
	Float tmp37 = tmp36->depth;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(53)
	Float tmp38 = (tmp35 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(54)
	::mint::Control tmp39 = this->control;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(54)
	bool tmp40 = tmp39->visible;		HX_STACK_VAR(tmp40,"tmp40");
	struct _Function_1_1{
		inline static Dynamic Block( Float &tmp22,::phoenix::Color &tmp33,Float &tmp17,Float &tmp38,bool &tmp40,::String &tmp10,::phoenix::Batcher &tmp12,Float &tmp27,Float &tmp32){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/render/luxe/Progress.hx",45,0x621b0e64)
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
	HX_STACK_LINE(45)
	Dynamic tmp41 = _Function_1_1::Block(tmp22,tmp33,tmp17,tmp38,tmp40,tmp10,tmp12,tmp27,tmp32);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(45)
	::phoenix::geometry::QuadGeometry tmp42 = tmp7->box(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(45)
	this->visual = tmp42;
	HX_STACK_LINE(57)
	::mint::Control tmp43 = this->control;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(57)
	Float tmp44 = tmp43->canvas->scale;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(57)
	Float tmp45 = this->margin;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(57)
	Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(57)
	Float _margin = tmp46;		HX_STACK_VAR(_margin,"_margin");
	HX_STACK_LINE(59)
	::luxe::Draw tmp47 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(60)
	::mint::Control tmp48 = this->control;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(60)
	::String tmp49 = tmp48->name;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(60)
	::String tmp50 = (tmp49 + HX_HCSTRING(".bar","\x65","\x82","\xb2","\x1e"));		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(61)
	::mint::render::luxe::LuxeMintRender tmp51 = this->render;		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(61)
	::phoenix::Batcher tmp52 = tmp51->options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(62)
	::mint::Control tmp53 = this->control;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(62)
	Float tmp54 = tmp53->x;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(62)
	::mint::Control tmp55 = this->control;		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(62)
	Float tmp56 = tmp55->canvas->scale;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(62)
	Float tmp57 = (tmp54 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(62)
	Float tmp58 = _margin;		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(62)
	Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(63)
	::mint::Control tmp60 = this->control;		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(63)
	Float tmp61 = tmp60->y;		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(63)
	::mint::Control tmp62 = this->control;		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(63)
	Float tmp63 = tmp62->canvas->scale;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(63)
	Float tmp64 = (tmp61 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(63)
	Float tmp65 = _margin;		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(63)
	Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(64)
	::mint::Progress tmp67 = this->progress;		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(64)
	Float tmp68 = tmp67->progress;		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(64)
	Float tmp69 = this->get_bar_width(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(65)
	::mint::Control tmp70 = this->control;		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(65)
	Float tmp71 = tmp70->h;		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(65)
	::mint::Control tmp72 = this->control;		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(65)
	Float tmp73 = tmp72->canvas->scale;		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(65)
	Float tmp74 = (tmp71 * tmp73);		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(65)
	Float tmp75 = (_margin * (int)2);		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(65)
	Float tmp76 = (tmp74 - tmp75);		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(66)
	::phoenix::Color tmp77 = this->color_bar;		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(67)
	::mint::render::luxe::LuxeMintRender tmp78 = this->render;		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(67)
	Dynamic tmp79 = tmp78->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(67)
	::mint::Control tmp80 = this->control;		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(67)
	Float tmp81 = tmp80->depth;		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(67)
	Float tmp82 = (tmp79 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(67)
	Float tmp83 = (tmp82 + ((Float)0.001));		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(68)
	::mint::Control tmp84 = this->control;		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(68)
	bool tmp85 = tmp84->visible;		HX_STACK_VAR(tmp85,"tmp85");
	struct _Function_1_2{
		inline static Dynamic Block( Float &tmp66,::phoenix::Batcher &tmp52,Float &tmp76,Float &tmp59,::phoenix::Color &tmp77,bool &tmp85,::String &tmp50,Float &tmp69,Float &tmp83){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/render/luxe/Progress.hx",59,0x621b0e64)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tmp50,false);
				__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp52,false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp59,false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp66,false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp69,false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp76,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp77,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp83,false);
				__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , tmp85,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(59)
	Dynamic tmp86 = _Function_1_2::Block(tmp66,tmp52,tmp76,tmp59,tmp77,tmp85,tmp50,tmp69,tmp83);		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(59)
	::phoenix::geometry::QuadGeometry tmp87 = tmp47->box(tmp86);		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(59)
	this->bar = tmp87;
	HX_STACK_LINE(71)
	::mint::Control tmp88 = this->control;		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(71)
	Float tmp89 = tmp88->canvas->scale;		HX_STACK_VAR(tmp89,"tmp89");
	HX_STACK_LINE(71)
	this->update_clip(tmp89);
	HX_STACK_LINE(73)
	::mint::Progress tmp90 = this->progress;		HX_STACK_VAR(tmp90,"tmp90");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_3,::mint::render::luxe::Progress,_g)
	int __ArgCount() const { return 2; }
	Void run(Float cur,Float prev){
		HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","mint/render/luxe/Progress.hx",73,0x621b0e64)
		HX_STACK_ARG(cur,"cur")
		HX_STACK_ARG(prev,"prev")
		{
			HX_STACK_LINE(74)
			Float tmp91 = cur;		HX_STACK_VAR(tmp91,"tmp91");
			HX_STACK_LINE(74)
			Float tmp92 = _g->get_bar_width(tmp91);		HX_STACK_VAR(tmp92,"tmp92");
			HX_STACK_LINE(74)
			Float tmp93 = _g->control->h;		HX_STACK_VAR(tmp93,"tmp93");
			HX_STACK_LINE(74)
			::mint::Canvas tmp94 = _g->control->canvas;		HX_STACK_VAR(tmp94,"tmp94");
			HX_STACK_LINE(74)
			Float tmp95 = tmp94->scale;		HX_STACK_VAR(tmp95,"tmp95");
			HX_STACK_LINE(74)
			Float tmp96 = (tmp93 * tmp95);		HX_STACK_VAR(tmp96,"tmp96");
			HX_STACK_LINE(74)
			::mint::Canvas tmp97 = _g->control->canvas;		HX_STACK_VAR(tmp97,"tmp97");
			HX_STACK_LINE(74)
			Float tmp98 = tmp97->scale;		HX_STACK_VAR(tmp98,"tmp98");
			HX_STACK_LINE(74)
			Float tmp99 = _g->margin;		HX_STACK_VAR(tmp99,"tmp99");
			HX_STACK_LINE(74)
			Float tmp100 = (tmp98 * tmp99);		HX_STACK_VAR(tmp100,"tmp100");
			HX_STACK_LINE(74)
			Float tmp101 = (tmp100 * (int)2);		HX_STACK_VAR(tmp101,"tmp101");
			HX_STACK_LINE(74)
			Float tmp102 = (tmp96 - tmp101);		HX_STACK_VAR(tmp102,"tmp102");
			HX_STACK_LINE(74)
			_g->bar->resize_xy(tmp92,tmp102);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(73)
	tmp90->onchange->listen( Dynamic(new _Function_1_3(_g)));
}
;
	return null();
}

//Progress_obj::~Progress_obj() { }

Dynamic Progress_obj::__CreateEmpty() { return  new Progress_obj; }
hx::ObjectPtr< Progress_obj > Progress_obj::__new(::mint::render::luxe::LuxeMintRender _render,::mint::Progress _control)
{  hx::ObjectPtr< Progress_obj > _result_ = new Progress_obj();
	_result_->__construct(_render,_control);
	return _result_;}

Dynamic Progress_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Progress_obj > _result_ = new Progress_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Progress_obj::update_clip( Float _scale){
{
		HX_STACK_FRAME("mint.render.luxe.Progress","update_clip",0x8f0155d1,"mint.render.luxe.Progress.update_clip","mint/render/luxe/Progress.hx",79,0x621b0e64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_scale,"_scale")
		HX_STACK_LINE(81)
		::mint::Control tmp = this->control;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		::mint::Control tmp1 = tmp->clip_with;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		Float tmp2 = _scale;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(81)
		::phoenix::Rectangle tmp3 = ::mint::render::luxe::Convert_obj::bounds(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(81)
		::phoenix::Rectangle _clip = tmp3;		HX_STACK_VAR(_clip,"_clip");
		HX_STACK_LINE(83)
		::phoenix::geometry::QuadGeometry tmp4 = this->visual;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(83)
		::phoenix::Rectangle tmp5 = _clip;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(83)
		tmp4->set_clip_rect(tmp5);
		HX_STACK_LINE(84)
		::phoenix::geometry::QuadGeometry tmp6 = this->bar;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(84)
		::phoenix::Rectangle tmp7 = _clip;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(84)
		tmp6->set_clip_rect(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Progress_obj,update_clip,(void))

Void Progress_obj::onscale( Float _scale,Float _prev_scale){
{
		HX_STACK_FRAME("mint.render.luxe.Progress","onscale",0x1bac4d56,"mint.render.luxe.Progress.onscale","mint/render/luxe/Progress.hx",88,0x621b0e64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_scale,"_scale")
		HX_STACK_ARG(_prev_scale,"_prev_scale")
		HX_STACK_LINE(90)
		Float tmp = _scale;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		this->update_clip(tmp);
	}
return null();
}


Float Progress_obj::get_bar_width( Float _progress){
	HX_STACK_FRAME("mint.render.luxe.Progress","get_bar_width",0x54373dbc,"mint.render.luxe.Progress.get_bar_width","mint/render/luxe/Progress.hx",94,0x621b0e64)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_progress,"_progress")
	HX_STACK_LINE(96)
	::mint::Control tmp = this->control;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	Float tmp1 = tmp->canvas->scale;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(96)
	Float tmp2 = this->margin;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(96)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(96)
	Float _margin = tmp3;		HX_STACK_VAR(_margin,"_margin");
	HX_STACK_LINE(97)
	::mint::Control tmp4 = this->control;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(97)
	Float tmp5 = tmp4->w;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(97)
	::mint::Control tmp6 = this->control;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(97)
	Float tmp7 = tmp6->canvas->scale;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(97)
	Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(97)
	Float tmp9 = _margin;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(97)
	Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(97)
	Float _max_w = tmp10;		HX_STACK_VAR(_max_w,"_max_w");
	HX_STACK_LINE(98)
	::mint::Control tmp11 = this->control;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(98)
	Float tmp12 = tmp11->w;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(98)
	::mint::Control tmp13 = this->control;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(98)
	Float tmp14 = tmp13->canvas->scale;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(98)
	Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(98)
	Float tmp16 = (_margin * (int)2);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(98)
	Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(98)
	Float tmp18 = _progress;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(98)
	Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(98)
	Float _width = tmp19;		HX_STACK_VAR(_width,"_width");
	HX_STACK_LINE(100)
	bool tmp20 = (_width < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(100)
	Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(100)
	if ((tmp20)){
		HX_STACK_LINE(100)
		tmp21 = (int)0;
	}
	else{
		HX_STACK_LINE(100)
		bool tmp22 = (_width > _max_w);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(100)
		if ((tmp22)){
			HX_STACK_LINE(100)
			tmp21 = _max_w;
		}
		else{
			HX_STACK_LINE(100)
			tmp21 = _width;
		}
	}
	HX_STACK_LINE(100)
	_width = tmp21;
	HX_STACK_LINE(104)
	Float tmp22 = _width;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(104)
	return tmp22;
}


HX_DEFINE_DYNAMIC_FUNC1(Progress_obj,get_bar_width,return )

Void Progress_obj::ondestroy( ){
{
		HX_STACK_FRAME("mint.render.luxe.Progress","ondestroy",0x58d9f6c6,"mint.render.luxe.Progress.ondestroy","mint/render/luxe/Progress.hx",108,0x621b0e64)
		HX_STACK_THIS(this)
		HX_STACK_LINE(110)
		::phoenix::geometry::QuadGeometry tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(110)
		tmp->drop(null());
		HX_STACK_LINE(111)
		::phoenix::geometry::QuadGeometry tmp1 = this->bar;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		tmp1->drop(null());
		HX_STACK_LINE(112)
		this->visual = null();
		HX_STACK_LINE(113)
		this->bar = null();
	}
return null();
}


Void Progress_obj::onbounds( ){
{
		HX_STACK_FRAME("mint.render.luxe.Progress","onbounds",0x450efa29,"mint.render.luxe.Progress.onbounds","mint/render/luxe/Progress.hx",117,0x621b0e64)
		HX_STACK_THIS(this)
		HX_STACK_LINE(119)
		::mint::Control tmp = this->control;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(119)
		Float tmp1 = tmp->canvas->scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		Float tmp2 = this->margin;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(119)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(119)
		Float _margin = tmp3;		HX_STACK_VAR(_margin,"_margin");
		HX_STACK_LINE(121)
		{
			HX_STACK_LINE(121)
			::phoenix::geometry::QuadGeometry tmp4 = this->visual;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(121)
			::phoenix::Spatial tmp5 = tmp4->transform->local;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(121)
			::phoenix::Vector _this = tmp5->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(121)
			::mint::Control tmp6 = this->control;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(121)
			Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(121)
			::mint::Control tmp8 = this->control;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(121)
			Float tmp9 = tmp8->canvas->scale;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(121)
			Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(121)
			Float _x = tmp10;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(121)
			::mint::Control tmp11 = this->control;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(121)
			Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(121)
			::mint::Control tmp13 = this->control;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(121)
			Float tmp14 = tmp13->canvas->scale;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(121)
			Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(121)
			Float _y = tmp15;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(121)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(121)
			_this->ignore_listeners = true;
			HX_STACK_LINE(121)
			{
				HX_STACK_LINE(121)
				_this->x = _x;
				HX_STACK_LINE(121)
				bool tmp16 = _this->_construct;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(121)
				if ((tmp16)){
					HX_STACK_LINE(121)
					_this->x;
				}
				else{
					HX_STACK_LINE(121)
					bool tmp17 = (_this->listen_x != null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(121)
					bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(121)
					if ((tmp17)){
						HX_STACK_LINE(121)
						bool tmp19 = _this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(121)
						bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(121)
						tmp18 = !(tmp20);
					}
					else{
						HX_STACK_LINE(121)
						tmp18 = false;
					}
					HX_STACK_LINE(121)
					if ((tmp18)){
						HX_STACK_LINE(121)
						Float tmp19 = _x;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(121)
						_this->listen_x(tmp19);
					}
					HX_STACK_LINE(121)
					_this->x;
				}
			}
			HX_STACK_LINE(121)
			{
				HX_STACK_LINE(121)
				_this->y = _y;
				HX_STACK_LINE(121)
				bool tmp16 = _this->_construct;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(121)
				if ((tmp16)){
					HX_STACK_LINE(121)
					_this->y;
				}
				else{
					HX_STACK_LINE(121)
					bool tmp17 = (_this->listen_y != null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(121)
					bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(121)
					if ((tmp17)){
						HX_STACK_LINE(121)
						bool tmp19 = _this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(121)
						bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(121)
						tmp18 = !(tmp20);
					}
					else{
						HX_STACK_LINE(121)
						tmp18 = false;
					}
					HX_STACK_LINE(121)
					if ((tmp18)){
						HX_STACK_LINE(121)
						Float tmp19 = _y;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(121)
						_this->listen_y(tmp19);
					}
					HX_STACK_LINE(121)
					_this->y;
				}
			}
			HX_STACK_LINE(121)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(121)
			bool tmp16 = (_this->listen_x != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(121)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(121)
			if ((tmp16)){
				HX_STACK_LINE(121)
				bool tmp18 = _this->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(121)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(121)
				tmp17 = !(tmp19);
			}
			else{
				HX_STACK_LINE(121)
				tmp17 = false;
			}
			HX_STACK_LINE(121)
			if ((tmp17)){
				HX_STACK_LINE(121)
				Float tmp18 = _this->x;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(121)
				_this->listen_x(tmp18);
			}
			HX_STACK_LINE(121)
			bool tmp18 = (_this->listen_y != null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(121)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(121)
			if ((tmp18)){
				HX_STACK_LINE(121)
				bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(121)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(121)
				tmp19 = !(tmp21);
			}
			else{
				HX_STACK_LINE(121)
				tmp19 = false;
			}
			HX_STACK_LINE(121)
			if ((tmp19)){
				HX_STACK_LINE(121)
				Float tmp20 = _this->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(121)
				_this->listen_y(tmp20);
			}
			HX_STACK_LINE(121)
			_this;
		}
		HX_STACK_LINE(122)
		::phoenix::geometry::QuadGeometry tmp4 = this->visual;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(122)
		::mint::Control tmp5 = this->control;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(122)
		Float tmp6 = tmp5->w;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(122)
		::mint::Control tmp7 = this->control;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(122)
		Float tmp8 = tmp7->canvas->scale;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(122)
		Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(122)
		::mint::Control tmp10 = this->control;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(122)
		Float tmp11 = tmp10->h;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(122)
		::mint::Control tmp12 = this->control;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(122)
		Float tmp13 = tmp12->canvas->scale;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(122)
		Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(122)
		tmp4->resize_xy(tmp9,tmp14);
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			::phoenix::geometry::QuadGeometry tmp15 = this->bar;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(124)
			::phoenix::Spatial tmp16 = tmp15->transform->local;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(124)
			::phoenix::Vector _this = tmp16->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(124)
			::mint::Control tmp17 = this->control;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(124)
			Float tmp18 = tmp17->x;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(124)
			::mint::Control tmp19 = this->control;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(124)
			Float tmp20 = tmp19->canvas->scale;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(124)
			Float tmp21 = (tmp18 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(124)
			Float tmp22 = _margin;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(124)
			Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(124)
			Float _x = tmp23;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(124)
			::mint::Control tmp24 = this->control;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(124)
			Float tmp25 = tmp24->y;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(124)
			::mint::Control tmp26 = this->control;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(124)
			Float tmp27 = tmp26->canvas->scale;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(124)
			Float tmp28 = (tmp25 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(124)
			Float tmp29 = _margin;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(124)
			Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(124)
			Float _y = tmp30;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(124)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(124)
			_this->ignore_listeners = true;
			HX_STACK_LINE(124)
			{
				HX_STACK_LINE(124)
				_this->x = _x;
				HX_STACK_LINE(124)
				bool tmp31 = _this->_construct;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(124)
				if ((tmp31)){
					HX_STACK_LINE(124)
					_this->x;
				}
				else{
					HX_STACK_LINE(124)
					bool tmp32 = (_this->listen_x != null());		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(124)
					bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(124)
					if ((tmp32)){
						HX_STACK_LINE(124)
						bool tmp34 = _this->ignore_listeners;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(124)
						bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(124)
						tmp33 = !(tmp35);
					}
					else{
						HX_STACK_LINE(124)
						tmp33 = false;
					}
					HX_STACK_LINE(124)
					if ((tmp33)){
						HX_STACK_LINE(124)
						Float tmp34 = _x;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(124)
						_this->listen_x(tmp34);
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
				bool tmp31 = _this->_construct;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(124)
				if ((tmp31)){
					HX_STACK_LINE(124)
					_this->y;
				}
				else{
					HX_STACK_LINE(124)
					bool tmp32 = (_this->listen_y != null());		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(124)
					bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(124)
					if ((tmp32)){
						HX_STACK_LINE(124)
						bool tmp34 = _this->ignore_listeners;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(124)
						bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(124)
						tmp33 = !(tmp35);
					}
					else{
						HX_STACK_LINE(124)
						tmp33 = false;
					}
					HX_STACK_LINE(124)
					if ((tmp33)){
						HX_STACK_LINE(124)
						Float tmp34 = _y;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(124)
						_this->listen_y(tmp34);
					}
					HX_STACK_LINE(124)
					_this->y;
				}
			}
			HX_STACK_LINE(124)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(124)
			bool tmp31 = (_this->listen_x != null());		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(124)
			bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(124)
			if ((tmp31)){
				HX_STACK_LINE(124)
				bool tmp33 = _this->ignore_listeners;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(124)
				bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(124)
				tmp32 = !(tmp34);
			}
			else{
				HX_STACK_LINE(124)
				tmp32 = false;
			}
			HX_STACK_LINE(124)
			if ((tmp32)){
				HX_STACK_LINE(124)
				Float tmp33 = _this->x;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(124)
				_this->listen_x(tmp33);
			}
			HX_STACK_LINE(124)
			bool tmp33 = (_this->listen_y != null());		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(124)
			bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(124)
			if ((tmp33)){
				HX_STACK_LINE(124)
				bool tmp35 = _this->ignore_listeners;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(124)
				bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(124)
				tmp34 = !(tmp36);
			}
			else{
				HX_STACK_LINE(124)
				tmp34 = false;
			}
			HX_STACK_LINE(124)
			if ((tmp34)){
				HX_STACK_LINE(124)
				Float tmp35 = _this->y;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(124)
				_this->listen_y(tmp35);
			}
			HX_STACK_LINE(124)
			_this;
		}
		HX_STACK_LINE(125)
		::phoenix::geometry::QuadGeometry tmp15 = this->bar;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(125)
		::mint::Progress tmp16 = this->progress;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(125)
		Float tmp17 = tmp16->progress;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(125)
		Float tmp18 = this->get_bar_width(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(125)
		::mint::Control tmp19 = this->control;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(125)
		Float tmp20 = tmp19->h;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(125)
		::mint::Control tmp21 = this->control;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(125)
		Float tmp22 = tmp21->canvas->scale;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(125)
		Float tmp23 = (tmp20 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(125)
		Float tmp24 = (_margin * (int)2);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(125)
		Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(125)
		tmp15->resize_xy(tmp18,tmp25);
	}
return null();
}


Void Progress_obj::onclip( bool _disable,Float _x,Float _y,Float _w,Float _h){
{
		HX_STACK_FRAME("mint.render.luxe.Progress","onclip",0x7997cd84,"mint.render.luxe.Progress.onclip","mint/render/luxe/Progress.hx",129,0x621b0e64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_disable,"_disable")
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_w,"_w")
		HX_STACK_ARG(_h,"_h")
		HX_STACK_LINE(131)
		::mint::Control tmp = this->control;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(131)
		Float tmp1 = tmp->canvas->scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(131)
		this->update_clip(tmp1);
	}
return null();
}


Void Progress_obj::onvisible( bool _visible){
{
		HX_STACK_FRAME("mint.render.luxe.Progress","onvisible",0xd778423e,"mint.render.luxe.Progress.onvisible","mint/render/luxe/Progress.hx",135,0x621b0e64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_visible,"_visible")
		HX_STACK_LINE(137)
		::phoenix::geometry::QuadGeometry tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(137)
		::phoenix::geometry::QuadGeometry tmp1 = this->bar;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(137)
		bool tmp2 = _visible;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(137)
		bool tmp3 = tmp1->set_visible(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(137)
		tmp->set_visible(tmp3);
	}
return null();
}


Void Progress_obj::ondepth( Float _depth){
{
		HX_STACK_FRAME("mint.render.luxe.Progress","ondepth",0x7a076fcf,"mint.render.luxe.Progress.ondepth","mint/render/luxe/Progress.hx",141,0x621b0e64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_depth,"_depth")
		HX_STACK_LINE(143)
		::phoenix::geometry::QuadGeometry tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(143)
		::mint::render::luxe::LuxeMintRender tmp1 = this->render;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(143)
		Dynamic tmp2 = tmp1->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(143)
		Float tmp3 = _depth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(143)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(143)
		tmp->set_depth(tmp4);
		HX_STACK_LINE(144)
		::phoenix::geometry::QuadGeometry tmp5 = this->bar;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(144)
		::phoenix::geometry::QuadGeometry tmp6 = this->visual;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(144)
		Float tmp7 = tmp6->state->depth;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(144)
		Float tmp8 = (tmp7 + ((Float)0.001));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(144)
		tmp5->set_depth(tmp8);
	}
return null();
}



Progress_obj::Progress_obj()
{
}

void Progress_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Progress);
	HX_MARK_MEMBER_NAME(progress,"progress");
	HX_MARK_MEMBER_NAME(visual,"visual");
	HX_MARK_MEMBER_NAME(bar,"bar");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(color_bar,"color_bar");
	HX_MARK_MEMBER_NAME(render,"render");
	HX_MARK_MEMBER_NAME(margin,"margin");
	::mint::render::Render_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Progress_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(progress,"progress");
	HX_VISIT_MEMBER_NAME(visual,"visual");
	HX_VISIT_MEMBER_NAME(bar,"bar");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(color_bar,"color_bar");
	HX_VISIT_MEMBER_NAME(render,"render");
	HX_VISIT_MEMBER_NAME(margin,"margin");
	::mint::render::Render_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Progress_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bar") ) { return bar; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"visual") ) { return visual; }
		if (HX_FIELD_EQ(inName,"render") ) { return render; }
		if (HX_FIELD_EQ(inName,"margin") ) { return margin; }
		if (HX_FIELD_EQ(inName,"onclip") ) { return onclip_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onscale") ) { return onscale_dyn(); }
		if (HX_FIELD_EQ(inName,"ondepth") ) { return ondepth_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { return progress; }
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
	case 13:
		if (HX_FIELD_EQ(inName,"get_bar_width") ) { return get_bar_width_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Progress_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bar") ) { bar=inValue.Cast< ::phoenix::geometry::QuadGeometry >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"visual") ) { visual=inValue.Cast< ::phoenix::geometry::QuadGeometry >(); return inValue; }
		if (HX_FIELD_EQ(inName,"render") ) { render=inValue.Cast< ::mint::render::luxe::LuxeMintRender >(); return inValue; }
		if (HX_FIELD_EQ(inName,"margin") ) { margin=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { progress=inValue.Cast< ::mint::Progress >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"color_bar") ) { color_bar=inValue.Cast< ::phoenix::Color >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Progress_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"));
	outFields->push(HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef"));
	outFields->push(HX_HCSTRING("bar","\xd3","\xb1","\x4a","\x00"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("color_bar","\xb7","\x55","\xaa","\x2f"));
	outFields->push(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"));
	outFields->push(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::mint::Progress*/ ,(int)offsetof(Progress_obj,progress),HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86")},
	{hx::fsObject /*::phoenix::geometry::QuadGeometry*/ ,(int)offsetof(Progress_obj,visual),HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef")},
	{hx::fsObject /*::phoenix::geometry::QuadGeometry*/ ,(int)offsetof(Progress_obj,bar),HX_HCSTRING("bar","\xd3","\xb1","\x4a","\x00")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Progress_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Progress_obj,color_bar),HX_HCSTRING("color_bar","\xb7","\x55","\xaa","\x2f")},
	{hx::fsObject /*::mint::render::luxe::LuxeMintRender*/ ,(int)offsetof(Progress_obj,render),HX_HCSTRING("render","\x56","\x6b","\x29","\x05")},
	{hx::fsFloat,(int)offsetof(Progress_obj,margin),HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"),
	HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef"),
	HX_HCSTRING("bar","\xd3","\xb1","\x4a","\x00"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("color_bar","\xb7","\x55","\xaa","\x2f"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"),
	HX_HCSTRING("update_clip","\x06","\x84","\x3e","\x47"),
	HX_HCSTRING("onscale","\x0b","\xfd","\xde","\x7b"),
	HX_HCSTRING("get_bar_width","\x31","\x23","\xc4","\x78"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onbounds","\xd4","\x08","\x36","\x11"),
	HX_HCSTRING("onclip","\x6f","\x4b","\x73","\xf9"),
	HX_HCSTRING("onvisible","\x33","\x09","\x7e","\xad"),
	HX_HCSTRING("ondepth","\x84","\x1f","\x3a","\xda"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Progress_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Progress_obj::__mClass,"__mClass");
};

#endif

hx::Class Progress_obj::__mClass;

void Progress_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mint.render.luxe.Progress","\xb9","\xed","\x12","\x08");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Progress_obj >;
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
