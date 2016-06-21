#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_callbacks_BodyCallback
#include <nape/callbacks/BodyCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Callback
#include <zpp_nape/callbacks/ZPP_Callback.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
namespace nape{
namespace callbacks{

Void BodyCallback_obj::__construct()
{
HX_STACK_FRAME("nape.callbacks.BodyCallback","new",0x1cd59e3f,"nape.callbacks.BodyCallback.new","nape/callbacks/BodyCallback.hx",185,0x8ff3bd0f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(185)
	super::__construct();
}
;
	return null();
}

//BodyCallback_obj::~BodyCallback_obj() { }

Dynamic BodyCallback_obj::__CreateEmpty() { return  new BodyCallback_obj; }
hx::ObjectPtr< BodyCallback_obj > BodyCallback_obj::__new()
{  hx::ObjectPtr< BodyCallback_obj > _result_ = new BodyCallback_obj();
	_result_->__construct();
	return _result_;}

Dynamic BodyCallback_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BodyCallback_obj > _result_ = new BodyCallback_obj();
	_result_->__construct();
	return _result_;}

::nape::phys::Body BodyCallback_obj::get_body( ){
	HX_STACK_FRAME("nape.callbacks.BodyCallback","get_body",0x0342bfec,"nape.callbacks.BodyCallback.get_body","nape/callbacks/BodyCallback.hx",192,0x8ff3bd0f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(193)
	::zpp_nape::callbacks::ZPP_Callback tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(193)
	::nape::phys::Body tmp1 = tmp->body->outer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(193)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(BodyCallback_obj,get_body,return )

::String BodyCallback_obj::toString( ){
	HX_STACK_FRAME("nape.callbacks.BodyCallback","toString",0x7adb5a6d,"nape.callbacks.BodyCallback.toString","nape/callbacks/BodyCallback.hx",198,0x8ff3bd0f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(199)
	::String ret = HX_HCSTRING("Cb:","\x9b","\x2c","\x33","\x00");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(200)
	::zpp_nape::callbacks::ZPP_Callback tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(200)
	int tmp1 = tmp->event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(200)
	int tmp2 = (tmp1 - (int)2);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(200)
	::String tmp3 = Array_obj< ::String >::__new().Add(HX_HCSTRING("WAKE","\x24","\x24","\xb3","\x39")).Add(HX_HCSTRING("SLEEP","\xf7","\xf4","\xb2","\xfc"))->__get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(200)
	hx::AddEq(ret,tmp3);
	HX_STACK_LINE(201)
	::zpp_nape::callbacks::ZPP_Callback tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(201)
	::nape::phys::Body tmp5 = tmp4->body->outer;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(201)
	::String tmp6 = tmp5->toString();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(201)
	::String tmp7 = (HX_HCSTRING(":","\x3a","\x00","\x00","\x00") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(201)
	hx::AddEq(ret,tmp7);
	HX_STACK_LINE(202)
	::zpp_nape::callbacks::ZPP_Callback tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(202)
	::nape::callbacks::Listener tmp9 = tmp8->listener->outer;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(202)
	::String tmp10 = ::Std_obj::string(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(202)
	::String tmp11 = (HX_HCSTRING(" : listener: ","\x60","\x26","\x46","\xe2") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(202)
	hx::AddEq(ret,tmp11);
	HX_STACK_LINE(203)
	::String tmp12 = ret;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(203)
	return tmp12;
}



BodyCallback_obj::BodyCallback_obj()
{
}

Dynamic BodyCallback_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { if (inCallProp == hx::paccAlways) return get_body(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_body") ) { return get_body_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

void BodyCallback_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_body","\x2b","\x36","\xd6","\xc0"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BodyCallback_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BodyCallback_obj::__mClass,"__mClass");
};

#endif

hx::Class BodyCallback_obj::__mClass;

void BodyCallback_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.callbacks.BodyCallback","\xcd","\x12","\x84","\x2c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BodyCallback_obj >;
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

} // end namespace nape
} // end namespace callbacks
