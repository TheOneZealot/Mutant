#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_mint_Button
#include <mint/Button.h>
#endif
#ifndef INCLUDED_mint_Canvas
#include <mint/Canvas.h>
#endif
#ifndef INCLUDED_mint_Checkbox
#include <mint/Checkbox.h>
#endif
#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
#endif
#ifndef INCLUDED_mint_Dropdown
#include <mint/Dropdown.h>
#endif
#ifndef INCLUDED_mint_Image
#include <mint/Image.h>
#endif
#ifndef INCLUDED_mint_Label
#include <mint/Label.h>
#endif
#ifndef INCLUDED_mint_List
#include <mint/List.h>
#endif
#ifndef INCLUDED_mint_Panel
#include <mint/Panel.h>
#endif
#ifndef INCLUDED_mint_Progress
#include <mint/Progress.h>
#endif
#ifndef INCLUDED_mint_Scroll
#include <mint/Scroll.h>
#endif
#ifndef INCLUDED_mint_Slider
#include <mint/Slider.h>
#endif
#ifndef INCLUDED_mint_TextEdit
#include <mint/TextEdit.h>
#endif
#ifndef INCLUDED_mint_Window
#include <mint/Window.h>
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
#ifndef INCLUDED_mint_render_luxe_Button
#include <mint/render/luxe/Button.h>
#endif
#ifndef INCLUDED_mint_render_luxe_Canvas
#include <mint/render/luxe/Canvas.h>
#endif
#ifndef INCLUDED_mint_render_luxe_Checkbox
#include <mint/render/luxe/Checkbox.h>
#endif
#ifndef INCLUDED_mint_render_luxe_Dropdown
#include <mint/render/luxe/Dropdown.h>
#endif
#ifndef INCLUDED_mint_render_luxe_Image
#include <mint/render/luxe/Image.h>
#endif
#ifndef INCLUDED_mint_render_luxe_Label
#include <mint/render/luxe/Label.h>
#endif
#ifndef INCLUDED_mint_render_luxe_List
#include <mint/render/luxe/List.h>
#endif
#ifndef INCLUDED_mint_render_luxe_LuxeMintRender
#include <mint/render/luxe/LuxeMintRender.h>
#endif
#ifndef INCLUDED_mint_render_luxe_Panel
#include <mint/render/luxe/Panel.h>
#endif
#ifndef INCLUDED_mint_render_luxe_Progress
#include <mint/render/luxe/Progress.h>
#endif
#ifndef INCLUDED_mint_render_luxe_Scroll
#include <mint/render/luxe/Scroll.h>
#endif
#ifndef INCLUDED_mint_render_luxe_Slider
#include <mint/render/luxe/Slider.h>
#endif
#ifndef INCLUDED_mint_render_luxe_TextEdit
#include <mint/render/luxe/TextEdit.h>
#endif
#ifndef INCLUDED_mint_render_luxe_Window
#include <mint/render/luxe/Window.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
namespace mint{
namespace render{
namespace luxe{

Void LuxeMintRender_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("mint.render.luxe.LuxeMintRender","new",0xa6523fec,"mint.render.luxe.LuxeMintRender.new","mint/render/luxe/LuxeMintRender.hx",10,0xcfc41a03)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(12)
	super::__construct();
	HX_STACK_LINE(14)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	{
		HX_STACK_LINE(14)
		bool tmp1 = (_options == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(14)
		if ((tmp1)){
			struct _Function_3_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mint/render/luxe/LuxeMintRender.hx",14,0xcfc41a03)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(14)
			Dynamic tmp2 = _Function_3_1::Block();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(14)
			_options = tmp2;
		}
		HX_STACK_LINE(14)
		tmp = _options;
	}
	HX_STACK_LINE(14)
	this->options = tmp;
	HX_STACK_LINE(15)
	{
		HX_STACK_LINE(15)
		Dynamic tmp1 = this->options;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(15)
		::phoenix::Batcher tmp2 = tmp1->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(15)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(15)
		if ((tmp3)){
			HX_STACK_LINE(15)
			::phoenix::Renderer tmp4 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(15)
			Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(15)
			tmp5->__FieldRef(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0")) = tmp4->batcher;
		}
		HX_STACK_LINE(15)
		Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(15)
		tmp4->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );
	}
	HX_STACK_LINE(16)
	{
		HX_STACK_LINE(16)
		Dynamic tmp1 = this->options;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(16)
		Dynamic tmp2 = tmp1->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(16)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(16)
		if ((tmp3)){
			HX_STACK_LINE(16)
			Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(16)
			tmp4->__FieldRef(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7")) = (int)0;
		}
		HX_STACK_LINE(16)
		Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(16)
		tmp4->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );
	}
	HX_STACK_LINE(17)
	{
		HX_STACK_LINE(17)
		Dynamic tmp1 = this->options;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(17)
		Dynamic tmp2 = tmp1->__Field(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(17)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(17)
		if ((tmp3)){
			HX_STACK_LINE(17)
			Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(17)
			tmp4->__FieldRef(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf")) = false;
		}
		HX_STACK_LINE(17)
		Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(17)
		tmp4->__Field(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf"), hx::paccDynamic );
	}
	HX_STACK_LINE(18)
	{
		HX_STACK_LINE(18)
		Dynamic tmp1 = this->options;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(18)
		Dynamic tmp2 = tmp1->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(18)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(18)
		if ((tmp3)){
			HX_STACK_LINE(18)
			Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(18)
			tmp4->__FieldRef(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")) = true;
		}
		HX_STACK_LINE(18)
		Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(18)
		tmp4->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );
	}
}
;
	return null();
}

//LuxeMintRender_obj::~LuxeMintRender_obj() { }

Dynamic LuxeMintRender_obj::__CreateEmpty() { return  new LuxeMintRender_obj; }
hx::ObjectPtr< LuxeMintRender_obj > LuxeMintRender_obj::__new(Dynamic _options)
{  hx::ObjectPtr< LuxeMintRender_obj > _result_ = new LuxeMintRender_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic LuxeMintRender_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LuxeMintRender_obj > _result_ = new LuxeMintRender_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic LuxeMintRender_obj::get( ::hx::Class type,Dynamic control){
	HX_STACK_FRAME("mint.render.luxe.LuxeMintRender","get",0xa64cf022,"mint.render.luxe.LuxeMintRender.get","mint/render/luxe/LuxeMintRender.hx",22,0xcfc41a03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(control,"control")
	HX_STACK_LINE(23)
	::hx::Class tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	::mint::render::Render tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	::hx::Class _switch_1 = (tmp);
	if (  ( _switch_1==hx::ClassOf< ::mint::Canvas >())){
		HX_STACK_LINE(24)
		tmp1 = ::mint::render::luxe::Canvas_obj::__new(hx::ObjectPtr<OBJ_>(this),((::mint::Canvas)(control)));
	}
	else if (  ( _switch_1==hx::ClassOf< ::mint::Label >())){
		HX_STACK_LINE(25)
		tmp1 = ::mint::render::luxe::Label_obj::__new(hx::ObjectPtr<OBJ_>(this),((::mint::Label)(control)));
	}
	else if (  ( _switch_1==hx::ClassOf< ::mint::Button >())){
		HX_STACK_LINE(26)
		tmp1 = ::mint::render::luxe::Button_obj::__new(hx::ObjectPtr<OBJ_>(this),((::mint::Button)(control)));
	}
	else if (  ( _switch_1==hx::ClassOf< ::mint::Image >())){
		HX_STACK_LINE(27)
		tmp1 = ::mint::render::luxe::Image_obj::__new(hx::ObjectPtr<OBJ_>(this),((::mint::Image)(control)));
	}
	else if (  ( _switch_1==hx::ClassOf< ::mint::List >())){
		HX_STACK_LINE(28)
		tmp1 = ::mint::render::luxe::List_obj::__new(hx::ObjectPtr<OBJ_>(this),((::mint::List)(control)));
	}
	else if (  ( _switch_1==hx::ClassOf< ::mint::Scroll >())){
		HX_STACK_LINE(29)
		tmp1 = ::mint::render::luxe::Scroll_obj::__new(hx::ObjectPtr<OBJ_>(this),((::mint::Scroll)(control)));
	}
	else if (  ( _switch_1==hx::ClassOf< ::mint::Panel >())){
		HX_STACK_LINE(30)
		tmp1 = ::mint::render::luxe::Panel_obj::__new(hx::ObjectPtr<OBJ_>(this),((::mint::Panel)(control)));
	}
	else if (  ( _switch_1==hx::ClassOf< ::mint::Checkbox >())){
		HX_STACK_LINE(31)
		tmp1 = ::mint::render::luxe::Checkbox_obj::__new(hx::ObjectPtr<OBJ_>(this),((::mint::Checkbox)(control)));
	}
	else if (  ( _switch_1==hx::ClassOf< ::mint::Window >())){
		HX_STACK_LINE(32)
		tmp1 = ::mint::render::luxe::Window_obj::__new(hx::ObjectPtr<OBJ_>(this),((::mint::Window)(control)));
	}
	else if (  ( _switch_1==hx::ClassOf< ::mint::TextEdit >())){
		HX_STACK_LINE(33)
		tmp1 = ::mint::render::luxe::TextEdit_obj::__new(hx::ObjectPtr<OBJ_>(this),((::mint::TextEdit)(control)));
	}
	else if (  ( _switch_1==hx::ClassOf< ::mint::Dropdown >())){
		HX_STACK_LINE(34)
		tmp1 = ::mint::render::luxe::Dropdown_obj::__new(hx::ObjectPtr<OBJ_>(this),((::mint::Dropdown)(control)));
	}
	else if (  ( _switch_1==hx::ClassOf< ::mint::Slider >())){
		HX_STACK_LINE(35)
		tmp1 = ::mint::render::luxe::Slider_obj::__new(hx::ObjectPtr<OBJ_>(this),((::mint::Slider)(control)));
	}
	else if (  ( _switch_1==hx::ClassOf< ::mint::Progress >())){
		HX_STACK_LINE(36)
		tmp1 = ::mint::render::luxe::Progress_obj::__new(hx::ObjectPtr<OBJ_>(this),((::mint::Progress)(control)));
	}
	else  {
		HX_STACK_LINE(37)
		tmp1 = null();
	}
;
;
	HX_STACK_LINE(23)
	Dynamic tmp2 = ((Dynamic)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	return tmp2;
}



LuxeMintRender_obj::LuxeMintRender_obj()
{
}

void LuxeMintRender_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LuxeMintRender);
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_END_CLASS();
}

void LuxeMintRender_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(options,"options");
}

Dynamic LuxeMintRender_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LuxeMintRender_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LuxeMintRender_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(LuxeMintRender_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LuxeMintRender_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LuxeMintRender_obj::__mClass,"__mClass");
};

#endif

hx::Class LuxeMintRender_obj::__mClass;

void LuxeMintRender_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mint.render.luxe.LuxeMintRender","\xfa","\x19","\x69","\xa8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LuxeMintRender_obj >;
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
