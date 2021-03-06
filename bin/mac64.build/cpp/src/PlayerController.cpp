#include <hxcpp.h>

#ifndef INCLUDED_Controller
#include <Controller.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_PlayerController
#include <PlayerController.h>
#endif
#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Input
#include <luxe/Input.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif

Void PlayerController_obj::__construct()
{
HX_STACK_FRAME("PlayerController","new",0xab9f6aef,"PlayerController.new","PlayerController.hx",7,0xc07b8761)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(7)
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

Void PlayerController_obj::update( Float dt){
{
		HX_STACK_FRAME("PlayerController","update",0xe5fbaeda,"PlayerController.update","PlayerController.hx",11,0xc07b8761)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(13)
		::luxe::Input tmp = ::Luxe_obj::input;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(13)
		bool tmp1 = tmp->inputpressed(HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13)
		if ((tmp1)){
			HX_STACK_LINE(15)
			this->jump();
		}
		HX_STACK_LINE(18)
		::luxe::Input tmp2 = ::Luxe_obj::input;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(18)
		bool tmp3 = tmp2->inputdown(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(18)
		if ((tmp3)){
			HX_STACK_LINE(20)
			::nape::geom::Vec2 tmp4 = ::nape::geom::Vec2_obj::__new((int)-1,(int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(20)
			this->add_movement_input(tmp4);
		}
		HX_STACK_LINE(22)
		::luxe::Input tmp4 = ::Luxe_obj::input;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(22)
		bool tmp5 = tmp4->inputdown(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(22)
		if ((tmp5)){
			HX_STACK_LINE(24)
			::nape::geom::Vec2 tmp6 = ::nape::geom::Vec2_obj::__new((int)1,(int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(24)
			this->add_movement_input(tmp6);
		}
		HX_STACK_LINE(27)
		Float tmp6 = dt;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(27)
		this->super::update(tmp6);
	}
return null();
}


Void PlayerController_obj::init( ){
{
		HX_STACK_FRAME("PlayerController","init",0x7c96dda1,"PlayerController.init","luxe/macros/ComponentRules.hx",38,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		this->super::init();
	}
return null();
}


Void PlayerController_obj::ondestroy( ){
{
		HX_STACK_FRAME("PlayerController","ondestroy",0x08582d8a,"PlayerController.ondestroy","luxe/macros/ComponentRules.hx",50,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->super::ondestroy();
	}
return null();
}


Void PlayerController_obj::onremoved( ){
{
		HX_STACK_FRAME("PlayerController","onremoved",0xd6d22030,"PlayerController.onremoved","luxe/macros/ComponentRules.hx",62,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		this->super::onremoved();
	}
return null();
}



PlayerController_obj::PlayerController_obj()
{
}

Dynamic PlayerController_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onremoved") ) { return onremoved_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
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
	__mClass->mName = HX_HCSTRING("PlayerController","\x7d","\xc7","\xdd","\x23");
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

