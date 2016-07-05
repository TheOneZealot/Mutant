#include <hxcpp.h>

#ifndef INCLUDED_mint_Checkbox
#include <mint/Checkbox.h>
#endif
#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
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

Void Checkbox_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("mint.Checkbox","new",0xa3bdde21,"mint.Checkbox.new","mint/Checkbox.hx",31,0x38266e0e)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(34)
	this->state = true;
	HX_STACK_LINE(44)
	this->options = _options;
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		::String tmp1 = tmp->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(46)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		if ((tmp2)){
			HX_STACK_LINE(46)
			Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(46)
			tmp3->__FieldRef(HX_HCSTRING("name","\x4b","\x72","\xff","\x48")) = HX_HCSTRING("checkbox","\x43","\xd2","\xf5","\xac");
		}
		HX_STACK_LINE(46)
		Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(46)
		tmp3->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
	}
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		Dynamic tmp1 = tmp->__Field(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(47)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		if ((tmp2)){
			HX_STACK_LINE(47)
			Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(47)
			tmp3->__FieldRef(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a")) = true;
		}
		HX_STACK_LINE(47)
		Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(47)
		tmp3->__Field(HX_HCSTRING("mouse_input","\x30","\xcb","\xf8","\x7a"), hx::paccDynamic );
	}
	HX_STACK_LINE(49)
	Dynamic tmp = _options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	super::__construct(tmp,null());
	HX_STACK_LINE(51)
	::mint::core::Signal tmp1 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	this->onchange = tmp1;
	HX_STACK_LINE(54)
	Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(54)
	Dynamic tmp3 = tmp2->__Field(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(54)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(54)
	if ((tmp4)){
		HX_STACK_LINE(55)
		Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(55)
		Dynamic tmp6 = tmp5->__Field(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(55)
		this->set_state(tmp6);
	}
	HX_STACK_LINE(58)
	::mint::render::Rendering tmp5 = this->rendering;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(58)
	::mint::render::Renderer tmp6 = tmp5->get(hx::ClassOf< ::mint::Checkbox >(),hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(58)
	this->renderer = tmp6;
	HX_STACK_LINE(60)
	Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(60)
	Dynamic tmp8 = tmp7->__Field(HX_HCSTRING("onchange","\xcf","\x13","\x8b","\x62"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(60)
	bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(60)
	if ((tmp9)){
		HX_STACK_LINE(61)
		::mint::core::Signal tmp10 = this->onchange;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(61)
		Dynamic tmp11 = this->options;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(61)
		Dynamic tmp12 = tmp11->__Field(HX_HCSTRING("onchange","\xcf","\x13","\x8b","\x62"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(61)
		tmp10->listen(tmp12);
	}
	HX_STACK_LINE(64)
	::mint::core::Signal tmp10 = this->onmouseup;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(64)
	Dynamic tmp11 = this->onclick_dyn();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(64)
	tmp10->listen(tmp11);
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(66)
		::mint::core::Signal tmp12 = this->oncreate;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(51)
		int tmp13 = tmp12->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(51)
		int _count = tmp13;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			bool tmp14 = (_idx < _count);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(52)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(52)
			if ((tmp15)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(66)
			::mint::core::Signal tmp16 = this->oncreate;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(53)
			Dynamic tmp17 = tmp16->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(53)
			Dynamic fn = tmp17;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp18 = (fn != null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(54)
			if ((tmp18)){
				HX_STACK_LINE(55)
				fn().Cast< Void >();
			}
			HX_STACK_LINE(57)
			(_idx)++;
		}
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp14 = (_count > (int)0);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(60)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(60)
			if ((tmp15)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(66)
			::mint::core::Signal tmp16 = this->oncreate;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(61)
			int tmp17 = (_count - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(61)
			Dynamic tmp18 = tmp16->listeners->__GetItem(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(61)
			Dynamic fn = tmp18;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(62)
			bool tmp19 = (fn == null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(62)
			if ((tmp19)){
				HX_STACK_LINE(66)
				::mint::core::Signal tmp20 = this->oncreate;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(62)
				int tmp21 = (_count - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(62)
				tmp20->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp21,(int)1);
			}
			HX_STACK_LINE(63)
			(_count)--;
		}
	}
}
;
	return null();
}

//Checkbox_obj::~Checkbox_obj() { }

Dynamic Checkbox_obj::__CreateEmpty() { return  new Checkbox_obj; }
hx::ObjectPtr< Checkbox_obj > Checkbox_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Checkbox_obj > _result_ = new Checkbox_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic Checkbox_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Checkbox_obj > _result_ = new Checkbox_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Checkbox_obj::destroy( ){
{
		HX_STACK_FRAME("mint.Checkbox","destroy",0x1ad0af3b,"mint.Checkbox.destroy","mint/Checkbox.hx",70,0x38266e0e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(72)
		this->super::destroy();
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			::mint::core::Signal tmp = this->onchange;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(74)
			::mint::core::Signal _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(74)
			_this->listeners = null();
			HX_STACK_LINE(74)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(75)
		this->onchange = null();
	}
return null();
}


Void Checkbox_obj::onclick( Dynamic _,::mint::Control _1){
{
		HX_STACK_FRAME("mint.Checkbox","onclick",0x41b92d0a,"mint.Checkbox.onclick","mint/Checkbox.hx",81,0x38266e0e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_ARG(_1,"_1")
		HX_STACK_LINE(83)
		bool tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		this->set_state(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Checkbox_obj,onclick,(void))

bool Checkbox_obj::set_state( bool _b){
	HX_STACK_FRAME("mint.Checkbox","set_state",0xaaa612f5,"mint.Checkbox.set_state","mint/Checkbox.hx",87,0x38266e0e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_b,"_b")
	HX_STACK_LINE(89)
	bool tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	bool prev = tmp;		HX_STACK_VAR(prev,"prev");
	HX_STACK_LINE(91)
	this->state = _b;
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(93)
		::mint::core::Signal tmp1 = this->onchange;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		int tmp2 = tmp1->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		int _count = tmp2;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			bool tmp3 = (_idx < _count);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(52)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(52)
			if ((tmp4)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(93)
			::mint::core::Signal tmp5 = this->onchange;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(53)
			Dynamic tmp6 = tmp5->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(53)
			Dynamic fn = tmp6;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp7 = (fn != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(54)
			if ((tmp7)){
				HX_STACK_LINE(93)
				bool tmp8 = this->state;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(93)
				bool tmp9 = prev;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(55)
				fn(tmp8,tmp9).Cast< Void >();
			}
			HX_STACK_LINE(57)
			(_idx)++;
		}
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp3 = (_count > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(60)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(60)
			if ((tmp4)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(93)
			::mint::core::Signal tmp5 = this->onchange;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(61)
			int tmp6 = (_count - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(61)
			Dynamic tmp7 = tmp5->listeners->__GetItem(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(61)
			Dynamic fn = tmp7;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(62)
			bool tmp8 = (fn == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(62)
			if ((tmp8)){
				HX_STACK_LINE(93)
				::mint::core::Signal tmp9 = this->onchange;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(62)
				int tmp10 = (_count - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(62)
				tmp9->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp10,(int)1);
			}
			HX_STACK_LINE(63)
			(_count)--;
		}
	}
	HX_STACK_LINE(95)
	bool tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Checkbox_obj,set_state,return )


Checkbox_obj::Checkbox_obj()
{
}

void Checkbox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Checkbox);
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(onchange,"onchange");
	HX_MARK_MEMBER_NAME(options,"options");
	::mint::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Checkbox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(onchange,"onchange");
	HX_VISIT_MEMBER_NAME(options,"options");
	::mint::Control_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Checkbox_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onclick") ) { return onclick_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onchange") ) { return onchange; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_state") ) { return set_state_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Checkbox_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { if (inCallProp == hx::paccAlways) return set_state(inValue);state=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onchange") ) { onchange=inValue.Cast< ::mint::core::Signal >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Checkbox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("onchange","\xcf","\x13","\x8b","\x62"));
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Checkbox_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Checkbox_obj,onchange),HX_HCSTRING("onchange","\xcf","\x13","\x8b","\x62")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Checkbox_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("onchange","\xcf","\x13","\x8b","\x62"),
	HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("onclick","\xc9","\xaa","\x6e","\x4b"),
	HX_HCSTRING("set_state","\x74","\xbe","\x05","\xab"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Checkbox_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Checkbox_obj::__mClass,"__mClass");
};

#endif

hx::Class Checkbox_obj::__mClass;

void Checkbox_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mint.Checkbox","\xaf","\x39","\xd2","\x99");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Checkbox_obj >;
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
