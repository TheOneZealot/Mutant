#include <hxcpp.h>

#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
#endif
#ifndef INCLUDED_mint_List
#include <mint/List.h>
#endif
#ifndef INCLUDED_mint_Scroll
#include <mint/Scroll.h>
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
namespace mint{

Void List_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("mint.List","new",0x00b3abbc,"mint.List.new","mint/List.hx",24,0x671e9153)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(26)
	this->items = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(27)
	this->options = _options;
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		::String tmp1 = tmp->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(29)
		if ((tmp2)){
			HX_STACK_LINE(29)
			Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(29)
			tmp3->__FieldRef(HX_HCSTRING("name","\x4b","\x72","\xff","\x48")) = HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47");
		}
		HX_STACK_LINE(29)
		Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(29)
		tmp3->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
	}
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		Dynamic tmp1 = tmp->__Field(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(30)
		if ((tmp2)){
			HX_STACK_LINE(30)
			Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(30)
			tmp3->__FieldRef(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a")) = true;
		}
		HX_STACK_LINE(30)
		Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(30)
		tmp3->__Field(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a"), hx::paccDynamic );
	}
	HX_STACK_LINE(32)
	Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	super::__construct(tmp,null());
	HX_STACK_LINE(34)
	::mint::core::Signal tmp1 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	this->onselect = tmp1;
	HX_STACK_LINE(35)
	::mint::core::Signal tmp2 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	this->onitemleave = tmp2;
	HX_STACK_LINE(36)
	::mint::core::Signal tmp3 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(36)
	this->onitementer = tmp3;
	HX_STACK_LINE(40)
	Float tmp4 = this->w;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(40)
	Float tmp5 = this->h;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(41)
	::String tmp6 = this->name;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(41)
	::String tmp7 = (tmp6 + HX_HCSTRING(".view","\x93","\xe1","\xbd","\xca"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(42)
	Dynamic tmp8 = this->options;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(43)
	Dynamic tmp9 = this->options;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(43)
	Dynamic tmp10 = tmp9->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
	struct _Function_1_1{
		inline static Dynamic Block( hx::ObjectPtr< ::mint::List_obj > __this,Float &tmp5,Float &tmp4,Dynamic &tmp10,::String &tmp7,Dynamic &tmp8){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/List.hx",38,0x671e9153)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed") , ((::mint::Control)(__this)),false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp4,false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp5,false);
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp7,false);
				__result->Add(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf") , tmp8->__Field(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"), hx::paccDynamic )->__Field(HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("internal_visible","\x30","\x3e","\x18","\xd0") , tmp10,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(38)
	Dynamic tmp11 = _Function_1_1::Block(this,tmp5,tmp4,tmp10,tmp7,tmp8);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(38)
	::mint::Scroll tmp12 = ::mint::Scroll_obj::__new(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(38)
	this->view = tmp12;
	HX_STACK_LINE(46)
	::mint::render::Rendering tmp13 = this->rendering;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(46)
	::mint::render::Renderer tmp14 = tmp13->get(hx::ClassOf< ::mint::List >(),hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(46)
	this->renderer = tmp14;
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(48)
		::mint::core::Signal tmp15 = this->oncreate;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(51)
		int tmp16 = tmp15->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(51)
		int _count = tmp16;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			bool tmp17 = (_idx < _count);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(52)
			bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(52)
			if ((tmp18)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(48)
			::mint::core::Signal tmp19 = this->oncreate;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(53)
			Dynamic tmp20 = tmp19->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(53)
			Dynamic fn = tmp20;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp21 = (fn != null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(54)
			if ((tmp21)){
				HX_STACK_LINE(55)
				fn().Cast< Void >();
			}
			HX_STACK_LINE(57)
			(_idx)++;
		}
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp17 = (_count > (int)0);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(60)
			bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(60)
			if ((tmp18)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(48)
			::mint::core::Signal tmp19 = this->oncreate;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(61)
			int tmp20 = (_count - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(61)
			Dynamic tmp21 = tmp19->listeners->__GetItem(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(61)
			Dynamic fn = tmp21;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(62)
			bool tmp22 = (fn == null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(62)
			if ((tmp22)){
				HX_STACK_LINE(48)
				::mint::core::Signal tmp23 = this->oncreate;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(62)
				int tmp24 = (_count - (int)1);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(62)
				tmp23->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp24,(int)1);
			}
			HX_STACK_LINE(63)
			(_count)--;
		}
	}
}
;
	return null();
}

//List_obj::~List_obj() { }

Dynamic List_obj::__CreateEmpty() { return  new List_obj; }
hx::ObjectPtr< List_obj > List_obj::__new(Dynamic _options)
{  hx::ObjectPtr< List_obj > _result_ = new List_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic List_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< List_obj > _result_ = new List_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void List_obj::add_item( ::mint::Control item,hx::Null< Float >  __o_offset_x,hx::Null< Float >  __o_offset_y){
Float offset_x = __o_offset_x.Default(((Float)0.0));
Float offset_y = __o_offset_y.Default(((Float)0.0));
	HX_STACK_FRAME("mint.List","add_item",0x171c0e55,"mint.List.add_item","mint/List.hx",52,0x671e9153)
	HX_STACK_THIS(this)
	HX_STACK_ARG(item,"item")
	HX_STACK_ARG(offset_x,"offset_x")
	HX_STACK_ARG(offset_y,"offset_y")
{
		HX_STACK_LINE(54)
		::mint::Scroll tmp = this->view;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		Dynamic tmp1 = tmp->container->get_children_bounds();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(54)
		Dynamic _childbounds = tmp1;		HX_STACK_VAR(_childbounds,"_childbounds");
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			::mint::Control _g = item;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(56)
			Float tmp2 = _g->get_y_local();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(56)
			Float tmp3 = (_childbounds->__Field(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"), hx::paccDynamic ) + offset_y);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(56)
			Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(56)
			_g->set_y_local(tmp4);
		}
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			::mint::Control _g = item;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(57)
			Float tmp2 = _g->get_x_local();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(57)
			Float tmp3 = offset_x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(57)
			Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(57)
			_g->set_x_local(tmp4);
		}
		HX_STACK_LINE(59)
		::mint::Scroll tmp2 = this->view;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		::mint::Control tmp3 = item;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(59)
		tmp2->add(tmp3);
		HX_STACK_LINE(61)
		item->mouse_input = true;
		HX_STACK_LINE(62)
		::mint::Control tmp4 = item;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(62)
		this->items->push(tmp4);
		HX_STACK_LINE(64)
		Dynamic tmp5 = this->item_mousedown_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(64)
		item->onmouseup->listen(tmp5);
		HX_STACK_LINE(65)
		Dynamic tmp6 = this->item_mouseenter_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(65)
		item->onmouseenter->listen(tmp6);
		HX_STACK_LINE(66)
		Dynamic tmp7 = this->item_mouseleave_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(66)
		item->onmouseleave->listen(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(List_obj,add_item,(void))

Void List_obj::item_mouseenter( Dynamic event,::mint::Control ctrl){
{
		HX_STACK_FRAME("mint.List","item_mouseenter",0xf24ab11b,"mint.List.item_mouseenter","mint/List.hx",70,0x671e9153)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(ctrl,"ctrl")
		HX_STACK_LINE(71)
		::mint::Control tmp = ctrl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		int tmp1 = this->items->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		int idx = tmp1;		HX_STACK_VAR(idx,"idx");
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(50)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(72)
			::mint::core::Signal tmp2 = this->onitementer;		HX_STACK_VAR(tmp2,"tmp2");
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
				HX_STACK_LINE(72)
				::mint::core::Signal tmp6 = this->onitementer;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(53)
				Dynamic tmp7 = tmp6->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(53)
				Dynamic fn = tmp7;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(54)
				bool tmp8 = (fn != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(54)
				if ((tmp8)){
					HX_STACK_LINE(72)
					int tmp9 = idx;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(72)
					::mint::Control tmp10 = ctrl;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(72)
					Dynamic tmp11 = event;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(55)
					fn(tmp9,tmp10,tmp11).Cast< Void >();
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
				HX_STACK_LINE(72)
				::mint::core::Signal tmp6 = this->onitementer;		HX_STACK_VAR(tmp6,"tmp6");
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
					HX_STACK_LINE(72)
					::mint::core::Signal tmp10 = this->onitementer;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(62)
					int tmp11 = (_count - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(62)
					tmp10->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp11,(int)1);
				}
				HX_STACK_LINE(63)
				(_count)--;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(List_obj,item_mouseenter,(void))

Void List_obj::item_mouseleave( Dynamic event,::mint::Control ctrl){
{
		HX_STACK_FRAME("mint.List","item_mouseleave",0xf41778fa,"mint.List.item_mouseleave","mint/List.hx",75,0x671e9153)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(ctrl,"ctrl")
		HX_STACK_LINE(76)
		::mint::Control tmp = ctrl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		int tmp1 = this->items->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		int idx = tmp1;		HX_STACK_VAR(idx,"idx");
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(50)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(77)
			::mint::core::Signal tmp2 = this->onitemleave;		HX_STACK_VAR(tmp2,"tmp2");
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
				HX_STACK_LINE(77)
				::mint::core::Signal tmp6 = this->onitemleave;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(53)
				Dynamic tmp7 = tmp6->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(53)
				Dynamic fn = tmp7;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(54)
				bool tmp8 = (fn != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(54)
				if ((tmp8)){
					HX_STACK_LINE(77)
					int tmp9 = idx;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(77)
					::mint::Control tmp10 = ctrl;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(77)
					Dynamic tmp11 = event;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(55)
					fn(tmp9,tmp10,tmp11).Cast< Void >();
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
				HX_STACK_LINE(77)
				::mint::core::Signal tmp6 = this->onitemleave;		HX_STACK_VAR(tmp6,"tmp6");
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
					HX_STACK_LINE(77)
					::mint::core::Signal tmp10 = this->onitemleave;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(62)
					int tmp11 = (_count - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(62)
					tmp10->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp11,(int)1);
				}
				HX_STACK_LINE(63)
				(_count)--;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(List_obj,item_mouseleave,(void))

Void List_obj::item_mousedown( Dynamic event,::mint::Control ctrl){
{
		HX_STACK_FRAME("mint.List","item_mousedown",0xb4a965bf,"mint.List.item_mousedown","mint/List.hx",80,0x671e9153)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(ctrl,"ctrl")
		HX_STACK_LINE(81)
		::mint::Control tmp = ctrl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		int tmp1 = this->items->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		int idx = tmp1;		HX_STACK_VAR(idx,"idx");
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(50)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(82)
			::mint::core::Signal tmp2 = this->onselect;		HX_STACK_VAR(tmp2,"tmp2");
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
				HX_STACK_LINE(82)
				::mint::core::Signal tmp6 = this->onselect;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(53)
				Dynamic tmp7 = tmp6->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(53)
				Dynamic fn = tmp7;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(54)
				bool tmp8 = (fn != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(54)
				if ((tmp8)){
					HX_STACK_LINE(82)
					int tmp9 = idx;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(82)
					::mint::Control tmp10 = ctrl;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(82)
					Dynamic tmp11 = event;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(55)
					fn(tmp9,tmp10,tmp11).Cast< Void >();
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
				HX_STACK_LINE(82)
				::mint::core::Signal tmp6 = this->onselect;		HX_STACK_VAR(tmp6,"tmp6");
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
					HX_STACK_LINE(82)
					::mint::core::Signal tmp10 = this->onselect;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(62)
					int tmp11 = (_count - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(62)
					tmp10->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp11,(int)1);
				}
				HX_STACK_LINE(63)
				(_count)--;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(List_obj,item_mousedown,(void))

Void List_obj::clear( ){
{
		HX_STACK_FRAME("mint.List","clear",0x04eddbe9,"mint.List.clear","mint/List.hx",85,0x671e9153)
		HX_STACK_THIS(this)
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(87)
			Array< ::Dynamic > _g1 = this->items;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(87)
			while((true)){
				HX_STACK_LINE(87)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(87)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(87)
				if ((tmp1)){
					HX_STACK_LINE(87)
					break;
				}
				HX_STACK_LINE(87)
				::mint::Control tmp2 = _g1->__get(_g).StaticCast< ::mint::Control >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(87)
				::mint::Control item = tmp2;		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(87)
				++(_g);
				HX_STACK_LINE(88)
				item->destroy();
				HX_STACK_LINE(89)
				item = null();
			}
		}
		HX_STACK_LINE(92)
		this->items = null();
		HX_STACK_LINE(93)
		this->items = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(95)
		::mint::Scroll tmp = this->view;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(95)
		tmp->refresh_scroll();
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(50)
			int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
			HX_STACK_LINE(96)
			::mint::core::Signal tmp1 = this->onselect;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(51)
			int tmp2 = tmp1->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(51)
			int _count = tmp2;		HX_STACK_VAR(_count,"_count");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp3 = (_idx < _count);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(52)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(52)
				if ((tmp4)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(96)
				::mint::core::Signal tmp5 = this->onselect;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(53)
				Dynamic tmp6 = tmp5->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(53)
				Dynamic fn = tmp6;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(54)
				bool tmp7 = (fn != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(54)
				if ((tmp7)){
					HX_STACK_LINE(55)
					fn((int)-1,null(),null()).Cast< Void >();
				}
				HX_STACK_LINE(57)
				(_idx)++;
			}
			HX_STACK_LINE(60)
			while((true)){
				HX_STACK_LINE(60)
				bool tmp3 = (_count > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(60)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(60)
				if ((tmp4)){
					HX_STACK_LINE(60)
					break;
				}
				HX_STACK_LINE(96)
				::mint::core::Signal tmp5 = this->onselect;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(61)
				int tmp6 = (_count - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(61)
				Dynamic tmp7 = tmp5->listeners->__GetItem(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(61)
				Dynamic fn = tmp7;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(62)
				bool tmp8 = (fn == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(62)
				if ((tmp8)){
					HX_STACK_LINE(96)
					::mint::core::Signal tmp9 = this->onselect;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(62)
					int tmp10 = (_count - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(62)
					tmp9->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp10,(int)1);
				}
				HX_STACK_LINE(63)
				(_count)--;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,clear,(void))

Void List_obj::destroy( ){
{
		HX_STACK_FRAME("mint.List","destroy",0xfa4ce656,"mint.List.destroy","mint/List.hx",100,0x671e9153)
		HX_STACK_THIS(this)
		HX_STACK_LINE(102)
		this->super::destroy();
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			::mint::core::Signal tmp = this->onselect;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(104)
			::mint::core::Signal _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(104)
			_this->listeners = null();
			HX_STACK_LINE(104)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(105)
		this->onselect = null();
		HX_STACK_LINE(106)
		{
			HX_STACK_LINE(106)
			::mint::core::Signal tmp = this->onitementer;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(106)
			::mint::core::Signal _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(106)
			_this->listeners = null();
			HX_STACK_LINE(106)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(107)
		this->onitementer = null();
		HX_STACK_LINE(108)
		{
			HX_STACK_LINE(108)
			::mint::core::Signal tmp = this->onitemleave;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(108)
			::mint::core::Signal _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(108)
			_this->listeners = null();
			HX_STACK_LINE(108)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(109)
		this->onitemleave = null();
	}
return null();
}


Void List_obj::bounds_changed( hx::Null< Float >  __o__dx,hx::Null< Float >  __o__dy,hx::Null< Float >  __o__dw,hx::Null< Float >  __o__dh){
Float _dx = __o__dx.Default(((Float)0.0));
Float _dy = __o__dy.Default(((Float)0.0));
Float _dw = __o__dw.Default(((Float)0.0));
Float _dh = __o__dh.Default(((Float)0.0));
	HX_STACK_FRAME("mint.List","bounds_changed",0x2880f80e,"mint.List.bounds_changed","mint/List.hx",114,0x671e9153)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_dx,"_dx")
	HX_STACK_ARG(_dy,"_dy")
	HX_STACK_ARG(_dw,"_dw")
	HX_STACK_ARG(_dh,"_dh")
{
		HX_STACK_LINE(116)
		Float tmp = _dx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(116)
		Float tmp1 = _dy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		Float tmp2 = _dw;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		Float tmp3 = _dh;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(116)
		this->super::bounds_changed(tmp,tmp1,tmp2,tmp3);
		HX_STACK_LINE(118)
		::mint::Scroll tmp4 = this->view;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(118)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(118)
		if ((tmp5)){
			HX_STACK_LINE(118)
			::mint::Scroll tmp6 = this->view;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(118)
			Float tmp7 = this->w;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(118)
			Float tmp8 = this->h;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(118)
			tmp6->set_size(tmp7,tmp8);
		}
	}
return null();
}



List_obj::List_obj()
{
}

void List_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(List);
	HX_MARK_MEMBER_NAME(view,"view");
	HX_MARK_MEMBER_NAME(items,"items");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(onselect,"onselect");
	HX_MARK_MEMBER_NAME(onitementer,"onitementer");
	HX_MARK_MEMBER_NAME(onitemleave,"onitemleave");
	::mint::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void List_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(view,"view");
	HX_VISIT_MEMBER_NAME(items,"items");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(onselect,"onselect");
	HX_VISIT_MEMBER_NAME(onitementer,"onitementer");
	HX_VISIT_MEMBER_NAME(onitemleave,"onitemleave");
	::mint::Control_obj::__Visit(HX_VISIT_ARG);
}

Dynamic List_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { return view; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"items") ) { return items; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onselect") ) { return onselect; }
		if (HX_FIELD_EQ(inName,"add_item") ) { return add_item_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onitementer") ) { return onitementer; }
		if (HX_FIELD_EQ(inName,"onitemleave") ) { return onitemleave; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"item_mousedown") ) { return item_mousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"bounds_changed") ) { return bounds_changed_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"item_mouseenter") ) { return item_mouseenter_dyn(); }
		if (HX_FIELD_EQ(inName,"item_mouseleave") ) { return item_mouseleave_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic List_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { view=inValue.Cast< ::mint::Scroll >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"items") ) { items=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onselect") ) { onselect=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onitementer") ) { onitementer=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onitemleave") ) { onitemleave=inValue.Cast< ::mint::core::Signal >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void List_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"));
	outFields->push(HX_HCSTRING("items","\x00","\xac","\x0c","\xc2"));
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	outFields->push(HX_HCSTRING("onselect","\x5b","\x9d","\x4b","\x15"));
	outFields->push(HX_HCSTRING("onitementer","\x26","\x66","\xb4","\x5d"));
	outFields->push(HX_HCSTRING("onitemleave","\x05","\x2e","\x81","\x5f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::mint::Scroll*/ ,(int)offsetof(List_obj,view),HX_HCSTRING("view","\x65","\x32","\x4f","\x4e")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(List_obj,items),HX_HCSTRING("items","\x00","\xac","\x0c","\xc2")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(List_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(List_obj,onselect),HX_HCSTRING("onselect","\x5b","\x9d","\x4b","\x15")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(List_obj,onitementer),HX_HCSTRING("onitementer","\x26","\x66","\xb4","\x5d")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(List_obj,onitemleave),HX_HCSTRING("onitemleave","\x05","\x2e","\x81","\x5f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"),
	HX_HCSTRING("items","\x00","\xac","\x0c","\xc2"),
	HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"),
	HX_HCSTRING("onselect","\x5b","\x9d","\x4b","\x15"),
	HX_HCSTRING("onitementer","\x26","\x66","\xb4","\x5d"),
	HX_HCSTRING("onitemleave","\x05","\x2e","\x81","\x5f"),
	HX_HCSTRING("add_item","\x31","\x97","\x00","\xdf"),
	HX_HCSTRING("item_mouseenter","\xbf","\x3b","\xe1","\xa2"),
	HX_HCSTRING("item_mouseleave","\x9e","\x03","\xae","\xa4"),
	HX_HCSTRING("item_mousedown","\x9b","\xfb","\x15","\xa3"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("bounds_changed","\xea","\x8d","\xed","\x16"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(List_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(List_obj::__mClass,"__mClass");
};

#endif

hx::Class List_obj::__mClass;

void List_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mint.List","\xca","\x5d","\x14","\x35");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< List_obj >;
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
