#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_luxe_Resources
#include <luxe/Resources.h>
#endif
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_mint_Canvas
#include <mint/Canvas.h>
#endif
#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
#endif
#ifndef INCLUDED_mint_Image
#include <mint/Image.h>
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
#ifndef INCLUDED_mint_render_luxe_Image
#include <mint/render/luxe/Image.h>
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
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
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

Void Image_obj::__construct(::mint::render::luxe::LuxeMintRender _render,::mint::Image _control)
{
HX_STACK_FRAME("mint.render.luxe.Image","new",0x3f265e41,"mint.render.luxe.Image.new","mint/render/luxe/Image.hx",20,0xcd500730)
HX_STACK_THIS(this)
HX_STACK_ARG(_render,"_render")
HX_STACK_ARG(_control,"_control")
{
	HX_STACK_LINE(27)
	this->ratio_h = ((Float)1.0);
	HX_STACK_LINE(26)
	this->ratio_w = ((Float)1.0);
	HX_STACK_LINE(33)
	this->image = _control;
	HX_STACK_LINE(34)
	this->render = _render;
	HX_STACK_LINE(36)
	::mint::render::luxe::LuxeMintRender tmp = this->render;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	::mint::Image tmp1 = _control;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(38)
	::mint::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	Dynamic tmp3 = tmp2->options->__Field(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(38)
	Dynamic _opt = tmp3;		HX_STACK_VAR(_opt,"_opt");
	HX_STACK_LINE(40)
	::luxe::Resources tmp4 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(40)
	::mint::Image tmp5 = this->image;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(40)
	::String tmp6 = tmp5->options->__Field(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(40)
	::luxe::resource::Resource tmp7 = tmp4->cache->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(40)
	::phoenix::Texture _texture = ((::phoenix::Texture)(tmp7));		HX_STACK_VAR(_texture,"_texture");
	HX_STACK_LINE(42)
	bool tmp8 = (_texture != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(42)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(42)
	if ((tmp8)){
		HX_STACK_LINE(42)
		tmp9 = (_opt->__Field(HX_HCSTRING("sizing","\x3e","\x7c","\x11","\xc1"), hx::paccDynamic ) != null());
	}
	else{
		HX_STACK_LINE(42)
		tmp9 = false;
	}
	HX_STACK_LINE(42)
	if ((tmp9)){
		HX_STACK_LINE(44)
		::String _g = _opt->__Field(HX_HCSTRING("sizing","\x3e","\x7c","\x11","\xc1"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(44)
		bool tmp10 = (_g != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(44)
		if ((tmp10)){
			HX_STACK_LINE(44)
			::String tmp11 = _g;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(44)
			::String _switch_1 = (tmp11);
			if (  ( _switch_1==HX_HCSTRING("fit","\xd1","\xc1","\x4d","\x00"))){
				HX_STACK_LINE(49)
				bool tmp12 = (_texture->width > _texture->height);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(49)
				if ((tmp12)){
					HX_STACK_LINE(50)
					Float tmp13 = (Float(_texture->height) / Float(_texture->width));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(50)
					this->ratio_h = tmp13;
				}
				else{
					HX_STACK_LINE(52)
					Float tmp13 = (Float(_texture->width) / Float(_texture->height));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(52)
					this->ratio_w = tmp13;
				}
			}
			else if (  ( _switch_1==HX_HCSTRING("cover","\x37","\xff","\x63","\x4a"))){
				HX_STACK_LINE(58)
				Float _rx = ((Float)1.0);		HX_STACK_VAR(_rx,"_rx");
				HX_STACK_LINE(59)
				Float _ry = ((Float)1.0);		HX_STACK_VAR(_ry,"_ry");
				HX_STACK_LINE(60)
				bool tmp12 = (_texture->width > _texture->height);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(60)
				if ((tmp12)){
					HX_STACK_LINE(61)
					Float tmp13 = (Float(_texture->height) / Float(_texture->width));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(61)
					_rx = tmp13;
				}
				else{
					HX_STACK_LINE(63)
					Float tmp13 = (Float(_texture->width) / Float(_texture->height));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(63)
					_ry = tmp13;
				}
				HX_STACK_LINE(65)
				Float tmp13 = (_texture->width * _rx);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(65)
				Float tmp14 = (_texture->height * _ry);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(65)
				::phoenix::Rectangle tmp15 = ::phoenix::Rectangle_obj::__new((int)0,(int)0,tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(65)
				_opt->__FieldRef(HX_HCSTRING("uv","\x61","\x66","\x00","\x00")) = tmp15;
			}
		}
	}
	HX_STACK_LINE(73)
	::mint::Control tmp10 = this->control;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(73)
	::String tmp11 = tmp10->name;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(73)
	::String tmp12 = (tmp11 + HX_HCSTRING(".visual","\x6e","\x79","\x67","\x68"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(74)
	::mint::render::luxe::LuxeMintRender tmp13 = this->render;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(74)
	::phoenix::Batcher tmp14 = tmp13->options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(77)
	::phoenix::Texture tmp15 = _texture;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(78)
	::mint::Control tmp16 = this->control;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(78)
	Float tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(78)
	::mint::Control tmp18 = this->control;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(78)
	Float tmp19 = tmp18->canvas->scale;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(78)
	Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(78)
	::mint::Control tmp21 = this->control;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(78)
	Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(78)
	::mint::Control tmp23 = this->control;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(78)
	Float tmp24 = tmp23->canvas->scale;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(78)
	Float tmp25 = (tmp22 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(78)
	::phoenix::Vector tmp26 = ::phoenix::Vector_obj::__new(tmp20,tmp25,null(),null());		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(79)
	::mint::Control tmp27 = this->control;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(79)
	Float tmp28 = tmp27->w;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(79)
	::mint::Control tmp29 = this->control;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(79)
	Float tmp30 = tmp29->canvas->scale;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(79)
	Float tmp31 = (tmp28 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(79)
	Float tmp32 = this->ratio_w;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(79)
	Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(79)
	::mint::Control tmp34 = this->control;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(79)
	Float tmp35 = tmp34->h;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(79)
	::mint::Control tmp36 = this->control;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(79)
	Float tmp37 = tmp36->canvas->scale;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(79)
	Float tmp38 = (tmp35 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(79)
	Float tmp39 = this->ratio_h;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(79)
	Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(79)
	::phoenix::Vector tmp41 = ::phoenix::Vector_obj::__new(tmp33,tmp40,null(),null());		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(80)
	::mint::render::luxe::LuxeMintRender tmp42 = this->render;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(80)
	Dynamic tmp43 = tmp42->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(80)
	::mint::Control tmp44 = this->control;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(80)
	Float tmp45 = tmp44->depth;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(80)
	Float tmp46 = (tmp43 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(81)
	::mint::Control tmp47 = this->control;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(81)
	bool tmp48 = tmp47->visible;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(82)
	::phoenix::Rectangle tmp49 = _opt->__Field(HX_HCSTRING("uv","\x61","\x66","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(83)
	::phoenix::Color tmp50 = _opt->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp50,"tmp50");
	struct _Function_1_1{
		inline static Dynamic Block( bool &tmp48,Float &tmp46,::phoenix::Vector &tmp26,::phoenix::Vector &tmp41,::phoenix::Texture &tmp15,::phoenix::Rectangle &tmp49,::String &tmp12,::phoenix::Batcher &tmp14,::phoenix::Color &tmp50){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/render/luxe/Image.hx",72,0xcd500730)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp12,false);
				__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp14,false);
				__result->Add(HX_HCSTRING("centered","\x74","\x5d","\x50","\x8f") , false,false);
				__result->Add(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10") , true,false);
				__result->Add(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e") , tmp15,false);
				__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp26,false);
				__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , tmp41,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp46,false);
				__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , tmp48,false);
				__result->Add(HX_HCSTRING("uv","\x61","\x66","\x00","\x00") , tmp49,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp50,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(72)
	Dynamic tmp51 = _Function_1_1::Block(tmp48,tmp46,tmp26,tmp41,tmp15,tmp49,tmp12,tmp14,tmp50);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(72)
	::luxe::Sprite tmp52 = ::luxe::Sprite_obj::__new(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(72)
	this->visual = tmp52;
	HX_STACK_LINE(86)
	::luxe::Sprite tmp53 = this->visual;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(86)
	::mint::Control tmp54 = this->control;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(86)
	::mint::Control tmp55 = tmp54->clip_with;		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(86)
	::mint::Control tmp56 = this->control;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(86)
	Float tmp57 = tmp56->canvas->scale;		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(86)
	::phoenix::Rectangle tmp58 = ::mint::render::luxe::Convert_obj::bounds(tmp55,tmp57);		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(86)
	tmp53->set_clip_rect(tmp58);
}
;
	return null();
}

//Image_obj::~Image_obj() { }

Dynamic Image_obj::__CreateEmpty() { return  new Image_obj; }
hx::ObjectPtr< Image_obj > Image_obj::__new(::mint::render::luxe::LuxeMintRender _render,::mint::Image _control)
{  hx::ObjectPtr< Image_obj > _result_ = new Image_obj();
	_result_->__construct(_render,_control);
	return _result_;}

Dynamic Image_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Image_obj > _result_ = new Image_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Image_obj::onscale( Float _scale,Float _prev_scale){
{
		HX_STACK_FRAME("mint.render.luxe.Image","onscale",0x98a48f6c,"mint.render.luxe.Image.onscale","mint/render/luxe/Image.hx",90,0xcd500730)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_scale,"_scale")
		HX_STACK_ARG(_prev_scale,"_prev_scale")
		HX_STACK_LINE(92)
		::luxe::Sprite tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(92)
		::mint::Control tmp1 = this->control;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(92)
		::mint::Control tmp2 = tmp1->clip_with;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(92)
		Float tmp3 = _scale;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(92)
		::phoenix::Rectangle tmp4 = ::mint::render::luxe::Convert_obj::bounds(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(92)
		tmp->set_clip_rect(tmp4);
		HX_STACK_LINE(93)
		{
			HX_STACK_LINE(93)
			::luxe::Sprite tmp5 = this->visual;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(93)
			::phoenix::Vector tmp6 = tmp5->get_pos();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(93)
			::phoenix::Vector _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(93)
			::mint::Control tmp7 = this->control;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(93)
			Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(93)
			::mint::Control tmp9 = this->control;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(93)
			Float tmp10 = tmp9->canvas->scale;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(93)
			Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(93)
			Float _x = tmp11;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(93)
			::mint::Control tmp12 = this->control;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(93)
			Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(93)
			::mint::Control tmp14 = this->control;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(93)
			Float tmp15 = tmp14->canvas->scale;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(93)
			Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(93)
			Float _y = tmp16;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(93)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(93)
			_this->ignore_listeners = true;
			HX_STACK_LINE(93)
			{
				HX_STACK_LINE(93)
				_this->x = _x;
				HX_STACK_LINE(93)
				bool tmp17 = _this->_construct;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(93)
				if ((tmp17)){
					HX_STACK_LINE(93)
					_this->x;
				}
				else{
					HX_STACK_LINE(93)
					bool tmp18 = (_this->listen_x != null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(93)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(93)
					if ((tmp18)){
						HX_STACK_LINE(93)
						bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(93)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(93)
						tmp19 = !(tmp21);
					}
					else{
						HX_STACK_LINE(93)
						tmp19 = false;
					}
					HX_STACK_LINE(93)
					if ((tmp19)){
						HX_STACK_LINE(93)
						Float tmp20 = _x;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(93)
						_this->listen_x(tmp20);
					}
					HX_STACK_LINE(93)
					_this->x;
				}
			}
			HX_STACK_LINE(93)
			{
				HX_STACK_LINE(93)
				_this->y = _y;
				HX_STACK_LINE(93)
				bool tmp17 = _this->_construct;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(93)
				if ((tmp17)){
					HX_STACK_LINE(93)
					_this->y;
				}
				else{
					HX_STACK_LINE(93)
					bool tmp18 = (_this->listen_y != null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(93)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(93)
					if ((tmp18)){
						HX_STACK_LINE(93)
						bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(93)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(93)
						tmp19 = !(tmp21);
					}
					else{
						HX_STACK_LINE(93)
						tmp19 = false;
					}
					HX_STACK_LINE(93)
					if ((tmp19)){
						HX_STACK_LINE(93)
						Float tmp20 = _y;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(93)
						_this->listen_y(tmp20);
					}
					HX_STACK_LINE(93)
					_this->y;
				}
			}
			HX_STACK_LINE(93)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(93)
			bool tmp17 = (_this->listen_x != null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(93)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(93)
			if ((tmp17)){
				HX_STACK_LINE(93)
				bool tmp19 = _this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(93)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(93)
				tmp18 = !(tmp20);
			}
			else{
				HX_STACK_LINE(93)
				tmp18 = false;
			}
			HX_STACK_LINE(93)
			if ((tmp18)){
				HX_STACK_LINE(93)
				Float tmp19 = _this->x;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(93)
				_this->listen_x(tmp19);
			}
			HX_STACK_LINE(93)
			bool tmp19 = (_this->listen_y != null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(93)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(93)
			if ((tmp19)){
				HX_STACK_LINE(93)
				bool tmp21 = _this->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(93)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(93)
				tmp20 = !(tmp22);
			}
			else{
				HX_STACK_LINE(93)
				tmp20 = false;
			}
			HX_STACK_LINE(93)
			if ((tmp20)){
				HX_STACK_LINE(93)
				Float tmp21 = _this->y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(93)
				_this->listen_y(tmp21);
			}
			HX_STACK_LINE(93)
			_this;
		}
		HX_STACK_LINE(94)
		{
			HX_STACK_LINE(94)
			::luxe::Sprite tmp5 = this->visual;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(94)
			::phoenix::Vector _this = tmp5->size;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(94)
			::mint::Control tmp6 = this->control;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(94)
			Float tmp7 = tmp6->w;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(94)
			::mint::Control tmp8 = this->control;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(94)
			Float tmp9 = tmp8->canvas->scale;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(94)
			Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(94)
			Float tmp11 = this->ratio_w;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(94)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(94)
			Float _x = tmp12;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(94)
			::mint::Control tmp13 = this->control;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(94)
			Float tmp14 = tmp13->h;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(94)
			::mint::Control tmp15 = this->control;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(94)
			Float tmp16 = tmp15->canvas->scale;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(94)
			Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(94)
			Float tmp18 = this->ratio_h;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(94)
			Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(94)
			Float _y = tmp19;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(94)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(94)
			_this->ignore_listeners = true;
			HX_STACK_LINE(94)
			{
				HX_STACK_LINE(94)
				_this->x = _x;
				HX_STACK_LINE(94)
				bool tmp20 = _this->_construct;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(94)
				if ((tmp20)){
					HX_STACK_LINE(94)
					_this->x;
				}
				else{
					HX_STACK_LINE(94)
					bool tmp21 = (_this->listen_x != null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(94)
					bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(94)
					if ((tmp21)){
						HX_STACK_LINE(94)
						bool tmp23 = _this->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(94)
						bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(94)
						tmp22 = !(tmp24);
					}
					else{
						HX_STACK_LINE(94)
						tmp22 = false;
					}
					HX_STACK_LINE(94)
					if ((tmp22)){
						HX_STACK_LINE(94)
						Float tmp23 = _x;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(94)
						_this->listen_x(tmp23);
					}
					HX_STACK_LINE(94)
					_this->x;
				}
			}
			HX_STACK_LINE(94)
			{
				HX_STACK_LINE(94)
				_this->y = _y;
				HX_STACK_LINE(94)
				bool tmp20 = _this->_construct;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(94)
				if ((tmp20)){
					HX_STACK_LINE(94)
					_this->y;
				}
				else{
					HX_STACK_LINE(94)
					bool tmp21 = (_this->listen_y != null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(94)
					bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(94)
					if ((tmp21)){
						HX_STACK_LINE(94)
						bool tmp23 = _this->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(94)
						bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(94)
						tmp22 = !(tmp24);
					}
					else{
						HX_STACK_LINE(94)
						tmp22 = false;
					}
					HX_STACK_LINE(94)
					if ((tmp22)){
						HX_STACK_LINE(94)
						Float tmp23 = _y;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(94)
						_this->listen_y(tmp23);
					}
					HX_STACK_LINE(94)
					_this->y;
				}
			}
			HX_STACK_LINE(94)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(94)
			bool tmp20 = (_this->listen_x != null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(94)
			bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(94)
			if ((tmp20)){
				HX_STACK_LINE(94)
				bool tmp22 = _this->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(94)
				bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(94)
				tmp21 = !(tmp23);
			}
			else{
				HX_STACK_LINE(94)
				tmp21 = false;
			}
			HX_STACK_LINE(94)
			if ((tmp21)){
				HX_STACK_LINE(94)
				Float tmp22 = _this->x;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(94)
				_this->listen_x(tmp22);
			}
			HX_STACK_LINE(94)
			bool tmp22 = (_this->listen_y != null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(94)
			bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(94)
			if ((tmp22)){
				HX_STACK_LINE(94)
				bool tmp24 = _this->ignore_listeners;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(94)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(94)
				tmp23 = !(tmp25);
			}
			else{
				HX_STACK_LINE(94)
				tmp23 = false;
			}
			HX_STACK_LINE(94)
			if ((tmp23)){
				HX_STACK_LINE(94)
				Float tmp24 = _this->y;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(94)
				_this->listen_y(tmp24);
			}
			HX_STACK_LINE(94)
			_this;
		}
	}
return null();
}


Void Image_obj::onbounds( ){
{
		HX_STACK_FRAME("mint.render.luxe.Image","onbounds",0x21508b53,"mint.render.luxe.Image.onbounds","mint/render/luxe/Image.hx",98,0xcd500730)
		HX_STACK_THIS(this)
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(100)
			{
				HX_STACK_LINE(100)
				::luxe::Sprite tmp1 = this->visual;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(100)
				::phoenix::Transform tmp2 = tmp1->get_transform();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(100)
				::phoenix::Transform _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(100)
				tmp = _this->local->pos;
			}
			HX_STACK_LINE(100)
			::phoenix::Vector _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(100)
			::mint::Control tmp1 = this->control;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(100)
			Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(100)
			::mint::Control tmp3 = this->control;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(100)
			Float tmp4 = tmp3->canvas->scale;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(100)
			Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(100)
			Float _x = tmp5;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(100)
			::mint::Control tmp6 = this->control;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(100)
			Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(100)
			::mint::Control tmp8 = this->control;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(100)
			Float tmp9 = tmp8->canvas->scale;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(100)
			Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(100)
			Float _y = tmp10;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(100)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(100)
			_this->ignore_listeners = true;
			HX_STACK_LINE(100)
			{
				HX_STACK_LINE(100)
				_this->x = _x;
				HX_STACK_LINE(100)
				bool tmp11 = _this->_construct;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(100)
				if ((tmp11)){
					HX_STACK_LINE(100)
					_this->x;
				}
				else{
					HX_STACK_LINE(100)
					bool tmp12 = (_this->listen_x != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(100)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(100)
					if ((tmp12)){
						HX_STACK_LINE(100)
						bool tmp14 = _this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(100)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(100)
						tmp13 = !(tmp15);
					}
					else{
						HX_STACK_LINE(100)
						tmp13 = false;
					}
					HX_STACK_LINE(100)
					if ((tmp13)){
						HX_STACK_LINE(100)
						Float tmp14 = _x;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(100)
						_this->listen_x(tmp14);
					}
					HX_STACK_LINE(100)
					_this->x;
				}
			}
			HX_STACK_LINE(100)
			{
				HX_STACK_LINE(100)
				_this->y = _y;
				HX_STACK_LINE(100)
				bool tmp11 = _this->_construct;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(100)
				if ((tmp11)){
					HX_STACK_LINE(100)
					_this->y;
				}
				else{
					HX_STACK_LINE(100)
					bool tmp12 = (_this->listen_y != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(100)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(100)
					if ((tmp12)){
						HX_STACK_LINE(100)
						bool tmp14 = _this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(100)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(100)
						tmp13 = !(tmp15);
					}
					else{
						HX_STACK_LINE(100)
						tmp13 = false;
					}
					HX_STACK_LINE(100)
					if ((tmp13)){
						HX_STACK_LINE(100)
						Float tmp14 = _y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(100)
						_this->listen_y(tmp14);
					}
					HX_STACK_LINE(100)
					_this->y;
				}
			}
			HX_STACK_LINE(100)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(100)
			bool tmp11 = (_this->listen_x != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(100)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(100)
			if ((tmp11)){
				HX_STACK_LINE(100)
				bool tmp13 = _this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(100)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(100)
				tmp12 = !(tmp14);
			}
			else{
				HX_STACK_LINE(100)
				tmp12 = false;
			}
			HX_STACK_LINE(100)
			if ((tmp12)){
				HX_STACK_LINE(100)
				Float tmp13 = _this->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(100)
				_this->listen_x(tmp13);
			}
			HX_STACK_LINE(100)
			bool tmp13 = (_this->listen_y != null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(100)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(100)
			if ((tmp13)){
				HX_STACK_LINE(100)
				bool tmp15 = _this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(100)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(100)
				tmp14 = !(tmp16);
			}
			else{
				HX_STACK_LINE(100)
				tmp14 = false;
			}
			HX_STACK_LINE(100)
			if ((tmp14)){
				HX_STACK_LINE(100)
				Float tmp15 = _this->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(100)
				_this->listen_y(tmp15);
			}
			HX_STACK_LINE(100)
			_this;
		}
		HX_STACK_LINE(101)
		::luxe::Sprite tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(101)
		::mint::Control tmp1 = this->control;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(101)
		Float tmp2 = tmp1->w;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(101)
		::mint::Control tmp3 = this->control;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(101)
		Float tmp4 = tmp3->canvas->scale;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(101)
		Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(101)
		Float tmp6 = this->ratio_w;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(101)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(101)
		::mint::Control tmp8 = this->control;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(101)
		Float tmp9 = tmp8->h;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(101)
		::mint::Control tmp10 = this->control;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(101)
		Float tmp11 = tmp10->canvas->scale;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(101)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(101)
		Float tmp13 = this->ratio_h;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(101)
		Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(101)
		tmp->geometry_quad->resize_xy(tmp7,tmp14);
	}
return null();
}


Void Image_obj::ondestroy( ){
{
		HX_STACK_FRAME("mint.render.luxe.Image","ondestroy",0x35f76a5c,"mint.render.luxe.Image.ondestroy","mint/render/luxe/Image.hx",105,0xcd500730)
		HX_STACK_THIS(this)
		HX_STACK_LINE(107)
		::luxe::Sprite tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		tmp->destroy(null());
		HX_STACK_LINE(108)
		this->visual = null();
	}
return null();
}


Void Image_obj::onclip( bool _disable,Float _x,Float _y,Float _w,Float _h){
{
		HX_STACK_FRAME("mint.render.luxe.Image","onclip",0x11afe02e,"mint.render.luxe.Image.onclip","mint/render/luxe/Image.hx",112,0xcd500730)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_disable,"_disable")
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_w,"_w")
		HX_STACK_ARG(_h,"_h")
		HX_STACK_LINE(114)
		::luxe::Sprite tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		::mint::Control tmp1 = this->control;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(114)
		::mint::Control tmp2 = tmp1->clip_with;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(114)
		::mint::Control tmp3 = this->control;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(114)
		Float tmp4 = tmp3->canvas->scale;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(114)
		::phoenix::Rectangle tmp5 = ::mint::render::luxe::Convert_obj::bounds(tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(114)
		tmp->set_clip_rect(tmp5);
	}
return null();
}


Void Image_obj::onvisible( bool _visible){
{
		HX_STACK_FRAME("mint.render.luxe.Image","onvisible",0xb495b5d4,"mint.render.luxe.Image.onvisible","mint/render/luxe/Image.hx",118,0xcd500730)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_visible,"_visible")
		HX_STACK_LINE(120)
		::luxe::Sprite tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(120)
		bool tmp1 = _visible;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(120)
		tmp->set_visible(tmp1);
	}
return null();
}


Void Image_obj::ondepth( Float _depth){
{
		HX_STACK_FRAME("mint.render.luxe.Image","ondepth",0xf6ffb1e5,"mint.render.luxe.Image.ondepth","mint/render/luxe/Image.hx",124,0xcd500730)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_depth,"_depth")
		HX_STACK_LINE(126)
		::luxe::Sprite tmp = this->visual;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(126)
		::mint::render::luxe::LuxeMintRender tmp1 = this->render;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(126)
		Dynamic tmp2 = tmp1->options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(126)
		Float tmp3 = _depth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(126)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(126)
		tmp->set_depth(tmp4);
	}
return null();
}



Image_obj::Image_obj()
{
}

void Image_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Image);
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(visual,"visual");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(ratio_w,"ratio_w");
	HX_MARK_MEMBER_NAME(ratio_h,"ratio_h");
	HX_MARK_MEMBER_NAME(render,"render");
	::mint::render::Render_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Image_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(visual,"visual");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(ratio_w,"ratio_w");
	HX_VISIT_MEMBER_NAME(ratio_h,"ratio_h");
	HX_VISIT_MEMBER_NAME(render,"render");
	::mint::render::Render_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Image_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"visual") ) { return visual; }
		if (HX_FIELD_EQ(inName,"render") ) { return render; }
		if (HX_FIELD_EQ(inName,"onclip") ) { return onclip_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ratio_w") ) { return ratio_w; }
		if (HX_FIELD_EQ(inName,"ratio_h") ) { return ratio_h; }
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

Dynamic Image_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::mint::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"visual") ) { visual=inValue.Cast< ::luxe::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"render") ) { render=inValue.Cast< ::mint::render::luxe::LuxeMintRender >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ratio_w") ) { ratio_w=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ratio_h") ) { ratio_h=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Image_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));
	outFields->push(HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("ratio_w","\x03","\x21","\x64","\x5d"));
	outFields->push(HX_HCSTRING("ratio_h","\xf4","\x20","\x64","\x5d"));
	outFields->push(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::mint::Image*/ ,(int)offsetof(Image_obj,image),HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd")},
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(Image_obj,visual),HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Image_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsFloat,(int)offsetof(Image_obj,ratio_w),HX_HCSTRING("ratio_w","\x03","\x21","\x64","\x5d")},
	{hx::fsFloat,(int)offsetof(Image_obj,ratio_h),HX_HCSTRING("ratio_h","\xf4","\x20","\x64","\x5d")},
	{hx::fsObject /*::mint::render::luxe::LuxeMintRender*/ ,(int)offsetof(Image_obj,render),HX_HCSTRING("render","\x56","\x6b","\x29","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),
	HX_HCSTRING("visual","\xc0","\x22","\x8c","\xef"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("ratio_w","\x03","\x21","\x64","\x5d"),
	HX_HCSTRING("ratio_h","\xf4","\x20","\x64","\x5d"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("onscale","\x0b","\xfd","\xde","\x7b"),
	HX_HCSTRING("onbounds","\xd4","\x08","\x36","\x11"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onclip","\x6f","\x4b","\x73","\xf9"),
	HX_HCSTRING("onvisible","\x33","\x09","\x7e","\xad"),
	HX_HCSTRING("ondepth","\x84","\x1f","\x3a","\xda"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Image_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Image_obj::__mClass,"__mClass");
};

#endif

hx::Class Image_obj::__mClass;

void Image_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mint.render.luxe.Image","\xcf","\x29","\xb0","\x6a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Image_obj >;
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
