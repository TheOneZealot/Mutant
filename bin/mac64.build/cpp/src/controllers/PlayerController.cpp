#include <hxcpp.h>

#ifndef INCLUDED_Action
#include <Action.h>
#endif
#ifndef INCLUDED_Controller
#include <Controller.h>
#endif
#ifndef INCLUDED_Creature
#include <Creature.h>
#endif
#ifndef INCLUDED_GameState
#include <GameState.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_controllers_PlayerController
#include <controllers/PlayerController.h>
#endif
#ifndef INCLUDED_creatures_Player
#include <creatures/Player.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Input
#include <luxe/Input.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
#ifndef INCLUDED_luxe_States
#include <luxe/States.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
namespace controllers{

Void PlayerController_obj::__construct()
{
HX_STACK_FRAME("controllers.PlayerController","new",0x90fa2c66,"controllers.PlayerController.new","controllers/PlayerController.hx",15,0xa7548669)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15)
	super::__construct();
}
;
	return null();
}

//PlayerController_obj::~PlayerController_obj() { }

Dynamic PlayerController_obj::__CreateEmpty() { return  new PlayerController_obj; }
hx::ObjectPtr< PlayerController_obj > PlayerController_obj::__new()
{  hx::ObjectPtr< PlayerController_obj > _result_ = new PlayerController_obj();
	_result_->__construct();
	return _result_;}

Dynamic PlayerController_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayerController_obj > _result_ = new PlayerController_obj();
	_result_->__construct();
	return _result_;}

Void PlayerController_obj::onadded( ){
{
		HX_STACK_FRAME("controllers.PlayerController","onadded",0x4cbfda47,"controllers.PlayerController.onadded","controllers/PlayerController.hx",19,0xa7548669)
		HX_STACK_THIS(this)
		HX_STACK_LINE(20)
		this->super::onadded();
		HX_STACK_LINE(22)
		::Creature tmp = this->get_creature();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		this->player = ((::creatures::Player)(tmp));
	}
return null();
}


Void PlayerController_obj::update( Float dt){
{
		HX_STACK_FRAME("controllers.PlayerController","update",0x35b7f1c3,"controllers.PlayerController.update","controllers/PlayerController.hx",26,0xa7548669)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(27)
		bool tmp = ::GameState_obj::paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		if ((tmp)){
			HX_STACK_LINE(27)
			return null();
		}
		HX_STACK_LINE(29)
		::luxe::Input tmp1 = ::Luxe_obj::input;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		bool tmp2 = tmp1->inputpressed(HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(29)
		if ((tmp2)){
			HX_STACK_LINE(31)
			this->jump();
		}
		HX_STACK_LINE(34)
		::luxe::Input tmp3 = ::Luxe_obj::input;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		bool tmp4 = tmp3->inputdown(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(34)
		if ((tmp4)){
			HX_STACK_LINE(36)
			::nape::geom::Vec2 tmp5 = ::nape::geom::Vec2_obj::__new((int)-1,(int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(36)
			this->add_movement_input(tmp5);
		}
		HX_STACK_LINE(38)
		::luxe::Input tmp5 = ::Luxe_obj::input;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(38)
		bool tmp6 = tmp5->inputdown(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(38)
		if ((tmp6)){
			HX_STACK_LINE(40)
			::nape::geom::Vec2 tmp7 = ::nape::geom::Vec2_obj::__new((int)1,(int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(40)
			this->add_movement_input(tmp7);
		}
		HX_STACK_LINE(43)
		::luxe::Input tmp7 = ::Luxe_obj::input;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(43)
		bool tmp8 = tmp7->inputpressed(HX_HCSTRING("act","\x52","\xf1","\x49","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(43)
		if ((tmp8)){
			HX_STACK_LINE(45)
			::creatures::Player tmp9 = this->player;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(45)
			::Action tmp10 = tmp9->action_claw;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(45)
			bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(45)
			if ((tmp11)){
				HX_STACK_LINE(47)
				::creatures::Player tmp12 = this->player;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(47)
				::String tmp13 = tmp12->get_name();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(47)
				::String tmp14 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(47)
				::String tmp15 = (tmp14 + HX_HCSTRING(" attempted a null action","\x5c","\x29","\xfb","\xeb"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(47)
				::String tmp16 = (HX_HCSTRING("i / playercontroller / ","\xac","\xf6","\xcc","\x23") + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(47)
				Dynamic tmp17 = hx::SourceInfo(HX_HCSTRING("PlayerController.hx","\x61","\x87","\x7b","\xc0"),47,HX_HCSTRING("controllers.PlayerController","\x74","\xc1","\xce","\xd2"),HX_HCSTRING("update","\x09","\x86","\x05","\x87"));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(47)
				::haxe::Log_obj::trace(tmp16,tmp17);
			}
			HX_STACK_LINE(49)
			::creatures::Player tmp12 = this->player;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(49)
			tmp12->action_claw->act();
		}
		HX_STACK_LINE(52)
		Float tmp9 = dt;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(52)
		this->super::update(tmp9);
	}
return null();
}


Void PlayerController_obj::init( ){
{
		HX_STACK_FRAME("controllers.PlayerController","init",0x46a5644a,"controllers.PlayerController.init","luxe/macros/ComponentRules.hx",38,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		this->super::init();
	}
return null();
}


Void PlayerController_obj::ondestroy( ){
{
		HX_STACK_FRAME("controllers.PlayerController","ondestroy",0x7033e241,"controllers.PlayerController.ondestroy","luxe/macros/ComponentRules.hx",50,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->super::ondestroy();
	}
return null();
}


Void PlayerController_obj::onremoved( ){
{
		HX_STACK_FRAME("controllers.PlayerController","onremoved",0x3eadd4e7,"controllers.PlayerController.onremoved","luxe/macros/ComponentRules.hx",62,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		this->super::onremoved();
	}
return null();
}



PlayerController_obj::PlayerController_obj()
{
}

void PlayerController_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayerController);
	HX_MARK_MEMBER_NAME(player,"player");
	::Controller_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayerController_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(player,"player");
	::Controller_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayerController_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onadded") ) { return onadded_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onremoved") ) { return onremoved_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayerController_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::creatures::Player >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayerController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::creatures::Player*/ ,(int)offsetof(PlayerController_obj,player),HX_HCSTRING("player","\x61","\xeb","\xb8","\x37")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),
	HX_HCSTRING("onadded","\x41","\x03","\x54","\x1f"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onremoved","\x61","\xb0","\x59","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayerController_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayerController_obj::__mClass,"__mClass");
};

#endif

hx::Class PlayerController_obj::__mClass;

void PlayerController_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("controllers.PlayerController","\x74","\xc1","\xce","\xd2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PlayerController_obj >;
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

} // end namespace controllers
