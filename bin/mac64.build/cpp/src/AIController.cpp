#include <hxcpp.h>

#ifndef INCLUDED_AIController
#include <AIController.h>
#endif
#ifndef INCLUDED_Controller
#include <Controller.h>
#endif
#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif

Void AIController_obj::__construct()
{
HX_STACK_FRAME("AIController","new",0xce794a96,"AIController.new","AIController.hx",5,0x84f1999a)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5)
	super::__construct();
}
;
	return null();
}

//AIController_obj::~AIController_obj() { }

Dynamic AIController_obj::__CreateEmpty() { return  new AIController_obj; }
hx::ObjectPtr< AIController_obj > AIController_obj::__new()
{  hx::ObjectPtr< AIController_obj > _result_ = new AIController_obj();
	_result_->__construct();
	return _result_;}

Dynamic AIController_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AIController_obj > _result_ = new AIController_obj();
	_result_->__construct();
	return _result_;}

Void AIController_obj::onadded( ){
{
		HX_STACK_FRAME("AIController","onadded",0x5e61d077,"AIController.onadded","AIController.hx",10,0x84f1999a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10)
		this->super::onadded();
	}
return null();
}


Void AIController_obj::init( ){
{
		HX_STACK_FRAME("AIController","init",0xd860b01a,"AIController.init","luxe/macros/ComponentRules.hx",38,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		this->super::init();
	}
return null();
}


Void AIController_obj::ondestroy( ){
{
		HX_STACK_FRAME("AIController","ondestroy",0xa6e3c471,"AIController.ondestroy","luxe/macros/ComponentRules.hx",50,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->super::ondestroy();
	}
return null();
}


Void AIController_obj::onremoved( ){
{
		HX_STACK_FRAME("AIController","onremoved",0x755db717,"AIController.onremoved","luxe/macros/ComponentRules.hx",62,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		this->super::onremoved();
	}
return null();
}



AIController_obj::AIController_obj()
{
}

Dynamic AIController_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
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

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("onadded","\x41","\x03","\x54","\x1f"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onremoved","\x61","\xb0","\x59","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AIController_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AIController_obj::__mClass,"__mClass");
};

#endif

hx::Class AIController_obj::__mClass;

void AIController_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("AIController","\xa4","\x07","\x77","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AIController_obj >;
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

