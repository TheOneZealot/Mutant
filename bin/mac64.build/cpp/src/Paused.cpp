#include <hxcpp.h>

#ifndef INCLUDED_GameState
#include <GameState.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Paused
#include <Paused.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_luxe_Physics
#include <luxe/Physics.h>
#endif
#ifndef INCLUDED_luxe_PhysicsEngine
#include <luxe/PhysicsEngine.h>
#endif
#ifndef INCLUDED_luxe_State
#include <luxe/State.h>
#endif
#ifndef INCLUDED_luxe_States
#include <luxe/States.h>
#endif
#ifndef INCLUDED_luxe_physics_nape_PhysicsNape
#include <luxe/physics/nape/PhysicsNape.h>
#endif

Void Paused_obj::__construct()
{
HX_STACK_FRAME("Paused","new",0xebc9d4c0,"Paused.new","GameState.hx",49,0x62656b7f)
HX_STACK_THIS(this)
{
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","GameState.hx",50,0x62656b7f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("paused","\xae","\x40","\x84","\xef"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(50)
	Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	super::__construct(tmp);
}
;
	return null();
}

//Paused_obj::~Paused_obj() { }

Dynamic Paused_obj::__CreateEmpty() { return  new Paused_obj; }
hx::ObjectPtr< Paused_obj > Paused_obj::__new()
{  hx::ObjectPtr< Paused_obj > _result_ = new Paused_obj();
	_result_->__construct();
	return _result_;}

Dynamic Paused_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Paused_obj > _result_ = new Paused_obj();
	_result_->__construct();
	return _result_;}

Void Paused_obj::init( ){
{
		HX_STACK_FRAME("Paused","init",0x61890ab0,"Paused.init","GameState.hx",54,0x62656b7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(55)
		::String tmp = this->name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		::String tmp1 = (HX_HCSTRING("initialized ","\x8c","\x7c","\xe6","\xf6") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		::String tmp2 = (tmp1 + HX_HCSTRING(" state","\xf1","\x01","\x77","\x4f"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		::String tmp3 = (HX_HCSTRING("i / gamestate / ","\x1a","\x66","\xad","\x88") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(55)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("GameState.hx","\x7f","\x6b","\x65","\x62"),55,HX_HCSTRING("Paused","\xce","\xb4","\x18","\x24"),HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(55)
		::haxe::Log_obj::trace(tmp3,tmp4);
	}
return null();
}


Void Paused_obj::onenter( Dynamic _value){
{
		HX_STACK_FRAME("Paused","onenter",0x32d64ff9,"Paused.onenter","GameState.hx",59,0x62656b7f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(60)
		::String tmp = this->name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		::String tmp1 = (HX_HCSTRING("entered ","\xc9","\xcc","\xa5","\x43") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(60)
		::String tmp2 = (tmp1 + HX_HCSTRING(" state","\xf1","\x01","\x77","\x4f"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(60)
		::String tmp3 = (HX_HCSTRING("i / gamestate / ","\x1a","\x66","\xad","\x88") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("GameState.hx","\x7f","\x6b","\x65","\x62"),60,HX_HCSTRING("Paused","\xce","\xb4","\x18","\x24"),HX_HCSTRING("onenter","\x99","\x9b","\x96","\x73"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		::haxe::Log_obj::trace(tmp3,tmp4);
		HX_STACK_LINE(62)
		::luxe::Physics tmp5 = ::Luxe_obj::physics;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(62)
		tmp5->nape->set_paused(true);
		HX_STACK_LINE(64)
		::GameState_obj::paused = true;
		HX_STACK_LINE(65)
		::luxe::Events tmp6 = ::GameState_obj::events;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(65)
		Dynamic tmp7 = _value;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(65)
		tmp6->fire(HX_HCSTRING("paused.enter","\x58","\xfd","\xbb","\xe0"),tmp7,null());
	}
return null();
}


Void Paused_obj::onleave( Dynamic _value){
{
		HX_STACK_FRAME("Paused","onleave",0x34a317d8,"Paused.onleave","GameState.hx",69,0x62656b7f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(70)
		::String tmp = this->name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		::String tmp1 = (HX_HCSTRING("left ","\x39","\xfe","\x56","\x72") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		::String tmp2 = (tmp1 + HX_HCSTRING(" state","\xf1","\x01","\x77","\x4f"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(70)
		::String tmp3 = (HX_HCSTRING("i / gamestate / ","\x1a","\x66","\xad","\x88") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(70)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("GameState.hx","\x7f","\x6b","\x65","\x62"),70,HX_HCSTRING("Paused","\xce","\xb4","\x18","\x24"),HX_HCSTRING("onleave","\x78","\x63","\x63","\x75"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(70)
		::haxe::Log_obj::trace(tmp3,tmp4);
		HX_STACK_LINE(72)
		::luxe::Physics tmp5 = ::Luxe_obj::physics;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(72)
		tmp5->nape->set_paused(false);
		HX_STACK_LINE(74)
		::GameState_obj::paused = false;
		HX_STACK_LINE(75)
		::luxe::Events tmp6 = ::GameState_obj::events;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(75)
		Dynamic tmp7 = _value;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(75)
		tmp6->fire(HX_HCSTRING("paused.leave","\x37","\xc5","\x88","\xe2"),tmp7,null());
	}
return null();
}



Paused_obj::Paused_obj()
{
}

Dynamic Paused_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(Paused_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Paused_obj::__mClass,"__mClass");
};

#endif

hx::Class Paused_obj::__mClass;

void Paused_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Paused","\xce","\xb4","\x18","\x24");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Paused_obj >;
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

