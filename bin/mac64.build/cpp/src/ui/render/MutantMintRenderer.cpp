#include <hxcpp.h>

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
#ifndef INCLUDED_ui_AttributeBar
#include <ui/AttributeBar.h>
#endif
#ifndef INCLUDED_ui_render_AttributeBar
#include <ui/render/AttributeBar.h>
#endif
#ifndef INCLUDED_ui_render_MutantMintRenderer
#include <ui/render/MutantMintRenderer.h>
#endif
namespace ui{
namespace render{

Void MutantMintRenderer_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("ui.render.MutantMintRenderer","new",0x379b3890,"ui.render.MutantMintRenderer.new","ui/render/MutantMintRenderer.hx",10,0x43c6a2c0)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(11)
	Dynamic tmp = _options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	super::__construct(tmp);
}
;
	return null();
}

//MutantMintRenderer_obj::~MutantMintRenderer_obj() { }

Dynamic MutantMintRenderer_obj::__CreateEmpty() { return  new MutantMintRenderer_obj; }
hx::ObjectPtr< MutantMintRenderer_obj > MutantMintRenderer_obj::__new(Dynamic _options)
{  hx::ObjectPtr< MutantMintRenderer_obj > _result_ = new MutantMintRenderer_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic MutantMintRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MutantMintRenderer_obj > _result_ = new MutantMintRenderer_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic MutantMintRenderer_obj::get( ::hx::Class type,Dynamic control){
	HX_STACK_FRAME("ui.render.MutantMintRenderer","get",0x3795e8c6,"ui.render.MutantMintRenderer.get","ui/render/MutantMintRenderer.hx",15,0x43c6a2c0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(control,"control")
	HX_STACK_LINE(16)
	::hx::Class tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	::mint::render::Render tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	::hx::Class _switch_1 = (tmp);
	if (  ( _switch_1==hx::ClassOf< ::mint::Canvas >())){
		HX_STACK_LINE(18)
		tmp1 = ::mint::render::luxe::Canvas_obj::__new(hx::ObjectPtr<OBJ_>(this),((::mint::Canvas)(control)));
	}
	else if (  ( _switch_1==hx::ClassOf< ::mint::Label >())){
		HX_STACK_LINE(19)
		tmp1 = ::mint::render::luxe::Label_obj::__new(hx::ObjectPtr<OBJ_>(this),((::mint::Label)(control)));
	}
	else if (  ( _switch_1==hx::ClassOf< ::mint::Button >())){
		HX_STACK_LINE(20)
		tmp1 = ::mint::render::luxe::Button_obj::__new(hx::ObjectPtr<OBJ_>(this),((::mint::Button)(control)));
	}
	else if (  ( _switch_1==hx::ClassOf< ::mint::Image >())){
		HX_STACK_LINE(21)
		tmp1 = ::mint::render::luxe::Image_obj::__new(hx::ObjectPtr<OBJ_>(this),((::mint::Image)(control)));
	}
	else if (  ( _switch_1==hx::ClassOf< ::mint::List >())){
		HX_STACK_LINE(22)
		tmp1 = ::mint::render::luxe::List_obj::__new(hx::ObjectPtr<OBJ_>(this),((::mint::List)(control)));
	}
	else if (  ( _switch_1==hx::ClassOf< ::mint::Scroll >())){
		HX_STACK_LINE(23)
		tmp1 = ::mint::render::luxe::Scroll_obj::__new(hx::ObjectPtr<OBJ_>(this),((::mint::Scroll)(control)));
	}
	else if (  ( _switch_1==hx::ClassOf< ::mint::Panel >())){
		HX_STACK_LINE(24)
		tmp1 = ::mint::render::luxe::Panel_obj::__new(hx::ObjectPtr<OBJ_>(this),((::mint::Panel)(control)));
	}
	else if (  ( _switch_1==hx::ClassOf< ::mint::Checkbox >())){
		HX_STACK_LINE(25)
		tmp1 = ::mint::render::luxe::Checkbox_obj::__new(hx::ObjectPtr<OBJ_>(this),((::mint::Checkbox)(control)));
	}
	else if (  ( _switch_1==hx::ClassOf< ::mint::Window >())){
		HX_STACK_LINE(26)
		tmp1 = ::mint::render::luxe::Window_obj::__new(hx::ObjectPtr<OBJ_>(this),((::mint::Window)(control)));
	}
	else if (  ( _switch_1==hx::ClassOf< ::mint::TextEdit >())){
		HX_STACK_LINE(27)
		tmp1 = ::mint::render::luxe::TextEdit_obj::__new(hx::ObjectPtr<OBJ_>(this),((::mint::TextEdit)(control)));
	}
	else if (  ( _switch_1==hx::ClassOf< ::mint::Dropdown >())){
		HX_STACK_LINE(28)
		tmp1 = ::mint::render::luxe::Dropdown_obj::__new(hx::ObjectPtr<OBJ_>(this),((::mint::Dropdown)(control)));
	}
	else if (  ( _switch_1==hx::ClassOf< ::mint::Slider >())){
		HX_STACK_LINE(29)
		tmp1 = ::mint::render::luxe::Slider_obj::__new(hx::ObjectPtr<OBJ_>(this),((::mint::Slider)(control)));
	}
	else if (  ( _switch_1==hx::ClassOf< ::mint::Progress >())){
		HX_STACK_LINE(30)
		tmp1 = ::mint::render::luxe::Progress_obj::__new(hx::ObjectPtr<OBJ_>(this),((::mint::Progress)(control)));
	}
	else if (  ( _switch_1==hx::ClassOf< ::ui::AttributeBar >())){
		HX_STACK_LINE(31)
		tmp1 = ::ui::render::AttributeBar_obj::__new(hx::ObjectPtr<OBJ_>(this),((::ui::AttributeBar)(control)));
	}
	else  {
		HX_STACK_LINE(32)
		tmp1 = null();
	}
;
;
	HX_STACK_LINE(16)
	Dynamic tmp2 = ((Dynamic)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16)
	return tmp2;
}



MutantMintRenderer_obj::MutantMintRenderer_obj()
{
}

Dynamic MutantMintRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MutantMintRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MutantMintRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class MutantMintRenderer_obj::__mClass;

void MutantMintRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ui.render.MutantMintRenderer","\x9e","\xf0","\xd7","\x3c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MutantMintRenderer_obj >;
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

} // end namespace ui
} // end namespace render
