#include <hxcpp.h>

#ifndef INCLUDED_mint_Button
#include <mint/Button.h>
#endif
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

Void Button_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("mint.Button","new",0xc82efe50,"mint.Button.new","mint/Button.hx",31,0x6433b2ff)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(33)
	this->options = _options;
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		::String tmp1 = tmp->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		if ((tmp2)){
			HX_STACK_LINE(35)
			Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(35)
			tmp3->__FieldRef(HX_HCSTRING("name","\x4b","\x72","\xff","\x48")) = HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9");
		}
		HX_STACK_LINE(35)
		Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		tmp3->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
	}
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		Dynamic tmp1 = tmp->__Field(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		if ((tmp2)){
			HX_STACK_LINE(36)
			Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(36)
			tmp3->__FieldRef(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a")) = true;
		}
		HX_STACK_LINE(36)
		Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		tmp3->__Field(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a"), hx::paccDynamic );
	}
	HX_STACK_LINE(38)
	Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	super::__construct(tmp,null());
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		Dynamic tmp1 = this->options;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		Dynamic tmp2 = tmp1->__Field(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		if ((tmp3)){
			HX_STACK_LINE(40)
			Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(40)
			tmp4->__FieldRef(HX_HCSTRING("align","\xc5","\x56","\x91","\x21")) = (int)3;
		}
		HX_STACK_LINE(40)
		Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(40)
		tmp4->__Field(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"), hx::paccDynamic );
	}
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		Dynamic tmp1 = this->options;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		Dynamic tmp2 = tmp1->__Field(HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		if ((tmp3)){
			HX_STACK_LINE(41)
			Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(41)
			tmp4->__FieldRef(HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53")) = (int)3;
		}
		HX_STACK_LINE(41)
		Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		tmp4->__Field(HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53"), hx::paccDynamic );
	}
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		Dynamic tmp1 = this->options;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		Dynamic tmp2 = tmp1->__Field(HX_HCSTRING("text_size","\xd3","\xdc","\x24","\x05"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(42)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(42)
		if ((tmp3)){
			HX_STACK_LINE(42)
			Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(42)
			tmp4->__FieldRef(HX_HCSTRING("text_size","\xd3","\xdc","\x24","\x05")) = (int)14;
		}
		HX_STACK_LINE(42)
		Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(42)
		tmp4->__Field(HX_HCSTRING("text_size","\xd3","\xdc","\x24","\x05"), hx::paccDynamic );
	}
	HX_STACK_LINE(46)
	Float tmp1 = this->w;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	Float tmp2 = this->h;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(47)
	Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(47)
	::String tmp4 = tmp3->__Field(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(48)
	Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(48)
	Dynamic tmp6 = tmp5->__Field(HX_HCSTRING("text_size","\xd3","\xdc","\x24","\x05"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(49)
	::String tmp7 = this->name;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(49)
	::String tmp8 = (tmp7 + HX_HCSTRING(".label","\x06","\xa7","\x19","\xd4"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(50)
	Dynamic tmp9 = this->options;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(52)
	Dynamic tmp10 = this->options;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(52)
	Dynamic tmp11 = tmp10->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(54)
	Float tmp12 = this->depth;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(54)
	Float tmp13 = (tmp12 + ((Float)0.1));		HX_STACK_VAR(tmp13,"tmp13");
	struct _Function_1_1{
		inline static Dynamic Block( hx::ObjectPtr< ::mint::Button_obj > __this,Dynamic &tmp6,Float &tmp13,Dynamic &tmp9,Dynamic &tmp11,::String &tmp4,Float &tmp2,Float &tmp1,::String &tmp8){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/Button.hx",44,0x6433b2ff)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed") , ((::mint::Control)(__this)),false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp1,false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp2,false);
				__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , tmp4,false);
				__result->Add(HX_HCSTRING("text_size","\xd3","\xdc","\x24","\x05") , tmp6,false);
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp8,false);
				__result->Add(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf") , tmp9->__Field(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"), hx::paccDynamic )->__Field(HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a") , false,false);
				__result->Add(HX_HCSTRING("internal_visible","\x30","\x3e","\x18","\xd0") , tmp11,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp13,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(44)
	Dynamic tmp14 = _Function_1_1::Block(this,tmp6,tmp13,tmp9,tmp11,tmp4,tmp2,tmp1,tmp8);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(44)
	::mint::Label tmp15 = ::mint::Label_obj::__new(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(44)
	this->label = tmp15;
	HX_STACK_LINE(57)
	::mint::render::Rendering tmp16 = this->rendering;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(57)
	::mint::render::Renderer tmp17 = tmp16->get(hx::ClassOf< ::mint::Button >(),hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(57)
	this->renderer = tmp17;
	HX_STACK_LINE(59)
	Dynamic tmp18 = this->options;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(59)
	Dynamic tmp19 = tmp18->__Field(HX_HCSTRING("onclick","\xc9","\xaa","\x6e","\x4b"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(59)
	bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(59)
	if ((tmp20)){
		HX_STACK_LINE(59)
		::mint::core::Signal tmp21 = this->onmouseup;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(59)
		Dynamic tmp22 = this->options;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(59)
		Dynamic tmp23 = tmp22->__Field(HX_HCSTRING("onclick","\xc9","\xaa","\x6e","\x4b"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(59)
		tmp21->listen(tmp23);
	}
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(61)
		::mint::core::Signal tmp21 = this->oncreate;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(51)
		int tmp22 = tmp21->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(51)
		int _count = tmp22;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			bool tmp23 = (_idx < _count);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(52)
			bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(52)
			if ((tmp24)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(61)
			::mint::core::Signal tmp25 = this->oncreate;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(53)
			Dynamic tmp26 = tmp25->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(53)
			Dynamic fn = tmp26;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp27 = (fn != null());		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(54)
			if ((tmp27)){
				HX_STACK_LINE(55)
				fn().Cast< Void >();
			}
			HX_STACK_LINE(57)
			(_idx)++;
		}
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp23 = (_count > (int)0);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(60)
			bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(60)
			if ((tmp24)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(61)
			::mint::core::Signal tmp25 = this->oncreate;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(61)
			int tmp26 = (_count - (int)1);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(61)
			Dynamic tmp27 = tmp25->listeners->__GetItem(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(61)
			Dynamic fn = tmp27;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(62)
			bool tmp28 = (fn == null());		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(62)
			if ((tmp28)){
				HX_STACK_LINE(61)
				::mint::core::Signal tmp29 = this->oncreate;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(62)
				int tmp30 = (_count - (int)1);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(62)
				tmp29->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp30,(int)1);
			}
			HX_STACK_LINE(63)
			(_count)--;
		}
	}
}
;
	return null();
}

//Button_obj::~Button_obj() { }

Dynamic Button_obj::__CreateEmpty() { return  new Button_obj; }
hx::ObjectPtr< Button_obj > Button_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Button_obj > _result_ = new Button_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic Button_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Button_obj > _result_ = new Button_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


Button_obj::Button_obj()
{
}

void Button_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Button);
	HX_MARK_MEMBER_NAME(label,"label");
	HX_MARK_MEMBER_NAME(options,"options");
	::mint::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Button_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(label,"label");
	HX_VISIT_MEMBER_NAME(options,"options");
	::mint::Control_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Button_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return label; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Button_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { label=inValue.Cast< ::mint::Label >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Button_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"));
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::mint::Label*/ ,(int)offsetof(Button_obj,label),HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Button_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"),
	HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"),
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
	__mClass->mName = HX_HCSTRING("mint.Button","\x5e","\xd6","\x25","\xd3");
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
