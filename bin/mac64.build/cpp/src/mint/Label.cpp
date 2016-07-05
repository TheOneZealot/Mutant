#include <hxcpp.h>

#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
#endif
#ifndef INCLUDED_mint_Label
#include <mint/Label.h>
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

Void Label_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("mint.Label","new",0x9938cffa,"mint.Label.new","mint/Label.hx",47,0x40b035b7)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(49)
	this->options = _options;
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		::String tmp1 = tmp->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		if ((tmp2)){
			HX_STACK_LINE(51)
			Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(51)
			tmp3->__FieldRef(HX_HCSTRING("name","\x4b","\x72","\xff","\x48")) = HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f");
		}
		HX_STACK_LINE(51)
		Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		tmp3->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
	}
	HX_STACK_LINE(53)
	Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	super::__construct(tmp,null());
	HX_STACK_LINE(55)
	::mint::core::Signal tmp1 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	this->onchange = tmp1;
	HX_STACK_LINE(57)
	{
		HX_STACK_LINE(57)
		Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(57)
		Dynamic tmp3 = tmp2->__Field(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(57)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(57)
		if ((tmp4)){
			HX_STACK_LINE(57)
			Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(57)
			tmp5->__FieldRef(HX_HCSTRING("align","\xc5","\x56","\x91","\x21")) = (int)3;
		}
		HX_STACK_LINE(57)
		Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(57)
		tmp5->__Field(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"), hx::paccDynamic );
	}
	HX_STACK_LINE(58)
	{
		HX_STACK_LINE(58)
		Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		Dynamic tmp3 = tmp2->__Field(HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(58)
		if ((tmp4)){
			HX_STACK_LINE(58)
			Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(58)
			tmp5->__FieldRef(HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53")) = (int)3;
		}
		HX_STACK_LINE(58)
		Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(58)
		tmp5->__Field(HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53"), hx::paccDynamic );
	}
	HX_STACK_LINE(59)
	{
		HX_STACK_LINE(59)
		Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		Dynamic tmp3 = tmp2->__Field(HX_HCSTRING("text_size","\xd3","\xdc","\x24","\x05"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(59)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(59)
		if ((tmp4)){
			HX_STACK_LINE(59)
			Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(59)
			tmp5->__FieldRef(HX_HCSTRING("text_size","\xd3","\xdc","\x24","\x05")) = (int)14;
		}
		HX_STACK_LINE(59)
		Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(59)
		tmp5->__Field(HX_HCSTRING("text_size","\xd3","\xdc","\x24","\x05"), hx::paccDynamic );
	}
	HX_STACK_LINE(61)
	Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(61)
	Dynamic tmp3 = tmp2->__Field(HX_HCSTRING("onclick","\xc9","\xaa","\x6e","\x4b"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(61)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(61)
	if ((tmp4)){
		HX_STACK_LINE(62)
		this->mouse_input = true;
		HX_STACK_LINE(63)
		::mint::core::Signal tmp5 = this->onmouseup;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(63)
		Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(63)
		Dynamic tmp7 = tmp6->__Field(HX_HCSTRING("onclick","\xc9","\xaa","\x6e","\x4b"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(63)
		tmp5->listen(tmp7);
	}
	HX_STACK_LINE(66)
	Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(66)
	::String tmp6 = tmp5->__Field(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(66)
	this->set_text(tmp6);
	HX_STACK_LINE(68)
	::mint::render::Rendering tmp7 = this->rendering;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(68)
	::mint::render::Renderer tmp8 = tmp7->get(hx::ClassOf< ::mint::Label >(),hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(68)
	this->renderer = tmp8;
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(70)
		::mint::core::Signal tmp9 = this->oncreate;		HX_STACK_VAR(tmp9,"tmp9");
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
			HX_STACK_LINE(70)
			::mint::core::Signal tmp13 = this->oncreate;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(53)
			Dynamic tmp14 = tmp13->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(53)
			Dynamic fn = tmp14;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp15 = (fn != null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(54)
			if ((tmp15)){
				HX_STACK_LINE(55)
				fn().Cast< Void >();
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
			HX_STACK_LINE(70)
			::mint::core::Signal tmp13 = this->oncreate;		HX_STACK_VAR(tmp13,"tmp13");
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
				HX_STACK_LINE(70)
				::mint::core::Signal tmp17 = this->oncreate;		HX_STACK_VAR(tmp17,"tmp17");
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
;
	return null();
}

//Label_obj::~Label_obj() { }

Dynamic Label_obj::__CreateEmpty() { return  new Label_obj; }
hx::ObjectPtr< Label_obj > Label_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Label_obj > _result_ = new Label_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic Label_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Label_obj > _result_ = new Label_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Label_obj::destroy( ){
{
		HX_STACK_FRAME("mint.Label","destroy",0xd90c0194,"mint.Label.destroy","mint/Label.hx",74,0x40b035b7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(76)
		this->super::destroy();
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			::mint::core::Signal tmp = this->onchange;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(78)
			::mint::core::Signal _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(78)
			_this->listeners = null();
			HX_STACK_LINE(78)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(79)
		this->onchange = null();
	}
return null();
}


::String Label_obj::set_text( ::String _s){
	HX_STACK_FRAME("mint.Label","set_text",0xbba613d0,"mint.Label.set_text","mint/Label.hx",85,0x40b035b7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(87)
	this->text = _s;
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(89)
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
			HX_STACK_LINE(89)
			::mint::core::Signal tmp4 = this->onchange;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(53)
			Dynamic tmp5 = tmp4->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(53)
			Dynamic fn = tmp5;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp6 = (fn != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(54)
			if ((tmp6)){
				HX_STACK_LINE(89)
				::String tmp7 = this->text;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(55)
				fn(tmp7).Cast< Void >();
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
			HX_STACK_LINE(89)
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
				HX_STACK_LINE(89)
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
	HX_STACK_LINE(91)
	::String tmp = this->text;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_text,return )


Label_obj::Label_obj()
{
}

void Label_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Label);
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(onchange,"onchange");
	HX_MARK_MEMBER_NAME(options,"options");
	::mint::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Label_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(onchange,"onchange");
	HX_VISIT_MEMBER_NAME(options,"options");
	::mint::Control_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Label_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onchange") ) { return onchange; }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Label_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue);text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onchange") ) { onchange=inValue.Cast< ::mint::core::Signal >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Label_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("onchange","\xcf","\x13","\x8b","\x62"));
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Label_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Label_obj,onchange),HX_HCSTRING("onchange","\xcf","\x13","\x8b","\x62")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Label_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("onchange","\xcf","\x13","\x8b","\x62"),
	HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Label_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Label_obj::__mClass,"__mClass");
};

#endif

hx::Class Label_obj::__mClass;

void Label_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mint.Label","\x08","\x0b","\x67","\x37");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Label_obj >;
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
