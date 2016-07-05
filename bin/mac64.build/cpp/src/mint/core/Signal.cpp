#include <hxcpp.h>

#ifndef INCLUDED_mint_core_Signal
#include <mint/core/Signal.h>
#endif
namespace mint{
namespace core{

Void Signal_obj::__construct()
{
HX_STACK_FRAME("mint.core.Signal","new",0xb744145d,"mint.core.Signal.new","mint/core/Signal.hx",13,0x383f7d53)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(13)
	this->listeners = cpp::ArrayBase_obj::__new();
}
;
	return null();
}

//Signal_obj::~Signal_obj() { }

Dynamic Signal_obj::__CreateEmpty() { return  new Signal_obj; }
hx::ObjectPtr< Signal_obj > Signal_obj::__new()
{  hx::ObjectPtr< Signal_obj > _result_ = new Signal_obj();
	_result_->__construct();
	return _result_;}

Dynamic Signal_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Signal_obj > _result_ = new Signal_obj();
	_result_->__construct();
	return _result_;}

Void Signal_obj::listen( Dynamic _handler){
{
		HX_STACK_FRAME("mint.core.Signal","listen",0x1f90606a,"mint.core.Signal.listen","mint/core/Signal.hx",17,0x383f7d53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handler,"_handler")
		HX_STACK_LINE(19)
		Dynamic tmp = _handler;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(19)
		int tmp1 = this->listeners->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(19)
		bool tmp2 = (tmp1 != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(19)
		if ((tmp2)){
			HX_STACK_LINE(20)
			HX_STACK_DO_THROW(HX_HCSTRING("mint / signal / listen / attempted to add the same listener twice","\x07","\xf5","\x18","\x90"));
			HX_STACK_LINE(21)
			return null();
		}
		HX_STACK_LINE(24)
		Dynamic tmp3 = _handler;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(24)
		this->listeners->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Signal_obj,listen,(void))

Void Signal_obj::remove( Dynamic _handler){
{
		HX_STACK_FRAME("mint.core.Signal","remove",0x341f3467,"mint.core.Signal.remove","mint/core/Signal.hx",28,0x383f7d53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handler,"_handler")
		HX_STACK_LINE(30)
		Dynamic tmp = _handler;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		int tmp1 = this->listeners->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		int _index = tmp1;		HX_STACK_VAR(_index,"_index");
		HX_STACK_LINE(31)
		bool tmp2 = (_index != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(31)
		if ((tmp2)){
			HX_STACK_LINE(32)
			hx::IndexRef((this->listeners).mPtr,_index) = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Signal_obj,remove,(void))

bool Signal_obj::has( Dynamic _handler){
	HX_STACK_FRAME("mint.core.Signal","has",0xb73f8357,"mint.core.Signal.has","mint/core/Signal.hx",37,0x383f7d53)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handler,"_handler")
	HX_STACK_LINE(39)
	Dynamic tmp = _handler;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	int tmp1 = this->listeners->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	bool tmp2 = (tmp1 != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(39)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Signal_obj,has,return )

Void Signal_obj::clear( ){
{
		HX_STACK_FRAME("mint.core.Signal","clear",0xcee26eca,"mint.core.Signal.clear","mint/core/Signal.hx",43,0x383f7d53)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		this->listeners = null();
		HX_STACK_LINE(45)
		this->listeners = cpp::ArrayBase_obj::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Signal_obj,clear,(void))


Signal_obj::Signal_obj()
{
}

void Signal_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Signal);
	HX_MARK_MEMBER_NAME(listeners,"listeners");
	HX_MARK_END_CLASS();
}

void Signal_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(listeners,"listeners");
}

Dynamic Signal_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"listen") ) { return listen_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"listeners") ) { return listeners; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Signal_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"listeners") ) { listeners=inValue.Cast< cpp::ArrayBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Signal_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("listeners","\x7f","\x65","\x8e","\xf3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Signal_obj,listeners),HX_HCSTRING("listeners","\x7f","\x65","\x8e","\xf3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("listeners","\x7f","\x65","\x8e","\xf3"),
	HX_HCSTRING("listen","\x47","\xc8","\xf9","\xef"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Signal_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Signal_obj::__mClass,"__mClass");
};

#endif

hx::Class Signal_obj::__mClass;

void Signal_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mint.core.Signal","\xeb","\xa1","\x79","\x15");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Signal_obj >;
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
} // end namespace core
