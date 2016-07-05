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
#ifndef INCLUDED_mint_render_luxe_LuxeMintRender
#include <mint/render/luxe/LuxeMintRender.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_ColorHSV
#include <phoenix/ColorHSV.h>
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
#ifndef INCLUDED_ui_AttributeBar
#include <ui/AttributeBar.h>
#endif
#ifndef INCLUDED_ui_render_AttributeBar
#include <ui/render/AttributeBar.h>
#endif
#ifndef INCLUDED_ui_render_MutantMintRenderer
#include <ui/render/MutantMintRenderer.h>
#endif
namespace ui{
namespace render{

Void AttributeBar_obj::__construct(::ui::render::MutantMintRenderer _render,::ui::AttributeBar _control)
{
HX_STACK_FRAME("ui.render.AttributeBar","new",0xd5cf7fa7,"ui.render.AttributeBar.new","ui/render/AttributeBar.hx",23,0x16fb6389)
HX_STACK_THIS(this)
HX_STACK_ARG(_render,"_render")
HX_STACK_ARG(_control,"_control")
{
	HX_STACK_LINE(35)
	this->padding = ((Float)0.5);
	HX_STACK_LINE(34)
	this->margin = ((Float)1.0);
	HX_STACK_LINE(39)
	this->attribute_bar = _control;
	HX_STACK_LINE(40)
	this->render = _render;
	HX_STACK_LINE(42)
	::ui::render::MutantMintRenderer tmp = this->render;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	::ui::AttributeBar tmp1 = _control;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(44)
	::ui::AttributeBar tmp2 = this->attribute_bar;		HX_STACK_VAR(tmp2,"tmp2");
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
			::phoenix::Color tmp7 = tmp6->rgb((int)2697513);		HX_STACK_VAR(tmp7,"tmp7");
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
		bool tmp6 = (_opt->__Field(HX_HCSTRING("color_bar","\xb7","\x55","\xaa","\x2f"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(47)
		if ((tmp6)){
			HX_STACK_LINE(47)
			::phoenix::Color tmp7 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(47)
			::phoenix::Color tmp8 = tmp7->rgb((int)10340963);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(47)
			_opt->__FieldRef(HX_HCSTRING("color_bar","\xb7","\x55","\xaa","\x2f")) = tmp8;
		}
		HX_STACK_LINE(47)
		tmp5 = _opt->__Field(HX_HCSTRING("color_bar","\xb7","\x55","\xaa","\x2f"), hx::paccDynamic );
	}
	HX_STACK_LINE(47)
	this->color_bar = tmp5;
	HX_STACK_LINE(48)
	::phoenix::Color tmp6 = this->color_bar;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(48)
	::phoenix::ColorHSV tmp7 = tmp6->toColorHSV();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(48)
	::phoenix::ColorHSV dark_bar = tmp7;		HX_STACK_VAR(dark_bar,"dark_bar");
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(49)
		::phoenix::ColorHSV _g = dark_bar;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(49)
		Float tmp8 = (_g->v * ((Float)0.3));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(49)
		_g->set_v(tmp8);
	}
	HX_STACK_LINE(50)
	::phoenix::Color tmp8 = dark_bar->toColor();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(50)
	this->color_bar_empty = tmp8;
	HX_STACK_LINE(51)
	Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		bool tmp10 = (_opt->__Field(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(51)
		if ((tmp10)){
			HX_STACK_LINE(51)
			_opt->__FieldRef(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba")) = ((Float)1.0);
		}
		HX_STACK_LINE(51)
		tmp9 = _opt->__Field(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"), hx::paccDynamic );
	}
	HX_STACK_LINE(51)
	this->margin = tmp9;
	HX_STACK_LINE(52)
	Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(52)
	{
		HX_STACK_LINE(52)
		bool tmp11 = (_opt->__Field(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(52)
		if ((tmp11)){
			HX_STACK_LINE(52)
			_opt->__FieldRef(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0")) = ((Float)0.5);
		}
		HX_STACK_LINE(52)
		tmp10 = _opt->__Field(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"), hx::paccDynamic );
	}
	HX_STACK_LINE(52)
	this->padding = tmp10;
	HX_STACK_LINE(54)
	::luxe::Draw tmp11 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(55)
	::mint::Control tmp12 = this->control;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(55)
	::String tmp13 = tmp12->name;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(55)
	::String tmp14 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(55)
	::String tmp15 = (tmp14 + HX_HCSTRING(".visual","\x6e","\x79","\x67","\x68"));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(56)
	::ui::render::MutantMintRenderer tmp16 = this->render;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(56)
	::phoenix::Batcher tmp17 = tmp16->options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(57)
	::mint::Control tmp18 = this->control;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(57)
	Float tmp19 = tmp18->x;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(57)
	::mint::Control tmp20 = this->control;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(57)
	Float tmp21 = tmp20->canvas->scale;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(57)
	Float tmp22 = (tmp19 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(58)
	::mint::Control tmp23 = this->control;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(58)
	Float tmp24 = tmp23->y;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(58)
	::mint::Control tmp25 = this->control;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(58)
	Float tmp26 = tmp25->canvas->scale;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(58)
	Float tmp27 = (tmp24 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(59)
	::mint::Control tmp28 = this->control;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(59)
	Float tmp29 = tmp28->w;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(59)
	::mint::Control tmp30 = this->control;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(59)
	Float tmp31 = tmp30->canvas->scale;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(59)
	Float tmp32 = (tmp29 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(60)
	::mint::Control tmp33 = this->control;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(60)
	Float tmp34 = tmp33->h;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(60)
	::mint::Control tmp35 = this->control;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(60)
	Float tmp36 = tmp35->canvas->scale;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(60)
	Float tmp37 = (tmp34 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(61)
	::phoenix::Color tmp38 = this->color;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(62)
	::ui::render::MutantMintRenderer tmp39 = this->render;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(62)
	Dynamic tmp40 = tmp39->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(62)
	::mint::Control tmp41 = this->control;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(62)
	Float tmp42 = tmp41->depth;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(62)
	Float tmp43 = (tmp40 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(63)
	::mint::Control tmp44 = this->control;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(63)
	bool tmp45 = tmp44->visible;		HX_STACK_VAR(tmp45,"tmp45");
	struct _Function_1_1{
		inline static Dynamic Block( Float &tmp22,::phoenix::Batcher &tmp17,::phoenix::Color &tmp38,::String &tmp15,bool &tmp45,Float &tmp27,Float &tmp37,Float &tmp32,Float &tmp43){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ui/render/AttributeBar.hx",54,0x16fb6389)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tmp15,false);
				__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp17,false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp22,false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp27,false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp32,false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp37,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp38,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp43,false);
				__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , tmp45,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(54)
	Dynamic tmp46 = _Function_1_1::Block(tmp22,tmp17,tmp38,tmp15,tmp45,tmp27,tmp37,tmp32,tmp43);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(54)
	::phoenix::geometry::QuadGeometry tmp47 = tmp11->box(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(54)
	this->visual = tmp47;
	HX_STACK_LINE(66)
	::mint::Control tmp48 = this->control;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(66)
	Float tmp49 = tmp48->canvas->scale;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(66)
	Float tmp50 = this->margin;		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(66)
	Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(66)
	Float _margin = tmp51;		HX_STACK_VAR(_margin,"_margin");
	HX_STACK_LINE(68)
	this->bars = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(69)
	{
		HX_STACK_LINE(69)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(69)
		::ui::AttributeBar tmp52 = this->attribute_bar;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(69)
		int _g = tmp52->max_value;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(69)
		while((true)){
			HX_STACK_LINE(69)
			bool tmp53 = (_g1 < _g);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(69)
			bool tmp54 = !(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(69)
			if ((tmp54)){
				HX_STACK_LINE(69)
				break;
			}
			HX_STACK_LINE(69)
			int tmp55 = (_g1)++;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(69)
			int i = tmp55;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(71)
			int tmp56 = i;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(71)
			this->create_bar(tmp56);
		}
	}
	HX_STACK_LINE(74)
	::ui::AttributeBar tmp52 = this->attribute_bar;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(74)
	Dynamic tmp53 = this->onchange_dyn();		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(74)
	tmp52->onchange->listen(tmp53);
}
;
	return null();
}

//AttributeBar_obj::~AttributeBar_obj() { }

Dynamic AttributeBar_obj::__CreateEmpty() { return  new AttributeBar_obj; }
hx::ObjectPtr< AttributeBar_obj > AttributeBar_obj::__new(::ui::render::MutantMintRenderer _render,::ui::AttributeBar _control)
{  hx::ObjectPtr< AttributeBar_obj > _result_ = new AttributeBar_obj();
	_result_->__construct(_render,_control);
	return _result_;}

Dynamic AttributeBar_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AttributeBar_obj > _result_ = new AttributeBar_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void AttributeBar_obj::onchange( int _val,int _max){
{
		HX_STACK_FRAME("ui.render.AttributeBar","onchange",0xa6aba328,"ui.render.AttributeBar.onchange","ui/render/AttributeBar.hx",78,0x16fb6389)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_val,"_val")
		HX_STACK_ARG(_max,"_max")
		HX_STACK_LINE(79)
		int tmp = this->bars->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		int tmp1 = _max;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(79)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(79)
		if ((tmp2)){
			HX_STACK_LINE(81)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(81)
			while((true)){
				HX_STACK_LINE(81)
				bool tmp3 = (_g < _max);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(81)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(81)
				if ((tmp4)){
					HX_STACK_LINE(81)
					break;
				}
				HX_STACK_LINE(81)
				int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(81)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(83)
				::phoenix::geometry::QuadGeometry tmp6 = this->bars->__get(i).StaticCast< ::phoenix::geometry::QuadGeometry >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(83)
				bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(83)
				if ((tmp7)){
					HX_STACK_LINE(85)
					::phoenix::geometry::QuadGeometry tmp8 = this->bars->__get(i).StaticCast< ::phoenix::geometry::QuadGeometry >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(85)
					tmp8->drop(null());
				}
				HX_STACK_LINE(87)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(87)
				this->create_bar(tmp8);
			}
		}
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(90)
			while((true)){
				HX_STACK_LINE(90)
				bool tmp3 = (_g < _max);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(90)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(90)
				if ((tmp4)){
					HX_STACK_LINE(90)
					break;
				}
				HX_STACK_LINE(90)
				int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(90)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(92)
				::phoenix::geometry::QuadGeometry tmp6 = this->bars->__get(i).StaticCast< ::phoenix::geometry::QuadGeometry >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(92)
				bool tmp7 = (i < _val);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(92)
				::phoenix::Color tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(92)
				if ((tmp7)){
					HX_STACK_LINE(92)
					tmp8 = this->color_bar;
				}
				else{
					HX_STACK_LINE(92)
					tmp8 = this->color_bar_empty;
				}
				HX_STACK_LINE(92)
				tmp6->set_color(tmp8);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AttributeBar_obj,onchange,(void))

Void AttributeBar_obj::create_bar( int _index){
{
		HX_STACK_FRAME("ui.render.AttributeBar","create_bar",0x5fb06369,"ui.render.AttributeBar.create_bar","ui/render/AttributeBar.hx",97,0x16fb6389)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_index,"_index")
		HX_STACK_LINE(98)
		::mint::Control tmp = this->control;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		Float tmp1 = tmp->canvas->scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(98)
		Float tmp2 = this->margin;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(98)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(98)
		Float _margin = tmp3;		HX_STACK_VAR(_margin,"_margin");
		HX_STACK_LINE(99)
		::luxe::Draw tmp4 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(100)
		::mint::Control tmp5 = this->control;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(100)
		::String tmp6 = tmp5->name;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(100)
		::String tmp7 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(100)
		::String tmp8 = (tmp7 + HX_HCSTRING(".bar.","\x29","\x96","\x7f","\xbd"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(100)
		int tmp9 = _index;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(100)
		::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(101)
		::ui::render::MutantMintRenderer tmp11 = this->render;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(101)
		::phoenix::Batcher tmp12 = tmp11->options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(102)
		::mint::Control tmp13 = this->control;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(102)
		Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(102)
		::mint::Control tmp15 = this->control;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(102)
		Float tmp16 = tmp15->canvas->scale;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(102)
		Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(102)
		int tmp18 = _index;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(102)
		Float tmp19 = this->get_bar_x(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(102)
		Float tmp20 = (tmp17 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(103)
		::mint::Control tmp21 = this->control;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(103)
		Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(103)
		::mint::Control tmp23 = this->control;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(103)
		Float tmp24 = tmp23->canvas->scale;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(103)
		Float tmp25 = (tmp22 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(103)
		Float tmp26 = _margin;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(103)
		Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(104)
		Float tmp28 = this->get_bar_width();		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(105)
		::mint::Control tmp29 = this->control;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(105)
		Float tmp30 = tmp29->h;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(105)
		::mint::Control tmp31 = this->control;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(105)
		Float tmp32 = tmp31->canvas->scale;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(105)
		Float tmp33 = (tmp30 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(105)
		Float tmp34 = (_margin * (int)2);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(105)
		Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(106)
		int tmp36 = _index;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(106)
		::ui::AttributeBar tmp37 = this->attribute_bar;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(106)
		int tmp38 = tmp37->value;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(106)
		bool tmp39 = (tmp36 < tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(106)
		::phoenix::Color tmp40;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(106)
		if ((tmp39)){
			HX_STACK_LINE(106)
			tmp40 = this->color_bar;
		}
		else{
			HX_STACK_LINE(106)
			tmp40 = this->color_bar_empty;
		}
		HX_STACK_LINE(107)
		::ui::render::MutantMintRenderer tmp41 = this->render;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(107)
		Dynamic tmp42 = tmp41->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(107)
		::mint::Control tmp43 = this->control;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(107)
		Float tmp44 = tmp43->depth;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(107)
		Float tmp45 = (tmp42 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(107)
		Float tmp46 = (tmp45 + ((Float)0.001));		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(108)
		::mint::Control tmp47 = this->control;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(108)
		bool tmp48 = tmp47->visible;		HX_STACK_VAR(tmp48,"tmp48");
		struct _Function_1_1{
			inline static Dynamic Block( Float &tmp28,bool &tmp48,Float &tmp20,Float &tmp46,::phoenix::Color &tmp40,::String &tmp10,::phoenix::Batcher &tmp12,Float &tmp27,Float &tmp35){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ui/render/AttributeBar.hx",99,0x16fb6389)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tmp10,false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp12,false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp20,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp27,false);
					__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp28,false);
					__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp35,false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp40,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp46,false);
					__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , tmp48,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(99)
		Dynamic tmp49 = _Function_1_1::Block(tmp28,tmp48,tmp20,tmp46,tmp40,tmp10,tmp12,tmp27,tmp35);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(99)
		::phoenix::geometry::QuadGeometry tmp50 = tmp4->box(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(99)
		this->bars[_index] = tmp50;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AttributeBar_obj,create_bar,(void))

Float AttributeBar_obj::get_bar_width( ){
	HX_STACK_FRAME("ui.render.AttributeBar","get_bar_width",0xdf005138,"ui.render.AttributeBar.get_bar_width","ui/render/AttributeBar.hx",113,0x16fb6389)
	HX_STACK_THIS(this)
	HX_STACK_LINE(114)
	::mint::Control tmp = this->control;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	Float tmp1 = tmp->canvas->scale;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(114)
	Float tmp2 = this->margin;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(114)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(114)
	Float _margin = tmp3;		HX_STACK_VAR(_margin,"_margin");
	HX_STACK_LINE(115)
	::mint::Control tmp4 = this->control;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(115)
	Float tmp5 = tmp4->canvas->scale;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(115)
	Float tmp6 = this->padding;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(115)
	Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(115)
	Float _padding = tmp7;		HX_STACK_VAR(_padding,"_padding");
	HX_STACK_LINE(116)
	::mint::Control tmp8 = this->control;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(116)
	Float tmp9 = tmp8->w;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(116)
	::mint::Control tmp10 = this->control;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(116)
	Float tmp11 = tmp10->canvas->scale;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(116)
	Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(116)
	Float tmp13 = (_margin * (int)2);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(116)
	Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(116)
	Float tmp15 = _padding;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(116)
	::ui::AttributeBar tmp16 = this->attribute_bar;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(116)
	int tmp17 = tmp16->max_value;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(116)
	int tmp18 = (tmp17 - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(116)
	Float tmp19 = (tmp15 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(116)
	Float tmp20 = (tmp14 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(116)
	::ui::AttributeBar tmp21 = this->attribute_bar;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(116)
	int tmp22 = tmp21->max_value;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(116)
	Float tmp23 = (Float(tmp20) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(116)
	Float _width = tmp23;		HX_STACK_VAR(_width,"_width");
	HX_STACK_LINE(118)
	Float tmp24 = _width;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(118)
	return tmp24;
}


HX_DEFINE_DYNAMIC_FUNC0(AttributeBar_obj,get_bar_width,return )

Float AttributeBar_obj::get_bar_x( int _index){
	HX_STACK_FRAME("ui.render.AttributeBar","get_bar_x",0x49bf9aaa,"ui.render.AttributeBar.get_bar_x","ui/render/AttributeBar.hx",122,0x16fb6389)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_index,"_index")
	HX_STACK_LINE(123)
	::mint::Control tmp = this->control;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	Float tmp1 = tmp->canvas->scale;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(123)
	Float tmp2 = this->margin;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(123)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(123)
	Float _margin = tmp3;		HX_STACK_VAR(_margin,"_margin");
	HX_STACK_LINE(124)
	::mint::Control tmp4 = this->control;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(124)
	Float tmp5 = tmp4->canvas->scale;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(124)
	Float tmp6 = this->padding;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(124)
	Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(124)
	Float _padding = tmp7;		HX_STACK_VAR(_padding,"_padding");
	HX_STACK_LINE(125)
	Float tmp8 = this->get_bar_width();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(125)
	Float _width = tmp8;		HX_STACK_VAR(_width,"_width");
	HX_STACK_LINE(126)
	Float tmp9 = _margin;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(126)
	Float tmp10 = (_padding + _width);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(126)
	int tmp11 = _index;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(126)
	Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(126)
	Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(126)
	Float _x = tmp13;		HX_STACK_VAR(_x,"_x");
	HX_STACK_LINE(128)
	Float tmp14 = _x;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(128)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC1(AttributeBar_obj,get_bar_x,return )

Void AttributeBar_obj::ondestroy( ){
{
		HX_STACK_FRAME("ui.render.AttributeBar","ondestroy",0x873c9c42,"ui.render.AttributeBar.ondestroy","ui/render/AttributeBar.hx",132,0x16fb6389)
		HX_STACK_THIS(this)
		HX_STACK_LINE(133)
		::phoenix::geometry::QuadGeometry tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		tmp->drop(null());
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(134)
			Array< ::Dynamic > _g1 = this->bars;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(134)
			while((true)){
				HX_STACK_LINE(134)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(134)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(134)
				if ((tmp2)){
					HX_STACK_LINE(134)
					break;
				}
				HX_STACK_LINE(134)
				::phoenix::geometry::QuadGeometry tmp3 = _g1->__get(_g).StaticCast< ::phoenix::geometry::QuadGeometry >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(134)
				::phoenix::geometry::QuadGeometry bar = tmp3;		HX_STACK_VAR(bar,"bar");
				HX_STACK_LINE(134)
				++(_g);
				HX_STACK_LINE(134)
				bar->drop(null());
			}
		}
		HX_STACK_LINE(135)
		this->visual = null();
		HX_STACK_LINE(136)
		this->bars = null();
	}
return null();
}


Void AttributeBar_obj::onbounds( ){
{
		HX_STACK_FRAME("ui.render.AttributeBar","onbounds",0x5556982d,"ui.render.AttributeBar.onbounds","ui/render/AttributeBar.hx",140,0x16fb6389)
		HX_STACK_THIS(this)
		HX_STACK_LINE(141)
		::mint::Control tmp = this->control;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(141)
		Float tmp1 = tmp->canvas->scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(141)
		Float tmp2 = this->margin;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(141)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(141)
		Float _margin = tmp3;		HX_STACK_VAR(_margin,"_margin");
		HX_STACK_LINE(143)
		{
			HX_STACK_LINE(143)
			::phoenix::geometry::QuadGeometry tmp4 = this->visual;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(143)
			::phoenix::Spatial tmp5 = tmp4->transform->local;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(143)
			::phoenix::Vector _this = tmp5->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(143)
			::mint::Control tmp6 = this->control;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(143)
			Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(143)
			::mint::Control tmp8 = this->control;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(143)
			Float tmp9 = tmp8->canvas->scale;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(143)
			Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(143)
			Float _x = tmp10;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(143)
			::mint::Control tmp11 = this->control;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(143)
			Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(143)
			::mint::Control tmp13 = this->control;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(143)
			Float tmp14 = tmp13->canvas->scale;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(143)
			Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(143)
			Float _y = tmp15;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(143)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(143)
			_this->ignore_listeners = true;
			HX_STACK_LINE(143)
			{
				HX_STACK_LINE(143)
				_this->x = _x;
				HX_STACK_LINE(143)
				bool tmp16 = _this->_construct;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(143)
				if ((tmp16)){
					HX_STACK_LINE(143)
					_this->x;
				}
				else{
					HX_STACK_LINE(143)
					bool tmp17 = (_this->listen_x != null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(143)
					bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(143)
					if ((tmp17)){
						HX_STACK_LINE(143)
						bool tmp19 = _this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(143)
						bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(143)
						tmp18 = !(tmp20);
					}
					else{
						HX_STACK_LINE(143)
						tmp18 = false;
					}
					HX_STACK_LINE(143)
					if ((tmp18)){
						HX_STACK_LINE(143)
						Float tmp19 = _x;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(143)
						_this->listen_x(tmp19);
					}
					HX_STACK_LINE(143)
					_this->x;
				}
			}
			HX_STACK_LINE(143)
			{
				HX_STACK_LINE(143)
				_this->y = _y;
				HX_STACK_LINE(143)
				bool tmp16 = _this->_construct;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(143)
				if ((tmp16)){
					HX_STACK_LINE(143)
					_this->y;
				}
				else{
					HX_STACK_LINE(143)
					bool tmp17 = (_this->listen_y != null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(143)
					bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(143)
					if ((tmp17)){
						HX_STACK_LINE(143)
						bool tmp19 = _this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(143)
						bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(143)
						tmp18 = !(tmp20);
					}
					else{
						HX_STACK_LINE(143)
						tmp18 = false;
					}
					HX_STACK_LINE(143)
					if ((tmp18)){
						HX_STACK_LINE(143)
						Float tmp19 = _y;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(143)
						_this->listen_y(tmp19);
					}
					HX_STACK_LINE(143)
					_this->y;
				}
			}
			HX_STACK_LINE(143)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(143)
			bool tmp16 = (_this->listen_x != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(143)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(143)
			if ((tmp16)){
				HX_STACK_LINE(143)
				bool tmp18 = _this->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(143)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(143)
				tmp17 = !(tmp19);
			}
			else{
				HX_STACK_LINE(143)
				tmp17 = false;
			}
			HX_STACK_LINE(143)
			if ((tmp17)){
				HX_STACK_LINE(143)
				Float tmp18 = _this->x;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(143)
				_this->listen_x(tmp18);
			}
			HX_STACK_LINE(143)
			bool tmp18 = (_this->listen_y != null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(143)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(143)
			if ((tmp18)){
				HX_STACK_LINE(143)
				bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(143)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(143)
				tmp19 = !(tmp21);
			}
			else{
				HX_STACK_LINE(143)
				tmp19 = false;
			}
			HX_STACK_LINE(143)
			if ((tmp19)){
				HX_STACK_LINE(143)
				Float tmp20 = _this->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(143)
				_this->listen_y(tmp20);
			}
			HX_STACK_LINE(143)
			_this;
		}
		HX_STACK_LINE(144)
		::phoenix::geometry::QuadGeometry tmp4 = this->visual;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(144)
		::mint::Control tmp5 = this->control;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(144)
		Float tmp6 = tmp5->w;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(144)
		::mint::Control tmp7 = this->control;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(144)
		Float tmp8 = tmp7->canvas->scale;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(144)
		Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(144)
		::mint::Control tmp10 = this->control;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(144)
		Float tmp11 = tmp10->h;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(144)
		::mint::Control tmp12 = this->control;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(144)
		Float tmp13 = tmp12->canvas->scale;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(144)
		Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(144)
		tmp4->resize_xy(tmp9,tmp14);
		HX_STACK_LINE(146)
		{
			HX_STACK_LINE(146)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(146)
			int tmp15 = this->bars->length;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(146)
			int _g = tmp15;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(146)
			while((true)){
				HX_STACK_LINE(146)
				bool tmp16 = (_g1 < _g);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(146)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(146)
				if ((tmp17)){
					HX_STACK_LINE(146)
					break;
				}
				HX_STACK_LINE(146)
				int tmp18 = (_g1)++;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(146)
				int i = tmp18;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(148)
				::phoenix::geometry::QuadGeometry tmp19 = this->bars->__get(i).StaticCast< ::phoenix::geometry::QuadGeometry >();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(148)
				::phoenix::geometry::QuadGeometry bar = tmp19;		HX_STACK_VAR(bar,"bar");
				HX_STACK_LINE(149)
				{
					HX_STACK_LINE(149)
					::phoenix::Spatial tmp20 = bar->transform->local;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(149)
					::phoenix::Vector _this = tmp20->pos;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(149)
					::mint::Control tmp21 = this->control;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(149)
					Float tmp22 = tmp21->x;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(149)
					::mint::Control tmp23 = this->control;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(149)
					Float tmp24 = tmp23->canvas->scale;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(149)
					Float tmp25 = (tmp22 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(149)
					int tmp26 = i;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(149)
					Float tmp27 = this->get_bar_x(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(149)
					Float tmp28 = (tmp25 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(149)
					Float _x = tmp28;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(149)
					::mint::Control tmp29 = this->control;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(149)
					Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(149)
					::mint::Control tmp31 = this->control;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(149)
					Float tmp32 = tmp31->canvas->scale;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(149)
					Float tmp33 = (tmp30 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(149)
					Float tmp34 = _margin;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(149)
					Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(149)
					Float _y = tmp35;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(149)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(149)
					_this->ignore_listeners = true;
					HX_STACK_LINE(149)
					{
						HX_STACK_LINE(149)
						_this->x = _x;
						HX_STACK_LINE(149)
						bool tmp36 = _this->_construct;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(149)
						if ((tmp36)){
							HX_STACK_LINE(149)
							_this->x;
						}
						else{
							HX_STACK_LINE(149)
							bool tmp37 = (_this->listen_x != null());		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(149)
							bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(149)
							if ((tmp37)){
								HX_STACK_LINE(149)
								bool tmp39 = _this->ignore_listeners;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(149)
								bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(149)
								tmp38 = !(tmp40);
							}
							else{
								HX_STACK_LINE(149)
								tmp38 = false;
							}
							HX_STACK_LINE(149)
							if ((tmp38)){
								HX_STACK_LINE(149)
								Float tmp39 = _x;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(149)
								_this->listen_x(tmp39);
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
						bool tmp36 = _this->_construct;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(149)
						if ((tmp36)){
							HX_STACK_LINE(149)
							_this->y;
						}
						else{
							HX_STACK_LINE(149)
							bool tmp37 = (_this->listen_y != null());		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(149)
							bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(149)
							if ((tmp37)){
								HX_STACK_LINE(149)
								bool tmp39 = _this->ignore_listeners;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(149)
								bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(149)
								tmp38 = !(tmp40);
							}
							else{
								HX_STACK_LINE(149)
								tmp38 = false;
							}
							HX_STACK_LINE(149)
							if ((tmp38)){
								HX_STACK_LINE(149)
								Float tmp39 = _y;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(149)
								_this->listen_y(tmp39);
							}
							HX_STACK_LINE(149)
							_this->y;
						}
					}
					HX_STACK_LINE(149)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(149)
					bool tmp36 = (_this->listen_x != null());		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(149)
					bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(149)
					if ((tmp36)){
						HX_STACK_LINE(149)
						bool tmp38 = _this->ignore_listeners;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(149)
						bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(149)
						tmp37 = !(tmp39);
					}
					else{
						HX_STACK_LINE(149)
						tmp37 = false;
					}
					HX_STACK_LINE(149)
					if ((tmp37)){
						HX_STACK_LINE(149)
						Float tmp38 = _this->x;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(149)
						_this->listen_x(tmp38);
					}
					HX_STACK_LINE(149)
					bool tmp38 = (_this->listen_y != null());		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(149)
					bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(149)
					if ((tmp38)){
						HX_STACK_LINE(149)
						bool tmp40 = _this->ignore_listeners;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(149)
						bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(149)
						tmp39 = !(tmp41);
					}
					else{
						HX_STACK_LINE(149)
						tmp39 = false;
					}
					HX_STACK_LINE(149)
					if ((tmp39)){
						HX_STACK_LINE(149)
						Float tmp40 = _this->y;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(149)
						_this->listen_y(tmp40);
					}
					HX_STACK_LINE(149)
					_this;
				}
				HX_STACK_LINE(150)
				Float tmp20 = this->get_bar_width();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(150)
				::mint::Control tmp21 = this->control;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(150)
				Float tmp22 = tmp21->h;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(150)
				::mint::Control tmp23 = this->control;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(150)
				Float tmp24 = tmp23->canvas->scale;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(150)
				Float tmp25 = (tmp22 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(150)
				Float tmp26 = (_margin * (int)2);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(150)
				Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(150)
				bar->resize_xy(tmp20,tmp27);
			}
		}
	}
return null();
}


Void AttributeBar_obj::onvisible( bool _visible){
{
		HX_STACK_FRAME("ui.render.AttributeBar","onvisible",0x05dae7ba,"ui.render.AttributeBar.onvisible","ui/render/AttributeBar.hx",155,0x16fb6389)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_visible,"_visible")
		HX_STACK_LINE(156)
		::phoenix::geometry::QuadGeometry tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(156)
		bool tmp1 = _visible;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(156)
		tmp->set_visible(tmp1);
		HX_STACK_LINE(157)
		{
			HX_STACK_LINE(157)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(157)
			Array< ::Dynamic > _g1 = this->bars;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(157)
			while((true)){
				HX_STACK_LINE(157)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(157)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(157)
				if ((tmp3)){
					HX_STACK_LINE(157)
					break;
				}
				HX_STACK_LINE(157)
				::phoenix::geometry::QuadGeometry tmp4 = _g1->__get(_g).StaticCast< ::phoenix::geometry::QuadGeometry >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(157)
				::phoenix::geometry::QuadGeometry bar = tmp4;		HX_STACK_VAR(bar,"bar");
				HX_STACK_LINE(157)
				++(_g);
				HX_STACK_LINE(157)
				bool tmp5 = _visible;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(157)
				bar->set_visible(tmp5);
			}
		}
	}
return null();
}


Void AttributeBar_obj::ondepth( Float _depth){
{
		HX_STACK_FRAME("ui.render.AttributeBar","ondepth",0x8a2c7e4b,"ui.render.AttributeBar.ondepth","ui/render/AttributeBar.hx",161,0x16fb6389)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_depth,"_depth")
		HX_STACK_LINE(162)
		::phoenix::geometry::QuadGeometry tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(162)
		::ui::render::MutantMintRenderer tmp1 = this->render;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		Dynamic tmp2 = tmp1->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		Float tmp3 = _depth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(162)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(162)
		tmp->set_depth(tmp4);
		HX_STACK_LINE(163)
		{
			HX_STACK_LINE(163)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(163)
			Array< ::Dynamic > _g1 = this->bars;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(163)
			while((true)){
				HX_STACK_LINE(163)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(163)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(163)
				if ((tmp6)){
					HX_STACK_LINE(163)
					break;
				}
				HX_STACK_LINE(163)
				::phoenix::geometry::QuadGeometry tmp7 = _g1->__get(_g).StaticCast< ::phoenix::geometry::QuadGeometry >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(163)
				::phoenix::geometry::QuadGeometry bar = tmp7;		HX_STACK_VAR(bar,"bar");
				HX_STACK_LINE(163)
				++(_g);
				HX_STACK_LINE(163)
				::phoenix::geometry::QuadGeometry tmp8 = this->visual;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(163)
				Float tmp9 = tmp8->state->depth;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(163)
				Float tmp10 = (tmp9 + ((Float)0.001));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(163)
				bar->set_depth(tmp10);
			}
		}
	}
return null();
}



AttributeBar_obj::AttributeBar_obj()
{
}

void AttributeBar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AttributeBar);
	HX_MARK_MEMBER_NAME(attribute_bar,"attribute_bar");
	HX_MARK_MEMBER_NAME(visual,"visual");
	HX_MARK_MEMBER_NAME(bars,"bars");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(color_bar,"color_bar");
	HX_MARK_MEMBER_NAME(color_bar_empty,"color_bar_empty");
	HX_MARK_MEMBER_NAME(render,"render");
	HX_MARK_MEMBER_NAME(margin,"margin");
	HX_MARK_MEMBER_NAME(padding,"padding");
	::mint::render::Render_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AttributeBar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(attribute_bar,"attribute_bar");
	HX_VISIT_MEMBER_NAME(visual,"visual");
	HX_VISIT_MEMBER_NAME(bars,"bars");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(color_bar,"color_bar");
	HX_VISIT_MEMBER_NAME(color_bar_empty,"color_bar_empty");
	HX_VISIT_MEMBER_NAME(render,"render");
	HX_VISIT_MEMBER_NAME(margin,"margin");
	HX_VISIT_MEMBER_NAME(padding,"padding");
	::mint::render::Render_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AttributeBar_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bars") ) { return bars; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"visual") ) { return visual; }
		if (HX_FIELD_EQ(inName,"render") ) { return render; }
		if (HX_FIELD_EQ(inName,"margin") ) { return margin; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"padding") ) { return padding; }
		if (HX_FIELD_EQ(inName,"ondepth") ) { return ondepth_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onchange") ) { return onchange_dyn(); }
		if (HX_FIELD_EQ(inName,"onbounds") ) { return onbounds_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"color_bar") ) { return color_bar; }
		if (HX_FIELD_EQ(inName,"get_bar_x") ) { return get_bar_x_dyn(); }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onvisible") ) { return onvisible_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"create_bar") ) { return create_bar_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"attribute_bar") ) { return attribute_bar; }
		if (HX_FIELD_EQ(inName,"get_bar_width") ) { return get_bar_width_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"color_bar_empty") ) { return color_bar_empty; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AttributeBar_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bars") ) { bars=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"visual") ) { visual=inValue.Cast< ::phoenix::geometry::QuadGeometry >(); return inValue; }
		if (HX_FIELD_EQ(inName,"render") ) { render=inValue.Cast< ::ui::render::MutantMintRenderer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"margin") ) { margin=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"padding") ) { padding=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"color_bar") ) { color_bar=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"attribute_bar") ) { attribute_bar=inValue.Cast< ::ui::AttributeBar >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"color_bar_empty") ) { color_bar_empty=inValue.Cast< ::phoenix::Color >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AttributeBar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("attribute_bar","\xf0","\xa4","\x36","\x72"));
	outFields->push(HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef"));
	outFields->push(HX_HCSTRING("bars","\x40","\xe7","\x10","\x41"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("color_bar","\xb7","\x55","\xaa","\x2f"));
	outFields->push(HX_HCSTRING("color_bar_empty","\xc5","\x7a","\x31","\x11"));
	outFields->push(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"));
	outFields->push(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"));
	outFields->push(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::ui::AttributeBar*/ ,(int)offsetof(AttributeBar_obj,attribute_bar),HX_HCSTRING("attribute_bar","\xf0","\xa4","\x36","\x72")},
	{hx::fsObject /*::phoenix::geometry::QuadGeometry*/ ,(int)offsetof(AttributeBar_obj,visual),HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(AttributeBar_obj,bars),HX_HCSTRING("bars","\x40","\xe7","\x10","\x41")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(AttributeBar_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(AttributeBar_obj,color_bar),HX_HCSTRING("color_bar","\xb7","\x55","\xaa","\x2f")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(AttributeBar_obj,color_bar_empty),HX_HCSTRING("color_bar_empty","\xc5","\x7a","\x31","\x11")},
	{hx::fsObject /*::ui::render::MutantMintRenderer*/ ,(int)offsetof(AttributeBar_obj,render),HX_HCSTRING("render","\x56","\x6b","\x29","\x05")},
	{hx::fsFloat,(int)offsetof(AttributeBar_obj,margin),HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba")},
	{hx::fsFloat,(int)offsetof(AttributeBar_obj,padding),HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("attribute_bar","\xf0","\xa4","\x36","\x72"),
	HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef"),
	HX_HCSTRING("bars","\x40","\xe7","\x10","\x41"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("color_bar","\xb7","\x55","\xaa","\x2f"),
	HX_HCSTRING("color_bar_empty","\xc5","\x7a","\x31","\x11"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"),
	HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"),
	HX_HCSTRING("onchange","\xcf","\x13","\x8b","\x62"),
	HX_HCSTRING("create_bar","\xd0","\x8b","\xca","\x66"),
	HX_HCSTRING("get_bar_width","\x31","\x23","\xc4","\x78"),
	HX_HCSTRING("get_bar_x","\x23","\xbc","\x62","\xf1"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onbounds","\xd4","\x08","\x36","\x11"),
	HX_HCSTRING("onvisible","\x33","\x09","\x7e","\xad"),
	HX_HCSTRING("ondepth","\x84","\x1f","\x3a","\xda"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AttributeBar_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AttributeBar_obj::__mClass,"__mClass");
};

#endif

hx::Class AttributeBar_obj::__mClass;

void AttributeBar_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ui.render.AttributeBar","\x35","\x20","\xc7","\xf0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AttributeBar_obj >;
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

} // end namespace ui
} // end namespace render
