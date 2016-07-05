#include <hxcpp.h>

#ifndef INCLUDED_GameState
#include <GameState.h>
#endif
#ifndef INCLUDED_Paused
#include <Paused.h>
#endif
#ifndef INCLUDED_Playing
#include <Playing.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Events
#include <luxe/Events.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_State
#include <luxe/State.h>
#endif
#ifndef INCLUDED_luxe_States
#include <luxe/States.h>
#endif

Void GameState_obj::__construct()
{
HX_STACK_FRAME("GameState","new",0xb65d2111,"GameState.new","GameState.hx",11,0x62656b7f)
HX_STACK_THIS(this)
{
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","GameState.hx",12,0x62656b7f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("gamestate","\xdf","\xf4","\xf8","\x25"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(12)
	Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	super::__construct(tmp);
	HX_STACK_LINE(14)
	::luxe::Events tmp1 = ::luxe::Events_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	::GameState_obj::events = tmp1;
	HX_STACK_LINE(16)
	::Playing tmp2 = ::Playing_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16)
	this->add(tmp2);
	HX_STACK_LINE(17)
	::Paused tmp3 = ::Paused_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(17)
	this->add(tmp3);
	HX_STACK_LINE(19)
	this->set(HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a"),null(),null());
}
;
	return null();
}

//GameState_obj::~GameState_obj() { }

Dynamic GameState_obj::__CreateEmpty() { return  new GameState_obj; }
hx::ObjectPtr< GameState_obj > GameState_obj::__new()
{  hx::ObjectPtr< GameState_obj > _result_ = new GameState_obj();
	_result_->__construct();
	return _result_;}

Dynamic GameState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameState_obj > _result_ = new GameState_obj();
	_result_->__construct();
	return _result_;}

bool GameState_obj::paused;

::luxe::Events GameState_obj::events;


GameState_obj::GameState_obj()
{
}

bool GameState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { outValue = paused; return true;  }
		if (HX_FIELD_EQ(inName,"events") ) { outValue = events; return true;  }
	}
	return false;
}

bool GameState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { paused=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"events") ) { events=ioValue.Cast< ::luxe::Events >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &GameState_obj::paused,HX_HCSTRING("paused","\xae","\x40","\x84","\xef")},
	{hx::fsObject /*::luxe::Events*/ ,(void *) &GameState_obj::events,HX_HCSTRING("events","\x19","\x4f","\x6a","\x96")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameState_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GameState_obj::paused,"paused");
	HX_MARK_MEMBER_NAME(GameState_obj::events,"events");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameState_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GameState_obj::paused,"paused");
	HX_VISIT_MEMBER_NAME(GameState_obj::events,"events");
};

#endif

hx::Class GameState_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("paused","\xae","\x40","\x84","\xef"),
	HX_HCSTRING("events","\x19","\x4f","\x6a","\x96"),
	::String(null()) };

void GameState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("GameState","\x9f","\x44","\xf9","\x5a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GameState_obj::__GetStatic;
	__mClass->mSetStaticField = &GameState_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GameState_obj >;
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

void GameState_obj::__boot()
{
	paused= false;
}

