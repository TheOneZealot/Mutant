#include <hxcpp.h>

#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
#endif
#ifndef INCLUDED_mint_List
#include <mint/List.h>
#endif
#ifndef INCLUDED_mint_core_Signal
#include <mint/core/Signal.h>
#endif
#ifndef INCLUDED_mint_render_Render
#include <mint/render/Render.h>
#endif
#ifndef INCLUDED_mint_render_Renderer
#include <mint/render/Renderer.h>
#endif
#ifndef INCLUDED_mint_render_Rendering
#include <mint/render/Rendering.h>
#endif
#ifndef INCLUDED_mint_render_luxe_List
#include <mint/render/luxe/List.h>
#endif
#ifndef INCLUDED_mint_render_luxe_LuxeMintRender
#include <mint/render/luxe/LuxeMintRender.h>
#endif
namespace mint{
namespace render{
namespace luxe{

Void List_obj::__construct(::mint::render::luxe::LuxeMintRender _render,::mint::List _control)
{
HX_STACK_FRAME("mint.render.luxe.List","new",0x95bf3a5c,"mint.render.luxe.List.new","mint/render/luxe/List.hx",17,0xc4b8d8d3)
HX_STACK_THIS(this)
HX_STACK_ARG(_render,"_render")
HX_STACK_ARG(_control,"_control")
{
	HX_STACK_LINE(62)
	this->selected = false;
	HX_STACK_LINE(25)
	this->list = _control;
	HX_STACK_LINE(26)
	this->render = _render;
	HX_STACK_LINE(28)
	::mint::render::luxe::LuxeMintRender tmp = this->render;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	::mint::List tmp1 = _control;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(30)
	::mint::List tmp2 = this->list;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	Dynamic tmp3 = this->onitementer_dyn();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(30)
	tmp2->onitementer->listen(tmp3);
	HX_STACK_LINE(31)
	::mint::List tmp4 = this->list;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(31)
	Dynamic tmp5 = this->onitemleave_dyn();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(31)
	tmp4->onitemleave->listen(tmp5);
	HX_STACK_LINE(32)
	::mint::List tmp6 = this->list;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(32)
	Dynamic tmp7 = this->onselect_dyn();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(32)
	tmp6->onselect->listen(tmp7);
}
;
	return null();
}

//List_obj::~List_obj() { }

Dynamic List_obj::__CreateEmpty() { return  new List_obj; }
hx::ObjectPtr< List_obj > List_obj::__new(::mint::render::luxe::LuxeMintRender _render,::mint::List _control)
{  hx::ObjectPtr< List_obj > _result_ = new List_obj();
	_result_->__construct(_render,_control);
	return _result_;}

Dynamic List_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< List_obj > _result_ = new List_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void List_obj::onitementer( int idx,::mint::Control ctrl,Dynamic e){
{
		HX_STACK_FRAME("mint.render.luxe.List","onitementer",0x7fd42c22,"mint.render.luxe.List.onitementer","mint/render/luxe/List.hx",49,0xc4b8d8d3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(idx,"idx")
		HX_STACK_ARG(ctrl,"ctrl")
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(50)
		bool tmp = this->selected;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		if ((tmp1)){
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(List_obj,onitementer,(void))

Void List_obj::onitemleave( int idx,::mint::Control ctrl,Dynamic e){
{
		HX_STACK_FRAME("mint.render.luxe.List","onitemleave",0x81a0f401,"mint.render.luxe.List.onitemleave","mint/render/luxe/List.hx",58,0xc4b8d8d3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(idx,"idx")
		HX_STACK_ARG(ctrl,"ctrl")
		HX_STACK_ARG(e,"e")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(List_obj,onitemleave,(void))

Void List_obj::onselect( int idx,::mint::Control ctrl,Dynamic e){
{
		HX_STACK_FRAME("mint.render.luxe.List","onselect",0x36d281df,"mint.render.luxe.List.onselect","mint/render/luxe/List.hx",63,0xc4b8d8d3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(idx,"idx")
		HX_STACK_ARG(ctrl,"ctrl")
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(64)
		bool tmp = (null() != ctrl);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		this->selected = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(List_obj,onselect,(void))

Void List_obj::ondestroy( ){
{
		HX_STACK_FRAME("mint.render.luxe.List","ondestroy",0x6360ccb7,"mint.render.luxe.List.ondestroy","mint/render/luxe/List.hx",76,0xc4b8d8d3)
		HX_STACK_THIS(this)
	}
return null();
}


Void List_obj::onclip( bool _disable,Float _x,Float _y,Float _w,Float _h){
{
		HX_STACK_FRAME("mint.render.luxe.List","onclip",0x66e146f3,"mint.render.luxe.List.onclip","mint/render/luxe/List.hx",82,0xc4b8d8d3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_disable,"_disable")
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_w,"_w")
		HX_STACK_ARG(_h,"_h")
		HX_STACK_LINE(83)
		bool tmp = _disable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		if ((tmp)){
		}
		else{
		}
	}
return null();
}


Void List_obj::onvisible( bool _visible){
{
		HX_STACK_FRAME("mint.render.luxe.List","onvisible",0xe1ff182f,"mint.render.luxe.List.onvisible","mint/render/luxe/List.hx",91,0xc4b8d8d3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_visible,"_visible")
	}
return null();
}


Void List_obj::ondepth( Float _depth){
{
		HX_STACK_FRAME("mint.render.luxe.List","ondepth",0x2d083780,"mint.render.luxe.List.ondepth","mint/render/luxe/List.hx",96,0xc4b8d8d3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_depth,"_depth")
	}
return null();
}



List_obj::List_obj()
{
}

void List_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(List);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(render,"render");
	HX_MARK_MEMBER_NAME(selected,"selected");
	::mint::render::Render_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void List_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(render,"render");
	HX_VISIT_MEMBER_NAME(selected,"selected");
	::mint::render::Render_obj::__Visit(HX_VISIT_ARG);
}

Dynamic List_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render; }
		if (HX_FIELD_EQ(inName,"onclip") ) { return onclip_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ondepth") ) { return ondepth_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { return selected; }
		if (HX_FIELD_EQ(inName,"onselect") ) { return onselect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onvisible") ) { return onvisible_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onitementer") ) { return onitementer_dyn(); }
		if (HX_FIELD_EQ(inName,"onitemleave") ) { return onitemleave_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic List_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::mint::List >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { render=inValue.Cast< ::mint::render::luxe::LuxeMintRender >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { selected=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void List_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	outFields->push(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"));
	outFields->push(HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::mint::List*/ ,(int)offsetof(List_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsObject /*::mint::render::luxe::LuxeMintRender*/ ,(int)offsetof(List_obj,render),HX_HCSTRING("render","\x56","\x6b","\x29","\x05")},
	{hx::fsBool,(int)offsetof(List_obj,selected),HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("onitementer","\x26","\x66","\xb4","\x5d"),
	HX_HCSTRING("onitemleave","\x05","\x2e","\x81","\x5f"),
	HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1"),
	HX_HCSTRING("onselect","\x5b","\x9d","\x4b","\x15"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onclip","\x6f","\x4b","\x73","\xf9"),
	HX_HCSTRING("onvisible","\x33","\x09","\x7e","\xad"),
	HX_HCSTRING("ondepth","\x84","\x1f","\x3a","\xda"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(List_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(List_obj::__mClass,"__mClass");
};

#endif

hx::Class List_obj::__mClass;

void List_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mint.render.luxe.List","\x6a","\x1c","\x4c","\x20");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< List_obj >;
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
} // end namespace render
} // end namespace luxe
