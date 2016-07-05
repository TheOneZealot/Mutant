#include <hxcpp.h>

#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
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
#ifndef INCLUDED_ui_AttributeBar
#include <ui/AttributeBar.h>
#endif
namespace ui{

Void AttributeBar_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("ui.AttributeBar","new",0x55d43f03,"ui.AttributeBar.new","ui/AttributeBar.hx",15,0x5837faec)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(18)
	this->max_value = (int)10;
	HX_STACK_LINE(17)
	this->value = (int)5;
	HX_STACK_LINE(26)
	this->options = _options;
	HX_STACK_LINE(28)
	{
		HX_STACK_LINE(28)
		Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		::String tmp1 = tmp->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(28)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		if ((tmp2)){
			HX_STACK_LINE(28)
			Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(28)
			tmp3->__FieldRef(HX_HCSTRING("name","\x4b","\x72","\xff","\x48")) = HX_HCSTRING("attributebar","\x37","\x3b","\xc2","\x95");
		}
		HX_STACK_LINE(28)
		Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		tmp3->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
	}
	HX_STACK_LINE(30)
	Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	super::__construct(tmp,null());
	HX_STACK_LINE(32)
	::mint::core::Signal tmp1 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	this->onchange = tmp1;
	HX_STACK_LINE(34)
	Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	{
		HX_STACK_LINE(34)
		Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		Dynamic tmp4 = tmp3->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(34)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(34)
		if ((tmp5)){
			HX_STACK_LINE(34)
			Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(34)
			tmp6->__FieldRef(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")) = (int)5;
		}
		HX_STACK_LINE(34)
		Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(34)
		tmp2 = tmp6->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );
	}
	HX_STACK_LINE(34)
	this->set_value(tmp2);
	HX_STACK_LINE(35)
	Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		Dynamic tmp5 = tmp4->__Field(HX_HCSTRING("max_value","\x56","\x64","\x96","\x28"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(35)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(35)
		if ((tmp6)){
			HX_STACK_LINE(35)
			Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(35)
			tmp7->__FieldRef(HX_HCSTRING("max_value","\x56","\x64","\x96","\x28")) = (int)10;
		}
		HX_STACK_LINE(35)
		Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(35)
		tmp3 = tmp7->__Field(HX_HCSTRING("max_value","\x56","\x64","\x96","\x28"), hx::paccDynamic );
	}
	HX_STACK_LINE(35)
	this->set_max_value(tmp3);
	HX_STACK_LINE(37)
	::mint::render::Rendering tmp4 = this->rendering;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(37)
	::mint::render::Renderer tmp5 = tmp4->get(hx::ClassOf< ::ui::AttributeBar >(),hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(37)
	this->renderer = tmp5;
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(39)
		::mint::core::Signal tmp6 = this->oncreate;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(51)
		int tmp7 = tmp6->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(51)
		int _count = tmp7;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			bool tmp8 = (_idx < _count);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(52)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(52)
			if ((tmp9)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(39)
			::mint::core::Signal tmp10 = this->oncreate;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(53)
			Dynamic tmp11 = tmp10->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(53)
			Dynamic fn = tmp11;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp12 = (fn != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(54)
			if ((tmp12)){
				HX_STACK_LINE(55)
				fn().Cast< Void >();
			}
			HX_STACK_LINE(57)
			(_idx)++;
		}
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp8 = (_count > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(60)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(60)
			if ((tmp9)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(39)
			::mint::core::Signal tmp10 = this->oncreate;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(61)
			int tmp11 = (_count - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(61)
			Dynamic tmp12 = tmp10->listeners->__GetItem(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(61)
			Dynamic fn = tmp12;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(62)
			bool tmp13 = (fn == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(62)
			if ((tmp13)){
				HX_STACK_LINE(39)
				::mint::core::Signal tmp14 = this->oncreate;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(62)
				int tmp15 = (_count - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(62)
				tmp14->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp15,(int)1);
			}
			HX_STACK_LINE(63)
			(_count)--;
		}
	}
}
;
	return null();
}

//AttributeBar_obj::~AttributeBar_obj() { }

Dynamic AttributeBar_obj::__CreateEmpty() { return  new AttributeBar_obj; }
hx::ObjectPtr< AttributeBar_obj > AttributeBar_obj::__new(Dynamic _options)
{  hx::ObjectPtr< AttributeBar_obj > _result_ = new AttributeBar_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic AttributeBar_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AttributeBar_obj > _result_ = new AttributeBar_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void AttributeBar_obj::destroy( ){
{
		HX_STACK_FRAME("ui.AttributeBar","destroy",0x2826291d,"ui.AttributeBar.destroy","ui/AttributeBar.hx",43,0x5837faec)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		this->super::destroy();
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			::mint::core::Signal tmp = this->onchange;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(46)
			::mint::core::Signal _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(46)
			_this->listeners = null();
			HX_STACK_LINE(46)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(47)
		this->onchange = null();
	}
return null();
}


int AttributeBar_obj::set_value( int val){
	HX_STACK_FRAME("ui.AttributeBar","set_value",0x816452b7,"ui.AttributeBar.set_value","ui/AttributeBar.hx",51,0x5837faec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(52)
	bool tmp = (val < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	if ((tmp)){
		HX_STACK_LINE(52)
		val = (int)0;
	}
	else{
		HX_STACK_LINE(53)
		int tmp1 = val;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(53)
		int tmp2 = this->max_value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(53)
		bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(53)
		if ((tmp3)){
			HX_STACK_LINE(53)
			int tmp4 = this->max_value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(53)
			val = tmp4;
		}
	}
	HX_STACK_LINE(55)
	this->value = val;
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(57)
		::mint::core::Signal tmp1 = this->onchange;		HX_STACK_VAR(tmp1,"tmp1");
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
			HX_STACK_LINE(57)
			::mint::core::Signal tmp5 = this->onchange;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(53)
			Dynamic tmp6 = tmp5->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(53)
			Dynamic fn = tmp6;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp7 = (fn != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(54)
			if ((tmp7)){
				HX_STACK_LINE(57)
				int tmp8 = this->value;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(57)
				int tmp9 = this->max_value;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(55)
				fn(tmp8,tmp9).Cast< Void >();
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
			HX_STACK_LINE(57)
			::mint::core::Signal tmp5 = this->onchange;		HX_STACK_VAR(tmp5,"tmp5");
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
				HX_STACK_LINE(57)
				::mint::core::Signal tmp9 = this->onchange;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(62)
				int tmp10 = (_count - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(62)
				tmp9->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp10,(int)1);
			}
			HX_STACK_LINE(63)
			(_count)--;
		}
	}
	HX_STACK_LINE(59)
	int tmp1 = this->value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(AttributeBar_obj,set_value,return )

int AttributeBar_obj::set_max_value( int val){
	HX_STACK_FRAME("ui.AttributeBar","set_max_value",0x0434529c,"ui.AttributeBar.set_max_value","ui/AttributeBar.hx",63,0x5837faec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(64)
	this->max_value = val;
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(66)
		::mint::core::Signal tmp = this->onchange;		HX_STACK_VAR(tmp,"tmp");
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
			HX_STACK_LINE(66)
			::mint::core::Signal tmp4 = this->onchange;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(53)
			Dynamic tmp5 = tmp4->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(53)
			Dynamic fn = tmp5;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp6 = (fn != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(54)
			if ((tmp6)){
				HX_STACK_LINE(66)
				int tmp7 = this->value;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(66)
				int tmp8 = this->max_value;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(55)
				fn(tmp7,tmp8).Cast< Void >();
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
			HX_STACK_LINE(66)
			::mint::core::Signal tmp4 = this->onchange;		HX_STACK_VAR(tmp4,"tmp4");
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
				HX_STACK_LINE(66)
				::mint::core::Signal tmp8 = this->onchange;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(62)
				int tmp9 = (_count - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(62)
				tmp8->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp9,(int)1);
			}
			HX_STACK_LINE(63)
			(_count)--;
		}
	}
	HX_STACK_LINE(68)
	int tmp = this->max_value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AttributeBar_obj,set_max_value,return )


AttributeBar_obj::AttributeBar_obj()
{
}

void AttributeBar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AttributeBar);
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(max_value,"max_value");
	HX_MARK_MEMBER_NAME(onchange,"onchange");
	HX_MARK_MEMBER_NAME(options,"options");
	::mint::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AttributeBar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(max_value,"max_value");
	HX_VISIT_MEMBER_NAME(onchange,"onchange");
	HX_VISIT_MEMBER_NAME(options,"options");
	::mint::Control_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AttributeBar_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onchange") ) { return onchange; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"max_value") ) { return max_value; }
		if (HX_FIELD_EQ(inName,"set_value") ) { return set_value_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_max_value") ) { return set_max_value_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AttributeBar_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == hx::paccAlways) return set_value(inValue);value=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onchange") ) { onchange=inValue.Cast< ::mint::core::Signal >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"max_value") ) { if (inCallProp == hx::paccAlways) return set_max_value(inValue);max_value=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AttributeBar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("max_value","\x56","\x64","\x96","\x28"));
	outFields->push(HX_HCSTRING("onchange","\xcf","\x13","\x8b","\x62"));
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(AttributeBar_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{hx::fsInt,(int)offsetof(AttributeBar_obj,max_value),HX_HCSTRING("max_value","\x56","\x64","\x96","\x28")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(AttributeBar_obj,onchange),HX_HCSTRING("onchange","\xcf","\x13","\x8b","\x62")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AttributeBar_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("max_value","\x56","\x64","\x96","\x28"),
	HX_HCSTRING("onchange","\xcf","\x13","\x8b","\x62"),
	HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("set_value","\xd4","\xc7","\xb2","\x58"),
	HX_HCSTRING("set_max_value","\x39","\x1a","\x00","\x2f"),
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
	__mClass->mName = HX_HCSTRING("ui.AttributeBar","\x91","\x01","\x6a","\xd6");
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
