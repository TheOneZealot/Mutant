#include <hxcpp.h>

#ifndef INCLUDED_Physics
#include <Physics.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif

Void Physics_obj::__construct()
{
	return null();
}

//Physics_obj::~Physics_obj() { }

Dynamic Physics_obj::__CreateEmpty() { return  new Physics_obj; }
hx::ObjectPtr< Physics_obj > Physics_obj::__new()
{  hx::ObjectPtr< Physics_obj > _result_ = new Physics_obj();
	_result_->__construct();
	return _result_;}

Dynamic Physics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Physics_obj > _result_ = new Physics_obj();
	_result_->__construct();
	return _result_;}

Dynamic Physics_obj::types;

Dynamic Physics_obj::filters;


Physics_obj::Physics_obj()
{
}

bool Physics_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"types") ) { outValue = types; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { outValue = filters; return true;  }
	}
	return false;
}

bool Physics_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"types") ) { types=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { filters=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Physics_obj::types,HX_HCSTRING("types","\x79","\x70","\xcb","\x1a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Physics_obj::filters,HX_HCSTRING("filters","\xbb","\xa1","\x46","\x09")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Physics_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Physics_obj::types,"types");
	HX_MARK_MEMBER_NAME(Physics_obj::filters,"filters");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Physics_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Physics_obj::types,"types");
	HX_VISIT_MEMBER_NAME(Physics_obj::filters,"filters");
};

#endif

hx::Class Physics_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("types","\x79","\x70","\xcb","\x1a"),
	HX_HCSTRING("filters","\xbb","\xa1","\x46","\x09"),
	::String(null()) };

void Physics_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Physics","\xa7","\x60","\xa2","\x8b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Physics_obj::__GetStatic;
	__mClass->mSetStaticField = &Physics_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Physics_obj >;
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

void Physics_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Physics.hx",8,0xc89f8477)
		{
			HX_STACK_LINE(9)
			::nape::callbacks::CbType tmp = ::nape::callbacks::CbType_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(10)
			::nape::callbacks::CbType tmp1 = ::nape::callbacks::CbType_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(11)
			::nape::callbacks::CbType tmp2 = ::nape::callbacks::CbType_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(12)
			::nape::callbacks::CbType tmp3 = ::nape::callbacks::CbType_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			struct _Function_1_1{
				inline static Dynamic Block( ::nape::callbacks::CbType &tmp,::nape::callbacks::CbType &tmp2,::nape::callbacks::CbType &tmp3,::nape::callbacks::CbType &tmp1){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Physics.hx",8,0xc89f8477)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("terrain","\xb5","\xab","\x17","\x29") , tmp,false);
						__result->Add(HX_HCSTRING("creature","\xbf","\xa5","\x00","\x2c") , tmp1,false);
						__result->Add(HX_HCSTRING("projectile","\xe9","\x85","\x8b","\xc4") , tmp2,false);
						__result->Add(HX_HCSTRING("physobj","\x65","\xc5","\x55","\xbe") , tmp3,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(8)
			return _Function_1_1::Block(tmp,tmp2,tmp3,tmp1);
		}
		return null();
	}
};
	types= _Function_0_1::Block();
struct _Function_0_2{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Physics.hx",16,0xc89f8477)
		{
			HX_STACK_LINE(17)
			::nape::dynamics::InteractionFilter tmp = ::nape::dynamics::InteractionFilter_obj::__new((int)1,null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(18)
			int tmp1 = (int)-5;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(18)
			::nape::dynamics::InteractionFilter tmp2 = ::nape::dynamics::InteractionFilter_obj::__new((int)2,tmp1,null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(19)
			int tmp3 = (int)-3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(19)
			::nape::dynamics::InteractionFilter tmp4 = ::nape::dynamics::InteractionFilter_obj::__new((int)4,tmp3,null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(20)
			::nape::dynamics::InteractionFilter tmp5 = ::nape::dynamics::InteractionFilter_obj::__new((int)8,null(),null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
			struct _Function_1_1{
				inline static Dynamic Block( ::nape::dynamics::InteractionFilter &tmp5,::nape::dynamics::InteractionFilter &tmp,::nape::dynamics::InteractionFilter &tmp4,::nape::dynamics::InteractionFilter &tmp2){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Physics.hx",16,0xc89f8477)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("terrain","\xb5","\xab","\x17","\x29") , tmp,false);
						__result->Add(HX_HCSTRING("creature","\xbf","\xa5","\x00","\x2c") , tmp2,false);
						__result->Add(HX_HCSTRING("projectile","\xe9","\x85","\x8b","\xc4") , tmp4,false);
						__result->Add(HX_HCSTRING("physobj","\x65","\xc5","\x55","\xbe") , tmp5,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(16)
			return _Function_1_1::Block(tmp5,tmp,tmp4,tmp2);
		}
		return null();
	}
};
	filters= _Function_0_2::Block();
}

