#include <hxcpp.h>

#ifndef INCLUDED_mint_core_Macros
#include <mint/core/Macros.h>
#endif
namespace mint{
namespace core{

Void Macros_obj::__construct()
{
	return null();
}

//Macros_obj::~Macros_obj() { }

Dynamic Macros_obj::__CreateEmpty() { return  new Macros_obj; }
hx::ObjectPtr< Macros_obj > Macros_obj::__new()
{  hx::ObjectPtr< Macros_obj > _result_ = new Macros_obj();
	_result_->__construct();
	return _result_;}

Dynamic Macros_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Macros_obj > _result_ = new Macros_obj();
	_result_->__construct();
	return _result_;}


Macros_obj::Macros_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Macros_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Macros_obj::__mClass,"__mClass");
};

#endif

hx::Class Macros_obj::__mClass;

void Macros_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mint.core.Macros","\x6a","\x0e","\x7f","\x11");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Macros_obj >;
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
} // end namespace core
