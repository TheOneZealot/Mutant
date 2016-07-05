#include <hxcpp.h>

#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
#endif
#ifndef INCLUDED_mint_Panel
#include <mint/Panel.h>
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

Void Panel_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("mint.Panel","new",0xd800050a,"mint.Panel.new","mint/Panel.hx",27,0xf1c252a7)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(29)
	this->options = _options;
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(31)
		::String tmp1 = tmp->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(31)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(31)
		if ((tmp2)){
			HX_STACK_LINE(31)
			Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(31)
			tmp3->__FieldRef(HX_HCSTRING("name","\x4b","\x72","\xff","\x48")) = HX_HCSTRING("panel","\x04","\x7b","\x52","\xbd");
		}
		HX_STACK_LINE(31)
		Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(31)
		tmp3->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
	}
	HX_STACK_LINE(33)
	Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	super::__construct(tmp,null());
	HX_STACK_LINE(35)
	::mint::render::Rendering tmp1 = this->rendering;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	::mint::render::Renderer tmp2 = tmp1->get(hx::ClassOf< ::mint::Panel >(),hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	this->renderer = tmp2;
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(37)
		::mint::core::Signal tmp3 = this->oncreate;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		int tmp4 = tmp3->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(51)
		int _count = tmp4;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			bool tmp5 = (_idx < _count);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(52)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(52)
			if ((tmp6)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(37)
			::mint::core::Signal tmp7 = this->oncreate;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(53)
			Dynamic tmp8 = tmp7->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(53)
			Dynamic fn = tmp8;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp9 = (fn != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(54)
			if ((tmp9)){
				HX_STACK_LINE(55)
				fn().Cast< Void >();
			}
			HX_STACK_LINE(57)
			(_idx)++;
		}
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp5 = (_count > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(60)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(60)
			if ((tmp6)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(37)
			::mint::core::Signal tmp7 = this->oncreate;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(61)
			int tmp8 = (_count - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(61)
			Dynamic tmp9 = tmp7->listeners->__GetItem(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(61)
			Dynamic fn = tmp9;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(62)
			bool tmp10 = (fn == null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(62)
			if ((tmp10)){
				HX_STACK_LINE(37)
				::mint::core::Signal tmp11 = this->oncreate;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(62)
				int tmp12 = (_count - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(62)
				tmp11->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp12,(int)1);
			}
			HX_STACK_LINE(63)
			(_count)--;
		}
	}
}
;
	return null();
}

//Panel_obj::~Panel_obj() { }

Dynamic Panel_obj::__CreateEmpty() { return  new Panel_obj; }
hx::ObjectPtr< Panel_obj > Panel_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Panel_obj > _result_ = new Panel_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic Panel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Panel_obj > _result_ = new Panel_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


Panel_obj::Panel_obj()
{
}

void Panel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Panel);
	HX_MARK_MEMBER_NAME(options,"options");
	::mint::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Panel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(options,"options");
	::mint::Control_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Panel_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Panel_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Panel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Panel_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"),
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
	__mClass->mName = HX_HCSTRING("mint.Panel","\x18","\x78","\x0a","\x85");
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
