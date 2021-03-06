#include <hxcpp.h>

#ifndef INCLUDED_luxe_tween_easing_IEasing
#include <luxe/tween/easing/IEasing.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_QuadEaseIn
#include <luxe/tween/easing/QuadEaseIn.h>
#endif
namespace luxe{
namespace tween{
namespace easing{

Void QuadEaseIn_obj::__construct()
{
HX_STACK_FRAME("luxe.tween.easing.QuadEaseIn","new",0xf5c2b114,"luxe.tween.easing.QuadEaseIn.new","luxe/tween/easing/Quad.hx",46,0xf74ebc30)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//QuadEaseIn_obj::~QuadEaseIn_obj() { }

Dynamic QuadEaseIn_obj::__CreateEmpty() { return  new QuadEaseIn_obj; }
hx::ObjectPtr< QuadEaseIn_obj > QuadEaseIn_obj::__new()
{  hx::ObjectPtr< QuadEaseIn_obj > _result_ = new QuadEaseIn_obj();
	_result_->__construct();
	return _result_;}

Dynamic QuadEaseIn_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuadEaseIn_obj > _result_ = new QuadEaseIn_obj();
	_result_->__construct();
	return _result_;}

hx::Object *QuadEaseIn_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::luxe::tween::easing::IEasing_obj)) return operator ::luxe::tween::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

QuadEaseIn_obj::operator ::luxe::tween::easing::IEasing_obj *()
	{ return new ::luxe::tween::easing::IEasing_delegate_< QuadEaseIn_obj >(this); }
Float QuadEaseIn_obj::calculate( Float k){
	HX_STACK_FRAME("luxe.tween.easing.QuadEaseIn","calculate",0xc658f51a,"luxe.tween.easing.QuadEaseIn.calculate","luxe/tween/easing/Quad.hx",53,0xf74ebc30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(55)
	Float tmp = (k * k);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(QuadEaseIn_obj,calculate,return )

Float QuadEaseIn_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("luxe.tween.easing.QuadEaseIn","ease",0x0ea248ba,"luxe.tween.easing.QuadEaseIn.ease","luxe/tween/easing/Quad.hx",60,0xf74ebc30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(62)
	Float tmp = c;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	Float tmp1 = hx::DivEq(t,d);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(62)
	Float tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(62)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(62)
	Float tmp5 = b;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(62)
	Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(62)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC4(QuadEaseIn_obj,ease,return )


QuadEaseIn_obj::QuadEaseIn_obj()
{
}

Dynamic QuadEaseIn_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ease_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return calculate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("calculate","\x66","\x95","\x6a","\x05"),
	HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QuadEaseIn_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuadEaseIn_obj::__mClass,"__mClass");
};

#endif

hx::Class QuadEaseIn_obj::__mClass;

void QuadEaseIn_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.tween.easing.QuadEaseIn","\x22","\xd7","\x2f","\x59");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< QuadEaseIn_obj >;
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

} // end namespace luxe
} // end namespace tween
} // end namespace easing
