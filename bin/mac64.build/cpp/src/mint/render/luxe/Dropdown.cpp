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
#ifndef INCLUDED_mint_Dropdown
#include <mint/Dropdown.h>
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
#ifndef INCLUDED_mint_render_luxe_Dropdown
#include <mint/render/luxe/Dropdown.h>
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

Void Dropdown_obj::__construct(::mint::render::luxe::LuxeMintRender _render,::mint::Dropdown _control)
{
HX_STACK_FRAME("mint.render.luxe.Dropdown","new",0xa16edd8f,"mint.render.luxe.Dropdown.new","mint/render/luxe/Dropdown.hx",31,0x5e256880)
HX_STACK_THIS(this)
HX_STACK_ARG(_render,"_render")
HX_STACK_ARG(_control,"_control")
{
	HX_STACK_LINE(33)
	this->dropdown = _control;
	HX_STACK_LINE(34)
	this->render = _render;
	HX_STACK_LINE(36)
	::mint::render::luxe::LuxeMintRender tmp = this->render;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	::mint::Dropdown tmp1 = _control;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(38)
	::mint::Dropdown tmp2 = this->dropdown;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	Dynamic tmp3 = tmp2->options->__Field(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(38)
	Dynamic _opt = tmp3;		HX_STACK_VAR(_opt,"_opt");
	HX_STACK_LINE(40)
	::phoenix::Color tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		bool tmp5 = (_opt->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(40)
		if ((tmp5)){
			HX_STACK_LINE(40)
			::phoenix::Color tmp6 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(40)
			::phoenix::Color tmp7 = tmp6->rgb((int)3618615);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(40)
			_opt->__FieldRef(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")) = tmp7;
		}
		HX_STACK_LINE(40)
		tmp4 = _opt->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );
	}
	HX_STACK_LINE(40)
	this->color = tmp4;
	HX_STACK_LINE(41)
	::phoenix::Color tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		bool tmp6 = (_opt->__Field(HX_HCSTRING("color_border","\x88","\x2f","\x97","\x2e"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(41)
		if ((tmp6)){
			HX_STACK_LINE(41)
			::phoenix::Color tmp7 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(41)
			::phoenix::Color tmp8 = tmp7->rgb((int)1184274);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(41)
			_opt->__FieldRef(HX_HCSTRING("color_border","\x88","\x2f","\x97","\x2e")) = tmp8;
		}
		HX_STACK_LINE(41)
		tmp5 = _opt->__Field(HX_HCSTRING("color_border","\x88","\x2f","\x97","\x2e"), hx::paccDynamic );
	}
	HX_STACK_LINE(41)
	this->color_border = tmp5;
	HX_STACK_LINE(43)
	::luxe::Draw tmp6 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(44)
	::mint::Control tmp7 = this->control;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(44)
	::String tmp8 = tmp7->name;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(44)
	::String tmp9 = (tmp8 + HX_HCSTRING(".visual","\x6e","\x79","\x67","\x68"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(45)
	::mint::render::luxe::LuxeMintRender tmp10 = this->render;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(45)
	::phoenix::Batcher tmp11 = tmp10->options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(46)
	::mint::Control tmp12 = this->control;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(46)
	Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(46)
	::mint::Control tmp14 = this->control;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(46)
	Float tmp15 = tmp14->canvas->scale;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(46)
	Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(47)
	::mint::Control tmp17 = this->control;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(47)
	Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(47)
	::mint::Control tmp19 = this->control;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(47)
	Float tmp20 = tmp19->canvas->scale;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(47)
	Float tmp21 = (tmp18 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(48)
	::mint::Control tmp22 = this->control;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(48)
	Float tmp23 = tmp22->w;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(48)
	::mint::Control tmp24 = this->control;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(48)
	Float tmp25 = tmp24->canvas->scale;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(48)
	Float tmp26 = (tmp23 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(49)
	::mint::Control tmp27 = this->control;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(49)
	Float tmp28 = tmp27->h;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(49)
	::mint::Control tmp29 = this->control;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(49)
	Float tmp30 = tmp29->canvas->scale;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(49)
	Float tmp31 = (tmp28 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(50)
	::phoenix::Color tmp32 = this->color;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(51)
	::mint::render::luxe::LuxeMintRender tmp33 = this->render;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(51)
	Dynamic tmp34 = tmp33->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(51)
	::mint::Control tmp35 = this->control;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(51)
	Float tmp36 = tmp35->depth;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(51)
	Float tmp37 = (tmp34 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(52)
	::mint::Control tmp38 = this->control;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(52)
	bool tmp39 = tmp38->visible;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(53)
	::mint::Control tmp40 = this->control;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(53)
	::mint::Control tmp41 = tmp40->clip_with;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(53)
	::mint::Control tmp42 = this->control;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(53)
	Float tmp43 = tmp42->canvas->scale;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(53)
	::phoenix::Rectangle tmp44 = ::mint::render::luxe::Convert_obj::bounds(tmp41,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	struct _Function_1_1{
		inline static Dynamic Block( ::String &tmp9,::phoenix::Batcher &tmp11,::phoenix::Rectangle &tmp44,Float &tmp26,Float &tmp21,Float &tmp31,Float &tmp16,Float &tmp37,bool &tmp39,::phoenix::Color &tmp32){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/render/luxe/Dropdown.hx",43,0x5e256880)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tmp9,false);
				__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp11,false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp16,false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp21,false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp26,false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp31,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp32,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp37,false);
				__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , tmp39,false);
				__result->Add(HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89") , tmp44,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(43)
	Dynamic tmp45 = _Function_1_1::Block(tmp9,tmp11,tmp44,tmp26,tmp21,tmp31,tmp16,tmp37,tmp39,tmp32);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(43)
	::phoenix::geometry::QuadGeometry tmp46 = tmp6->box(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(43)
	this->visual = tmp46;
	HX_STACK_LINE(56)
	::luxe::Draw tmp47 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(57)
	::mint::Control tmp48 = this->control;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(57)
	::String tmp49 = tmp48->name;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(57)
	::String tmp50 = (tmp49 + HX_HCSTRING(".border","\x9a","\xa3","\xf5","\xdc"));		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(58)
	::mint::render::luxe::LuxeMintRender tmp51 = this->render;		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(58)
	::phoenix::Batcher tmp52 = tmp51->options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(59)
	::mint::Control tmp53 = this->control;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(59)
	Float tmp54 = tmp53->x;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(59)
	::mint::Control tmp55 = this->control;		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(59)
	Float tmp56 = tmp55->canvas->scale;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(59)
	Float tmp57 = (tmp54 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(60)
	::mint::Control tmp58 = this->control;		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(60)
	Float tmp59 = tmp58->y;		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(60)
	::mint::Control tmp60 = this->control;		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(60)
	Float tmp61 = tmp60->canvas->scale;		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(60)
	Float tmp62 = (tmp59 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(61)
	::mint::Control tmp63 = this->control;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(61)
	Float tmp64 = tmp63->w;		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(61)
	::mint::Control tmp65 = this->control;		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(61)
	Float tmp66 = tmp65->canvas->scale;		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(61)
	Float tmp67 = (tmp64 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(62)
	::mint::Control tmp68 = this->control;		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(62)
	Float tmp69 = tmp68->h;		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(62)
	::mint::Control tmp70 = this->control;		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(62)
	Float tmp71 = tmp70->canvas->scale;		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(62)
	Float tmp72 = (tmp69 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(63)
	::phoenix::Color tmp73 = this->color_border;		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(64)
	::mint::render::luxe::LuxeMintRender tmp74 = this->render;		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(64)
	Dynamic tmp75 = tmp74->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(64)
	::mint::Control tmp76 = this->control;		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(64)
	Float tmp77 = tmp76->depth;		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(64)
	Float tmp78 = (tmp75 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(64)
	Float tmp79 = (tmp78 + ((Float)0.001));		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(65)
	::mint::Control tmp80 = this->control;		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(65)
	bool tmp81 = tmp80->visible;		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(66)
	::mint::Control tmp82 = this->control;		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(66)
	::mint::Control tmp83 = tmp82->clip_with;		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(66)
	::mint::Control tmp84 = this->control;		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(66)
	Float tmp85 = tmp84->canvas->scale;		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(66)
	::phoenix::Rectangle tmp86 = ::mint::render::luxe::Convert_obj::bounds(tmp83,tmp85);		HX_STACK_VAR(tmp86,"tmp86");
	struct _Function_1_2{
		inline static Dynamic Block( bool &tmp81,::phoenix::Rectangle &tmp86,::phoenix::Color &tmp73,::phoenix::Batcher &tmp52,Float &tmp72,Float &tmp62,Float &tmp79,Float &tmp67,::String &tmp50,Float &tmp57){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/render/luxe/Dropdown.hx",56,0x5e256880)
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
				__result->Add(HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89") , tmp86,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(56)
	Dynamic tmp87 = _Function_1_2::Block(tmp81,tmp86,tmp73,tmp52,tmp72,tmp62,tmp79,tmp67,tmp50,tmp57);		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(56)
	::phoenix::geometry::RectangleGeometry tmp88 = tmp47->rectangle(tmp87);		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(56)
	this->border = tmp88;
}
;
	return null();
}

//Dropdown_obj::~Dropdown_obj() { }

Dynamic Dropdown_obj::__CreateEmpty() { return  new Dropdown_obj; }
hx::ObjectPtr< Dropdown_obj > Dropdown_obj::__new(::mint::render::luxe::LuxeMintRender _render,::mint::Dropdown _control)
{  hx::ObjectPtr< Dropdown_obj > _result_ = new Dropdown_obj();
	_result_->__construct(_render,_control);
	return _result_;}

Dynamic Dropdown_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Dropdown_obj > _result_ = new Dropdown_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Dropdown_obj::update_clip( Float _scale){
{
		HX_STACK_FRAME("mint.render.luxe.Dropdown","update_clip",0xf800d835,"mint.render.luxe.Dropdown.update_clip","mint/render/luxe/Dropdown.hx",71,0x5e256880)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_scale,"_scale")
		HX_STACK_LINE(73)
		::mint::Control tmp = this->control;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		::mint::Control tmp1 = tmp->clip_with;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		Float tmp2 = _scale;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(73)
		::phoenix::Rectangle tmp3 = ::mint::render::luxe::Convert_obj::bounds(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(73)
		::phoenix::Rectangle _clip = tmp3;		HX_STACK_VAR(_clip,"_clip");
		HX_STACK_LINE(75)
		::phoenix::geometry::QuadGeometry tmp4 = this->visual;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(75)
		::phoenix::Rectangle tmp5 = _clip;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(75)
		tmp4->set_clip_rect(tmp5);
		HX_STACK_LINE(76)
		::phoenix::geometry::RectangleGeometry tmp6 = this->border;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(76)
		::phoenix::Rectangle tmp7 = _clip;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(76)
		tmp6->set_clip_rect(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Dropdown_obj,update_clip,(void))

Void Dropdown_obj::onscale( Float _scale,Float _prev_scale){
{
		HX_STACK_FRAME("mint.render.luxe.Dropdown","onscale",0x8bd9cdba,"mint.render.luxe.Dropdown.onscale","mint/render/luxe/Dropdown.hx",80,0x5e256880)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_scale,"_scale")
		HX_STACK_ARG(_prev_scale,"_prev_scale")
		HX_STACK_LINE(82)
		Float tmp = _scale;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		this->update_clip(tmp);
	}
return null();
}


Void Dropdown_obj::ondestroy( ){
{
		HX_STACK_FRAME("mint.render.luxe.Dropdown","ondestroy",0x4fb3582a,"mint.render.luxe.Dropdown.ondestroy","mint/render/luxe/Dropdown.hx",86,0x5e256880)
		HX_STACK_THIS(this)
		HX_STACK_LINE(88)
		::phoenix::geometry::QuadGeometry tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		tmp->drop(null());
		HX_STACK_LINE(89)
		::phoenix::geometry::RectangleGeometry tmp1 = this->border;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		tmp1->drop(null());
		HX_STACK_LINE(91)
		this->visual = null();
		HX_STACK_LINE(92)
		this->border = null();
	}
return null();
}


Void Dropdown_obj::onbounds( ){
{
		HX_STACK_FRAME("mint.render.luxe.Dropdown","onbounds",0xfcb1d145,"mint.render.luxe.Dropdown.onbounds","mint/render/luxe/Dropdown.hx",96,0x5e256880)
		HX_STACK_THIS(this)
		HX_STACK_LINE(98)
		{
			HX_STACK_LINE(98)
			::phoenix::geometry::QuadGeometry tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(98)
			::phoenix::Spatial tmp1 = tmp->transform->local;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(98)
			::phoenix::Vector _this = tmp1->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(98)
			::mint::Control tmp2 = this->control;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(98)
			Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(98)
			::mint::Control tmp4 = this->control;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(98)
			Float tmp5 = tmp4->canvas->scale;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(98)
			Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(98)
			Float _x = tmp6;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(98)
			::mint::Control tmp7 = this->control;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(98)
			Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(98)
			::mint::Control tmp9 = this->control;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(98)
			Float tmp10 = tmp9->canvas->scale;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(98)
			Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(98)
			Float _y = tmp11;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(98)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(98)
			_this->ignore_listeners = true;
			HX_STACK_LINE(98)
			{
				HX_STACK_LINE(98)
				_this->x = _x;
				HX_STACK_LINE(98)
				bool tmp12 = _this->_construct;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(98)
				if ((tmp12)){
					HX_STACK_LINE(98)
					_this->x;
				}
				else{
					HX_STACK_LINE(98)
					bool tmp13 = (_this->listen_x != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(98)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(98)
					if ((tmp13)){
						HX_STACK_LINE(98)
						bool tmp15 = _this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(98)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(98)
						tmp14 = !(tmp16);
					}
					else{
						HX_STACK_LINE(98)
						tmp14 = false;
					}
					HX_STACK_LINE(98)
					if ((tmp14)){
						HX_STACK_LINE(98)
						Float tmp15 = _x;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(98)
						_this->listen_x(tmp15);
					}
					HX_STACK_LINE(98)
					_this->x;
				}
			}
			HX_STACK_LINE(98)
			{
				HX_STACK_LINE(98)
				_this->y = _y;
				HX_STACK_LINE(98)
				bool tmp12 = _this->_construct;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(98)
				if ((tmp12)){
					HX_STACK_LINE(98)
					_this->y;
				}
				else{
					HX_STACK_LINE(98)
					bool tmp13 = (_this->listen_y != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(98)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(98)
					if ((tmp13)){
						HX_STACK_LINE(98)
						bool tmp15 = _this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(98)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(98)
						tmp14 = !(tmp16);
					}
					else{
						HX_STACK_LINE(98)
						tmp14 = false;
					}
					HX_STACK_LINE(98)
					if ((tmp14)){
						HX_STACK_LINE(98)
						Float tmp15 = _y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(98)
						_this->listen_y(tmp15);
					}
					HX_STACK_LINE(98)
					_this->y;
				}
			}
			HX_STACK_LINE(98)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(98)
			bool tmp12 = (_this->listen_x != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(98)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(98)
			if ((tmp12)){
				HX_STACK_LINE(98)
				bool tmp14 = _this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(98)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(98)
				tmp13 = !(tmp15);
			}
			else{
				HX_STACK_LINE(98)
				tmp13 = false;
			}
			HX_STACK_LINE(98)
			if ((tmp13)){
				HX_STACK_LINE(98)
				Float tmp14 = _this->x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(98)
				_this->listen_x(tmp14);
			}
			HX_STACK_LINE(98)
			bool tmp14 = (_this->listen_y != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(98)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(98)
			if ((tmp14)){
				HX_STACK_LINE(98)
				bool tmp16 = _this->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(98)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(98)
				tmp15 = !(tmp17);
			}
			else{
				HX_STACK_LINE(98)
				tmp15 = false;
			}
			HX_STACK_LINE(98)
			if ((tmp15)){
				HX_STACK_LINE(98)
				Float tmp16 = _this->y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(98)
				_this->listen_y(tmp16);
			}
			HX_STACK_LINE(98)
			_this;
		}
		HX_STACK_LINE(99)
		::phoenix::geometry::QuadGeometry tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(99)
		::mint::Control tmp1 = this->control;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		Float tmp2 = tmp1->w;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(99)
		::mint::Control tmp3 = this->control;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(99)
		Float tmp4 = tmp3->canvas->scale;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(99)
		Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(99)
		::mint::Control tmp6 = this->control;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(99)
		Float tmp7 = tmp6->h;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(99)
		::mint::Control tmp8 = this->control;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(99)
		Float tmp9 = tmp8->canvas->scale;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(99)
		Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(99)
		tmp->resize_xy(tmp5,tmp10);
		HX_STACK_LINE(100)
		::phoenix::geometry::RectangleGeometry tmp11 = this->border;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(100)
		::mint::Control tmp12 = this->control;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(100)
		Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(100)
		::mint::Control tmp14 = this->control;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(100)
		Float tmp15 = tmp14->canvas->scale;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(100)
		Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(100)
		::mint::Control tmp17 = this->control;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(100)
		Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(100)
		::mint::Control tmp19 = this->control;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(100)
		Float tmp20 = tmp19->canvas->scale;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(100)
		Float tmp21 = (tmp18 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(100)
		::mint::Control tmp22 = this->control;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(100)
		Float tmp23 = tmp22->w;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(100)
		::mint::Control tmp24 = this->control;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(100)
		Float tmp25 = tmp24->canvas->scale;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(100)
		Float tmp26 = (tmp23 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(100)
		Float tmp27 = (tmp26 + (int)1);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(100)
		::mint::Control tmp28 = this->control;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(100)
		Float tmp29 = tmp28->h;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(100)
		::mint::Control tmp30 = this->control;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(100)
		Float tmp31 = tmp30->canvas->scale;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(100)
		Float tmp32 = (tmp29 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(100)
		tmp11->set_xywh(tmp16,tmp21,tmp27,tmp32);
	}
return null();
}


Void Dropdown_obj::onclip( bool _disable,Float _x,Float _y,Float _w,Float _h){
{
		HX_STACK_FRAME("mint.render.luxe.Dropdown","onclip",0x720f65a0,"mint.render.luxe.Dropdown.onclip","mint/render/luxe/Dropdown.hx",104,0x5e256880)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_disable,"_disable")
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_w,"_w")
		HX_STACK_ARG(_h,"_h")
		HX_STACK_LINE(106)
		::mint::Control tmp = this->control;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(106)
		Float tmp1 = tmp->canvas->scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		this->update_clip(tmp1);
	}
return null();
}


Void Dropdown_obj::onvisible( bool _visible){
{
		HX_STACK_FRAME("mint.render.luxe.Dropdown","onvisible",0xce51a3a2,"mint.render.luxe.Dropdown.onvisible","mint/render/luxe/Dropdown.hx",110,0x5e256880)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_visible,"_visible")
		HX_STACK_LINE(112)
		::phoenix::geometry::QuadGeometry tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(112)
		::phoenix::geometry::RectangleGeometry tmp1 = this->border;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(112)
		bool tmp2 = _visible;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(112)
		bool tmp3 = tmp1->set_visible(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(112)
		tmp->set_visible(tmp3);
	}
return null();
}


Void Dropdown_obj::ondepth( Float _depth){
{
		HX_STACK_FRAME("mint.render.luxe.Dropdown","ondepth",0xea34f033,"mint.render.luxe.Dropdown.ondepth","mint/render/luxe/Dropdown.hx",116,0x5e256880)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_depth,"_depth")
		HX_STACK_LINE(118)
		::phoenix::geometry::QuadGeometry tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(118)
		::mint::render::luxe::LuxeMintRender tmp1 = this->render;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(118)
		Dynamic tmp2 = tmp1->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(118)
		Float tmp3 = _depth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(118)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(118)
		tmp->set_depth(tmp4);
		HX_STACK_LINE(119)
		::phoenix::geometry::RectangleGeometry tmp5 = this->border;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(119)
		::phoenix::geometry::QuadGeometry tmp6 = this->visual;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(119)
		Float tmp7 = tmp6->state->depth;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(119)
		Float tmp8 = (tmp7 + ((Float)0.001));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(119)
		tmp5->set_depth(tmp8);
	}
return null();
}



Dropdown_obj::Dropdown_obj()
{
}

void Dropdown_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Dropdown);
	HX_MARK_MEMBER_NAME(dropdown,"dropdown");
	HX_MARK_MEMBER_NAME(visual,"visual");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(color_border,"color_border");
	HX_MARK_MEMBER_NAME(render,"render");
	::mint::render::Render_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Dropdown_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dropdown,"dropdown");
	HX_VISIT_MEMBER_NAME(visual,"visual");
	HX_VISIT_MEMBER_NAME(border,"border");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(color_border,"color_border");
	HX_VISIT_MEMBER_NAME(render,"render");
	::mint::render::Render_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Dropdown_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 6:
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
		if (HX_FIELD_EQ(inName,"dropdown") ) { return dropdown; }
		if (HX_FIELD_EQ(inName,"onbounds") ) { return onbounds_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onvisible") ) { return onvisible_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"update_clip") ) { return update_clip_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"color_border") ) { return color_border; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Dropdown_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"visual") ) { visual=inValue.Cast< ::phoenix::geometry::QuadGeometry >(); return inValue; }
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast< ::phoenix::geometry::RectangleGeometry >(); return inValue; }
		if (HX_FIELD_EQ(inName,"render") ) { render=inValue.Cast< ::mint::render::luxe::LuxeMintRender >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dropdown") ) { dropdown=inValue.Cast< ::mint::Dropdown >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"color_border") ) { color_border=inValue.Cast< ::phoenix::Color >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Dropdown_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("dropdown","\x11","\x74","\x2f","\xfd"));
	outFields->push(HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef"));
	outFields->push(HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("color_border","\x88","\x2f","\x97","\x2e"));
	outFields->push(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::mint::Dropdown*/ ,(int)offsetof(Dropdown_obj,dropdown),HX_HCSTRING("dropdown","\x11","\x74","\x2f","\xfd")},
	{hx::fsObject /*::phoenix::geometry::QuadGeometry*/ ,(int)offsetof(Dropdown_obj,visual),HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef")},
	{hx::fsObject /*::phoenix::geometry::RectangleGeometry*/ ,(int)offsetof(Dropdown_obj,border),HX_HCSTRING("border","\xec","\x4c","\x1a","\x64")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Dropdown_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Dropdown_obj,color_border),HX_HCSTRING("color_border","\x88","\x2f","\x97","\x2e")},
	{hx::fsObject /*::mint::render::luxe::LuxeMintRender*/ ,(int)offsetof(Dropdown_obj,render),HX_HCSTRING("render","\x56","\x6b","\x29","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("dropdown","\x11","\x74","\x2f","\xfd"),
	HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef"),
	HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("color_border","\x88","\x2f","\x97","\x2e"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("update_clip","\x06","\x84","\x3e","\x47"),
	HX_HCSTRING("onscale","\x0b","\xfd","\xde","\x7b"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onbounds","\xd4","\x08","\x36","\x11"),
	HX_HCSTRING("onclip","\x6f","\x4b","\x73","\xf9"),
	HX_HCSTRING("onvisible","\x33","\x09","\x7e","\xad"),
	HX_HCSTRING("ondepth","\x84","\x1f","\x3a","\xda"),
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
	__mClass->mName = HX_HCSTRING("mint.render.luxe.Dropdown","\x1d","\x6a","\x17","\x7f");
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
} // end namespace render
} // end namespace luxe
