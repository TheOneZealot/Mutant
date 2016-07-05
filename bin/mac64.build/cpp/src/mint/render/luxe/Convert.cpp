#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_luxe_InteractState
#include <luxe/InteractState.h>
#endif
#ifndef INCLUDED_luxe_KeyEvent
#include <luxe/KeyEvent.h>
#endif
#ifndef INCLUDED_luxe_MouseEvent
#include <luxe/MouseEvent.h>
#endif
#ifndef INCLUDED_luxe_TextEvent
#include <luxe/TextEvent.h>
#endif
#ifndef INCLUDED_luxe_TextEventType
#include <luxe/TextEventType.h>
#endif
#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
#endif
#ifndef INCLUDED_mint_render_luxe_Convert
#include <mint/render/luxe/Convert.h>
#endif
#ifndef INCLUDED_mint_types_TextEventType
#include <mint/types/TextEventType.h>
#endif
#ifndef INCLUDED_phoenix_Camera
#include <phoenix/Camera.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_systems_input_Keycodes
#include <snow/systems/input/Keycodes.h>
#endif
#ifndef INCLUDED_snow_systems_input_Scancodes
#include <snow/systems/input/Scancodes.h>
#endif
#ifndef INCLUDED_snow_types_ModState
#include <snow/types/ModState.h>
#endif
namespace mint{
namespace render{
namespace luxe{

Void Convert_obj::__construct()
{
	return null();
}

//Convert_obj::~Convert_obj() { }

Dynamic Convert_obj::__CreateEmpty() { return  new Convert_obj; }
hx::ObjectPtr< Convert_obj > Convert_obj::__new()
{  hx::ObjectPtr< Convert_obj > _result_ = new Convert_obj();
	_result_->__construct();
	return _result_;}

Dynamic Convert_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Convert_obj > _result_ = new Convert_obj();
	_result_->__construct();
	return _result_;}

int Convert_obj::text_align( int _align){
	HX_STACK_FRAME("mint.render.luxe.Convert","text_align",0x65d29e1a,"mint.render.luxe.Convert.text_align","mint/render/luxe/Convert.hx",13,0x71302cd8)
	HX_STACK_ARG(_align,"_align")
	HX_STACK_LINE(15)
	int tmp = _align;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(15)
	switch( (int)(tmp)){
		case (int)2: {
			HX_STACK_LINE(16)
			tmp1 = (int)1;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(17)
			tmp1 = (int)2;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(18)
			tmp1 = (int)3;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(19)
			tmp1 = (int)4;
		}
		;break;
		default: {
			HX_STACK_LINE(20)
			tmp1 = (int)0;
		}
	}
	HX_STACK_LINE(15)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Convert_obj,text_align,return )

::phoenix::Rectangle Convert_obj::bounds( ::mint::Control _control,Dynamic __o__scale){
Dynamic _scale = __o__scale.Default(((Float)1.0));
	HX_STACK_FRAME("mint.render.luxe.Convert","bounds",0xc140da9c,"mint.render.luxe.Convert.bounds","mint/render/luxe/Convert.hx",26,0x71302cd8)
	HX_STACK_ARG(_control,"_control")
	HX_STACK_ARG(_scale,"_scale")
{
		HX_STACK_LINE(28)
		bool tmp = (_control == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		if ((tmp)){
			HX_STACK_LINE(28)
			return null();
		}
		HX_STACK_LINE(30)
		Float tmp1 = (_control->x * _scale);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		Float tmp2 = (_control->y * _scale);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(30)
		Float tmp3 = (_control->w * _scale);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(30)
		Float tmp4 = (_control->h * _scale);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(30)
		::phoenix::Rectangle tmp5 = ::phoenix::Rectangle_obj::__new(tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(30)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Convert_obj,bounds,return )

int Convert_obj::interact_state( ::luxe::InteractState _state){
	HX_STACK_FRAME("mint.render.luxe.Convert","interact_state",0x887a48af,"mint.render.luxe.Convert.interact_state","mint/render/luxe/Convert.hx",35,0x71302cd8)
	HX_STACK_ARG(_state,"_state")
	HX_STACK_LINE(37)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	switch( (int)(_state->__Index())){
		case (int)0: {
			HX_STACK_LINE(38)
			tmp = (int)0;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(39)
			tmp = (int)1;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(40)
			tmp = (int)2;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(41)
			tmp = (int)3;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(42)
			tmp = (int)4;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(43)
			tmp = (int)5;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(44)
			tmp = (int)6;
		}
		;break;
	}
	HX_STACK_LINE(37)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Convert_obj,interact_state,return )

int Convert_obj::mouse_button( int _button){
	HX_STACK_FRAME("mint.render.luxe.Convert","mouse_button",0x94cb0773,"mint.render.luxe.Convert.mouse_button","mint/render/luxe/Convert.hx",50,0x71302cd8)
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(52)
	int tmp = _button;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(53)
			tmp1 = (int)-1;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(54)
			tmp1 = (int)0;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(55)
			tmp1 = (int)1;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(56)
			tmp1 = (int)2;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(57)
			tmp1 = (int)3;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(58)
			tmp1 = (int)4;
		}
		;break;
	}
	HX_STACK_LINE(52)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Convert_obj,mouse_button,return )

int Convert_obj::key_code( int _keycode){
	HX_STACK_FRAME("mint.render.luxe.Convert","key_code",0x8fcfeef4,"mint.render.luxe.Convert.key_code","mint/render/luxe/Convert.hx",64,0x71302cd8)
	HX_STACK_ARG(_keycode,"_keycode")
	HX_STACK_LINE(66)
	int tmp = _keycode;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(242)
	int tmp1 = ::snow::systems::input::Scancodes_obj::left;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(241)
	int tmp2 = ::snow::systems::input::Scancodes_obj::right;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(244)
	int tmp3 = ::snow::systems::input::Scancodes_obj::up;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(243)
	int tmp4 = ::snow::systems::input::Scancodes_obj::down;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(66)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(66)
	int _switch_1 = (tmp);
	if (  ( _switch_1==::snow::systems::input::Keycodes_obj::from_scan(tmp1))){
		HX_STACK_LINE(68)
		tmp5 = (int)0;
	}
	else if (  ( _switch_1==::snow::systems::input::Keycodes_obj::from_scan(tmp2))){
		HX_STACK_LINE(69)
		tmp5 = (int)1;
	}
	else if (  ( _switch_1==::snow::systems::input::Keycodes_obj::from_scan(tmp3))){
		HX_STACK_LINE(70)
		tmp5 = (int)2;
	}
	else if (  ( _switch_1==::snow::systems::input::Keycodes_obj::from_scan(tmp4))){
		HX_STACK_LINE(71)
		tmp5 = (int)3;
	}
	else if (  ( _switch_1==(int)8)){
		HX_STACK_LINE(72)
		tmp5 = (int)4;
	}
	else if (  ( _switch_1==(int)127)){
		HX_STACK_LINE(73)
		tmp5 = (int)5;
	}
	else if (  ( _switch_1==(int)9)){
		HX_STACK_LINE(74)
		tmp5 = (int)6;
	}
	else if (  ( _switch_1==(int)13)){
		HX_STACK_LINE(75)
		tmp5 = (int)7;
	}
	else if (  ( _switch_1==(int)27)){
		HX_STACK_LINE(76)
		tmp5 = (int)8;
	}
	else  {
		HX_STACK_LINE(77)
		tmp5 = (int)-1;
	}
;
;
	HX_STACK_LINE(66)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Convert_obj,key_code,return )

::mint::types::TextEventType Convert_obj::text_event_type( ::luxe::TextEventType _type){
	HX_STACK_FRAME("mint.render.luxe.Convert","text_event_type",0xec5aacca,"mint.render.luxe.Convert.text_event_type","mint/render/luxe/Convert.hx",83,0x71302cd8)
	HX_STACK_ARG(_type,"_type")
	HX_STACK_LINE(85)
	::mint::types::TextEventType tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	switch( (int)(_type->__Index())){
		case (int)0: {
			HX_STACK_LINE(86)
			tmp = ::mint::types::TextEventType_obj::unknown;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(87)
			tmp = ::mint::types::TextEventType_obj::edit;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(88)
			tmp = ::mint::types::TextEventType_obj::input;
		}
		;break;
	}
	HX_STACK_LINE(85)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Convert_obj,text_event_type,return )

Dynamic Convert_obj::mod_state( ::snow::types::ModState _mod){
	HX_STACK_FRAME("mint.render.luxe.Convert","mod_state",0xf86ecfcd,"mint.render.luxe.Convert.mod_state","mint/render/luxe/Convert.hx",94,0x71302cd8)
	HX_STACK_ARG(_mod,"_mod")
	struct _Function_1_1{
		inline static Dynamic Block( ::snow::types::ModState &_mod){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/render/luxe/Convert.hx",96,0x71302cd8)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("none","\xb8","\x12","\x0a","\x49") , _mod->none,false);
				__result->Add(HX_HCSTRING("lshift","\x96","\xe4","\xad","\xaa") , _mod->lshift,false);
				__result->Add(HX_HCSTRING("rshift","\xd0","\x0e","\xd2","\x10") , _mod->rshift,false);
				__result->Add(HX_HCSTRING("lctrl","\x17","\x2f","\x0f","\x71") , _mod->lctrl,false);
				__result->Add(HX_HCSTRING("rctrl","\x1d","\xaa","\x76","\xe5") , _mod->rctrl,false);
				__result->Add(HX_HCSTRING("lalt","\x3d","\x04","\xad","\x47") , _mod->lalt,false);
				__result->Add(HX_HCSTRING("ralt","\xf7","\x4b","\xa4","\x4b") , _mod->ralt,false);
				__result->Add(HX_HCSTRING("lmeta","\x31","\xf1","\x9f","\x77") , _mod->lmeta,false);
				__result->Add(HX_HCSTRING("rmeta","\x37","\x6c","\x07","\xec") , _mod->rmeta,false);
				__result->Add(HX_HCSTRING("num","\x46","\xde","\x53","\x00") , _mod->num,false);
				__result->Add(HX_HCSTRING("caps","\x21","\x1c","\xba","\x41") , _mod->caps,false);
				__result->Add(HX_HCSTRING("mode","\x63","\xd3","\x60","\x48") , _mod->mode,false);
				__result->Add(HX_HCSTRING("ctrl","\xab","\x88","\xc8","\x41") , _mod->ctrl,false);
				__result->Add(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c") , _mod->shift,false);
				__result->Add(HX_HCSTRING("alt","\x29","\xf9","\x49","\x00") , _mod->alt,false);
				__result->Add(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48") , _mod->meta,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(96)
	Dynamic tmp = _Function_1_1::Block(_mod);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Convert_obj,mod_state,return )

Dynamic Convert_obj::mouse_event( ::luxe::MouseEvent _event,Dynamic __o__scale,::phoenix::Camera view){
Dynamic _scale = __o__scale.Default(((Float)1.0));
	HX_STACK_FRAME("mint.render.luxe.Convert","mouse_event",0x2ad70db9,"mint.render.luxe.Convert.mouse_event","mint/render/luxe/Convert.hx",118,0x71302cd8)
	HX_STACK_ARG(_event,"_event")
	HX_STACK_ARG(_scale,"_scale")
	HX_STACK_ARG(view,"view")
{
		HX_STACK_LINE(120)
		::phoenix::Vector tmp = ::phoenix::Vector_obj::__new(_event->x,_event->y,null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(120)
		::phoenix::Vector _pos = tmp;		HX_STACK_VAR(_pos,"_pos");
		HX_STACK_LINE(122)
		bool tmp1 = (view != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(122)
		if ((tmp1)){
			HX_STACK_LINE(123)
			::phoenix::Vector tmp2 = _pos;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(123)
			::phoenix::Vector tmp3 = view->screen_point_to_world(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(123)
			_pos = tmp3;
		}
		HX_STACK_LINE(127)
		::luxe::InteractState tmp2 = _event->state;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(127)
		int tmp3 = ::mint::render::luxe::Convert_obj::interact_state(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(128)
		int tmp4 = _event->button;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(128)
		int tmp5 = ::mint::render::luxe::Convert_obj::mouse_button(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(129)
		Float tmp6 = _event->timestamp;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(130)
		Float tmp7 = (Float(_pos->x) / Float(_scale));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(130)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(131)
		Float tmp9 = (Float(_pos->y) / Float(_scale));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(131)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(132)
		Float tmp11 = (Float(_event->x_rel) / Float(_scale));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(132)
		int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(133)
		Float tmp13 = (Float(_event->y_rel) / Float(_scale));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(133)
		int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		struct _Function_1_1{
			inline static Dynamic Block( int &tmp5,Float &tmp6,int &tmp10,int &tmp3,int &tmp8,int &tmp12,int &tmp14){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/render/luxe/Convert.hx",126,0x71302cd8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , tmp3,false);
					__result->Add(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9") , tmp5,false);
					__result->Add(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5") , tmp6,false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp8,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp10,false);
					__result->Add(HX_HCSTRING("xrel","\xe1","\x73","\xa8","\x4f") , tmp12,false);
					__result->Add(HX_HCSTRING("yrel","\x80","\xaa","\x51","\x50") , tmp14,false);
					__result->Add(HX_HCSTRING("bubble","\x8c","\xdf","\xec","\xcd") , true,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(126)
		Dynamic tmp15 = _Function_1_1::Block(tmp5,tmp6,tmp10,tmp3,tmp8,tmp12,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(126)
		return tmp15;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Convert_obj,mouse_event,return )

Dynamic Convert_obj::key_event( ::luxe::KeyEvent _event){
	HX_STACK_FRAME("mint.render.luxe.Convert","key_event",0x718f9873,"mint.render.luxe.Convert.key_event","mint/render/luxe/Convert.hx",140,0x71302cd8)
	HX_STACK_ARG(_event,"_event")
	HX_STACK_LINE(143)
	::luxe::InteractState tmp = _event->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(143)
	int tmp1 = ::mint::render::luxe::Convert_obj::interact_state(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(144)
	int tmp2 = _event->keycode;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(145)
	Float tmp3 = _event->timestamp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(146)
	int tmp4 = _event->keycode;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(146)
	int tmp5 = ::mint::render::luxe::Convert_obj::key_code(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(147)
	::snow::types::ModState tmp6 = _event->mod;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(147)
	Dynamic tmp7 = ::mint::render::luxe::Convert_obj::mod_state(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	struct _Function_1_1{
		inline static Dynamic Block( int &tmp5,int &tmp2,Float &tmp3,int &tmp1,Dynamic &tmp7){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/render/luxe/Convert.hx",142,0x71302cd8)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , tmp1,false);
				__result->Add(HX_HCSTRING("keycode","\x4c","\xf6","\xc4","\xb0") , tmp2,false);
				__result->Add(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5") , tmp3,false);
				__result->Add(HX_HCSTRING("key","\x9f","\x89","\x51","\x00") , tmp5,false);
				__result->Add(HX_HCSTRING("mod","\xc2","\x16","\x53","\x00") , tmp7,false);
				__result->Add(HX_HCSTRING("bubble","\x8c","\xdf","\xec","\xcd") , true,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(142)
	Dynamic tmp8 = _Function_1_1::Block(tmp5,tmp2,tmp3,tmp1,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(142)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Convert_obj,key_event,return )

Dynamic Convert_obj::text_event( ::luxe::TextEvent _event){
	HX_STACK_FRAME("mint.render.luxe.Convert","text_event",0xba060f6f,"mint.render.luxe.Convert.text_event","mint/render/luxe/Convert.hx",154,0x71302cd8)
	HX_STACK_ARG(_event,"_event")
	HX_STACK_LINE(157)
	::String tmp = _event->text;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(158)
	::luxe::TextEventType tmp1 = _event->type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(158)
	::mint::types::TextEventType tmp2 = ::mint::render::luxe::Convert_obj::text_event_type(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(159)
	Float tmp3 = _event->timestamp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(160)
	int tmp4 = _event->start;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(161)
	int tmp5 = _event->length;		HX_STACK_VAR(tmp5,"tmp5");
	struct _Function_1_1{
		inline static Dynamic Block( int &tmp5,::String &tmp,int &tmp4,::mint::types::TextEventType &tmp2,Float &tmp3){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/render/luxe/Convert.hx",156,0x71302cd8)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , tmp,false);
				__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , tmp2,false);
				__result->Add(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5") , tmp3,false);
				__result->Add(HX_HCSTRING("start","\x62","\x74","\x0b","\x84") , tmp4,false);
				__result->Add(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f") , tmp5,false);
				__result->Add(HX_HCSTRING("bubble","\x8c","\xdf","\xec","\xcd") , true,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(156)
	Dynamic tmp6 = _Function_1_1::Block(tmp5,tmp,tmp4,tmp2,tmp3);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(156)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Convert_obj,text_event,return )


Convert_obj::Convert_obj()
{
}

bool Convert_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { outValue = bounds_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"key_code") ) { outValue = key_code_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mod_state") ) { outValue = mod_state_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"key_event") ) { outValue = key_event_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"text_align") ) { outValue = text_align_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"text_event") ) { outValue = text_event_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mouse_event") ) { outValue = mouse_event_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mouse_button") ) { outValue = mouse_button_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"interact_state") ) { outValue = interact_state_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"text_event_type") ) { outValue = text_event_type_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Convert_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Convert_obj::__mClass,"__mClass");
};

#endif

hx::Class Convert_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("text_align","\x73","\xaa","\xd4","\x1f"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("interact_state","\x88","\xf5","\x1b","\x79"),
	HX_HCSTRING("mouse_button","\x0c","\x9c","\xab","\x5c"),
	HX_HCSTRING("key_code","\x0d","\x03","\x12","\xa6"),
	HX_HCSTRING("text_event_type","\xd1","\x3d","\x30","\x89"),
	HX_HCSTRING("mod_state","\x94","\x51","\xfe","\x5b"),
	HX_HCSTRING("mouse_event","\x40","\xcf","\x9f","\x32"),
	HX_HCSTRING("key_event","\x3a","\x1a","\x1f","\xd5"),
	HX_HCSTRING("text_event","\xc8","\x1b","\x08","\x74"),
	::String(null()) };

void Convert_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mint.render.luxe.Convert","\x67","\x8d","\xbf","\xef");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Convert_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Convert_obj >;
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
