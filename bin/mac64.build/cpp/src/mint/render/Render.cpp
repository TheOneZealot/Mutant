#include <hxcpp.h>

#ifndef INCLUDED_mint_Canvas
#include <mint/Canvas.h>
#endif
#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
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
namespace mint{
namespace render{

Void Render_obj::__construct(::mint::render::Rendering _render,::mint::Control _control)
{
HX_STACK_FRAME("mint.render.Render","new",0xbdef8cb4,"mint.render.Render.new","mint/render/Render.hx",23,0x21a7cf1c)
HX_STACK_THIS(this)
HX_STACK_ARG(_render,"_render")
HX_STACK_ARG(_control,"_control")
{
	HX_STACK_LINE(25)
	this->control = _control;
	HX_STACK_LINE(26)
	this->rendering = _render;
	HX_STACK_LINE(28)
	::mint::Control tmp = this->control;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	Dynamic tmp1 = this->internal_connect_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	tmp->oncreate->listen(tmp1);
}
;
	return null();
}

//Render_obj::~Render_obj() { }

Dynamic Render_obj::__CreateEmpty() { return  new Render_obj; }
hx::ObjectPtr< Render_obj > Render_obj::__new(::mint::render::Rendering _render,::mint::Control _control)
{  hx::ObjectPtr< Render_obj > _result_ = new Render_obj();
	_result_->__construct(_render,_control);
	return _result_;}

Dynamic Render_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Render_obj > _result_ = new Render_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *Render_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::mint::render::Renderer_obj)) return operator ::mint::render::Renderer_obj *();
	return super::__ToInterface(inType);
}

Render_obj::operator ::mint::render::Renderer_obj *()
	{ return new ::mint::render::Renderer_delegate_< Render_obj >(this); }
Void Render_obj::internal_connect( ){
{
		HX_STACK_FRAME("mint.render.Render","internal_connect",0x0a1220d4,"mint.render.Render.internal_connect","mint/render/Render.hx",33,0x21a7cf1c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		::mint::Control tmp = this->control;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		::mint::core::Signal tmp1 = tmp->canvas->onscalechange;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		Dynamic tmp2 = this->onscale_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		tmp1->listen(tmp2);
		HX_STACK_LINE(36)
		::mint::Control tmp3 = this->control;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		Dynamic tmp4 = this->onvisible_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(36)
		tmp3->onvisible->listen(tmp4);
		HX_STACK_LINE(37)
		::mint::Control tmp5 = this->control;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(37)
		Dynamic tmp6 = this->ondepth_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(37)
		tmp5->ondepth->listen(tmp6);
		HX_STACK_LINE(38)
		::mint::Control tmp7 = this->control;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(38)
		Dynamic tmp8 = this->ondestroy_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(38)
		tmp7->ondestroy->listen(tmp8);
		HX_STACK_LINE(39)
		::mint::Control tmp9 = this->control;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(39)
		Dynamic tmp10 = this->onclip_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(39)
		tmp9->onclip->listen(tmp10);
		HX_STACK_LINE(40)
		::mint::Control tmp11 = this->control;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(40)
		Dynamic tmp12 = this->onchildadd_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(40)
		tmp11->onchildadd->listen(tmp12);
		HX_STACK_LINE(41)
		::mint::Control tmp13 = this->control;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(41)
		Dynamic tmp14 = this->onchildremove_dyn();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(41)
		tmp13->onchildremove->listen(tmp14);
		HX_STACK_LINE(42)
		::mint::Control tmp15 = this->control;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(42)
		Dynamic tmp16 = this->onbounds_dyn();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(42)
		tmp15->onbounds->listen(tmp16);
		HX_STACK_LINE(43)
		::mint::Control tmp17 = this->control;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(43)
		Dynamic tmp18 = this->internal_disconnect_dyn();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(43)
		tmp17->ondestroy->listen(tmp18);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Render_obj,internal_connect,(void))

Void Render_obj::internal_disconnect( ){
{
		HX_STACK_FRAME("mint.render.Render","internal_disconnect",0x34a4edb2,"mint.render.Render.internal_disconnect","mint/render/Render.hx",48,0x21a7cf1c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		::mint::Control tmp = this->control;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		::mint::core::Signal tmp1 = tmp->canvas->onscalechange;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		Dynamic tmp2 = this->onscale_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		tmp1->remove(tmp2);
		HX_STACK_LINE(51)
		::mint::Control tmp3 = this->control;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		Dynamic tmp4 = this->onvisible_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(51)
		tmp3->onvisible->remove(tmp4);
		HX_STACK_LINE(52)
		::mint::Control tmp5 = this->control;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		Dynamic tmp6 = this->ondepth_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(52)
		tmp5->ondepth->remove(tmp6);
		HX_STACK_LINE(53)
		::mint::Control tmp7 = this->control;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(53)
		Dynamic tmp8 = this->ondestroy_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(53)
		tmp7->ondestroy->remove(tmp8);
		HX_STACK_LINE(54)
		::mint::Control tmp9 = this->control;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(54)
		Dynamic tmp10 = this->onclip_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(54)
		tmp9->onclip->remove(tmp10);
		HX_STACK_LINE(55)
		::mint::Control tmp11 = this->control;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(55)
		Dynamic tmp12 = this->onchildadd_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(55)
		tmp11->onchildadd->remove(tmp12);
		HX_STACK_LINE(56)
		::mint::Control tmp13 = this->control;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(56)
		Dynamic tmp14 = this->onchildremove_dyn();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(56)
		tmp13->onchildremove->remove(tmp14);
		HX_STACK_LINE(57)
		::mint::Control tmp15 = this->control;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(57)
		Dynamic tmp16 = this->onbounds_dyn();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(57)
		tmp15->onbounds->remove(tmp16);
		HX_STACK_LINE(59)
		::mint::Control tmp17 = this->control;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(59)
		Dynamic tmp18 = this->internal_connect_dyn();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(59)
		tmp17->oncreate->remove(tmp18);
		HX_STACK_LINE(60)
		::mint::Control tmp19 = this->control;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(60)
		Dynamic tmp20 = this->internal_disconnect_dyn();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(60)
		tmp19->ondestroy->remove(tmp20);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Render_obj,internal_disconnect,(void))

Float Render_obj::get_scale( ){
	HX_STACK_FRAME("mint.render.Render","get_scale",0x8893de35,"mint.render.Render.get_scale","mint/render/Render.hx",64,0x21a7cf1c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(64)
	::mint::Control tmp = this->control;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	Float tmp1 = tmp->canvas->scale;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Render_obj,get_scale,return )

Float Render_obj::get_sx( ){
	HX_STACK_FRAME("mint.render.Render","get_sx",0x9417ac1a,"mint.render.Render.get_sx","mint/render/Render.hx",65,0x21a7cf1c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(65)
	::mint::Control tmp = this->control;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	::mint::Control tmp2 = this->control;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	Float tmp3 = tmp2->canvas->scale;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(65)
	Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(65)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Render_obj,get_sx,return )

Float Render_obj::get_sy( ){
	HX_STACK_FRAME("mint.render.Render","get_sy",0x9417ac1b,"mint.render.Render.get_sy","mint/render/Render.hx",66,0x21a7cf1c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(66)
	::mint::Control tmp = this->control;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	Float tmp1 = tmp->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(66)
	::mint::Control tmp2 = this->control;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(66)
	Float tmp3 = tmp2->canvas->scale;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(66)
	Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(66)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Render_obj,get_sy,return )

Float Render_obj::get_sw( ){
	HX_STACK_FRAME("mint.render.Render","get_sw",0x9417ac19,"mint.render.Render.get_sw","mint/render/Render.hx",67,0x21a7cf1c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	::mint::Control tmp = this->control;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	Float tmp1 = tmp->w;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	::mint::Control tmp2 = this->control;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(67)
	Float tmp3 = tmp2->canvas->scale;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(67)
	Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(67)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Render_obj,get_sw,return )

Float Render_obj::get_sh( ){
	HX_STACK_FRAME("mint.render.Render","get_sh",0x9417ac0a,"mint.render.Render.get_sh","mint/render/Render.hx",68,0x21a7cf1c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	::mint::Control tmp = this->control;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	Float tmp1 = tmp->h;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	::mint::Control tmp2 = this->control;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	Float tmp3 = tmp2->canvas->scale;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(68)
	Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(68)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Render_obj,get_sh,return )

Float Render_obj::cs( Float _value){
	HX_STACK_FRAME("mint.render.Render","cs",0xde6980dc,"mint.render.Render.cs","mint/render/Render.hx",69,0x21a7cf1c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(69)
	::mint::Control tmp = this->control;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	Float tmp1 = tmp->canvas->scale;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	Float tmp2 = _value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(69)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Render_obj,cs,return )

Void Render_obj::onscale( Float _scale,Float _prev){
{
		HX_STACK_FRAME("mint.render.Render","onscale",0x55b1735f,"mint.render.Render.onscale","mint/render/Render.hx",71,0x21a7cf1c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_scale,"_scale")
		HX_STACK_ARG(_prev,"_prev")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Render_obj,onscale,(void))

Void Render_obj::onvisible( bool _v){
{
		HX_STACK_FRAME("mint.render.Render","onvisible",0x7999bc87,"mint.render.Render.onvisible","mint/render/Render.hx",72,0x21a7cf1c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_v,"_v")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Render_obj,onvisible,(void))

Void Render_obj::ondepth( Float _d){
{
		HX_STACK_FRAME("mint.render.Render","ondepth",0xb40c95d8,"mint.render.Render.ondepth","mint/render/Render.hx",73,0x21a7cf1c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_d,"_d")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Render_obj,ondepth,(void))

Void Render_obj::ondestroy( ){
{
		HX_STACK_FRAME("mint.render.Render","ondestroy",0xfafb710f,"mint.render.Render.ondestroy","mint/render/Render.hx",74,0x21a7cf1c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Render_obj,ondestroy,(void))

Void Render_obj::onbounds( ){
{
		HX_STACK_FRAME("mint.render.Render","onbounds",0xcf8b1c00,"mint.render.Render.onbounds","mint/render/Render.hx",75,0x21a7cf1c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Render_obj,onbounds,(void))

Void Render_obj::onclip( bool _disable,Float _x,Float _y,Float _w,Float _h){
{
		HX_STACK_FRAME("mint.render.Render","onclip",0xea5afb9b,"mint.render.Render.onclip","mint/render/Render.hx",76,0x21a7cf1c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_disable,"_disable")
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_w,"_w")
		HX_STACK_ARG(_h,"_h")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Render_obj,onclip,(void))

Void Render_obj::onchildadd( ::mint::Control _c){
{
		HX_STACK_FRAME("mint.render.Render","onchildadd",0x40838050,"mint.render.Render.onchildadd","mint/render/Render.hx",77,0x21a7cf1c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_c,"_c")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Render_obj,onchildadd,(void))

Void Render_obj::onchildremove( ::mint::Control _c){
{
		HX_STACK_FRAME("mint.render.Render","onchildremove",0xe94cd575,"mint.render.Render.onchildremove","mint/render/Render.hx",78,0x21a7cf1c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_c,"_c")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Render_obj,onchildremove,(void))


Render_obj::Render_obj()
{
}

void Render_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Render);
	HX_MARK_MEMBER_NAME(rendering,"rendering");
	HX_MARK_MEMBER_NAME(control,"control");
	HX_MARK_END_CLASS();
}

void Render_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rendering,"rendering");
	HX_VISIT_MEMBER_NAME(control,"control");
}

Dynamic Render_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"sx") ) { if (inCallProp == hx::paccAlways) return get_sx(); }
		if (HX_FIELD_EQ(inName,"sy") ) { if (inCallProp == hx::paccAlways) return get_sy(); }
		if (HX_FIELD_EQ(inName,"sw") ) { if (inCallProp == hx::paccAlways) return get_sw(); }
		if (HX_FIELD_EQ(inName,"sh") ) { if (inCallProp == hx::paccAlways) return get_sh(); }
		if (HX_FIELD_EQ(inName,"cs") ) { return cs_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp == hx::paccAlways) return get_scale(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_sx") ) { return get_sx_dyn(); }
		if (HX_FIELD_EQ(inName,"get_sy") ) { return get_sy_dyn(); }
		if (HX_FIELD_EQ(inName,"get_sw") ) { return get_sw_dyn(); }
		if (HX_FIELD_EQ(inName,"get_sh") ) { return get_sh_dyn(); }
		if (HX_FIELD_EQ(inName,"onclip") ) { return onclip_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"control") ) { return control; }
		if (HX_FIELD_EQ(inName,"onscale") ) { return onscale_dyn(); }
		if (HX_FIELD_EQ(inName,"ondepth") ) { return ondepth_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onbounds") ) { return onbounds_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rendering") ) { return rendering; }
		if (HX_FIELD_EQ(inName,"get_scale") ) { return get_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"onvisible") ) { return onvisible_dyn(); }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onchildadd") ) { return onchildadd_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onchildremove") ) { return onchildremove_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"internal_connect") ) { return internal_connect_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"internal_disconnect") ) { return internal_disconnect_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Render_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"control") ) { control=inValue.Cast< ::mint::Control >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rendering") ) { rendering=inValue.Cast< ::mint::render::Rendering >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Render_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("rendering","\x4c","\xdb","\x73","\xcd"));
	outFields->push(HX_HCSTRING("control","\x5d","\x6b","\x81","\x19"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("sx","\xa5","\x64","\x00","\x00"));
	outFields->push(HX_HCSTRING("sy","\xa6","\x64","\x00","\x00"));
	outFields->push(HX_HCSTRING("sw","\xa4","\x64","\x00","\x00"));
	outFields->push(HX_HCSTRING("sh","\x95","\x64","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::mint::render::Rendering*/ ,(int)offsetof(Render_obj,rendering),HX_HCSTRING("rendering","\x4c","\xdb","\x73","\xcd")},
	{hx::fsObject /*::mint::Control*/ ,(int)offsetof(Render_obj,control),HX_HCSTRING("control","\x5d","\x6b","\x81","\x19")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("rendering","\x4c","\xdb","\x73","\xcd"),
	HX_HCSTRING("control","\x5d","\x6b","\x81","\x19"),
	HX_HCSTRING("internal_connect","\xa8","\x01","\x74","\x42"),
	HX_HCSTRING("internal_disconnect","\x5e","\x49","\xd0","\x4a"),
	HX_HCSTRING("get_scale","\xe1","\x2a","\x78","\xbc"),
	HX_HCSTRING("get_sx","\xee","\xfb","\x2f","\xa3"),
	HX_HCSTRING("get_sy","\xef","\xfb","\x2f","\xa3"),
	HX_HCSTRING("get_sw","\xed","\xfb","\x2f","\xa3"),
	HX_HCSTRING("get_sh","\xde","\xfb","\x2f","\xa3"),
	HX_HCSTRING("cs","\xb0","\x56","\x00","\x00"),
	HX_HCSTRING("onscale","\x0b","\xfd","\xde","\x7b"),
	HX_HCSTRING("onvisible","\x33","\x09","\x7e","\xad"),
	HX_HCSTRING("ondepth","\x84","\x1f","\x3a","\xda"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onbounds","\xd4","\x08","\x36","\x11"),
	HX_HCSTRING("onclip","\x6f","\x4b","\x73","\xf9"),
	HX_HCSTRING("onchildadd","\x24","\x4a","\x62","\x74"),
	HX_HCSTRING("onchildremove","\x21","\xe8","\x32","\x5c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Render_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Render_obj::__mClass,"__mClass");
};

#endif

hx::Class Render_obj::__mClass;

void Render_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("mint.render.Render","\xc2","\x62","\x9e","\x7f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Render_obj >;
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
