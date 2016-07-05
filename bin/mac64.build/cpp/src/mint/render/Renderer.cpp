#include <hxcpp.h>

#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
#endif
#ifndef INCLUDED_mint_render_Renderer
#include <mint/render/Renderer.h>
#endif
#ifndef INCLUDED_mint_render_Rendering
#include <mint/render/Rendering.h>
#endif
namespace mint{
namespace render{


static ::String sMemberFields[] = {
	HX_HCSTRING("rendering","\x4c","\xdb","\x73","\xcd"),
	HX_HCSTRING("control","\x5d","\x6b","\x81","\x19"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Renderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Renderer_obj::__mClass,"__mClass");
};

#endif

hx::Class Renderer_obj::__mClass;

void Renderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mint.render.Renderer","\xaf","\x6f","\x0e","\x6e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Renderer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace mint
} // end namespace render
