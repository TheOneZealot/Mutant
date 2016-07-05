#include <hxcpp.h>

#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
#endif
#ifndef INCLUDED_mint_Image
#include <mint/Image.h>
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

Void Image_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("mint.Image","new",0x6a1520e1,"mint.Image.new","mint/Image.hx",39,0x43ebbeb0)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(41)
	this->options = _options;
	HX_STACK_LINE(43)
	{
		HX_STACK_LINE(43)
		Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		::String tmp1 = tmp->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(43)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		if ((tmp2)){
			HX_STACK_LINE(43)
			Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(43)
			tmp3->__FieldRef(HX_HCSTRING("name","\x4b","\x72","\xff","\x48")) = HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd");
		}
		HX_STACK_LINE(43)
		Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(43)
		tmp3->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
	}
	HX_STACK_LINE(45)
	Dynamic tmp = _options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	super::__construct(tmp,null());
	HX_STACK_LINE(47)
	::mint::core::Signal tmp1 = ::mint::core::Signal_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	this->onchange = tmp1;
	HX_STACK_LINE(49)
	::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(49)
		Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		::String tmp4 = tmp3->__Field(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(49)
		if ((tmp5)){
			HX_STACK_LINE(49)
			Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(49)
			tmp6->__FieldRef(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a")) = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		HX_STACK_LINE(49)
		Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(49)
		tmp2 = tmp6->__Field(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"), hx::paccDynamic );
	}
	HX_STACK_LINE(49)
	this->set_path(tmp2);
	HX_STACK_LINE(51)
	::mint::render::Rendering tmp3 = this->rendering;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(51)
	::mint::render::Renderer tmp4 = tmp3->get(hx::ClassOf< ::mint::Image >(),hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(51)
	this->renderer = tmp4;
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(53)
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
			HX_STACK_LINE(53)
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
			HX_STACK_LINE(53)
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
				HX_STACK_LINE(53)
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

//Image_obj::~Image_obj() { }

Dynamic Image_obj::__CreateEmpty() { return  new Image_obj; }
hx::ObjectPtr< Image_obj > Image_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Image_obj > _result_ = new Image_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic Image_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Image_obj > _result_ = new Image_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Image_obj::destroy( ){
{
		HX_STACK_FRAME("mint.Image","destroy",0x57e051fb,"mint.Image.destroy","mint/Image.hx",57,0x43ebbeb0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(59)
		this->super::destroy();
		HX_STACK_LINE(61)
		{
			HX_STACK_LINE(61)
			::mint::core::Signal tmp = this->onchange;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(61)
			::mint::core::Signal _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(61)
			_this->listeners = null();
			HX_STACK_LINE(61)
			_this->listeners = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(62)
		this->onchange = null();
	}
return null();
}


::String Image_obj::set_path( ::String _p){
	HX_STACK_FRAME("mint.Image","set_path",0x33f03681,"mint.Image.set_path","mint/Image.hx",68,0x43ebbeb0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(70)
	::String tmp = this->path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	if ((tmp1)){
		HX_STACK_LINE(70)
		::String tmp2 = this->path = _p;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(70)
		return tmp2;
	}
	HX_STACK_LINE(72)
	this->path = _p;
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(50)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(74)
		::mint::core::Signal tmp2 = this->onchange;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		int tmp3 = tmp2->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		int _count = tmp3;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			bool tmp4 = (_idx < _count);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(52)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(52)
			if ((tmp5)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(74)
			::mint::core::Signal tmp6 = this->onchange;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(53)
			Dynamic tmp7 = tmp6->listeners->__GetItem(_idx);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(53)
			Dynamic fn = tmp7;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(54)
			bool tmp8 = (fn != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(54)
			if ((tmp8)){
				HX_STACK_LINE(74)
				::String tmp9 = this->path;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(55)
				fn(tmp9).Cast< Void >();
			}
			HX_STACK_LINE(57)
			(_idx)++;
		}
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp4 = (_count > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(60)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(60)
			if ((tmp5)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(74)
			::mint::core::Signal tmp6 = this->onchange;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(61)
			int tmp7 = (_count - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(61)
			Dynamic tmp8 = tmp6->listeners->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(61)
			Dynamic fn = tmp8;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(62)
			bool tmp9 = (fn == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(62)
			if ((tmp9)){
				HX_STACK_LINE(74)
				::mint::core::Signal tmp10 = this->onchange;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(62)
				int tmp11 = (_count - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(62)
				tmp10->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp11,(int)1);
			}
			HX_STACK_LINE(63)
			(_count)--;
		}
	}
	HX_STACK_LINE(76)
	::String tmp2 = this->path;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(76)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_path,return )


Image_obj::Image_obj()
{
}

void Image_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Image);
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(onchange,"onchange");
	::mint::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Image_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(onchange,"onchange");
	::mint::Control_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Image_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return path; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onchange") ) { return onchange; }
		if (HX_FIELD_EQ(inName,"set_path") ) { return set_path_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Image_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { if (inCallProp == hx::paccAlways) return set_path(inValue);path=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onchange") ) { onchange=inValue.Cast< ::mint::core::Signal >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Image_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	outFields->push(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));
	outFields->push(HX_HCSTRING("onchange","\xcf","\x13","\x8b","\x62"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Image_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
	{hx::fsString,(int)offsetof(Image_obj,path),HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a")},
	{hx::fsObject /*::mint::core::Signal*/ ,(int)offsetof(Image_obj,onchange),HX_HCSTRING("onchange","\xcf","\x13","\x8b","\x62")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"),
	HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"),
	HX_HCSTRING("onchange","\xcf","\x13","\x8b","\x62"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("set_path","\xa2","\xfa","\x69","\x78"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Image_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Image_obj::__mClass,"__mClass");
};

#endif

hx::Class Image_obj::__mClass;

void Image_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mint.Image","\x6f","\x1c","\x21","\x85");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Image_obj >;
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
