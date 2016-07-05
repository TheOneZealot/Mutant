#include <hxcpp.h>

#ifndef INCLUDED_mint_Canvas
#include <mint/Canvas.h>
#endif
#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
#endif
#ifndef INCLUDED_mint_core_DebugError
#include <mint/core/DebugError.h>
#endif
#ifndef INCLUDED_mint_core_Signal
#include <mint/core/Signal.h>
#endif
#ifndef INCLUDED_mint_render_Renderer
#include <mint/render/Renderer.h>
#endif
#ifndef INCLUDED_mint_render_Rendering
#include <mint/render/Rendering.h>
#endif
#ifndef INCLUDED_mint_types_Helper
#include <mint/types/Helper.h>
#endif
namespace mint{

Void Canvas_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("mint.Canvas","new",0x519b5c36,"mint.Canvas.new","mint/Canvas.hx",32,0x861c13d9)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(143)
	this->_mouse_down = false;
	HX_STACK_LINE(113)
	this->depth_idx = ((Float)0.0);
	HX_STACK_LINE(45)
	this->scale = ((Float)1.0);
	HX_STACK_LINE(41)
	this->focus_invalid = true;
	HX_STACK_LINE(60)
	this->options = _options;
	HX_STACK_LINE(62)
	::mint::core::Signal tmp = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	this->onfocusedchange = tmp;
	HX_STACK_LINE(63)
	::mint::core::Signal tmp1 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(63)
	this->onmarkedchange = tmp1;
	HX_STACK_LINE(64)
	::mint::core::Signal tmp2 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(64)
	this->oncapturedchange = tmp2;
	HX_STACK_LINE(65)
	::mint::core::Signal tmp3 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(65)
	this->onscalechange = tmp3;
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(67)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(67)
		if ((tmp5)){
			HX_STACK_LINE(37)
			::String tmp6 = HX_HCSTRING(" ( No options given to canvas, at least a Renderer is required.","\x38","\x70","\x87","\xef");		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(37)
			::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(67)
			::String tmp8 = (HX_HCSTRING("options was null","\xe0","\x49","\xa9","\x08") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(67)
			::mint::core::DebugError tmp9 = ::mint::core::DebugError_obj::null_assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(67)
			HX_STACK_DO_THROW(tmp9);
		}
	}
	HX_STACK_LINE(68)
	{
		HX_STACK_LINE(68)
		Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(68)
		::mint::render::Rendering tmp5 = tmp4->__Field(HX_HCSTRING("rendering","\x4c","\xdb","\x73","\xcd"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(68)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(68)
		if ((tmp6)){
			HX_STACK_LINE(37)
			::String tmp7 = HX_HCSTRING(" ( No Rendering given to Canvas, cannot create a canvas without one.","\x6f","\x95","\x66","\xfe");		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(37)
			::String tmp8 = (tmp7 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(68)
			::String tmp9 = (HX_HCSTRING("options.rendering was null","\x42","\xf7","\xdd","\x02") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(68)
			::mint::core::DebugError tmp10 = ::mint::core::DebugError_obj::null_assertion(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(68)
			HX_STACK_DO_THROW(tmp10);
		}
	}
	HX_STACK_LINE(70)
	{
		HX_STACK_LINE(70)
		Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(70)
		::String tmp5 = tmp4->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(70)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(70)
		if ((tmp6)){
			HX_STACK_LINE(70)
			Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(70)
			tmp7->__FieldRef(HX_HCSTRING("name","\x4b","\x72","\xff","\x48")) = HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8");
		}
		HX_STACK_LINE(70)
		Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(70)
		tmp7->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
	}
	HX_STACK_LINE(71)
	{
		HX_STACK_LINE(71)
		Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(71)
		Dynamic tmp5 = tmp4->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(71)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(71)
		if ((tmp6)){
			HX_STACK_LINE(71)
			Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(71)
			tmp7->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)800;
		}
		HX_STACK_LINE(71)
		Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(71)
		tmp7->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(72)
	{
		HX_STACK_LINE(72)
		Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(72)
		Dynamic tmp5 = tmp4->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(72)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(72)
		if ((tmp6)){
			HX_STACK_LINE(72)
			Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(72)
			tmp7->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)600;
		}
		HX_STACK_LINE(72)
		Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(72)
		tmp7->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(74)
	{
		HX_STACK_LINE(74)
		Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(74)
		Dynamic tmp5 = tmp4->__Field(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(74)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(74)
		if ((tmp6)){
			HX_STACK_LINE(74)
			Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(74)
			tmp7->__FieldRef(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a")) = true;
		}
		HX_STACK_LINE(74)
		Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(74)
		tmp7->__Field(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a"), hx::paccDynamic );
	}
	HX_STACK_LINE(76)
	Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(76)
	super::__construct(tmp4,null());
	HX_STACK_LINE(78)
	this->canvas = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(79)
	Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(79)
	{
		HX_STACK_LINE(79)
		Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(79)
		Dynamic tmp7 = tmp6->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(79)
		bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(79)
		if ((tmp8)){
			HX_STACK_LINE(79)
			Dynamic tmp9 = this->options;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(79)
			tmp9->__FieldRef(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")) = (int)1;
		}
		HX_STACK_LINE(79)
		Dynamic tmp9 = this->options;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(79)
		tmp5 = tmp9->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic );
	}
	HX_STACK_LINE(79)
	this->set_scale(tmp5);
	HX_STACK_LINE(81)
	this->set_captured(null());
	HX_STACK_LINE(82)
	this->set_focused(null());
	HX_STACK_LINE(83)
	this->set_marked(null());
	HX_STACK_LINE(85)
	::mint::render::Rendering tmp6 = this->rendering;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(85)
	::mint::render::Renderer tmp7 = tmp6->get(hx::ClassOf< ::mint::Canvas >(),hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(85)
	this->renderer = tmp7;
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(87)
		::mint::core::Signal tmp8 = this->oncreate;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(51)
		int tmp9 = tmp8->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(51)
		int _count = tmp9;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			bool tmp10 = (_idx < _count);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(52)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(52)
			if ((tmp11)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(87)
			::mint::core::Signal tmp12 = this->oncreate;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(53)
			Dynamic tmp13 = tmp12->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(53)
			Dynamic fn = tmp13;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp14 = (fn != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(54)
			if ((tmp14)){
				HX_STACK_LINE(55)
				fn().Cast< Void >();
			}
			HX_STACK_LINE(57)
			(_idx)++;
		}
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp10 = (_count > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(60)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(60)
			if ((tmp11)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(87)
			::mint::core::Signal tmp12 = this->oncreate;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(61)
			int tmp13 = (_count - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(61)
			Dynamic tmp14 = tmp12->listeners->__GetItem(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(61)
			Dynamic fn = tmp14;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(62)
			bool tmp15 = (fn == null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(62)
			if ((tmp15)){
				HX_STACK_LINE(87)
				::mint::core::Signal tmp16 = this->oncreate;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(62)
				int tmp17 = (_count - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(62)
				tmp16->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp17,(int)1);
			}
			HX_STACK_LINE(63)
			(_count)--;
		}
	}
}
;
	return null();
}

//Canvas_obj::~Canvas_obj() { }

Dynamic Canvas_obj::__CreateEmpty() { return  new Canvas_obj; }
hx::ObjectPtr< Canvas_obj > Canvas_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Canvas_obj > _result_ = new Canvas_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic Canvas_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Canvas_obj > _result_ = new Canvas_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Canvas_obj::bring_to_front( ::mint::Control control){
{
		HX_STACK_FRAME("mint.Canvas","bring_to_front",0x2477979c,"mint.Canvas.bring_to_front","mint/Canvas.hx",91,0x861c13d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(control,"control")
		HX_STACK_LINE(94)
		::mint::Canvas tmp = this->canvas;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		::mint::Control tmp1 = control;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		tmp->add(tmp1);
		HX_STACK_LINE(95)
		this->sync_depth();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Canvas_obj,bring_to_front,(void))

::mint::Control Canvas_obj::topmost_at_point( Float _x,Float _y){
	HX_STACK_FRAME("mint.Canvas","topmost_at_point",0xd6c51df5,"mint.Canvas.topmost_at_point","mint/Canvas.hx",100,0x861c13d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_LINE(102)
	Float tmp = _x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	Float tmp1 = _y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(102)
	::mint::Control tmp2 = this->topmost_child_at_point(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(102)
	::mint::Control _control = tmp2;		HX_STACK_VAR(_control,"_control");
	HX_STACK_LINE(104)
	bool tmp3 = (_control != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(104)
	if ((tmp3)){
		HX_STACK_LINE(104)
		::mint::Control tmp4 = _control;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(104)
		return tmp4;
	}
	HX_STACK_LINE(106)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Canvas_obj,topmost_at_point,return )

Void Canvas_obj::apply_depth( ::mint::Control control){
{
		HX_STACK_FRAME("mint.Canvas","apply_depth",0xb48fd608,"mint.Canvas.apply_depth","mint/Canvas.hx",115,0x861c13d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(control,"control")
		HX_STACK_LINE(117)
		Float tmp = this->depth_idx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		Float tmp1 = control->depth_offset;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(117)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(117)
		control->set_depth(tmp2);
		HX_STACK_LINE(118)
		(this->depth_idx)++;
		HX_STACK_LINE(120)
		{
			HX_STACK_LINE(120)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(120)
			Array< ::Dynamic > _g1 = control->children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(120)
			while((true)){
				HX_STACK_LINE(120)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(120)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(120)
				if ((tmp4)){
					HX_STACK_LINE(120)
					break;
				}
				HX_STACK_LINE(120)
				::mint::Control tmp5 = _g1->__get(_g).StaticCast< ::mint::Control >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(120)
				::mint::Control child = tmp5;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(120)
				++(_g);
				HX_STACK_LINE(121)
				::mint::Control tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(121)
				this->apply_depth(tmp6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Canvas_obj,apply_depth,(void))

Void Canvas_obj::sync_depth( ){
{
		HX_STACK_FRAME("mint.Canvas","sync_depth",0x3ad4e3c9,"mint.Canvas.sync_depth","mint/Canvas.hx",127,0x861c13d9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(129)
		this->depth_idx = (int)0;
		HX_STACK_LINE(130)
		this->apply_depth(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Canvas_obj,sync_depth,(void))

Void Canvas_obj::mouseup( Dynamic e){
{
		HX_STACK_FRAME("mint.Canvas","mouseup",0xab9c3e96,"mint.Canvas.mouseup","mint/Canvas.hx",136,0x861c13d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(138)
		this->_mouse_down = false;
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(50)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(139)
			::mint::core::Signal tmp = this->onmouseup;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(51)
			int tmp1 = tmp->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(51)
			int _count = tmp1;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp2 = (_idx < _count);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(52)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(52)
				if ((tmp3)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(139)
				::mint::core::Signal tmp4 = this->onmouseup;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(53)
				Dynamic tmp5 = tmp4->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(53)
				Dynamic fn = tmp5;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(54)
				bool tmp6 = (fn != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(54)
				if ((tmp6)){
					HX_STACK_LINE(139)
					Dynamic tmp7 = e;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(55)
					fn(tmp7,hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
				}
				HX_STACK_LINE(57)
				(_idx)++;
			}
			HX_STACK_LINE(60)
			while((true)){
				HX_STACK_LINE(60)
				bool tmp2 = (_count > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(60)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(60)
				if ((tmp3)){
					HX_STACK_LINE(60)
					break;
				}
				HX_STACK_LINE(139)
				::mint::core::Signal tmp4 = this->onmouseup;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(61)
				int tmp5 = (_count - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(61)
				Dynamic tmp6 = tmp4->listeners->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(61)
				Dynamic fn = tmp6;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(62)
				bool tmp7 = (fn == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(62)
				if ((tmp7)){
					HX_STACK_LINE(139)
					::mint::core::Signal tmp8 = this->onmouseup;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(62)
					int tmp9 = (_count - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(62)
					tmp8->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp9,(int)1);
				}
				HX_STACK_LINE(63)
				(_count)--;
			}
		}
	}
return null();
}


Void Canvas_obj::mousedown( Dynamic e){
{
		HX_STACK_FRAME("mint.Canvas","mousedown",0xeedc955d,"mint.Canvas.mousedown","mint/Canvas.hx",144,0x861c13d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(146)
		this->_mouse_down = true;
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(50)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(147)
			::mint::core::Signal tmp = this->onmousedown;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(51)
			int tmp1 = tmp->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(51)
			int _count = tmp1;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp2 = (_idx < _count);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(52)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(52)
				if ((tmp3)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(147)
				::mint::core::Signal tmp4 = this->onmousedown;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(53)
				Dynamic tmp5 = tmp4->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(53)
				Dynamic fn = tmp5;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(54)
				bool tmp6 = (fn != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(54)
				if ((tmp6)){
					HX_STACK_LINE(147)
					Dynamic tmp7 = e;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(55)
					fn(tmp7,hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
				}
				HX_STACK_LINE(57)
				(_idx)++;
			}
			HX_STACK_LINE(60)
			while((true)){
				HX_STACK_LINE(60)
				bool tmp2 = (_count > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(60)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(60)
				if ((tmp3)){
					HX_STACK_LINE(60)
					break;
				}
				HX_STACK_LINE(147)
				::mint::core::Signal tmp4 = this->onmousedown;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(61)
				int tmp5 = (_count - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(61)
				Dynamic tmp6 = tmp4->listeners->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(61)
				Dynamic fn = tmp6;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(62)
				bool tmp7 = (fn == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(62)
				if ((tmp7)){
					HX_STACK_LINE(147)
					::mint::core::Signal tmp8 = this->onmousedown;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(62)
					int tmp9 = (_count - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(62)
					tmp8->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp9,(int)1);
				}
				HX_STACK_LINE(63)
				(_count)--;
			}
		}
	}
return null();
}


Void Canvas_obj::mousemove( Dynamic e){
{
		HX_STACK_FRAME("mint.Canvas","mousemove",0xf4cf800c,"mint.Canvas.mousemove","mint/Canvas.hx",151,0x861c13d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(153)
		int tmp = e->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(153)
		int tmp1 = e->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(153)
		Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(153)
		Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(153)
		Float tmp4 = this->w;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(153)
		Float tmp5 = this->h;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(153)
		bool tmp6 = ::mint::types::Helper_obj::in_rect(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(153)
		bool _inside = tmp6;		HX_STACK_VAR(_inside,"_inside");
		HX_STACK_LINE(156)
		bool tmp7 = this->ishovered;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(156)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(156)
		if ((tmp7)){
			HX_STACK_LINE(156)
			bool tmp9 = _inside;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(156)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(156)
			tmp8 = !(tmp10);
		}
		else{
			HX_STACK_LINE(156)
			tmp8 = false;
		}
		HX_STACK_LINE(156)
		if ((tmp8)){
			HX_STACK_LINE(157)
			Dynamic tmp9 = e;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(157)
			this->mouseleave(tmp9);
			HX_STACK_LINE(158)
			bool tmp10 = this->_mouse_down;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(158)
			if ((tmp10)){
				HX_STACK_LINE(158)
				Dynamic tmp11 = e;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(158)
				this->mouseup(tmp11);
			}
		}
		else{
			HX_STACK_LINE(159)
			bool tmp9 = this->ishovered;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(159)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(159)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(159)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(159)
			if ((tmp11)){
				HX_STACK_LINE(159)
				tmp12 = _inside;
			}
			else{
				HX_STACK_LINE(159)
				tmp12 = false;
			}
			HX_STACK_LINE(159)
			if ((tmp12)){
				HX_STACK_LINE(160)
				Dynamic tmp13 = e;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(160)
				this->mouseenter(tmp13);
			}
		}
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(50)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(163)
			::mint::core::Signal tmp9 = this->onmousemove;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(51)
			int tmp10 = tmp9->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(51)
			int _count = tmp10;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp11 = (_idx < _count);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(52)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(52)
				if ((tmp12)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(163)
				::mint::core::Signal tmp13 = this->onmousemove;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(53)
				Dynamic tmp14 = tmp13->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(53)
				Dynamic fn = tmp14;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(54)
				bool tmp15 = (fn != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(54)
				if ((tmp15)){
					HX_STACK_LINE(163)
					Dynamic tmp16 = e;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(55)
					fn(tmp16,hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
				}
				HX_STACK_LINE(57)
				(_idx)++;
			}
			HX_STACK_LINE(60)
			while((true)){
				HX_STACK_LINE(60)
				bool tmp11 = (_count > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(60)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(60)
				if ((tmp12)){
					HX_STACK_LINE(60)
					break;
				}
				HX_STACK_LINE(163)
				::mint::core::Signal tmp13 = this->onmousemove;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(61)
				int tmp14 = (_count - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(61)
				Dynamic tmp15 = tmp13->listeners->__GetItem(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(61)
				Dynamic fn = tmp15;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(62)
				bool tmp16 = (fn == null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(62)
				if ((tmp16)){
					HX_STACK_LINE(163)
					::mint::core::Signal tmp17 = this->onmousemove;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(62)
					int tmp18 = (_count - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(62)
					tmp17->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp18,(int)1);
				}
				HX_STACK_LINE(63)
				(_count)--;
			}
		}
	}
return null();
}


Void Canvas_obj::mousewheel( Dynamic e){
{
		HX_STACK_FRAME("mint.Canvas","mousewheel",0xfe14f340,"mint.Canvas.mousewheel","mint/core/Signal.hx",49,0x383f7d53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(169)
		::mint::core::Signal tmp = this->onmousewheel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		int tmp1 = tmp->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		int _count = tmp1;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			bool tmp2 = (_idx < _count);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(52)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(52)
			if ((tmp3)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(169)
			::mint::core::Signal tmp4 = this->onmousewheel;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(53)
			Dynamic tmp5 = tmp4->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(53)
			Dynamic fn = tmp5;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp6 = (fn != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(54)
			if ((tmp6)){
				HX_STACK_LINE(169)
				Dynamic tmp7 = e;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(55)
				fn(tmp7,hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
			}
			HX_STACK_LINE(57)
			(_idx)++;
		}
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp2 = (_count > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(60)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(60)
			if ((tmp3)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(169)
			::mint::core::Signal tmp4 = this->onmousewheel;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(61)
			int tmp5 = (_count - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(61)
			Dynamic tmp6 = tmp4->listeners->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(61)
			Dynamic fn = tmp6;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(62)
			bool tmp7 = (fn == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(62)
			if ((tmp7)){
				HX_STACK_LINE(169)
				::mint::core::Signal tmp8 = this->onmousewheel;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(62)
				int tmp9 = (_count - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(62)
				tmp8->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp9,(int)1);
			}
			HX_STACK_LINE(63)
			(_count)--;
		}
	}
return null();
}


Void Canvas_obj::keyup( Dynamic e){
{
		HX_STACK_FRAME("mint.Canvas","keyup",0xba218310,"mint.Canvas.keyup","mint/core/Signal.hx",49,0x383f7d53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(175)
		::mint::core::Signal tmp = this->onkeyup;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		int tmp1 = tmp->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		int _count = tmp1;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			bool tmp2 = (_idx < _count);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(52)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(52)
			if ((tmp3)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(175)
			::mint::core::Signal tmp4 = this->onkeyup;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(53)
			Dynamic tmp5 = tmp4->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(53)
			Dynamic fn = tmp5;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp6 = (fn != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(54)
			if ((tmp6)){
				HX_STACK_LINE(175)
				Dynamic tmp7 = e;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(55)
				fn(tmp7,hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
			}
			HX_STACK_LINE(57)
			(_idx)++;
		}
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp2 = (_count > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(60)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(60)
			if ((tmp3)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(175)
			::mint::core::Signal tmp4 = this->onkeyup;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(61)
			int tmp5 = (_count - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(61)
			Dynamic tmp6 = tmp4->listeners->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(61)
			Dynamic fn = tmp6;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(62)
			bool tmp7 = (fn == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(62)
			if ((tmp7)){
				HX_STACK_LINE(175)
				::mint::core::Signal tmp8 = this->onkeyup;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(62)
				int tmp9 = (_count - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(62)
				tmp8->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp9,(int)1);
			}
			HX_STACK_LINE(63)
			(_count)--;
		}
	}
return null();
}


Void Canvas_obj::keydown( Dynamic e){
{
		HX_STACK_FRAME("mint.Canvas","keydown",0x9c976c57,"mint.Canvas.keydown","mint/core/Signal.hx",49,0x383f7d53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(181)
		::mint::core::Signal tmp = this->onkeydown;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		int tmp1 = tmp->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		int _count = tmp1;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			bool tmp2 = (_idx < _count);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(52)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(52)
			if ((tmp3)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(181)
			::mint::core::Signal tmp4 = this->onkeydown;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(53)
			Dynamic tmp5 = tmp4->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(53)
			Dynamic fn = tmp5;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp6 = (fn != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(54)
			if ((tmp6)){
				HX_STACK_LINE(181)
				Dynamic tmp7 = e;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(55)
				fn(tmp7,hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
			}
			HX_STACK_LINE(57)
			(_idx)++;
		}
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp2 = (_count > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(60)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(60)
			if ((tmp3)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(181)
			::mint::core::Signal tmp4 = this->onkeydown;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(61)
			int tmp5 = (_count - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(61)
			Dynamic tmp6 = tmp4->listeners->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(61)
			Dynamic fn = tmp6;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(62)
			bool tmp7 = (fn == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(62)
			if ((tmp7)){
				HX_STACK_LINE(181)
				::mint::core::Signal tmp8 = this->onkeydown;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(62)
				int tmp9 = (_count - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(62)
				tmp8->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp9,(int)1);
			}
			HX_STACK_LINE(63)
			(_count)--;
		}
	}
return null();
}


Void Canvas_obj::textinput( Dynamic e){
{
		HX_STACK_FRAME("mint.Canvas","textinput",0xaed0f493,"mint.Canvas.textinput","mint/core/Signal.hx",49,0x383f7d53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(187)
		::mint::core::Signal tmp = this->ontextinput;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		int tmp1 = tmp->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		int _count = tmp1;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			bool tmp2 = (_idx < _count);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(52)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(52)
			if ((tmp3)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(187)
			::mint::core::Signal tmp4 = this->ontextinput;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(53)
			Dynamic tmp5 = tmp4->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(53)
			Dynamic fn = tmp5;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp6 = (fn != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(54)
			if ((tmp6)){
				HX_STACK_LINE(187)
				Dynamic tmp7 = e;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(55)
				fn(tmp7,hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
			}
			HX_STACK_LINE(57)
			(_idx)++;
		}
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp2 = (_count > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(60)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(60)
			if ((tmp3)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(187)
			::mint::core::Signal tmp4 = this->ontextinput;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(61)
			int tmp5 = (_count - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(61)
			Dynamic tmp6 = tmp4->listeners->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(61)
			Dynamic fn = tmp6;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(62)
			bool tmp7 = (fn == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(62)
			if ((tmp7)){
				HX_STACK_LINE(187)
				::mint::core::Signal tmp8 = this->ontextinput;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(62)
				int tmp9 = (_count - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(62)
				tmp8->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp9,(int)1);
			}
			HX_STACK_LINE(63)
			(_count)--;
		}
	}
return null();
}


Void Canvas_obj::update( Float dt){
{
		HX_STACK_FRAME("mint.Canvas","update",0x6a3a83f3,"mint.Canvas.update","mint/Canvas.hx",193,0x861c13d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(193)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(193)
		Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(193)
		while((true)){
			HX_STACK_LINE(193)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(193)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(193)
			if ((tmp1)){
				HX_STACK_LINE(193)
				break;
			}
			HX_STACK_LINE(193)
			::mint::Control tmp2 = _g1->__get(_g).StaticCast< ::mint::Control >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(193)
			::mint::Control control = tmp2;		HX_STACK_VAR(control,"control");
			HX_STACK_LINE(193)
			++(_g);
			HX_STACK_LINE(194)
			Float tmp3 = dt;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(194)
			control->update(tmp3);
		}
	}
return null();
}


Void Canvas_obj::destroy( ){
{
		HX_STACK_FRAME("mint.Canvas","destroy",0x0faf5bd0,"mint.Canvas.destroy","mint/Canvas.hx",199,0x861c13d9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(201)
		this->super::destroy();
		HX_STACK_LINE(203)
		{
			HX_STACK_LINE(203)
			::mint::core::Signal tmp = this->onfocusedchange;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(203)
			::mint::core::Signal _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(203)
			_this->listeners = null();
			HX_STACK_LINE(203)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(204)
		{
			HX_STACK_LINE(204)
			::mint::core::Signal tmp = this->onmarkedchange;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(204)
			::mint::core::Signal _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(204)
			_this->listeners = null();
			HX_STACK_LINE(204)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(205)
		{
			HX_STACK_LINE(205)
			::mint::core::Signal tmp = this->oncapturedchange;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(205)
			::mint::core::Signal _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(205)
			_this->listeners = null();
			HX_STACK_LINE(205)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(206)
		{
			HX_STACK_LINE(206)
			::mint::core::Signal tmp = this->onscalechange;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(206)
			::mint::core::Signal _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(206)
			_this->listeners = null();
			HX_STACK_LINE(206)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(208)
		this->onfocusedchange = null();
		HX_STACK_LINE(209)
		this->onmarkedchange = null();
		HX_STACK_LINE(210)
		this->oncapturedchange = null();
		HX_STACK_LINE(211)
		this->onscalechange = null();
	}
return null();
}


Float Canvas_obj::set_scale( Float _scale){
	HX_STACK_FRAME("mint.Canvas","set_scale",0x8abc2743,"mint.Canvas.set_scale","mint/Canvas.hx",218,0x861c13d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_scale,"_scale")
	HX_STACK_LINE(220)
	Float tmp = this->scale;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(220)
	Float _prev = tmp;		HX_STACK_VAR(_prev,"_prev");
	HX_STACK_LINE(221)
	this->scale = _scale;
	HX_STACK_LINE(223)
	bool tmp1 = (_scale != _prev);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(223)
	if ((tmp1)){
		HX_STACK_LINE(224)
		this->refresh_bounds();
	}
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(227)
		::mint::core::Signal tmp2 = this->onscalechange;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		int tmp3 = tmp2->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		int _count = tmp3;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			bool tmp4 = (_idx < _count);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(52)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(52)
			if ((tmp5)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(227)
			::mint::core::Signal tmp6 = this->onscalechange;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(53)
			Dynamic tmp7 = tmp6->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(53)
			Dynamic fn = tmp7;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp8 = (fn != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(54)
			if ((tmp8)){
				HX_STACK_LINE(227)
				Float tmp9 = _scale;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(227)
				Float tmp10 = _prev;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(55)
				fn(tmp9,tmp10).Cast< Void >();
			}
			HX_STACK_LINE(57)
			(_idx)++;
		}
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp4 = (_count > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(60)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(60)
			if ((tmp5)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(227)
			::mint::core::Signal tmp6 = this->onscalechange;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(61)
			int tmp7 = (_count - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(61)
			Dynamic tmp8 = tmp6->listeners->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(61)
			Dynamic fn = tmp8;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(62)
			bool tmp9 = (fn == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(62)
			if ((tmp9)){
				HX_STACK_LINE(227)
				::mint::core::Signal tmp10 = this->onscalechange;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(62)
				int tmp11 = (_count - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(62)
				tmp10->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp11,(int)1);
			}
			HX_STACK_LINE(63)
			(_count)--;
		}
	}
	HX_STACK_LINE(229)
	Float tmp2 = this->scale;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(229)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Canvas_obj,set_scale,return )

::mint::Control Canvas_obj::get_focused( ){
	HX_STACK_FRAME("mint.Canvas","get_focused",0xa1961024,"mint.Canvas.get_focused","mint/Canvas.hx",233,0x861c13d9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(235)
	::mint::Control tmp = this->focused;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(235)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Canvas_obj,get_focused,return )

::mint::Control Canvas_obj::set_focused( ::mint::Control _control){
	HX_STACK_FRAME("mint.Canvas","set_focused",0xac031730,"mint.Canvas.set_focused","mint/Canvas.hx",240,0x861c13d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_control,"_control")
	HX_STACK_LINE(242)
	::mint::Control tmp = this->get_focused();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(242)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(242)
	if ((tmp1)){
		HX_STACK_LINE(243)
		::mint::Control tmp2 = this->get_focused();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(243)
		tmp2->isfocused = false;
	}
	HX_STACK_LINE(246)
	this->focused = _control;
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(247)
		::mint::core::Signal tmp2 = this->onfocusedchange;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		int tmp3 = tmp2->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		int _count = tmp3;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			bool tmp4 = (_idx < _count);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(52)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(52)
			if ((tmp5)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(247)
			::mint::core::Signal tmp6 = this->onfocusedchange;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(53)
			Dynamic tmp7 = tmp6->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(53)
			Dynamic fn = tmp7;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp8 = (fn != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(54)
			if ((tmp8)){
				HX_STACK_LINE(247)
				::mint::Control tmp9 = this->get_focused();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(55)
				fn(tmp9).Cast< Void >();
			}
			HX_STACK_LINE(57)
			(_idx)++;
		}
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp4 = (_count > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(60)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(60)
			if ((tmp5)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(247)
			::mint::core::Signal tmp6 = this->onfocusedchange;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(61)
			int tmp7 = (_count - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(61)
			Dynamic tmp8 = tmp6->listeners->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(61)
			Dynamic fn = tmp8;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(62)
			bool tmp9 = (fn == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(62)
			if ((tmp9)){
				HX_STACK_LINE(247)
				::mint::core::Signal tmp10 = this->onfocusedchange;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(62)
				int tmp11 = (_count - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(62)
				tmp10->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp11,(int)1);
			}
			HX_STACK_LINE(63)
			(_count)--;
		}
	}
	HX_STACK_LINE(249)
	::mint::Control tmp2 = this->get_focused();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(249)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(249)
	if ((tmp3)){
		HX_STACK_LINE(250)
		::mint::Control tmp4 = this->get_focused();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(250)
		tmp4->isfocused = true;
	}
	HX_STACK_LINE(253)
	::mint::Control tmp4 = this->get_focused();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(253)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Canvas_obj,set_focused,return )

::mint::Control Canvas_obj::get_captured( ){
	HX_STACK_FRAME("mint.Canvas","get_captured",0x708da291,"mint.Canvas.get_captured","mint/Canvas.hx",257,0x861c13d9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(259)
	::mint::Control tmp = this->captured;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(259)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Canvas_obj,get_captured,return )

::mint::Control Canvas_obj::set_captured( ::mint::Control _control){
	HX_STACK_FRAME("mint.Canvas","set_captured",0x8586c605,"mint.Canvas.set_captured","mint/Canvas.hx",263,0x861c13d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_control,"_control")
	HX_STACK_LINE(265)
	::mint::Control tmp = this->get_captured();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(265)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(265)
	if ((tmp1)){
		HX_STACK_LINE(266)
		::mint::Control tmp2 = this->get_captured();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(266)
		tmp2->iscaptured = false;
	}
	HX_STACK_LINE(269)
	this->captured = _control;
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(270)
		::mint::core::Signal tmp2 = this->oncapturedchange;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		int tmp3 = tmp2->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		int _count = tmp3;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			bool tmp4 = (_idx < _count);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(52)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(52)
			if ((tmp5)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(270)
			::mint::core::Signal tmp6 = this->oncapturedchange;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(53)
			Dynamic tmp7 = tmp6->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(53)
			Dynamic fn = tmp7;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp8 = (fn != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(54)
			if ((tmp8)){
				HX_STACK_LINE(270)
				::mint::Control tmp9 = this->get_captured();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(55)
				fn(tmp9).Cast< Void >();
			}
			HX_STACK_LINE(57)
			(_idx)++;
		}
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp4 = (_count > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(60)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(60)
			if ((tmp5)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(270)
			::mint::core::Signal tmp6 = this->oncapturedchange;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(61)
			int tmp7 = (_count - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(61)
			Dynamic tmp8 = tmp6->listeners->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(61)
			Dynamic fn = tmp8;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(62)
			bool tmp9 = (fn == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(62)
			if ((tmp9)){
				HX_STACK_LINE(270)
				::mint::core::Signal tmp10 = this->oncapturedchange;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(62)
				int tmp11 = (_count - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(62)
				tmp10->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp11,(int)1);
			}
			HX_STACK_LINE(63)
			(_count)--;
		}
	}
	HX_STACK_LINE(272)
	::mint::Control tmp2 = this->get_captured();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(272)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(272)
	if ((tmp3)){
		HX_STACK_LINE(273)
		::mint::Control tmp4 = this->get_captured();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(273)
		tmp4->iscaptured = true;
	}
	HX_STACK_LINE(276)
	::mint::Control tmp4 = this->get_captured();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(276)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Canvas_obj,set_captured,return )

::mint::Control Canvas_obj::get_marked( ){
	HX_STACK_FRAME("mint.Canvas","get_marked",0x54b3205f,"mint.Canvas.get_marked","mint/Canvas.hx",280,0x861c13d9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(282)
	::mint::Control tmp = this->marked;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(282)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Canvas_obj,get_marked,return )

::mint::Control Canvas_obj::set_marked( ::mint::Control _control){
	HX_STACK_FRAME("mint.Canvas","set_marked",0x5830bed3,"mint.Canvas.set_marked","mint/Canvas.hx",286,0x861c13d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_control,"_control")
	HX_STACK_LINE(288)
	::mint::Control tmp = this->get_marked();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(288)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(288)
	if ((tmp1)){
		HX_STACK_LINE(289)
		::mint::Control tmp2 = this->get_marked();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(289)
		tmp2->ismarked = false;
	}
	HX_STACK_LINE(292)
	this->marked = _control;
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(293)
		::mint::core::Signal tmp2 = this->onmarkedchange;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		int tmp3 = tmp2->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		int _count = tmp3;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			bool tmp4 = (_idx < _count);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(52)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(52)
			if ((tmp5)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(293)
			::mint::core::Signal tmp6 = this->onmarkedchange;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(53)
			Dynamic tmp7 = tmp6->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(53)
			Dynamic fn = tmp7;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp8 = (fn != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(54)
			if ((tmp8)){
				HX_STACK_LINE(293)
				::mint::Control tmp9 = this->get_captured();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(55)
				fn(tmp9).Cast< Void >();
			}
			HX_STACK_LINE(57)
			(_idx)++;
		}
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp4 = (_count > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(60)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(60)
			if ((tmp5)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(293)
			::mint::core::Signal tmp6 = this->onmarkedchange;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(61)
			int tmp7 = (_count - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(61)
			Dynamic tmp8 = tmp6->listeners->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(61)
			Dynamic fn = tmp8;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(62)
			bool tmp9 = (fn == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(62)
			if ((tmp9)){
				HX_STACK_LINE(293)
				::mint::core::Signal tmp10 = this->onmarkedchange;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(62)
				int tmp11 = (_count - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(62)
				tmp10->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp11,(int)1);
			}
			HX_STACK_LINE(63)
			(_count)--;
		}
	}
	HX_STACK_LINE(295)
	::mint::Control tmp2 = this->get_marked();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(295)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(295)
	if ((tmp3)){
		HX_STACK_LINE(296)
		::mint::Control tmp4 = this->get_marked();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(296)
		tmp4->ismarked = true;
	}
	HX_STACK_LINE(299)
	::mint::Control tmp4 = this->get_marked();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(299)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Canvas_obj,set_marked,return )


Canvas_obj::Canvas_obj()
{
}

void Canvas_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Canvas);
	HX_MARK_MEMBER_NAME(focused,"focused");
	HX_MARK_MEMBER_NAME(marked,"marked");
	HX_MARK_MEMBER_NAME(captured,"captured");
	HX_MARK_MEMBER_NAME(focus_invalid,"focus_invalid");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(onfocusedchange,"onfocusedchange");
	HX_MARK_MEMBER_NAME(onmarkedchange,"onmarkedchange");
	HX_MARK_MEMBER_NAME(oncapturedchange,"oncapturedchange");
	HX_MARK_MEMBER_NAME(onscalechange,"onscalechange");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(depth_idx,"depth_idx");
	HX_MARK_MEMBER_NAME(_mouse_down,"_mouse_down");
	::mint::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Canvas_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(focused,"focused");
	HX_VISIT_MEMBER_NAME(marked,"marked");
	HX_VISIT_MEMBER_NAME(captured,"captured");
	HX_VISIT_MEMBER_NAME(focus_invalid,"focus_invalid");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(onfocusedchange,"onfocusedchange");
	HX_VISIT_MEMBER_NAME(onmarkedchange,"onmarkedchange");
	HX_VISIT_MEMBER_NAME(oncapturedchange,"oncapturedchange");
	HX_VISIT_MEMBER_NAME(onscalechange,"onscalechange");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(depth_idx,"depth_idx");
	HX_VISIT_MEMBER_NAME(_mouse_down,"_mouse_down");
	::mint::Control_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Canvas_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"keyup") ) { return keyup_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"marked") ) { return inCallProp == hx::paccAlways ? get_marked() : marked; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"focused") ) { return inCallProp == hx::paccAlways ? get_focused() : focused; }
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		if (HX_FIELD_EQ(inName,"mouseup") ) { return mouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"keydown") ) { return keydown_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"captured") ) { return inCallProp == hx::paccAlways ? get_captured() : captured; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"depth_idx") ) { return depth_idx; }
		if (HX_FIELD_EQ(inName,"mousedown") ) { return mousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"mousemove") ) { return mousemove_dyn(); }
		if (HX_FIELD_EQ(inName,"textinput") ) { return textinput_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scale") ) { return set_scale_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sync_depth") ) { return sync_depth_dyn(); }
		if (HX_FIELD_EQ(inName,"mousewheel") ) { return mousewheel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_marked") ) { return get_marked_dyn(); }
		if (HX_FIELD_EQ(inName,"set_marked") ) { return set_marked_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"apply_depth") ) { return apply_depth_dyn(); }
		if (HX_FIELD_EQ(inName,"_mouse_down") ) { return _mouse_down; }
		if (HX_FIELD_EQ(inName,"get_focused") ) { return get_focused_dyn(); }
		if (HX_FIELD_EQ(inName,"set_focused") ) { return set_focused_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_captured") ) { return get_captured_dyn(); }
		if (HX_FIELD_EQ(inName,"set_captured") ) { return set_captured_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"focus_invalid") ) { return focus_invalid; }
		if (HX_FIELD_EQ(inName,"onscalechange") ) { return onscalechange; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onmarkedchange") ) { return onmarkedchange; }
		if (HX_FIELD_EQ(inName,"bring_to_front") ) { return bring_to_front_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onfocusedchange") ) { return onfocusedchange; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"oncapturedchange") ) { return oncapturedchange; }
		if (HX_FIELD_EQ(inName,"topmost_at_point") ) { return topmost_at_point_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Canvas_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp == hx::paccAlways) return set_scale(inValue);scale=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"marked") ) { if (inCallProp == hx::paccAlways) return set_marked(inValue);marked=inValue.Cast< ::mint::Control >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"focused") ) { if (inCallProp == hx::paccAlways) return set_focused(inValue);focused=inValue.Cast< ::mint::Control >(); return inValue; }
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"captured") ) { if (inCallProp == hx::paccAlways) return set_captured(inValue);captured=inValue.Cast< ::mint::Control >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"depth_idx") ) { depth_idx=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_mouse_down") ) { _mouse_down=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"focus_invalid") ) { focus_invalid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onscalechange") ) { onscalechange=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onmarkedchange") ) { onmarkedchange=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onfocusedchange") ) { onfocusedchange=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"oncapturedchange") ) { oncapturedchange=inValue.Cast< ::mint::core::Signal >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Canvas_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("focused","\x37","\x5e","\x83","\x41"));
	outFields->push(HX_HCSTRING("marked","\xac","\x75","\x70","\xba"));
	outFields->push(HX_HCSTRING("captured","\x1e","\xa5","\x44","\xc0"));
	outFields->push(HX_HCSTRING("focus_invalid","\x50","\x2c","\x31","\x3c"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("onfocusedchange","\x68","\x0a","\x81","\x8d"));
	outFields->push(HX_HCSTRING("onmarkedchange","\xbb","\xa3","\x71","\x87"));
	outFields->push(HX_HCSTRING("oncapturedchange","\x6d","\x5a","\xc5","\x99"));
	outFields->push(HX_HCSTRING("onscalechange","\xbb","\x68","\x99","\xed"));
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	outFields->push(HX_HCSTRING("depth_idx","\xc1","\x77","\xc5","\xaa"));
	outFields->push(HX_HCSTRING("_mouse_down","\x1b","\x65","\xa8","\x52"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::mint::Control*/ ,(int)offsetof(Canvas_obj,focused),HX_HCSTRING("focused","\x37","\x5e","\x83","\x41")},
	{hx::fsObject /*::mint::Control*/ ,(int)offsetof(Canvas_obj,marked),HX_HCSTRING("marked","\xac","\x75","\x70","\xba")},
	{hx::fsObject /*::mint::Control*/ ,(int)offsetof(Canvas_obj,captured),HX_HCSTRING("captured","\x1e","\xa5","\x44","\xc0")},
	{hx::fsBool,(int)offsetof(Canvas_obj,focus_invalid),HX_HCSTRING("focus_invalid","\x50","\x2c","\x31","\x3c")},
	{hx::fsFloat,(int)offsetof(Canvas_obj,scale),HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Canvas_obj,onfocusedchange),HX_HCSTRING("onfocusedchange","\x68","\x0a","\x81","\x8d")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Canvas_obj,onmarkedchange),HX_HCSTRING("onmarkedchange","\xbb","\xa3","\x71","\x87")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Canvas_obj,oncapturedchange),HX_HCSTRING("oncapturedchange","\x6d","\x5a","\xc5","\x99")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Canvas_obj,onscalechange),HX_HCSTRING("onscalechange","\xbb","\x68","\x99","\xed")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Canvas_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
	{hx::fsFloat,(int)offsetof(Canvas_obj,depth_idx),HX_HCSTRING("depth_idx","\xc1","\x77","\xc5","\xaa")},
	{hx::fsBool,(int)offsetof(Canvas_obj,_mouse_down),HX_HCSTRING("_mouse_down","\x1b","\x65","\xa8","\x52")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("focused","\x37","\x5e","\x83","\x41"),
	HX_HCSTRING("marked","\xac","\x75","\x70","\xba"),
	HX_HCSTRING("captured","\x1e","\xa5","\x44","\xc0"),
	HX_HCSTRING("focus_invalid","\x50","\x2c","\x31","\x3c"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("onfocusedchange","\x68","\x0a","\x81","\x8d"),
	HX_HCSTRING("onmarkedchange","\xbb","\xa3","\x71","\x87"),
	HX_HCSTRING("oncapturedchange","\x6d","\x5a","\xc5","\x99"),
	HX_HCSTRING("onscalechange","\xbb","\x68","\x99","\xed"),
	HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"),
	HX_HCSTRING("bring_to_front","\xb2","\x9f","\xd3","\x87"),
	HX_HCSTRING("topmost_at_point","\x8b","\xd7","\x43","\xcf"),
	HX_HCSTRING("depth_idx","\xc1","\x77","\xc5","\xaa"),
	HX_HCSTRING("apply_depth","\x32","\x84","\x77","\xda"),
	HX_HCSTRING("sync_depth","\xdf","\xa8","\x19","\x91"),
	HX_HCSTRING("mouseup","\xc0","\x0f","\x73","\xc0"),
	HX_HCSTRING("_mouse_down","\x1b","\x65","\xa8","\x52"),
	HX_HCSTRING("mousedown","\x07","\x85","\xe9","\x03"),
	HX_HCSTRING("mousemove","\xb6","\x6f","\xdc","\x09"),
	HX_HCSTRING("mousewheel","\x56","\xb8","\x59","\x54"),
	HX_HCSTRING("keyup","\xba","\xd5","\xfe","\xde"),
	HX_HCSTRING("keydown","\x81","\x3d","\x6e","\xb1"),
	HX_HCSTRING("textinput","\x3d","\xe4","\xdd","\xc3"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("set_scale","\xed","\x16","\xc9","\x9f"),
	HX_HCSTRING("get_focused","\x4e","\xbe","\x7d","\xc7"),
	HX_HCSTRING("set_focused","\x5a","\xc5","\xea","\xd1"),
	HX_HCSTRING("get_captured","\x27","\x59","\x5e","\x75"),
	HX_HCSTRING("set_captured","\x9b","\x7c","\x57","\x8a"),
	HX_HCSTRING("get_marked","\x75","\xe5","\xf7","\xaa"),
	HX_HCSTRING("set_marked","\xe9","\x83","\x75","\xae"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Canvas_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Canvas_obj::__mClass,"__mClass");
};

#endif

hx::Class Canvas_obj::__mClass;

void Canvas_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mint.Canvas","\x44","\xc9","\x87","\xb1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Canvas_obj >;
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
