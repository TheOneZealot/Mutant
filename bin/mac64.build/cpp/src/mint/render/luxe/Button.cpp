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
#ifndef INCLUDED_mint_Button
#include <mint/Button.h>
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
#ifndef INCLUDED_mint_render_luxe_Button
#include <mint/render/luxe/Button.h>
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

Void Button_obj::__construct(::mint::render::luxe::LuxeMintRender _render,::mint::Button _control)
{
HX_STACK_FRAME("mint.render.luxe.Button","new",0x623374f0,"mint.render.luxe.Button.new","mint/render/luxe/Button.hx",31,0x128eda7f)
HX_STACK_THIS(this)
HX_STACK_ARG(_render,"_render")
HX_STACK_ARG(_control,"_control")
{
	HX_STACK_LINE(31)
	::mint::render::luxe::Button _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(33)
	this->render = _render;
	HX_STACK_LINE(34)
	this->button = _control;
	HX_STACK_LINE(36)
	::mint::render::luxe::LuxeMintRender tmp = this->render;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	::mint::Button tmp1 = _control;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(38)
	::mint::Button tmp2 = this->button;		HX_STACK_VAR(tmp2,"tmp2");
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
		bool tmp6 = (_opt->__Field(HX_HCSTRING("color_hover","\xa0","\x4a","\xe0","\xac"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(41)
		if ((tmp6)){
			HX_STACK_LINE(41)
			::phoenix::Color tmp7 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(41)
			::phoenix::Color tmp8 = tmp7->rgb((int)4477272);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(41)
			_opt->__FieldRef(HX_HCSTRING("color_hover","\xa0","\x4a","\xe0","\xac")) = tmp8;
		}
		HX_STACK_LINE(41)
		tmp5 = _opt->__Field(HX_HCSTRING("color_hover","\xa0","\x4a","\xe0","\xac"), hx::paccDynamic );
	}
	HX_STACK_LINE(41)
	this->color_hover = tmp5;
	HX_STACK_LINE(42)
	::phoenix::Color tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		bool tmp7 = (_opt->__Field(HX_HCSTRING("color_down","\xfe","\xbb","\xbd","\x86"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(42)
		if ((tmp7)){
			HX_STACK_LINE(42)
			::phoenix::Color tmp8 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(42)
			::phoenix::Color tmp9 = tmp8->rgb((int)4473924);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(42)
			_opt->__FieldRef(HX_HCSTRING("color_down","\xfe","\xbb","\xbd","\x86")) = tmp9;
		}
		HX_STACK_LINE(42)
		tmp6 = _opt->__Field(HX_HCSTRING("color_down","\xfe","\xbb","\xbd","\x86"), hx::paccDynamic );
	}
	HX_STACK_LINE(42)
	this->color_down = tmp6;
	HX_STACK_LINE(45)
	::mint::Control tmp7 = this->control;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(45)
	::String tmp8 = tmp7->name;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(45)
	::String tmp9 = (tmp8 + HX_HCSTRING(".visual","\x6e","\x79","\x67","\x68"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(46)
	::mint::render::luxe::LuxeMintRender tmp10 = this->render;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(46)
	::phoenix::Batcher tmp11 = tmp10->options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(49)
	::mint::Control tmp12 = this->control;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(49)
	Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(49)
	::mint::Control tmp14 = this->control;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(49)
	Float tmp15 = tmp14->canvas->scale;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(49)
	Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(49)
	::mint::Control tmp17 = this->control;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(49)
	Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(49)
	::mint::Control tmp19 = this->control;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(49)
	Float tmp20 = tmp19->canvas->scale;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(49)
	Float tmp21 = (tmp18 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(49)
	::phoenix::Vector tmp22 = ::phoenix::Vector_obj::__new(tmp16,tmp21,null(),null());		HX_STACK_VAR(tmp22,"tmp22");
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
	HX_STACK_LINE(50)
	::mint::Control tmp28 = this->control;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(50)
	Float tmp29 = tmp28->h;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(50)
	::mint::Control tmp30 = this->control;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(50)
	Float tmp31 = tmp30->canvas->scale;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(50)
	Float tmp32 = (tmp29 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(50)
	::phoenix::Vector tmp33 = ::phoenix::Vector_obj::__new(tmp27,tmp32,null(),null());		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(51)
	::phoenix::Color tmp34 = this->color;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(52)
	::mint::render::luxe::LuxeMintRender tmp35 = this->render;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(52)
	Dynamic tmp36 = tmp35->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(52)
	::mint::Control tmp37 = this->control;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(52)
	Float tmp38 = tmp37->depth;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(52)
	Float tmp39 = (tmp36 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(53)
	::mint::Control tmp40 = this->control;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(53)
	bool tmp41 = tmp40->visible;		HX_STACK_VAR(tmp41,"tmp41");
	struct _Function_1_1{
		inline static Dynamic Block( ::phoenix::Vector &tmp22,::phoenix::Vector &tmp33,::String &tmp9,::phoenix::Batcher &tmp11,bool &tmp41,::phoenix::Color &tmp34,Float &tmp39){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/render/luxe/Button.hx",44,0x128eda7f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp9,false);
				__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp11,false);
				__result->Add(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10") , true,false);
				__result->Add(HX_HCSTRING("centered","\x74","\x5d","\x50","\x8f") , false,false);
				__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp22,false);
				__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , tmp33,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp34,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp39,false);
				__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , tmp41,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(44)
	Dynamic tmp42 = _Function_1_1::Block(tmp22,tmp33,tmp9,tmp11,tmp41,tmp34,tmp39);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(44)
	::luxe::Sprite tmp43 = ::luxe::Sprite_obj::__new(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(44)
	this->visual = tmp43;
	HX_STACK_LINE(56)
	::luxe::Sprite tmp44 = this->visual;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(56)
	::mint::Control tmp45 = this->control;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(56)
	::mint::Control tmp46 = tmp45->clip_with;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(56)
	::mint::Control tmp47 = this->control;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(56)
	Float tmp48 = tmp47->canvas->scale;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(56)
	::phoenix::Rectangle tmp49 = ::mint::render::luxe::Convert_obj::bounds(tmp46,tmp48);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(56)
	tmp44->set_clip_rect(tmp49);
	HX_STACK_LINE(58)
	::mint::Button tmp50 = this->button;		HX_STACK_VAR(tmp50,"tmp50");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,::mint::render::luxe::Button,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic e,::mint::Control c){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","mint/render/luxe/Button.hx",58,0x128eda7f)
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(c,"c")
		{
			HX_STACK_LINE(58)
			::phoenix::Color tmp51 = _g->color_hover;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(58)
			_g->visual->set_color(tmp51);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(58)
	tmp50->onmouseenter->listen( Dynamic(new _Function_1_2(_g)));
	HX_STACK_LINE(59)
	::mint::Button tmp51 = this->button;		HX_STACK_VAR(tmp51,"tmp51");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_3,::mint::render::luxe::Button,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic e,::mint::Control c){
		HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","mint/render/luxe/Button.hx",59,0x128eda7f)
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(c,"c")
		{
			HX_STACK_LINE(59)
			::phoenix::Color tmp52 = _g->color;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(59)
			_g->visual->set_color(tmp52);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(59)
	tmp51->onmouseleave->listen( Dynamic(new _Function_1_3(_g)));
	HX_STACK_LINE(60)
	::mint::Button tmp52 = this->button;		HX_STACK_VAR(tmp52,"tmp52");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_4,::mint::render::luxe::Button,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic e,::mint::Control c){
		HX_STACK_FRAME("*","_Function_1_4",0x5200ed3a,"*._Function_1_4","mint/render/luxe/Button.hx",60,0x128eda7f)
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(c,"c")
		{
			HX_STACK_LINE(60)
			::phoenix::Color tmp53 = _g->color_down;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(60)
			_g->visual->set_color(tmp53);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(60)
	tmp52->onmousedown->listen( Dynamic(new _Function_1_4(_g)));
	HX_STACK_LINE(61)
	::mint::Button tmp53 = this->button;		HX_STACK_VAR(tmp53,"tmp53");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_5,::mint::render::luxe::Button,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic e,::mint::Control c){
		HX_STACK_FRAME("*","_Function_1_5",0x5200ed3b,"*._Function_1_5","mint/render/luxe/Button.hx",61,0x128eda7f)
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(c,"c")
		{
			HX_STACK_LINE(61)
			::phoenix::Color tmp54 = _g->color;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(61)
			_g->visual->set_color(tmp54);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(61)
	tmp53->onmouseup->listen( Dynamic(new _Function_1_5(_g)));
}
;
	return null();
}

//Button_obj::~Button_obj() { }

Dynamic Button_obj::__CreateEmpty() { return  new Button_obj; }
hx::ObjectPtr< Button_obj > Button_obj::__new(::mint::render::luxe::LuxeMintRender _render,::mint::Button _control)
{  hx::ObjectPtr< Button_obj > _result_ = new Button_obj();
	_result_->__construct(_render,_control);
	return _result_;}

Dynamic Button_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Button_obj > _result_ = new Button_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Button_obj::onscale( Float _scale,Float _prev_scale){
{
		HX_STACK_FRAME("mint.render.luxe.Button","onscale",0x5a14299b,"mint.render.luxe.Button.onscale","mint/render/luxe/Button.hx",65,0x128eda7f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_scale,"_scale")
		HX_STACK_ARG(_prev_scale,"_prev_scale")
		HX_STACK_LINE(67)
		::luxe::Sprite tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		::mint::Control tmp1 = this->control;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(67)
		::mint::Control tmp2 = tmp1->clip_with;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		Float tmp3 = _scale;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		::phoenix::Rectangle tmp4 = ::mint::render::luxe::Convert_obj::bounds(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(67)
		tmp->set_clip_rect(tmp4);
	}
return null();
}


Void Button_obj::onbounds( ){
{
		HX_STACK_FRAME("mint.render.luxe.Button","onbounds",0xa187da44,"mint.render.luxe.Button.onbounds","mint/render/luxe/Button.hx",71,0x128eda7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				::luxe::Sprite tmp1 = this->visual;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(73)
				::phoenix::Transform tmp2 = tmp1->get_transform();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(73)
				::phoenix::Transform _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(73)
				tmp = _this->local->pos;
			}
			HX_STACK_LINE(73)
			::phoenix::Vector _this = tmp;		HX_STACK_VAR(_this,"_this");
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
			Float _x = tmp5;		HX_STACK_VAR(_x,"_x");
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
			Float _y = tmp10;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(73)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(73)
			_this->ignore_listeners = true;
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				_this->x = _x;
				HX_STACK_LINE(73)
				bool tmp11 = _this->_construct;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(73)
				if ((tmp11)){
					HX_STACK_LINE(73)
					_this->x;
				}
				else{
					HX_STACK_LINE(73)
					bool tmp12 = (_this->listen_x != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(73)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(73)
					if ((tmp12)){
						HX_STACK_LINE(73)
						bool tmp14 = _this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(73)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(73)
						tmp13 = !(tmp15);
					}
					else{
						HX_STACK_LINE(73)
						tmp13 = false;
					}
					HX_STACK_LINE(73)
					if ((tmp13)){
						HX_STACK_LINE(73)
						Float tmp14 = _x;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(73)
						_this->listen_x(tmp14);
					}
					HX_STACK_LINE(73)
					_this->x;
				}
			}
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				_this->y = _y;
				HX_STACK_LINE(73)
				bool tmp11 = _this->_construct;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(73)
				if ((tmp11)){
					HX_STACK_LINE(73)
					_this->y;
				}
				else{
					HX_STACK_LINE(73)
					bool tmp12 = (_this->listen_y != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(73)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(73)
					if ((tmp12)){
						HX_STACK_LINE(73)
						bool tmp14 = _this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(73)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(73)
						tmp13 = !(tmp15);
					}
					else{
						HX_STACK_LINE(73)
						tmp13 = false;
					}
					HX_STACK_LINE(73)
					if ((tmp13)){
						HX_STACK_LINE(73)
						Float tmp14 = _y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(73)
						_this->listen_y(tmp14);
					}
					HX_STACK_LINE(73)
					_this->y;
				}
			}
			HX_STACK_LINE(73)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(73)
			bool tmp11 = (_this->listen_x != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(73)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(73)
			if ((tmp11)){
				HX_STACK_LINE(73)
				bool tmp13 = _this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(73)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(73)
				tmp12 = !(tmp14);
			}
			else{
				HX_STACK_LINE(73)
				tmp12 = false;
			}
			HX_STACK_LINE(73)
			if ((tmp12)){
				HX_STACK_LINE(73)
				Float tmp13 = _this->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(73)
				_this->listen_x(tmp13);
			}
			HX_STACK_LINE(73)
			bool tmp13 = (_this->listen_y != null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(73)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(73)
			if ((tmp13)){
				HX_STACK_LINE(73)
				bool tmp15 = _this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(73)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(73)
				tmp14 = !(tmp16);
			}
			else{
				HX_STACK_LINE(73)
				tmp14 = false;
			}
			HX_STACK_LINE(73)
			if ((tmp14)){
				HX_STACK_LINE(73)
				Float tmp15 = _this->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(73)
				_this->listen_y(tmp15);
			}
			HX_STACK_LINE(73)
			_this;
		}
		HX_STACK_LINE(74)
		::luxe::Sprite tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		::mint::Control tmp1 = this->control;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		Float tmp2 = tmp1->w;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		::mint::Control tmp3 = this->control;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(74)
		Float tmp4 = tmp3->canvas->scale;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(74)
		Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(74)
		::mint::Control tmp6 = this->control;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(74)
		Float tmp7 = tmp6->h;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(74)
		::mint::Control tmp8 = this->control;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(74)
		Float tmp9 = tmp8->canvas->scale;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(74)
		Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(74)
		tmp->geometry_quad->resize_xy(tmp5,tmp10);
	}
return null();
}


Void Button_obj::ondestroy( ){
{
		HX_STACK_FRAME("mint.render.luxe.Button","ondestroy",0xe6252e4b,"mint.render.luxe.Button.ondestroy","mint/render/luxe/Button.hx",78,0x128eda7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		::luxe::Sprite tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		tmp->destroy(null());
		HX_STACK_LINE(81)
		this->visual = null();
	}
return null();
}


Void Button_obj::onclip( bool _disable,Float _x,Float _y,Float _w,Float _h){
{
		HX_STACK_FRAME("mint.render.luxe.Button","onclip",0x9320e0df,"mint.render.luxe.Button.onclip","mint/render/luxe/Button.hx",85,0x128eda7f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_disable,"_disable")
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_w,"_w")
		HX_STACK_ARG(_h,"_h")
		HX_STACK_LINE(87)
		::luxe::Sprite tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(87)
		::mint::Control tmp1 = this->control;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		::mint::Control tmp2 = tmp1->clip_with;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(87)
		::mint::Control tmp3 = this->control;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(87)
		Float tmp4 = tmp3->canvas->scale;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(87)
		::phoenix::Rectangle tmp5 = ::mint::render::luxe::Convert_obj::bounds(tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(87)
		tmp->set_clip_rect(tmp5);
	}
return null();
}


Void Button_obj::onvisible( bool _visible){
{
		HX_STACK_FRAME("mint.render.luxe.Button","onvisible",0x64c379c3,"mint.render.luxe.Button.onvisible","mint/render/luxe/Button.hx",92,0x128eda7f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_visible,"_visible")
		HX_STACK_LINE(94)
		::luxe::Sprite tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		bool tmp1 = _visible;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		tmp->set_visible(tmp1);
	}
return null();
}


Void Button_obj::ondepth( Float _depth){
{
		HX_STACK_FRAME("mint.render.luxe.Button","ondepth",0xb86f4c14,"mint.render.luxe.Button.ondepth","mint/render/luxe/Button.hx",98,0x128eda7f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_depth,"_depth")
		HX_STACK_LINE(100)
		::luxe::Sprite tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(100)
		::mint::render::luxe::LuxeMintRender tmp1 = this->render;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(100)
		Dynamic tmp2 = tmp1->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(100)
		Float tmp3 = _depth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(100)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(100)
		tmp->set_depth(tmp4);
	}
return null();
}



Button_obj::Button_obj()
{
}

void Button_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Button);
	HX_MARK_MEMBER_NAME(button,"button");
	HX_MARK_MEMBER_NAME(visual,"visual");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(color_hover,"color_hover");
	HX_MARK_MEMBER_NAME(color_down,"color_down");
	HX_MARK_MEMBER_NAME(render,"render");
	::mint::render::Render_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Button_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(button,"button");
	HX_VISIT_MEMBER_NAME(visual,"visual");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(color_hover,"color_hover");
	HX_VISIT_MEMBER_NAME(color_down,"color_down");
	HX_VISIT_MEMBER_NAME(render,"render");
	::mint::render::Render_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Button_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return button; }
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
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"color_down") ) { return color_down; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"color_hover") ) { return color_hover; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Button_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< ::mint::Button >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visual") ) { visual=inValue.Cast< ::luxe::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"render") ) { render=inValue.Cast< ::mint::render::luxe::LuxeMintRender >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"color_down") ) { color_down=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"color_hover") ) { color_hover=inValue.Cast< ::phoenix::Color >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Button_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"));
	outFields->push(HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("color_hover","\xa0","\x4a","\xe0","\xac"));
	outFields->push(HX_HCSTRING("color_down","\xfe","\xbb","\xbd","\x86"));
	outFields->push(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::mint::Button*/ ,(int)offsetof(Button_obj,button),HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9")},
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(Button_obj,visual),HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Button_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Button_obj,color_hover),HX_HCSTRING("color_hover","\xa0","\x4a","\xe0","\xac")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Button_obj,color_down),HX_HCSTRING("color_down","\xfe","\xbb","\xbd","\x86")},
	{hx::fsObject /*::mint::render::luxe::LuxeMintRender*/ ,(int)offsetof(Button_obj,render),HX_HCSTRING("render","\x56","\x6b","\x29","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"),
	HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("color_hover","\xa0","\x4a","\xe0","\xac"),
	HX_HCSTRING("color_down","\xfe","\xbb","\xbd","\x86"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("onscale","\x0b","\xfd","\xde","\x7b"),
	HX_HCSTRING("onbounds","\xd4","\x08","\x36","\x11"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onclip","\x6f","\x4b","\x73","\xf9"),
	HX_HCSTRING("onvisible","\x33","\x09","\x7e","\xad"),
	HX_HCSTRING("ondepth","\x84","\x1f","\x3a","\xda"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Button_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Button_obj::__mClass,"__mClass");
};

#endif

hx::Class Button_obj::__mClass;

void Button_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mint.render.luxe.Button","\xfe","\x7c","\xc2","\xca");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Button_obj >;
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
