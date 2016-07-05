#include <hxcpp.h>

#ifndef INCLUDED_Playing
#include <Playing.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_State
#include <luxe/State.h>
#endif

Void Playing_obj::__construct()
{
HX_STACK_FRAME("Playing","new",0xd1cd9740,"Playing.new","GameState.hx",26,0x62656b7f)
HX_STACK_THIS(this)
{
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","GameState.hx",27,0x62656b7f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(27)
	Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	super::__construct(tmp);
}
;
	return null();
}

//Playing_obj::~Playing_obj() { }

Dynamic Playing_obj::__CreateEmpty() { return  new Playing_obj; }
hx::ObjectPtr< Playing_obj > Playing_obj::__new()
{  hx::ObjectPtr< Playing_obj > _result_ = new Playing_obj();
	_result_->__construct();
	return _result_;}

Dynamic Playing_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Playing_obj > _result_ = new Playing_obj();
	_result_->__construct();
	return _result_;}

Void Playing_obj::init( ){
{
		HX_STACK_FRAME("Playing","init",0xbecf7830,"Playing.init","GameState.hx",31,0x62656b7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(32)
		::String tmp = this->name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		::String tmp1 = (HX_HCSTRING("initialized ","\x8c","\x7c","\xe6","\xf6") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		::String tmp2 = (tmp1 + HX_HCSTRING(" state","\xf1","\x01","\x77","\x4f"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(32)
		::String tmp3 = (HX_HCSTRING("i / gamestate / ","\x1a","\x66","\xad","\x88") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(32)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("GameState.hx","\x7f","\x6b","\x65","\x62"),32,HX_HCSTRING("Playing","\x4e","\x37","\x69","\x57"),HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(32)
		::haxe::Log_obj::trace(tmp3,tmp4);
	}
return null();
}


Void Playing_obj::onenter( Dynamic _value){
{
		HX_STACK_FRAME("Playing","onenter",0x462d5279,"Playing.onenter","GameState.hx",36,0x62656b7f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(37)
		::String tmp = this->name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		::String tmp1 = (HX_HCSTRING("entered ","\xc9","\xcc","\xa5","\x43") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		::String tmp2 = (tmp1 + HX_HCSTRING(" state","\xf1","\x01","\x77","\x4f"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		::String tmp3 = (HX_HCSTRING("i / gamestate / ","\x1a","\x66","\xad","\x88") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(37)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("GameState.hx","\x7f","\x6b","\x65","\x62"),37,HX_HCSTRING("Playing","\x4e","\x37","\x69","\x57"),HX_HCSTRING("onenter","\x99","\x9b","\x96","\x73"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(37)
		::haxe::Log_obj::trace(tmp3,tmp4);
	}
return null();
}


Void Playing_obj::onleave( Dynamic _value){
{
		HX_STACK_FRAME("Playing","onleave",0x47fa1a58,"Playing.onleave","GameState.hx",41,0x62656b7f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(42)
		::String tmp = this->name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		::String tmp1 = (HX_HCSTRING("left ","\x39","\xfe","\x56","\x72") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		::String tmp2 = (tmp1 + HX_HCSTRING(" state","\xf1","\x01","\x77","\x4f"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(42)
		::String tmp3 = (HX_HCSTRING("i / gamestate / ","\x1a","\x66","\xad","\x88") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(42)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("GameState.hx","\x7f","\x6b","\x65","\x62"),42,HX_HCSTRING("Playing","\x4e","\x37","\x69","\x57"),HX_HCSTRING("onleave","\x78","\x63","\x63","\x75"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(42)
		::haxe::Log_obj::trace(tmp3,tmp4);
	}
return null();
}



Playing_obj::Playing_obj()
{
}

Dynamic Playing_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onenter") ) { return onenter_dyn(); }
		if (HX_FIELD_EQ(inName,"onleave") ) { return onleave_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("onenter","\x99","\x9b","\x96","\x73"),
	HX_HCSTRING("onleave","\x78","\x63","\x63","\x75"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Playing_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Playing_obj::__mClass,"__mClass");
};

#endif

hx::Class Playing_obj::__mClass;

void Playing_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Playing","\x4e","\x37","\x69","\x57");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Playing_obj >;
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

