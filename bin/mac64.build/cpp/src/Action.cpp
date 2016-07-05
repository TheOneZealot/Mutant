#include <hxcpp.h>

#ifndef INCLUDED_Action
#include <Action.h>
#endif
#ifndef INCLUDED_Creature
#include <Creature.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif

Void Action_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("Action","new",0x35d9f3c8,"Action.new","Action.hx",14,0xb3539ca8)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(15)
	super::__construct(HX_HCSTRING("action","\xb6","\x3b","\x46","\x16"),null());
	HX_STACK_LINE(16)
	{
		HX_STACK_LINE(16)
		::Action _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(16)
		::String tmp = _g->get_name();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(16)
		::String tmp1 = this->get_id();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(16)
		::String tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(16)
		_g->set_name(tmp2);
	}
	HX_STACK_LINE(18)
	this->options = _options;
	HX_STACK_LINE(20)
	Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	::String tmp1 = tmp->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	if ((tmp2)){
		HX_STACK_LINE(20)
		Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(20)
		::String tmp4 = tmp3->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(20)
		this->set_name(tmp4);
	}
	HX_STACK_LINE(22)
	Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(22)
	::Creature tmp4 = tmp3->__Field(HX_HCSTRING("owner","\x33","\x98","\x76","\x38"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(22)
	bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(22)
	if ((tmp5)){
		HX_STACK_LINE(22)
		Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(22)
		this->owner = tmp6->__Field(HX_HCSTRING("owner","\x33","\x98","\x76","\x38"), hx::paccDynamic );
	}
	HX_STACK_LINE(23)
	{
		HX_STACK_LINE(23)
		Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(23)
		::Creature tmp7 = tmp6->__Field(HX_HCSTRING("owner","\x33","\x98","\x76","\x38"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(23)
		bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(23)
		if ((tmp8)){
			HX_STACK_LINE(230)
			::String tmp9 = HX_HCSTRING(" ( cant have an action with a null owner","\xa8","\xb7","\x05","\xc3");		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(230)
			::String tmp10 = (tmp9 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(23)
			::String tmp11 = (HX_HCSTRING("options.owner was null","\x7b","\x1d","\xd3","\x44") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(23)
			::luxe::DebugError tmp12 = ::luxe::DebugError_obj::null_assertion(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(23)
			HX_STACK_DO_THROW(tmp12);
		}
	}
}
;
	return null();
}

//Action_obj::~Action_obj() { }

Dynamic Action_obj::__CreateEmpty() { return  new Action_obj; }
hx::ObjectPtr< Action_obj > Action_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Action_obj > _result_ = new Action_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic Action_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Action_obj > _result_ = new Action_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Action_obj::act( ){
{
		HX_STACK_FRAME("Action","act",0x35d014ba,"Action.act","Action.hx",27,0xb3539ca8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(28)
		::Creature tmp = this->owner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		::String tmp1 = tmp->get_name();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(28)
		::String tmp2 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		::String tmp3 = (tmp2 + HX_HCSTRING(" acted with ","\x0b","\x0c","\x88","\x63"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		::String tmp4 = this->get_name();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(28)
		::String tmp6 = (HX_HCSTRING("   i / action / ","\xb3","\x4d","\x9f","\x72") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(28)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Action.hx","\xa8","\x9c","\x53","\xb3"),28,HX_HCSTRING("Action","\xd6","\xaf","\xda","\x4a"),HX_HCSTRING("act","\x52","\xf1","\x49","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(28)
		::haxe::Log_obj::trace(tmp6,tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Action_obj,act,(void))


Action_obj::Action_obj()
{
}

void Action_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Action);
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(owner,"owner");
	::luxe::Objects_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Action_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(owner,"owner");
	::luxe::Objects_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Action_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"act") ) { return act_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"owner") ) { return owner; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Action_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"owner") ) { owner=inValue.Cast< ::Creature >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Action_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	outFields->push(HX_HCSTRING("owner","\x33","\x98","\x76","\x38"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Action_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
	{hx::fsObject /*::Creature*/ ,(int)offsetof(Action_obj,owner),HX_HCSTRING("owner","\x33","\x98","\x76","\x38")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"),
	HX_HCSTRING("owner","\x33","\x98","\x76","\x38"),
	HX_HCSTRING("act","\x52","\xf1","\x49","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Action_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Action_obj::__mClass,"__mClass");
};

#endif

hx::Class Action_obj::__mClass;

void Action_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Action","\xd6","\xaf","\xda","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Action_obj >;
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

