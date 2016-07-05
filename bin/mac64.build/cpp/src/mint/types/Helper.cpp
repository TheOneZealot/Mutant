#include <hxcpp.h>

#ifndef INCLUDED_mint_types_Helper
#include <mint/types/Helper.h>
#endif
namespace mint{
namespace types{

Void Helper_obj::__construct()
{
	return null();
}

//Helper_obj::~Helper_obj() { }

Dynamic Helper_obj::__CreateEmpty() { return  new Helper_obj; }
hx::ObjectPtr< Helper_obj > Helper_obj::__new()
{  hx::ObjectPtr< Helper_obj > _result_ = new Helper_obj();
	_result_->__construct();
	return _result_;}

Dynamic Helper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Helper_obj > _result_ = new Helper_obj();
	_result_->__construct();
	return _result_;}

Float Helper_obj::clamp( Float value,Float a,Float b){
	HX_STACK_FRAME("mint.types.Helper","clamp",0xe380637c,"mint.types.Helper.clamp","mint/types/Types.hx",200,0x1fedaba8)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(201)
	bool tmp = (value < a);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(201)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(201)
	if ((tmp)){
		HX_STACK_LINE(201)
		tmp1 = a;
	}
	else{
		HX_STACK_LINE(201)
		bool tmp2 = (value > b);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(201)
		if ((tmp2)){
			HX_STACK_LINE(201)
			tmp1 = b;
		}
		else{
			HX_STACK_LINE(201)
			tmp1 = value;
		}
	}
	HX_STACK_LINE(201)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Helper_obj,clamp,return )

bool Helper_obj::in_rect( Float x,Float y,Float rx,Float ry,Float rw,Float rh){
	HX_STACK_FRAME("mint.types.Helper","in_rect",0xb1ada1bf,"mint.types.Helper.in_rect","mint/types/Types.hx",204,0x1fedaba8)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(rx,"rx")
	HX_STACK_ARG(ry,"ry")
	HX_STACK_ARG(rw,"rw")
	HX_STACK_ARG(rh,"rh")
	HX_STACK_LINE(206)
	bool tmp = (x < rx);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(206)
	if ((tmp)){
		HX_STACK_LINE(206)
		return false;
	}
	HX_STACK_LINE(207)
	bool tmp1 = (y < ry);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(207)
	if ((tmp1)){
		HX_STACK_LINE(207)
		return false;
	}
	HX_STACK_LINE(208)
	Float tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(208)
	Float tmp3 = (rx + rw);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(208)
	bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(208)
	if ((tmp4)){
		HX_STACK_LINE(208)
		return false;
	}
	HX_STACK_LINE(209)
	Float tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(209)
	Float tmp6 = (ry + rh);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(209)
	bool tmp7 = (tmp5 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(209)
	if ((tmp7)){
		HX_STACK_LINE(209)
		return false;
	}
	HX_STACK_LINE(211)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Helper_obj,in_rect,return )


Helper_obj::Helper_obj()
{
}

bool Helper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clamp") ) { outValue = clamp_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"in_rect") ) { outValue = in_rect_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Helper_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Helper_obj::__mClass,"__mClass");
};

#endif

hx::Class Helper_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("clamp","\xfb","\x72","\x58","\x48"),
	HX_HCSTRING("in_rect","\xfe","\xce","\x47","\x08"),
	::String(null()) };

void Helper_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mint.types.Helper","\x2f","\x0a","\xe9","\xa8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Helper_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Helper_obj >;
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
} // end namespace types
