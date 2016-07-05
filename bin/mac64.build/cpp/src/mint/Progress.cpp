#include <hxcpp.h>

#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
#endif
#ifndef INCLUDED_mint_Progress
#include <mint/Progress.h>
#endif
#ifndef INCLUDED_mint_core_Signal
#include <mint/core/Signal.h>
#endif
#ifndef INCLUDED_mint_render_Renderer
#include <mint/render/Renderer.h>
#endif
#ifndef INCLUDED_mint_render_Rendering
#include <mint/render/Rendering.h>
#endif
namespace mint{

Void Progress_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("mint.Progress","new",0x9763008b,"mint.Progress.new","mint/Progress.hx",26,0x090706e4)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(28)
	this->progress = ((Float)0.5);
	HX_STACK_LINE(36)
	this->options = _options;
	HX_STACK_LINE(38)
	{
		HX_STACK_LINE(38)
		Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		::String tmp1 = tmp->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		if ((tmp2)){
			HX_STACK_LINE(38)
			Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(38)
			tmp3->__FieldRef(HX_HCSTRING("name","\x4b","\x72","\xff","\x48")) = HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86");
		}
		HX_STACK_LINE(38)
		Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		tmp3->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
	}
	HX_STACK_LINE(40)
	Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	super::__construct(tmp,null());
	HX_STACK_LINE(42)
	::mint::core::Signal tmp1 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	this->onchange = tmp1;
	HX_STACK_LINE(44)
	Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	{
		HX_STACK_LINE(44)
		Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(44)
		Dynamic tmp4 = tmp3->__Field(HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(44)
		if ((tmp5)){
			HX_STACK_LINE(44)
			Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(44)
			tmp6->__FieldRef(HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86")) = ((Float)0.5);
		}
		HX_STACK_LINE(44)
		Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(44)
		tmp2 = tmp6->__Field(HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"), hx::paccDynamic );
	}
	HX_STACK_LINE(44)
	this->set_progress(tmp2);
	HX_STACK_LINE(46)
	::mint::render::Rendering tmp3 = this->rendering;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(46)
	::mint::render::Renderer tmp4 = tmp3->get(hx::ClassOf< ::mint::Progress >(),hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(46)
	this->renderer = tmp4;
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(48)
		::mint::core::Signal tmp5 = this->oncreate;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(51)
		int tmp6 = tmp5->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(51)
		int _count = tmp6;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			bool tmp7 = (_idx < _count);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(52)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(52)
			if ((tmp8)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(48)
			::mint::core::Signal tmp9 = this->oncreate;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(53)
			Dynamic tmp10 = tmp9->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(53)
			Dynamic fn = tmp10;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp11 = (fn != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(54)
			if ((tmp11)){
				HX_STACK_LINE(55)
				fn().Cast< Void >();
			}
			HX_STACK_LINE(57)
			(_idx)++;
		}
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp7 = (_count > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(60)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(60)
			if ((tmp8)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(48)
			::mint::core::Signal tmp9 = this->oncreate;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(61)
			int tmp10 = (_count - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(61)
			Dynamic tmp11 = tmp9->listeners->__GetItem(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(61)
			Dynamic fn = tmp11;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(62)
			bool tmp12 = (fn == null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(62)
			if ((tmp12)){
				HX_STACK_LINE(48)
				::mint::core::Signal tmp13 = this->oncreate;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(62)
				int tmp14 = (_count - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(62)
				tmp13->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp14,(int)1);
			}
			HX_STACK_LINE(63)
			(_count)--;
		}
	}
}
;
	return null();
}

//Progress_obj::~Progress_obj() { }

Dynamic Progress_obj::__CreateEmpty() { return  new Progress_obj; }
hx::ObjectPtr< Progress_obj > Progress_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Progress_obj > _result_ = new Progress_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic Progress_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Progress_obj > _result_ = new Progress_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Progress_obj::destroy( ){
{
		HX_STACK_FRAME("mint.Progress","destroy",0xed284ea5,"mint.Progress.destroy","mint/Progress.hx",52,0x090706e4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(54)
		this->super::destroy();
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			::mint::core::Signal tmp = this->onchange;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(56)
			::mint::core::Signal _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(56)
			_this->listeners = null();
			HX_STACK_LINE(56)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(57)
		this->onchange = null();
	}
return null();
}


Float Progress_obj::set_progress( Float _value){
	HX_STACK_FRAME("mint.Progress","set_progress",0x224ac19f,"mint.Progress.set_progress","mint/Progress.hx",61,0x090706e4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(63)
	Float tmp = this->progress;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	Float prev = tmp;		HX_STACK_VAR(prev,"prev");
	HX_STACK_LINE(65)
	bool tmp1 = (_value < ((Float)0.0));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	if ((tmp1)){
		HX_STACK_LINE(65)
		tmp2 = ((Float)0.0);
	}
	else{
		HX_STACK_LINE(65)
		bool tmp3 = (_value > ((Float)1.0));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(65)
		if ((tmp3)){
			HX_STACK_LINE(65)
			tmp2 = ((Float)1.0);
		}
		else{
			HX_STACK_LINE(65)
			tmp2 = _value;
		}
	}
	HX_STACK_LINE(65)
	_value = tmp2;
	HX_STACK_LINE(67)
	this->progress = _value;
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(69)
		::mint::core::Signal tmp3 = this->onchange;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		int tmp4 = tmp3->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(51)
		int _count = tmp4;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			bool tmp5 = (_idx < _count);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(52)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(52)
			if ((tmp6)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(69)
			::mint::core::Signal tmp7 = this->onchange;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(53)
			Dynamic tmp8 = tmp7->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(53)
			Dynamic fn = tmp8;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp9 = (fn != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(54)
			if ((tmp9)){
				HX_STACK_LINE(69)
				Float tmp10 = this->progress;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(69)
				Float tmp11 = prev;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(55)
				fn(tmp10,tmp11).Cast< Void >();
			}
			HX_STACK_LINE(57)
			(_idx)++;
		}
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp5 = (_count > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(60)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(60)
			if ((tmp6)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(69)
			::mint::core::Signal tmp7 = this->onchange;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(61)
			int tmp8 = (_count - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(61)
			Dynamic tmp9 = tmp7->listeners->__GetItem(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(61)
			Dynamic fn = tmp9;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(62)
			bool tmp10 = (fn == null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(62)
			if ((tmp10)){
				HX_STACK_LINE(69)
				::mint::core::Signal tmp11 = this->onchange;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(62)
				int tmp12 = (_count - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(62)
				tmp11->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp12,(int)1);
			}
			HX_STACK_LINE(63)
			(_count)--;
		}
	}
	HX_STACK_LINE(71)
	Float tmp3 = this->progress;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(71)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Progress_obj,set_progress,return )


Progress_obj::Progress_obj()
{
}

void Progress_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Progress);
	HX_MARK_MEMBER_NAME(progress,"progress");
	HX_MARK_MEMBER_NAME(onchange,"onchange");
	HX_MARK_MEMBER_NAME(options,"options");
	::mint::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Progress_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(progress,"progress");
	HX_VISIT_MEMBER_NAME(onchange,"onchange");
	HX_VISIT_MEMBER_NAME(options,"options");
	::mint::Control_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Progress_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { return progress; }
		if (HX_FIELD_EQ(inName,"onchange") ) { return onchange; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_progress") ) { return set_progress_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Progress_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { if (inCallProp == hx::paccAlways) return set_progress(inValue);progress=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onchange") ) { onchange=inValue.Cast< ::mint::core::Signal >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Progress_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"));
	outFields->push(HX_HCSTRING("onchange","\xcf","\x13","\x8b","\x62"));
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Progress_obj,progress),HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Progress_obj,onchange),HX_HCSTRING("onchange","\xcf","\x13","\x8b","\x62")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Progress_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"),
	HX_HCSTRING("onchange","\xcf","\x13","\x8b","\x62"),
	HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("set_progress","\x2a","\xcf","\x3d","\x50"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Progress_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Progress_obj::__mClass,"__mClass");
};

#endif

hx::Class Progress_obj::__mClass;

void Progress_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mint.Progress","\x19","\x5f","\x07","\x73");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Progress_obj >;
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
