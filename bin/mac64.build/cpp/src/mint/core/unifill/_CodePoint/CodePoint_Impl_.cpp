#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_mint_core_unifill_Exception
#include <mint/core/unifill/Exception.h>
#endif
#ifndef INCLUDED_mint_core_unifill__CodePoint_CodePoint_Impl_
#include <mint/core/unifill/_CodePoint/CodePoint_Impl_.h>
#endif
#ifndef INCLUDED_mint_core_unifill__Utf8_Utf8Impl
#include <mint/core/unifill/_Utf8/Utf8Impl.h>
#endif
namespace mint{
namespace core{
namespace unifill{
namespace _CodePoint{

Void CodePoint_Impl__obj::__construct()
{
	return null();
}

//CodePoint_Impl__obj::~CodePoint_Impl__obj() { }

Dynamic CodePoint_Impl__obj::__CreateEmpty() { return  new CodePoint_Impl__obj; }
hx::ObjectPtr< CodePoint_Impl__obj > CodePoint_Impl__obj::__new()
{  hx::ObjectPtr< CodePoint_Impl__obj > _result_ = new CodePoint_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CodePoint_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CodePoint_Impl__obj > _result_ = new CodePoint_Impl__obj();
	_result_->__construct();
	return _result_;}

::String CodePoint_Impl__obj::cons( int a,::String b){
	HX_STACK_FRAME("mint.core.unifill._CodePoint.CodePoint_Impl_","cons",0x7fffe008,"mint.core.unifill._CodePoint.CodePoint_Impl_.cons","mint/core/unifill/CodePoint.hx",7,0x4333323a)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(7)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7)
	{
		HX_STACK_LINE(7)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7)
		{
			HX_STACK_LINE(7)
			::haxe::io::BytesBuffer tmp2 = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(7)
			::haxe::io::BytesBuffer buf = tmp2;		HX_STACK_VAR(buf,"buf");
			HX_STACK_LINE(7)
			Dynamic tmp3 = buf->addByte_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(7)
			int tmp4 = a;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(7)
			::mint::core::unifill::_Utf8::Utf8Impl_obj::encode_code_point(tmp3,tmp4);
			HX_STACK_LINE(7)
			{
				HX_STACK_LINE(7)
				::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(7)
				{
					HX_STACK_LINE(7)
					::haxe::io::Bytes tmp6 = buf->getBytes();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(7)
					::haxe::io::Bytes b1 = tmp6;		HX_STACK_VAR(b1,"b1");
					HX_STACK_LINE(7)
					{
						HX_STACK_LINE(7)
						::String tmp7 = b1->toString();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(7)
						::String s = tmp7;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(7)
						tmp5 = s;
					}
				}
				HX_STACK_LINE(7)
				::String s = tmp5;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(7)
				tmp1 = s;
			}
		}
		HX_STACK_LINE(7)
		::String this1 = tmp1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(7)
		tmp = this1;
	}
	HX_STACK_LINE(7)
	::String tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7)
	::String tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(7)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CodePoint_Impl__obj,cons,return )

::String CodePoint_Impl__obj::snoc( ::String a,int b){
	HX_STACK_FRAME("mint.core.unifill._CodePoint.CodePoint_Impl_","snoc",0x8a928886,"mint.core.unifill._CodePoint.CodePoint_Impl_.snoc","mint/core/unifill/CodePoint.hx",11,0x4333323a)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(11)
	::String tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11)
	{
		HX_STACK_LINE(11)
		::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(11)
		{
			HX_STACK_LINE(11)
			::haxe::io::BytesBuffer tmp3 = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(11)
			::haxe::io::BytesBuffer buf = tmp3;		HX_STACK_VAR(buf,"buf");
			HX_STACK_LINE(11)
			Dynamic tmp4 = buf->addByte_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(11)
			int tmp5 = b;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(11)
			::mint::core::unifill::_Utf8::Utf8Impl_obj::encode_code_point(tmp4,tmp5);
			HX_STACK_LINE(11)
			{
				HX_STACK_LINE(11)
				::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(11)
				{
					HX_STACK_LINE(11)
					::haxe::io::Bytes tmp7 = buf->getBytes();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(11)
					::haxe::io::Bytes b1 = tmp7;		HX_STACK_VAR(b1,"b1");
					HX_STACK_LINE(11)
					{
						HX_STACK_LINE(11)
						::String tmp8 = b1->toString();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(11)
						::String s = tmp8;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(11)
						tmp6 = s;
					}
				}
				HX_STACK_LINE(11)
				::String s = tmp6;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(11)
				tmp2 = s;
			}
		}
		HX_STACK_LINE(11)
		::String this1 = tmp2;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(11)
		tmp1 = this1;
	}
	HX_STACK_LINE(11)
	::String tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(11)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CodePoint_Impl__obj,snoc,return )

int CodePoint_Impl__obj::addInt( int a,int b){
	HX_STACK_FRAME("mint.core.unifill._CodePoint.CodePoint_Impl_","addInt",0x3ee33725,"mint.core.unifill._CodePoint.CodePoint_Impl_.addInt","mint/core/unifill/CodePoint.hx",15,0x4333323a)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(15)
	int tmp = (a + b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	int tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(15)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CodePoint_Impl__obj,addInt,return )

int CodePoint_Impl__obj::sub( int a,int b){
	HX_STACK_FRAME("mint.core.unifill._CodePoint.CodePoint_Impl_","sub",0x63591349,"mint.core.unifill._CodePoint.CodePoint_Impl_.sub","mint/core/unifill/CodePoint.hx",19,0x4333323a)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(19)
	int tmp = (a - b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CodePoint_Impl__obj,sub,return )

int CodePoint_Impl__obj::subInt( int a,int b){
	HX_STACK_FRAME("mint.core.unifill._CodePoint.CodePoint_Impl_","subInt",0x39cd2526,"mint.core.unifill._CodePoint.CodePoint_Impl_.subInt","mint/core/unifill/CodePoint.hx",23,0x4333323a)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(23)
	int tmp = (a - b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	int tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CodePoint_Impl__obj,subInt,return )

int CodePoint_Impl__obj::_new( int code){
	HX_STACK_FRAME("mint.core.unifill._CodePoint.CodePoint_Impl_","_new",0x7d5a3b78,"mint.core.unifill._CodePoint.CodePoint_Impl_._new","mint/core/unifill/CodePoint.hx",32,0x4333323a)
	HX_STACK_ARG(code,"code")
	HX_STACK_LINE(32)
	int this1;		HX_STACK_VAR(this1,"this1");
	HX_STACK_LINE(33)
	bool tmp = ((int)0 <= code);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	if ((tmp1)){
		HX_STACK_LINE(33)
		tmp2 = (code <= (int)1114111);
	}
	else{
		HX_STACK_LINE(33)
		tmp2 = false;
	}
	HX_STACK_LINE(33)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(33)
	if ((tmp3)){
		HX_STACK_LINE(33)
		bool tmp5 = ((int)55296 <= code);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(33)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(33)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(33)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(33)
		bool tmp9 = tmp7;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(33)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(33)
		if ((tmp10)){
			HX_STACK_LINE(33)
			bool tmp11 = (code <= (int)56319);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(33)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(33)
			tmp8 = tmp12;
		}
		else{
			HX_STACK_LINE(33)
			tmp8 = false;
		}
		HX_STACK_LINE(33)
		bool tmp11 = tmp8;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(33)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(33)
		tmp4 = !(tmp12);
	}
	else{
		HX_STACK_LINE(33)
		tmp4 = false;
	}
	HX_STACK_LINE(33)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(33)
	if ((tmp4)){
		HX_STACK_LINE(33)
		bool tmp6 = ((int)56320 <= code);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(33)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(33)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(33)
		bool tmp9 = tmp7;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(33)
		if ((tmp9)){
			HX_STACK_LINE(33)
			bool tmp10 = (code <= (int)57343);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(33)
			tmp8 = tmp10;
		}
		else{
			HX_STACK_LINE(33)
			tmp8 = false;
		}
		HX_STACK_LINE(33)
		bool tmp10 = tmp8;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(33)
		tmp5 = !(tmp10);
	}
	else{
		HX_STACK_LINE(33)
		tmp5 = false;
	}
	HX_STACK_LINE(33)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(33)
	if ((tmp6)){
		HX_STACK_LINE(34)
		int tmp7 = code;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(34)
		::mint::core::unifill::Exception tmp8 = ::mint::core::unifill::Exception_obj::InvalidCodePoint(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(34)
		HX_STACK_DO_THROW(tmp8);
	}
	HX_STACK_LINE(36)
	this1 = code;
	HX_STACK_LINE(32)
	int tmp7 = this1;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(32)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CodePoint_Impl__obj,_new,return )

::String CodePoint_Impl__obj::toString( int this1){
	HX_STACK_FRAME("mint.core.unifill._CodePoint.CodePoint_Impl_","toString",0x286c4e43,"mint.core.unifill._CodePoint.CodePoint_Impl_.toString","mint/core/unifill/CodePoint.hx",40,0x4333323a)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(40)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			::haxe::io::BytesBuffer tmp2 = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(40)
			::haxe::io::BytesBuffer buf = tmp2;		HX_STACK_VAR(buf,"buf");
			HX_STACK_LINE(40)
			Dynamic tmp3 = buf->addByte_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(40)
			int tmp4 = this1;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(40)
			::mint::core::unifill::_Utf8::Utf8Impl_obj::encode_code_point(tmp3,tmp4);
			HX_STACK_LINE(40)
			{
				HX_STACK_LINE(40)
				::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(40)
				{
					HX_STACK_LINE(40)
					::haxe::io::Bytes tmp6 = buf->getBytes();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(40)
					::haxe::io::Bytes b = tmp6;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(40)
					{
						HX_STACK_LINE(40)
						::String tmp7 = b->toString();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(40)
						::String s = tmp7;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(40)
						tmp5 = s;
					}
				}
				HX_STACK_LINE(40)
				::String s = tmp5;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(40)
				tmp1 = s;
			}
		}
		HX_STACK_LINE(40)
		::String this2 = tmp1;		HX_STACK_VAR(this2,"this2");
		HX_STACK_LINE(40)
		tmp = this2;
	}
	HX_STACK_LINE(40)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CodePoint_Impl__obj,toString,return )

int CodePoint_Impl__obj::toInt( int this1){
	HX_STACK_FRAME("mint.core.unifill._CodePoint.CodePoint_Impl_","toInt",0x4997ec3d,"mint.core.unifill._CodePoint.CodePoint_Impl_.toInt","mint/core/unifill/CodePoint.hx",43,0x4333323a)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(43)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CodePoint_Impl__obj,toInt,return )


CodePoint_Impl__obj::CodePoint_Impl__obj()
{
}

bool CodePoint_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sub") ) { outValue = sub_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"cons") ) { outValue = cons_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"snoc") ) { outValue = snoc_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"addInt") ) { outValue = addInt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"subInt") ) { outValue = subInt_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CodePoint_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CodePoint_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class CodePoint_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("cons","\xf1","\xb9","\xc4","\x41"),
	HX_HCSTRING("snoc","\x6f","\x62","\x57","\x4c"),
	HX_HCSTRING("addInt","\x4e","\x1d","\x01","\x9f"),
	HX_HCSTRING("sub","\x80","\xa9","\x57","\x00"),
	HX_HCSTRING("subInt","\x4f","\x0b","\xeb","\x99"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("toInt","\x34","\xbe","\x11","\x14"),
	::String(null()) };

void CodePoint_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mint.core.unifill._CodePoint.CodePoint_Impl_","\xb7","\xf1","\x78","\xb8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CodePoint_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CodePoint_Impl__obj >;
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
} // end namespace unifill
} // end namespace _CodePoint
