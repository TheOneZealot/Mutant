#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchPair
#include <zpp_nape/geom/ZPP_MarchPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPArray2_ZPP_MarchPair
#include <zpp_nape/util/ZNPArray2_ZPP_MarchPair.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPArray2_ZPP_MarchPair_obj::__construct(int width,int height)
{
HX_STACK_FRAME("zpp_nape.util.ZNPArray2_ZPP_MarchPair","new",0xc1c0b2b5,"zpp_nape.util.ZNPArray2_ZPP_MarchPair.new","zpp_nape/util/Array2.hx",295,0x6c3575ba)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
{
	HX_STACK_LINE(297)
	this->width = (int)0;
	HX_STACK_LINE(296)
	this->list = null();
	HX_STACK_LINE(303)
	this->width = width;
	HX_STACK_LINE(308)
	this->list = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//ZNPArray2_ZPP_MarchPair_obj::~ZNPArray2_ZPP_MarchPair_obj() { }

Dynamic ZNPArray2_ZPP_MarchPair_obj::__CreateEmpty() { return  new ZNPArray2_ZPP_MarchPair_obj; }
hx::ObjectPtr< ZNPArray2_ZPP_MarchPair_obj > ZNPArray2_ZPP_MarchPair_obj::__new(int width,int height)
{  hx::ObjectPtr< ZNPArray2_ZPP_MarchPair_obj > _result_ = new ZNPArray2_ZPP_MarchPair_obj();
	_result_->__construct(width,height);
	return _result_;}

Dynamic ZNPArray2_ZPP_MarchPair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPArray2_ZPP_MarchPair_obj > _result_ = new ZNPArray2_ZPP_MarchPair_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void ZNPArray2_ZPP_MarchPair_obj::resize( int width,int height,::zpp_nape::geom::ZPP_MarchPair def){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPArray2_ZPP_MarchPair","resize",0x8cf6dabf,"zpp_nape.util.ZNPArray2_ZPP_MarchPair.resize","zpp_nape/util/Array2.hx",311,0x6c3575ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(def,"def")
		HX_STACK_LINE(320)
		this->width = width;
		HX_STACK_LINE(323)
		{
			HX_STACK_LINE(323)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(323)
			int tmp = (width * height);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(323)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(323)
			while((true)){
				HX_STACK_LINE(323)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(323)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(323)
				if ((tmp2)){
					HX_STACK_LINE(323)
					break;
				}
				HX_STACK_LINE(323)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(323)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(324)
				::zpp_nape::geom::ZPP_MarchPair tmp4 = def;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(324)
				this->list[i] = tmp4;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZNPArray2_ZPP_MarchPair_obj,resize,(void))

::zpp_nape::geom::ZPP_MarchPair ZNPArray2_ZPP_MarchPair_obj::get( int x,int y){
	HX_STACK_FRAME("zpp_nape.util.ZNPArray2_ZPP_MarchPair","get",0xc1bb62eb,"zpp_nape.util.ZNPArray2_ZPP_MarchPair.get","zpp_nape/util/Array2.hx",329,0x6c3575ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(338)
	int tmp = y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(338)
	int tmp1 = this->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(338)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(338)
	int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(338)
	int tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(338)
	::zpp_nape::geom::ZPP_MarchPair tmp5 = this->list->__get(tmp4).StaticCast< ::zpp_nape::geom::ZPP_MarchPair >();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(338)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPArray2_ZPP_MarchPair_obj,get,return )

::zpp_nape::geom::ZPP_MarchPair ZNPArray2_ZPP_MarchPair_obj::set( int x,int y,::zpp_nape::geom::ZPP_MarchPair obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPArray2_ZPP_MarchPair","set",0xc1c47df7,"zpp_nape.util.ZNPArray2_ZPP_MarchPair.set","zpp_nape/util/Array2.hx",342,0x6c3575ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(351)
	int tmp = y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(351)
	int tmp1 = this->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(351)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(351)
	int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(351)
	int tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(351)
	::zpp_nape::geom::ZPP_MarchPair tmp5 = obj;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(351)
	::zpp_nape::geom::ZPP_MarchPair tmp6 = this->list[tmp4] = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(351)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC3(ZNPArray2_ZPP_MarchPair_obj,set,return )


ZNPArray2_ZPP_MarchPair_obj::ZNPArray2_ZPP_MarchPair_obj()
{
}

void ZNPArray2_ZPP_MarchPair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPArray2_ZPP_MarchPair);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_END_CLASS();
}

void ZNPArray2_ZPP_MarchPair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(width,"width");
}

Dynamic ZNPArray2_ZPP_MarchPair_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ZNPArray2_ZPP_MarchPair_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZNPArray2_ZPP_MarchPair_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ZNPArray2_ZPP_MarchPair_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsInt,(int)offsetof(ZNPArray2_ZPP_MarchPair_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
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
	HX_MARK_MEMBER_NAME(ZNPArray2_ZPP_MarchPair_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPArray2_ZPP_MarchPair_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPArray2_ZPP_MarchPair_obj::__mClass;

void ZNPArray2_ZPP_MarchPair_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPArray2_ZPP_MarchPair","\x43","\x34","\x02","\x10");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPArray2_ZPP_MarchPair_obj >;
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
