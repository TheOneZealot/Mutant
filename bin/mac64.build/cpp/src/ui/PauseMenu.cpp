#include <hxcpp.h>

#ifndef INCLUDED_GameState
#include <GameState.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_UserInterface
#include <UserInterface.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Events
#include <luxe/Events.h>
#endif
#ifndef INCLUDED_luxe_Game
#include <luxe/Game.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_States
#include <luxe/States.h>
#endif
#ifndef INCLUDED_mint_Button
#include <mint/Button.h>
#endif
#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
#endif
#ifndef INCLUDED_mint_Label
#include <mint/Label.h>
#endif
#ifndef INCLUDED_mint_Panel
#include <mint/Panel.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_ui_PauseMenu
#include <ui/PauseMenu.h>
#endif
namespace ui{

Void PauseMenu_obj::__construct(::mint::Control _parent)
{
HX_STACK_FRAME("ui.PauseMenu","new",0x6968b76d,"ui.PauseMenu.new","ui/PauseMenu.hx",17,0xdb765224)
HX_STACK_THIS(this)
HX_STACK_ARG(_parent,"_parent")
{
	HX_STACK_LINE(16)
	::ui::PauseMenu _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(18)
	Dynamic tmp = ::UserInterface_obj::palette;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	::phoenix::Color tmp1 = tmp->__Field(HX_HCSTRING("black","\xbf","\xd5","\xf1","\xb4"), hx::paccDynamic )->__Field(HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	::phoenix::Color color = tmp1;		HX_STACK_VAR(color,"color");
	HX_STACK_LINE(19)
	color->a = ((Float)0.5);
	HX_STACK_LINE(21)
	::mint::Control tmp2 = _parent;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(24)
	Float tmp3 = _parent->w;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	Float tmp4 = _parent->h;		HX_STACK_VAR(tmp4,"tmp4");
	struct _Function_1_1{
		inline static Dynamic Block( ::phoenix::Color &color){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ui/PauseMenu.hx",27,0xdb765224)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , color,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(27)
	Dynamic tmp5 = _Function_1_1::Block(color);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(27)
	Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	struct _Function_1_2{
		inline static Dynamic Block( Dynamic &tmp6,Float &tmp4,::mint::Control &tmp2,Float &tmp3){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ui/PauseMenu.hx",20,0xdb765224)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed") , tmp2,false);
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("pausemenu","\x95","\xcf","\xe6","\x61"),false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp3,false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp4,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Dynamic)((int)10)),false);
				__result->Add(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf") , tmp6,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(20)
	Dynamic tmp7 = _Function_1_2::Block(tmp6,tmp4,tmp2,tmp3);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(20)
	super::__construct(tmp7);
	HX_STACK_LINE(34)
	::String tmp8 = this->name;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(34)
	::String tmp9 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(34)
	::String tmp10 = (tmp9 + HX_HCSTRING(".title","\xaa","\xae","\xa5","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(35)
	Float tmp11 = this->w;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(35)
	Float tmp12 = this->h;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(39)
	Float tmp13 = this->depth;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(39)
	Float tmp14 = (tmp13 + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(41)
	Dynamic tmp15 = ::UserInterface_obj::palette;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(41)
	::phoenix::Color tmp16 = tmp15->__Field(HX_HCSTRING("white","\xa9","\x4a","\xbd","\xc9"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
	struct _Function_1_3{
		inline static Dynamic Block( ::phoenix::Color &tmp16){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ui/PauseMenu.hx",40,0xdb765224)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp16,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(40)
	Dynamic tmp17 = _Function_1_3::Block(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(40)
	Dynamic tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
	struct _Function_1_4{
		inline static Dynamic Block( hx::ObjectPtr< ::ui::PauseMenu_obj > __this,Float &tmp11,::String &tmp10,Float &tmp12,Dynamic &tmp18,Float &tmp14){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ui/PauseMenu.hx",32,0xdb765224)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed") , ((::mint::Control)(__this)),false);
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp10,false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp11,false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp12,false);
				__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , HX_HCSTRING("paused","\xae","\x40","\x84","\xef"),false);
				__result->Add(HX_HCSTRING("text_size","\xd3","\xdc","\x24","\x05") , ((Dynamic)((int)16)),false);
				__result->Add(HX_HCSTRING("align","\xc5","\x56","\x91","\x21") , (int)3,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp14,false);
				__result->Add(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf") , tmp18,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(32)
	Dynamic tmp19 = _Function_1_4::Block(this,tmp11,tmp10,tmp12,tmp18,tmp14);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(32)
	::mint::Label tmp20 = ::mint::Label_obj::__new(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(32)
	this->title = tmp20;
	HX_STACK_LINE(47)
	::String tmp21 = this->name;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(47)
	::String tmp22 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(47)
	::String tmp23 = (tmp22 + HX_HCSTRING(".btn.reset","\x4f","\x5c","\x13","\x62"));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(48)
	Float tmp24 = this->w;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(48)
	Float tmp25 = (tmp24 - (int)32);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(48)
	Float tmp26 = (Float(tmp25) / Float((int)2));		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(49)
	Float tmp27 = this->h;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(49)
	Float tmp28 = (tmp27 - (int)8);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(49)
	Float tmp29 = (Float(tmp28) / Float((int)2));		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(49)
	Float tmp30 = (tmp29 + (int)16);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(52)
	Float tmp31 = this->depth;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(52)
	Float tmp32 = (tmp31 + (int)10);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(59)
	Dynamic tmp33 = ::UserInterface_obj::palette;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(59)
	::phoenix::Color tmp34 = tmp33->__Field(HX_HCSTRING("white","\xa9","\x4a","\xbd","\xc9"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(60)
	Dynamic tmp35 = ::UserInterface_obj::palette;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(60)
	::phoenix::Color tmp36 = tmp35->__Field(HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(61)
	Dynamic tmp37 = ::UserInterface_obj::palette;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(61)
	::phoenix::Color tmp38 = tmp37->__Field(HX_HCSTRING("enemy","\x48","\x12","\x7b","\x70"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
	struct _Function_1_5{
		inline static Dynamic Block( ::phoenix::Color &tmp36,::phoenix::Color &tmp38,::phoenix::Color &tmp34){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ui/PauseMenu.hx",58,0xdb765224)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp34,false);
				__result->Add(HX_HCSTRING("color_hover","\xa0","\x4a","\xe0","\xac") , tmp36,false);
				__result->Add(HX_HCSTRING("color_down","\xfe","\xbb","\xbd","\x86") , tmp38,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(58)
	Dynamic tmp39 = _Function_1_5::Block(tmp36,tmp38,tmp34);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(58)
	Dynamic tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
	struct _Function_1_6{
		inline static Dynamic Block( hx::ObjectPtr< ::ui::PauseMenu_obj > __this,::String &tmp23,Dynamic &tmp40,Float &tmp26,Float &tmp32,Float &tmp30){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ui/PauseMenu.hx",45,0xdb765224)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed") , ((::mint::Control)(__this)),false);
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp23,false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp26,false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp30,false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , ((Dynamic)((int)32)),false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , ((Dynamic)((int)8)),false);
				__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp32,false);

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
				int __ArgCount() const { return 2; }
				Void run(Dynamic _,::mint::Control _1){
					HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","ui/PauseMenu.hx",53,0xdb765224)
					HX_STACK_ARG(_,"_")
					HX_STACK_ARG(_1,"_1")
					{
						HX_STACK_LINE(54)
						Dynamic tmp41 = hx::SourceInfo(HX_HCSTRING("PauseMenu.hx","\x49","\x12","\x08","\x1d"),54,HX_HCSTRING("ui.PauseMenu","\xfb","\x7c","\xab","\x63"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(54)
						::haxe::Log_obj::trace(HX_HCSTRING("clicked","\xa7","\x76","\x2c","\xfa"),tmp41);
						HX_STACK_LINE(55)
						::luxe::Events tmp42 = ::Luxe_obj::events;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(55)
						tmp42->fire(HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),null(),null());
						HX_STACK_LINE(56)
						::GameState tmp43 = ::Main_obj::gamestate;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(56)
						tmp43->set(HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a"),null(),null());
					}
					return null();
				}
				HX_END_LOCAL_FUNC2((void))

				__result->Add(HX_HCSTRING("onclick","\xc9","\xaa","\x6e","\x4b") ,  Dynamic(new _Function_2_1()),true);
				__result->Add(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf") , tmp40,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(45)
	Dynamic tmp41 = _Function_1_6::Block(this,tmp23,tmp40,tmp26,tmp32,tmp30);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(45)
	::mint::Button tmp42 = ::mint::Button_obj::__new(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(45)
	this->btn_reset = tmp42;
	HX_STACK_LINE(65)
	bool tmp43 = ::GameState_obj::paused;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(65)
	this->set_visible(tmp43);
	HX_STACK_LINE(67)
	::luxe::Events tmp44 = ::GameState_obj::events;		HX_STACK_VAR(tmp44,"tmp44");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_7,::ui::PauseMenu,_g)
	int __ArgCount() const { return 1; }
	Void run(Dynamic _){
		HX_STACK_FRAME("*","_Function_1_7",0x5200ed3d,"*._Function_1_7","ui/PauseMenu.hx",67,0xdb765224)
		HX_STACK_ARG(_,"_")
		{
			HX_STACK_LINE(67)
			bool tmp45 = (_g->destroyed == false);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(67)
			if ((tmp45)){
				HX_STACK_LINE(67)
				_g->set_visible(true);
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(67)
	tmp44->listen(HX_HCSTRING("paused.enter","\x58","\xfd","\xbb","\xe0"), Dynamic(new _Function_1_7(_g)));
	HX_STACK_LINE(68)
	::luxe::Events tmp45 = ::GameState_obj::events;		HX_STACK_VAR(tmp45,"tmp45");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_8,::ui::PauseMenu,_g)
	int __ArgCount() const { return 1; }
	Void run(Dynamic _){
		HX_STACK_FRAME("*","_Function_1_8",0x5200ed3e,"*._Function_1_8","ui/PauseMenu.hx",68,0xdb765224)
		HX_STACK_ARG(_,"_")
		{
			HX_STACK_LINE(68)
			bool tmp46 = (_g->destroyed == false);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(68)
			if ((tmp46)){
				HX_STACK_LINE(68)
				_g->set_visible(false);
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(68)
	tmp45->listen(HX_HCSTRING("paused.leave","\x37","\xc5","\x88","\xe2"), Dynamic(new _Function_1_8(_g)));
}
;
	return null();
}

//PauseMenu_obj::~PauseMenu_obj() { }

Dynamic PauseMenu_obj::__CreateEmpty() { return  new PauseMenu_obj; }
hx::ObjectPtr< PauseMenu_obj > PauseMenu_obj::__new(::mint::Control _parent)
{  hx::ObjectPtr< PauseMenu_obj > _result_ = new PauseMenu_obj();
	_result_->__construct(_parent);
	return _result_;}

Dynamic PauseMenu_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PauseMenu_obj > _result_ = new PauseMenu_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


PauseMenu_obj::PauseMenu_obj()
{
}

void PauseMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PauseMenu);
	HX_MARK_MEMBER_NAME(title,"title");
	HX_MARK_MEMBER_NAME(btn_reset,"btn_reset");
	::mint::Panel_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PauseMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(title,"title");
	HX_VISIT_MEMBER_NAME(btn_reset,"btn_reset");
	::mint::Panel_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PauseMenu_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return title; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"btn_reset") ) { return btn_reset; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PauseMenu_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { title=inValue.Cast< ::mint::Label >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"btn_reset") ) { btn_reset=inValue.Cast< ::mint::Button >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PauseMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"));
	outFields->push(HX_HCSTRING("btn_reset","\x6c","\x80","\x2e","\x6c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::mint::Label*/ ,(int)offsetof(PauseMenu_obj,title),HX_HCSTRING("title","\x98","\x15","\x3b","\x10")},
	{hx::fsObject /*::mint::Button*/ ,(int)offsetof(PauseMenu_obj,btn_reset),HX_HCSTRING("btn_reset","\x6c","\x80","\x2e","\x6c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("title","\x98","\x15","\x3b","\x10"),
	HX_HCSTRING("btn_reset","\x6c","\x80","\x2e","\x6c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PauseMenu_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PauseMenu_obj::__mClass,"__mClass");
};

#endif

hx::Class PauseMenu_obj::__mClass;

void PauseMenu_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ui.PauseMenu","\xfb","\x7c","\xab","\x63");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PauseMenu_obj >;
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
