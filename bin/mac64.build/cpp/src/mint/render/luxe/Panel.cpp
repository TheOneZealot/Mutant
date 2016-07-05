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
#ifndef INCLUDED_mint_Panel
#include <mint/Panel.h>
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
#ifndef INCLUDED_mint_render_luxe_Panel
#include <mint/render/luxe/Panel.h>
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

Void Panel_obj::__construct(::mint::render::luxe::LuxeMintRender _render,::mint::Panel _control)
{
HX_STACK_FRAME("mint.render.luxe.Panel","new",0xad11426a,"mint.render.luxe.Panel.new","mint/render/luxe/Panel.hx",27,0x7b269b27)
HX_STACK_THIS(this)
HX_STACK_ARG(_render,"_render")
HX_STACK_ARG(_control,"_control")
{
	HX_STACK_LINE(29)
	this->panel = _control;
	HX_STACK_LINE(30)
	this->render = _render;
	HX_STACK_LINE(32)
	::mint::render::luxe::LuxeMintRender tmp = this->render;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	::mint::Panel tmp1 = _control;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(34)
	::mint::Panel tmp2 = this->panel;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	Dynamic tmp3 = tmp2->options->__Field(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	Dynamic _opt = tmp3;		HX_STACK_VAR(_opt,"_opt");
	HX_STACK_LINE(36)
	::phoenix::Color tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		bool tmp5 = (_opt->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(36)
		if ((tmp5)){
			HX_STACK_LINE(36)
			::phoenix::Color tmp6 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(36)
			::phoenix::Color tmp7 = tmp6->rgb((int)2368548);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(36)
			_opt->__FieldRef(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")) = tmp7;
		}
		HX_STACK_LINE(36)
		tmp4 = _opt->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );
	}
	HX_STACK_LINE(36)
	this->color = tmp4;
	HX_STACK_LINE(38)
	::luxe::Draw tmp5 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(39)
	::mint::Control tmp6 = this->control;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(39)
	::String tmp7 = tmp6->name;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(39)
	::String tmp8 = (tmp7 + HX_HCSTRING(".visual","\x6e","\x79","\x67","\x68"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(40)
	::mint::render::luxe::LuxeMintRender tmp9 = this->render;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(40)
	::phoenix::Batcher tmp10 = tmp9->options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(41)
	::mint::Control tmp11 = this->control;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(41)
	Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(41)
	::mint::Control tmp13 = this->control;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(41)
	Float tmp14 = tmp13->canvas->scale;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(41)
	Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(42)
	::mint::Control tmp16 = this->control;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(42)
	Float tmp17 = tmp16->y;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(42)
	::mint::Control tmp18 = this->control;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(42)
	Float tmp19 = tmp18->canvas->scale;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(42)
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
	HX_STACK_LINE(44)
	::mint::Control tmp26 = this->control;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(44)
	Float tmp27 = tmp26->h;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(44)
	::mint::Control tmp28 = this->control;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(44)
	Float tmp29 = tmp28->canvas->scale;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(44)
	Float tmp30 = (tmp27 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(45)
	::phoenix::Color tmp31 = this->color;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(46)
	::mint::render::luxe::LuxeMintRender tmp32 = this->render;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(46)
	Dynamic tmp33 = tmp32->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(46)
	::mint::Control tmp34 = this->control;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(46)
	Float tmp35 = tmp34->depth;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(46)
	Float tmp36 = (tmp33 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(47)
	::mint::Control tmp37 = this->control;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(47)
	bool tmp38 = tmp37->visible;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(48)
	::mint::Control tmp39 = this->control;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(48)
	::mint::Control tmp40 = tmp39->clip_with;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(48)
	::mint::Control tmp41 = this->control;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(48)
	Float tmp42 = tmp41->canvas->scale;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(48)
	::phoenix::Rectangle tmp43 = ::mint::render::luxe::Convert_obj::bounds(tmp40,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	struct _Function_1_1{
		inline static Dynamic Block( Float &tmp20,Float &tmp36,bool &tmp38,::phoenix::Batcher &tmp10,::phoenix::Color &tmp31,Float &tmp15,Float &tmp25,::String &tmp8,::phoenix::Rectangle &tmp43,Float &tmp30){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/render/luxe/Panel.hx",38,0x7b269b27)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tmp8,false);
				__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp10,false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp15,false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp20,false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp25,false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp30,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp31,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp36,false);
				__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , tmp38,false);
				__result->Add(HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89") , tmp43,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(38)
	Dynamic tmp44 = _Function_1_1::Block(tmp20,tmp36,tmp38,tmp10,tmp31,tmp15,tmp25,tmp8,tmp43,tmp30);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(38)
	::phoenix::geometry::QuadGeometry tmp45 = tmp5->box(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(38)
	this->visual = tmp45;
}
;
	return null();
}

//Panel_obj::~Panel_obj() { }

Dynamic Panel_obj::__CreateEmpty() { return  new Panel_obj; }
hx::ObjectPtr< Panel_obj > Panel_obj::__new(::mint::render::luxe::LuxeMintRender _render,::mint::Panel _control)
{  hx::ObjectPtr< Panel_obj > _result_ = new Panel_obj();
	_result_->__construct(_render,_control);
	return _result_;}

Dynamic Panel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Panel_obj > _result_ = new Panel_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Panel_obj::onscale( Float _scale,Float _prev_scale){
{
		HX_STACK_FRAME("mint.render.luxe.Panel","onscale",0x3b3f3c15,"mint.render.luxe.Panel.onscale","mint/render/luxe/Panel.hx",53,0x7b269b27)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_scale,"_scale")
		HX_STACK_ARG(_prev_scale,"_prev_scale")
		HX_STACK_LINE(55)
		::phoenix::geometry::QuadGeometry tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		::mint::Control tmp1 = this->control;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		::mint::Control tmp2 = tmp1->clip_with;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		Float tmp3 = _scale;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(55)
		::phoenix::Rectangle tmp4 = ::mint::render::luxe::Convert_obj::bounds(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(55)
		tmp->set_clip_rect(tmp4);
	}
return null();
}


Void Panel_obj::ondestroy( ){
{
		HX_STACK_FRAME("mint.render.luxe.Panel","ondestroy",0xb6155345,"mint.render.luxe.Panel.ondestroy","mint/render/luxe/Panel.hx",59,0x7b269b27)
		HX_STACK_THIS(this)
		HX_STACK_LINE(61)
		::phoenix::geometry::QuadGeometry tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		tmp->drop(null());
		HX_STACK_LINE(62)
		this->visual = null();
	}
return null();
}


Void Panel_obj::onbounds( ){
{
		HX_STACK_FRAME("mint.render.luxe.Panel","onbounds",0xc60cf28a,"mint.render.luxe.Panel.onbounds","mint/render/luxe/Panel.hx",66,0x7b269b27)
		HX_STACK_THIS(this)
		HX_STACK_LINE(68)
		{
			HX_STACK_LINE(68)
			::phoenix::geometry::QuadGeometry tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(68)
			::phoenix::Spatial tmp1 = tmp->transform->local;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(68)
			::phoenix::Vector _this = tmp1->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(68)
			::mint::Control tmp2 = this->control;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(68)
			Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(68)
			::mint::Control tmp4 = this->control;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(68)
			Float tmp5 = tmp4->canvas->scale;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(68)
			Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(68)
			Float _x = tmp6;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(68)
			::mint::Control tmp7 = this->control;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(68)
			Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(68)
			::mint::Control tmp9 = this->control;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(68)
			Float tmp10 = tmp9->canvas->scale;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(68)
			Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(68)
			Float _y = tmp11;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(68)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(68)
			_this->ignore_listeners = true;
			HX_STACK_LINE(68)
			{
				HX_STACK_LINE(68)
				_this->x = _x;
				HX_STACK_LINE(68)
				bool tmp12 = _this->_construct;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(68)
				if ((tmp12)){
					HX_STACK_LINE(68)
					_this->x;
				}
				else{
					HX_STACK_LINE(68)
					bool tmp13 = (_this->listen_x != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(68)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(68)
					if ((tmp13)){
						HX_STACK_LINE(68)
						bool tmp15 = _this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(68)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(68)
						tmp14 = !(tmp16);
					}
					else{
						HX_STACK_LINE(68)
						tmp14 = false;
					}
					HX_STACK_LINE(68)
					if ((tmp14)){
						HX_STACK_LINE(68)
						Float tmp15 = _x;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(68)
						_this->listen_x(tmp15);
					}
					HX_STACK_LINE(68)
					_this->x;
				}
			}
			HX_STACK_LINE(68)
			{
				HX_STACK_LINE(68)
				_this->y = _y;
				HX_STACK_LINE(68)
				bool tmp12 = _this->_construct;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(68)
				if ((tmp12)){
					HX_STACK_LINE(68)
					_this->y;
				}
				else{
					HX_STACK_LINE(68)
					bool tmp13 = (_this->listen_y != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(68)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(68)
					if ((tmp13)){
						HX_STACK_LINE(68)
						bool tmp15 = _this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(68)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(68)
						tmp14 = !(tmp16);
					}
					else{
						HX_STACK_LINE(68)
						tmp14 = false;
					}
					HX_STACK_LINE(68)
					if ((tmp14)){
						HX_STACK_LINE(68)
						Float tmp15 = _y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(68)
						_this->listen_y(tmp15);
					}
					HX_STACK_LINE(68)
					_this->y;
				}
			}
			HX_STACK_LINE(68)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(68)
			bool tmp12 = (_this->listen_x != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(68)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(68)
			if ((tmp12)){
				HX_STACK_LINE(68)
				bool tmp14 = _this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(68)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(68)
				tmp13 = !(tmp15);
			}
			else{
				HX_STACK_LINE(68)
				tmp13 = false;
			}
			HX_STACK_LINE(68)
			if ((tmp13)){
				HX_STACK_LINE(68)
				Float tmp14 = _this->x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(68)
				_this->listen_x(tmp14);
			}
			HX_STACK_LINE(68)
			bool tmp14 = (_this->listen_y != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(68)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(68)
			if ((tmp14)){
				HX_STACK_LINE(68)
				bool tmp16 = _this->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(68)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(68)
				tmp15 = !(tmp17);
			}
			else{
				HX_STACK_LINE(68)
				tmp15 = false;
			}
			HX_STACK_LINE(68)
			if ((tmp15)){
				HX_STACK_LINE(68)
				Float tmp16 = _this->y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(68)
				_this->listen_y(tmp16);
			}
			HX_STACK_LINE(68)
			_this;
		}
		HX_STACK_LINE(69)
		::phoenix::geometry::QuadGeometry tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		::mint::Control tmp1 = this->control;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		Float tmp2 = tmp1->w;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(69)
		::mint::Control tmp3 = this->control;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(69)
		Float tmp4 = tmp3->canvas->scale;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(69)
		Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(69)
		::mint::Control tmp6 = this->control;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(69)
		Float tmp7 = tmp6->h;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(69)
		::mint::Control tmp8 = this->control;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(69)
		Float tmp9 = tmp8->canvas->scale;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(69)
		Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(69)
		tmp->resize_xy(tmp5,tmp10);
	}
return null();
}


Void Panel_obj::onclip( bool _disable,Float _x,Float _y,Float _w,Float _h){
{
		HX_STACK_FRAME("mint.render.luxe.Panel","onclip",0x81c53ba5,"mint.render.luxe.Panel.onclip","mint/render/luxe/Panel.hx",73,0x7b269b27)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_disable,"_disable")
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_w,"_w")
		HX_STACK_ARG(_h,"_h")
		HX_STACK_LINE(75)
		::phoenix::geometry::QuadGeometry tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(75)
		::mint::Control tmp1 = this->control;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(75)
		::mint::Control tmp2 = tmp1->clip_with;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(75)
		::mint::Control tmp3 = this->control;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		Float tmp4 = tmp3->canvas->scale;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(75)
		::phoenix::Rectangle tmp5 = ::mint::render::luxe::Convert_obj::bounds(tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(75)
		tmp->set_clip_rect(tmp5);
	}
return null();
}


Void Panel_obj::onvisible( bool _visible){
{
		HX_STACK_FRAME("mint.render.luxe.Panel","onvisible",0x34b39ebd,"mint.render.luxe.Panel.onvisible","mint/render/luxe/Panel.hx",79,0x7b269b27)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_visible,"_visible")
		HX_STACK_LINE(81)
		::phoenix::geometry::QuadGeometry tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		bool tmp1 = _visible;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		tmp->set_visible(tmp1);
	}
return null();
}


Void Panel_obj::ondepth( Float _depth){
{
		HX_STACK_FRAME("mint.render.luxe.Panel","ondepth",0x999a5e8e,"mint.render.luxe.Panel.ondepth","mint/render/luxe/Panel.hx",85,0x7b269b27)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_depth,"_depth")
		HX_STACK_LINE(87)
		::phoenix::geometry::QuadGeometry tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(87)
		::mint::render::luxe::LuxeMintRender tmp1 = this->render;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		Dynamic tmp2 = tmp1->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(87)
		Float tmp3 = _depth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(87)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(87)
		tmp->set_depth(tmp4);
	}
return null();
}



Panel_obj::Panel_obj()
{
}

void Panel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Panel);
	HX_MARK_MEMBER_NAME(panel,"panel");
	HX_MARK_MEMBER_NAME(visual,"visual");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(render,"render");
	::mint::render::Render_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Panel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(panel,"panel");
	HX_VISIT_MEMBER_NAME(visual,"visual");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(render,"render");
	::mint::render::Render_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Panel_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"panel") ) { return panel; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"visual") ) { return visual; }
		if (HX_FIELD_EQ(inName,"render") ) { return render; }
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
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Panel_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"panel") ) { panel=inValue.Cast< ::mint::Panel >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"visual") ) { visual=inValue.Cast< ::phoenix::geometry::QuadGeometry >(); return inValue; }
		if (HX_FIELD_EQ(inName,"render") ) { render=inValue.Cast< ::mint::render::luxe::LuxeMintRender >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Panel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("panel","\x04","\x7b","\x52","\xbd"));
	outFields->push(HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::mint::Panel*/ ,(int)offsetof(Panel_obj,panel),HX_HCSTRING("panel","\x04","\x7b","\x52","\xbd")},
	{hx::fsObject /*::phoenix::geometry::QuadGeometry*/ ,(int)offsetof(Panel_obj,visual),HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Panel_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsObject /*::mint::render::luxe::LuxeMintRender*/ ,(int)offsetof(Panel_obj,render),HX_HCSTRING("render","\x56","\x6b","\x29","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("panel","\x04","\x7b","\x52","\xbd"),
	HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("onscale","\x0b","\xfd","\xde","\x7b"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onbounds","\xd4","\x08","\x36","\x11"),
	HX_HCSTRING("onclip","\x6f","\x4b","\x73","\xf9"),
	HX_HCSTRING("onvisible","\x33","\x09","\x7e","\xad"),
	HX_HCSTRING("ondepth","\x84","\x1f","\x3a","\xda"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Panel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Panel_obj::__mClass,"__mClass");
};

#endif

hx::Class Panel_obj::__mClass;

void Panel_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mint.render.luxe.Panel","\x78","\x85","\x99","\x6a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Panel_obj >;
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
