#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_util_ZNPArray2_Float
#include <zpp_nape/util/ZNPArray2_Float.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPArray2_Float_obj::__construct(int width,int height)
{
HX_STACK_FRAME("zpp_nape.util.ZNPArray2_Float","new",0x9abc4bb9,"zpp_nape.util.ZNPArray2_Float.new","zpp_nape/util/Array2.hx",175,0x6c3575ba)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
{
	HX_STACK_LINE(177)
	this->width = (int)0;
	HX_STACK_LINE(176)
	this->list = null();
	HX_STACK_LINE(183)
	this->width = width;
	HX_STACK_LINE(188)
	this->list = Array_obj< Float >::__new();
}
;
	return null();
}

//ZNPArray2_Float_obj::~ZNPArray2_Float_obj() { }

Dynamic ZNPArray2_Float_obj::__CreateEmpty() { return  new ZNPArray2_Float_obj; }
hx::ObjectPtr< ZNPArray2_Float_obj > ZNPArray2_Float_obj::__new(int width,int height)
{  hx::ObjectPtr< ZNPArray2_Float_obj > _result_ = new ZNPArray2_Float_obj();
	_result_->__construct(width,height);
	return _result_;}

Dynamic ZNPArray2_Float_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPArray2_Float_obj > _result_ = new ZNPArray2_Float_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void ZNPArray2_Float_obj::resize( int width,int height,Float def){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPArray2_Float","resize",0x6725bc3b,"zpp_nape.util.ZNPArray2_Float.resize","zpp_nape/util/Array2.hx",191,0x6c3575ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(def,"def")
		HX_STACK_LINE(200)
		this->width = width;
		HX_STACK_LINE(203)
		{
			HX_STACK_LINE(203)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(203)
			int tmp = (width * height);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(203)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(203)
			while((true)){
				HX_STACK_LINE(203)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(203)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(203)
				if ((tmp2)){
					HX_STACK_LINE(203)
					break;
				}
				HX_STACK_LINE(203)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(203)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(204)
				Float tmp4 = def;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(204)
				this->list[i] = tmp4;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZNPArray2_Float_obj,resize,(void))

Float ZNPArray2_Float_obj::get( int x,int y){
	HX_STACK_FRAME("zpp_nape.util.ZNPArray2_Float","get",0x9ab6fbef,"zpp_nape.util.ZNPArray2_Float.get","zpp_nape/util/Array2.hx",209,0x6c3575ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(218)
	int tmp = y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(218)
	int tmp1 = this->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(218)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(218)
	int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(218)
	int tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(218)
	Float tmp5 = this->list->__get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(218)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPArray2_Float_obj,get,return )

Float ZNPArray2_Float_obj::set( int x,int y,Float obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPArray2_Float","set",0x9ac016fb,"zpp_nape.util.ZNPArray2_Float.set","zpp_nape/util/Array2.hx",222,0x6c3575ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(231)
	int tmp = y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(231)
	int tmp1 = this->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(231)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(231)
	int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(231)
	int tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(231)
	Float tmp5 = obj;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(231)
	Float tmp6 = this->list[tmp4] = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(231)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC3(ZNPArray2_Float_obj,set,return )


ZNPArray2_Float_obj::ZNPArray2_Float_obj()
{
}

void ZNPArray2_Float_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPArray2_Float);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_END_CLASS();
}

void ZNPArray2_Float_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(width,"width");
}

Dynamic ZNPArray2_Float_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZNPArray2_Float_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZNPArray2_Float_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(ZNPArray2_Float_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsInt,(int)offsetof(ZNPArray2_Float_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZNPArray2_Float_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPArray2_Float_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPArray2_Float_obj::__mClass;

void ZNPArray2_Float_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPArray2_Float","\x47","\xfb","\x73","\xd1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPArray2_Float_obj >;
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

} // end namespace zpp_nape
} // end namespace util
