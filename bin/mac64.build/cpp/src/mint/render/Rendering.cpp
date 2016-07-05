#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_mint_render_Rendering
#include <mint/render/Rendering.h>
#endif
namespace mint{
namespace render{

Void Rendering_obj::__construct()
{
HX_STACK_FRAME("mint.render.Rendering","new",0xee9d2052,"mint.render.Rendering.new","mint/render/Rendering.hx",12,0x06c1f17e)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Rendering_obj::~Rendering_obj() { }

Dynamic Rendering_obj::__CreateEmpty() { return  new Rendering_obj; }
hx::ObjectPtr< Rendering_obj > Rendering_obj::__new()
{  hx::ObjectPtr< Rendering_obj > _result_ = new Rendering_obj();
	_result_->__construct();
	return _result_;}

Dynamic Rendering_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Rendering_obj > _result_ = new Rendering_obj();
	_result_->__construct();
	return _result_;}

Dynamic Rendering_obj::get( ::hx::Class type,Dynamic control){
	HX_STACK_FRAME("mint.render.Rendering","get",0xee97d088,"mint.render.Rendering.get","mint/render/Rendering.hx",17,0x06c1f17e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(control,"control")
	HX_STACK_LINE(19)
	::hx::Class tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	::String tmp2 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	::String tmp3 = (tmp2 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(19)
	Dynamic tmp4 = control;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(19)
	::String tmp5 = ::Std_obj::string(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(19)
	::String tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(19)
	::String tmp7 = (tmp6 + HX_HCSTRING(" / This is probably not expected : landed in root Rendering class.","\xba","\x30","\x4b","\xae"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(19)
	Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("Rendering.hx","\x12","\xcb","\x98","\x98"),19,HX_HCSTRING("mint.render.Rendering","\x60","\x4f","\x96","\xde"),HX_HCSTRING("get","\x96","\x80","\x4e","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(19)
	::haxe::Log_obj::trace(tmp7,tmp8);
	HX_STACK_LINE(21)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Rendering_obj,get,return )


Rendering_obj::Rendering_obj()
{
}

Dynamic Rendering_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rendering_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rendering_obj::__mClass,"__mClass");
};

#endif

hx::Class Rendering_obj::__mClass;

void Rendering_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mint.render.Rendering","\x60","\x4f","\x96","\xde");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Rendering_obj >;
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
