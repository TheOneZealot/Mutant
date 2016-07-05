#include <hxcpp.h>

#ifndef INCLUDED_Creature
#include <Creature.h>
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
#ifndef INCLUDED_World
#include <World.h>
#endif
#ifndef INCLUDED_creatures_Player
#include <creatures/Player.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Engine
#include <luxe/Engine.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
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
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
#ifndef INCLUDED_luxe_Timer
#include <luxe/Timer.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_mint_Canvas
#include <mint/Canvas.h>
#endif
#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
#endif
#ifndef INCLUDED_mint_Panel
#include <mint/Panel.h>
#endif
#ifndef INCLUDED_mint_render_Rendering
#include <mint/render/Rendering.h>
#endif
#ifndef INCLUDED_mint_render_luxe_LuxeMintRender
#include <mint/render/luxe/LuxeMintRender.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_Camera
#include <phoenix/Camera.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_Timer
#include <snow/api/Timer.h>
#endif
#ifndef INCLUDED_ui_AttributeBar
#include <ui/AttributeBar.h>
#endif
#ifndef INCLUDED_ui_CreatureStatus
#include <ui/CreatureStatus.h>
#endif
#ifndef INCLUDED_ui_PauseMenu
#include <ui/PauseMenu.h>
#endif
#ifndef INCLUDED_ui_render_MutantMintRenderer
#include <ui/render/MutantMintRenderer.h>
#endif

Void UserInterface_obj::__construct()
{
HX_STACK_FRAME("UserInterface","new",0x2b204dc0,"UserInterface.new","UserInterface.hx",12,0x7e78a9b0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(24)
	this->scale = ((Float)4);
	HX_STACK_LINE(36)
	::UserInterface _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(38)
	::phoenix::Renderer tmp = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	::phoenix::Batcher tmp1 = ::phoenix::Batcher_obj::__new(tmp,HX_HCSTRING("ui_batcher","\x7c","\x56","\xd5","\x60"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	::UserInterface_obj::batcher = tmp1;
	HX_STACK_LINE(39)
	::phoenix::Camera tmp2 = ::phoenix::Camera_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(39)
	::phoenix::Batcher tmp3 = ::UserInterface_obj::batcher;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(39)
	tmp3->view = tmp2;
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		::phoenix::Batcher tmp4 = ::UserInterface_obj::batcher;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(40)
		::phoenix::Batcher _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(40)
		_this->layer = (int)2;
		HX_STACK_LINE(40)
		Dynamic tmp5 = _this->renderer->sort_batchers_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(40)
		_this->renderer->batchers->sort(tmp5);
		HX_STACK_LINE(40)
		_this->layer;
	}
	HX_STACK_LINE(41)
	::phoenix::Renderer tmp4 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(41)
	::phoenix::Batcher tmp5 = ::UserInterface_obj::batcher;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(41)
	tmp4->add_batch(tmp5);
	HX_STACK_LINE(44)
	::phoenix::Batcher tmp6 = ::UserInterface_obj::batcher;		HX_STACK_VAR(tmp6,"tmp6");
	struct _Function_1_1{
		inline static Dynamic Block( ::phoenix::Batcher &tmp6){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UserInterface.hx",43,0x7e78a9b0)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp6,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(43)
	Dynamic tmp7 = _Function_1_1::Block(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(43)
	::ui::render::MutantMintRenderer tmp8 = ::ui::render::MutantMintRenderer_obj::__new(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(43)
	this->rendering = tmp8;
	HX_STACK_LINE(47)
	this->reset();
	HX_STACK_LINE(49)
	::luxe::Events tmp9 = ::Luxe_obj::events;		HX_STACK_VAR(tmp9,"tmp9");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,::UserInterface,_g)
	int __ArgCount() const { return 1; }
	Void run(Dynamic _){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","UserInterface.hx",49,0x7e78a9b0)
		HX_STACK_ARG(_,"_")
		{
			HX_STACK_LINE(49)
			_g->reset();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(49)
	tmp9->listen(HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"), Dynamic(new _Function_1_2(_g)));
}
;
	return null();
}

//UserInterface_obj::~UserInterface_obj() { }

Dynamic UserInterface_obj::__CreateEmpty() { return  new UserInterface_obj; }
hx::ObjectPtr< UserInterface_obj > UserInterface_obj::__new()
{  hx::ObjectPtr< UserInterface_obj > _result_ = new UserInterface_obj();
	_result_->__construct();
	return _result_;}

Dynamic UserInterface_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UserInterface_obj > _result_ = new UserInterface_obj();
	_result_->__construct();
	return _result_;}

Void UserInterface_obj::reset( ){
{
		HX_STACK_FRAME("UserInterface","reset",0xbbb6df2f,"UserInterface.reset","UserInterface.hx",53,0x7e78a9b0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		::UserInterface _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(54)
		::mint::Canvas tmp = this->canvas;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(54)
		if ((tmp1)){
			HX_STACK_LINE(56)
			::mint::Canvas tmp2 = this->canvas;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(56)
			tmp2->destroy();
			HX_STACK_LINE(57)
			this->canvas = null();
		}
		HX_STACK_LINE(61)
		::ui::render::MutantMintRenderer tmp2 = this->rendering;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(61)
		::mint::render::Rendering tmp3 = ((::mint::render::Rendering)(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(62)
		Float tmp4 = this->scale;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(64)
		::luxe::Engine tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(64)
		Float tmp6 = tmp5->screen->width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(64)
		Float tmp7 = this->scale;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(64)
		Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(65)
		::luxe::Engine tmp9 = ::Luxe_obj::core;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(65)
		Float tmp10 = tmp9->screen->height;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(65)
		Float tmp11 = this->scale;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(65)
		Float tmp12 = (Float(tmp10) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		struct _Function_1_1{
			inline static Dynamic Block( Float &tmp4,::mint::render::Rendering &tmp3,Float &tmp8,Float &tmp12){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UserInterface.hx",59,0x7e78a9b0)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8"),false);
					__result->Add(HX_HCSTRING("rendering","\x4c","\xdb","\x73","\xcd") , tmp3,false);
					__result->Add(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78") , tmp4,false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
					__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp8,false);
					__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp12,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(59)
		Dynamic tmp13 = _Function_1_1::Block(tmp4,tmp3,tmp8,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(59)
		::mint::Canvas tmp14 = ::mint::Canvas_obj::__new(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(59)
		this->canvas = tmp14;
		HX_STACK_LINE(69)
		::mint::Canvas tmp15 = this->canvas;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(69)
		::mint::Control tmp16 = ((::mint::Control)(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(71)
		::mint::Canvas tmp17 = this->canvas;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(71)
		Float tmp18 = tmp17->w;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(71)
		::mint::Canvas tmp19 = this->canvas;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(71)
		Float tmp20 = tmp19->h;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(75)
		::phoenix::Color tmp21 = ::phoenix::Color_obj::__new((int)1,(int)0,(int)0,((Float)0.5));		HX_STACK_VAR(tmp21,"tmp21");
		struct _Function_1_2{
			inline static Dynamic Block( ::phoenix::Color &tmp21){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UserInterface.hx",74,0x7e78a9b0)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp21,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(74)
		Dynamic tmp22 = _Function_1_2::Block(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(74)
		Dynamic tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
		struct _Function_1_3{
			inline static Dynamic Block( Float &tmp20,Dynamic &tmp23,::mint::Control &tmp16,Float &tmp18){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UserInterface.hx",68,0x7e78a9b0)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed") , tmp16,false);
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("damageflash","\xe1","\xb2","\xba","\xcf"),false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
					__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp18,false);
					__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp20,false);
					__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , false,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Dynamic)((int)1)),false);
					__result->Add(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf") , tmp23,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(68)
		Dynamic tmp24 = _Function_1_3::Block(tmp20,tmp23,tmp16,tmp18);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(68)
		::mint::Panel tmp25 = ::mint::Panel_obj::__new(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(68)
		this->damage_flash = tmp25;
		HX_STACK_LINE(79)
		::mint::Canvas tmp26 = this->canvas;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(79)
		::ui::PauseMenu tmp27 = ::ui::PauseMenu_obj::__new(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(79)
		this->pause_menu = tmp27;
		HX_STACK_LINE(82)
		::mint::Canvas tmp28 = this->canvas;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(82)
		::mint::Control tmp29 = ((::mint::Control)(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(85)
		::creatures::Player tmp30 = this->get_player();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(85)
		int tmp31 = tmp30->health;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(86)
		::creatures::Player tmp32 = this->get_player();		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(86)
		int tmp33 = tmp32->max_health;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(88)
		Dynamic tmp34 = ::UserInterface_obj::palette;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(88)
		::phoenix::Color tmp35 = tmp34->__Field(HX_HCSTRING("black","\xbf","\xd5","\xf1","\xb4"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(89)
		Dynamic tmp36 = ::UserInterface_obj::palette;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(89)
		::phoenix::Color tmp37 = tmp36->__Field(HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
		struct _Function_1_4{
			inline static Dynamic Block( ::phoenix::Color &tmp37,::phoenix::Color &tmp35){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UserInterface.hx",87,0x7e78a9b0)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp35,false);
					__result->Add(HX_HCSTRING("color_bar","\xb7","\x55","\xaa","\x2f") , tmp37,false);
					__result->Add(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba") , (int)1,false);
					__result->Add(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0") , ((Float)0.5),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(87)
		Dynamic tmp38 = _Function_1_4::Block(tmp37,tmp35);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(87)
		Dynamic tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
		struct _Function_1_5{
			inline static Dynamic Block( int &tmp33,int &tmp31,Dynamic &tmp39,::mint::Control &tmp29){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UserInterface.hx",81,0x7e78a9b0)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed") , tmp29,false);
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("healthbar","\xb7","\xd2","\xaa","\x42"),false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , ((Dynamic)((int)6)),false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , ((Dynamic)((int)6)),false);
					__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , ((Dynamic)((int)48)),false);
					__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , ((Dynamic)((int)6)),false);
					__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , tmp31,false);
					__result->Add(HX_HCSTRING("max_value","\x56","\x64","\x96","\x28") , tmp33,false);
					__result->Add(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf") , tmp39,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(81)
		Dynamic tmp40 = _Function_1_5::Block(tmp33,tmp31,tmp39,tmp29);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(81)
		::ui::AttributeBar tmp41 = ::ui::AttributeBar_obj::__new(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(81)
		this->healthbar = tmp41;
		HX_STACK_LINE(96)
		::mint::Canvas tmp42 = this->canvas;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(96)
		::mint::Control tmp43 = ((::mint::Control)(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(98)
		::mint::Canvas tmp44 = this->canvas;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(98)
		Float tmp45 = tmp44->w;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(98)
		Float tmp46 = (Float(tmp45) / Float((int)2));		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(98)
		Float tmp47 = (tmp46 - (int)32);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(99)
		Float tmp48;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			::mint::Canvas tmp49 = this->canvas;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(99)
			::mint::Canvas _this = tmp49;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(99)
			tmp48 = (_this->y + _this->h);
		}
		HX_STACK_LINE(99)
		Float tmp49 = (tmp48 - (int)10);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(101)
		::creatures::Player tmp50 = this->get_player();		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(101)
		int tmp51 = tmp50->exp;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(102)
		::creatures::Player tmp52 = this->get_player();		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(102)
		int tmp53 = tmp52->exp_level;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(104)
		Dynamic tmp54 = ::UserInterface_obj::palette;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(104)
		::phoenix::Color tmp55 = tmp54->__Field(HX_HCSTRING("black","\xbf","\xd5","\xf1","\xb4"), hx::paccDynamic );		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(105)
		Dynamic tmp56 = ::UserInterface_obj::palette;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(105)
		::phoenix::Color tmp57 = tmp56->__Field(HX_HCSTRING("exp","\x9d","\x0c","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp57,"tmp57");
		struct _Function_1_6{
			inline static Dynamic Block( ::phoenix::Color &tmp55,::phoenix::Color &tmp57){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UserInterface.hx",103,0x7e78a9b0)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp55,false);
					__result->Add(HX_HCSTRING("color_bar","\xb7","\x55","\xaa","\x2f") , tmp57,false);
					__result->Add(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba") , (int)1,false);
					__result->Add(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0") , ((Float)0.5),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(103)
		Dynamic tmp58 = _Function_1_6::Block(tmp55,tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(103)
		Dynamic tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
		struct _Function_1_7{
			inline static Dynamic Block( Float &tmp47,Float &tmp49,Dynamic &tmp59,::mint::Control &tmp43,int &tmp51,int &tmp53){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UserInterface.hx",95,0x7e78a9b0)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed") , tmp43,false);
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("expbar","\x56","\xa5","\x73","\xc4"),false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp47,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp49,false);
					__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , ((Dynamic)((int)64)),false);
					__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , ((Dynamic)((int)6)),false);
					__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , tmp51,false);
					__result->Add(HX_HCSTRING("max_value","\x56","\x64","\x96","\x28") , tmp53,false);
					__result->Add(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf") , tmp59,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(95)
		Dynamic tmp60 = _Function_1_7::Block(tmp47,tmp49,tmp59,tmp43,tmp51,tmp53);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(95)
		::ui::AttributeBar tmp61 = ::ui::AttributeBar_obj::__new(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(95)
		this->expbar = tmp61;
		HX_STACK_LINE(111)
		this->creature_statuses = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(112)
		{
			HX_STACK_LINE(112)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(112)
			::World tmp62 = ::Main_obj::world;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(112)
			Array< ::Dynamic > _g11 = tmp62->entities;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(112)
			while((true)){
				HX_STACK_LINE(112)
				bool tmp63 = (_g1 < _g11->length);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(112)
				bool tmp64 = !(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(112)
				if ((tmp64)){
					HX_STACK_LINE(112)
					break;
				}
				HX_STACK_LINE(112)
				::luxe::Entity tmp65 = _g11->__get(_g1).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(112)
				::luxe::Entity entity = tmp65;		HX_STACK_VAR(entity,"entity");
				HX_STACK_LINE(112)
				++(_g1);
				HX_STACK_LINE(114)
				::Creature creature = ((::Creature)(entity));		HX_STACK_VAR(creature,"creature");
				HX_STACK_LINE(115)
				bool tmp66 = (creature == null());		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(115)
				bool tmp67 = !(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(115)
				bool tmp68;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(115)
				if ((tmp67)){
					HX_STACK_LINE(115)
					::Creature tmp69 = creature;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(115)
					::creatures::Player tmp70 = this->get_player();		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(115)
					::creatures::Player tmp71 = tmp70;		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(115)
					tmp68 = (tmp69 == tmp71);
				}
				else{
					HX_STACK_LINE(115)
					tmp68 = true;
				}
				HX_STACK_LINE(115)
				if ((tmp68)){
					HX_STACK_LINE(115)
					continue;
				}
				HX_STACK_LINE(117)
				::mint::Canvas tmp69 = this->canvas;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(117)
				::Creature tmp70 = creature;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(117)
				::ui::CreatureStatus tmp71 = ::ui::CreatureStatus_obj::__new(tmp69,tmp70);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(117)
				this->creature_statuses->push(tmp71);
			}
		}
		HX_STACK_LINE(120)
		::creatures::Player tmp62 = this->get_player();		HX_STACK_VAR(tmp62,"tmp62");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_8,::UserInterface,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_1_8",0x5200ed3e,"*._Function_1_8","UserInterface.hx",120,0x7e78a9b0)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(120)
				Dynamic func = _g->update_healthbar_dyn();		HX_STACK_VAR(func,"func");
				HX_STACK_LINE(120)
				{
					HX_STACK_LINE(120)
					bool tmp63 = (func != null());		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(120)
					if ((tmp63)){
						HX_STACK_LINE(120)
						Dynamic tmp64 = func;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(120)
						::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp64);
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(120)
		tmp62->events->listen(HX_HCSTRING("health.*","\xd8","\xaf","\x56","\xe9"), Dynamic(new _Function_1_8(_g)));
		HX_STACK_LINE(121)
		::creatures::Player tmp63 = this->get_player();		HX_STACK_VAR(tmp63,"tmp63");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_9,::UserInterface,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_1_9",0x5200ed3f,"*._Function_1_9","UserInterface.hx",121,0x7e78a9b0)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(121)
				Dynamic func = _g->update_expbar_dyn();		HX_STACK_VAR(func,"func");
				HX_STACK_LINE(121)
				{
					HX_STACK_LINE(121)
					bool tmp64 = (func != null());		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(121)
					if ((tmp64)){
						HX_STACK_LINE(121)
						Dynamic tmp65 = func;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(121)
						::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp65);
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(121)
		tmp63->events->listen(HX_HCSTRING("exp.*","\x19","\x56","\x1f","\x77"), Dynamic(new _Function_1_9(_g)));
		HX_STACK_LINE(122)
		::creatures::Player tmp64 = this->get_player();		HX_STACK_VAR(tmp64,"tmp64");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_10,::UserInterface,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_1_10",0x6ecea319,"*._Function_1_10","UserInterface.hx",122,0x7e78a9b0)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(122)
				Dynamic func = _g->update_expbar_dyn();		HX_STACK_VAR(func,"func");
				HX_STACK_LINE(122)
				{
					HX_STACK_LINE(122)
					bool tmp65 = (func != null());		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(122)
					if ((tmp65)){
						HX_STACK_LINE(122)
						Dynamic tmp66 = func;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(122)
						::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp66);
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(122)
		tmp64->events->listen(HX_HCSTRING("level","\x84","\x15","\x63","\x72"), Dynamic(new _Function_1_10(_g)));
		HX_STACK_LINE(123)
		::creatures::Player tmp65 = this->get_player();		HX_STACK_VAR(tmp65,"tmp65");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_11,::UserInterface,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_1_11",0x6ecea31a,"*._Function_1_11","UserInterface.hx",123,0x7e78a9b0)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(124)
				_g->damage_flash->set_visible(true);
				HX_STACK_LINE(125)
				::luxe::Timer tmp66 = ::Luxe_obj::timer;		HX_STACK_VAR(tmp66,"tmp66");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::UserInterface,_g)
				int __ArgCount() const { return 0; }
				Void run(){
					HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","UserInterface.hx",125,0x7e78a9b0)
					{
						HX_STACK_LINE(125)
						_g->damage_flash->set_visible(false);
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(125)
				tmp66->schedule(((Float)0.05), Dynamic(new _Function_2_1(_g)),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(123)
		tmp65->events->listen(HX_HCSTRING("health.damage.*","\x7d","\xb4","\x33","\xb6"), Dynamic(new _Function_1_11(_g)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UserInterface_obj,reset,(void))

Void UserInterface_obj::update_healthbar( ){
{
		HX_STACK_FRAME("UserInterface","update_healthbar",0x99f0c061,"UserInterface.update_healthbar","UserInterface.hx",130,0x7e78a9b0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(131)
		::ui::AttributeBar tmp = this->healthbar;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(131)
		::creatures::Player tmp1 = this->get_player();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(131)
		int tmp2 = tmp1->health;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(131)
		tmp->set_value(tmp2);
		HX_STACK_LINE(132)
		::ui::AttributeBar tmp3 = this->healthbar;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(132)
		::creatures::Player tmp4 = this->get_player();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(132)
		int tmp5 = tmp4->max_health;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(132)
		tmp3->set_max_value(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UserInterface_obj,update_healthbar,(void))

Void UserInterface_obj::update_expbar( ){
{
		HX_STACK_FRAME("UserInterface","update_expbar",0x409ae96c,"UserInterface.update_expbar","UserInterface.hx",136,0x7e78a9b0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(137)
		::ui::AttributeBar tmp = this->expbar;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(137)
		::creatures::Player tmp1 = this->get_player();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(137)
		int tmp2 = tmp1->exp;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(137)
		tmp->set_value(tmp2);
		HX_STACK_LINE(138)
		::ui::AttributeBar tmp3 = this->expbar;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(138)
		::creatures::Player tmp4 = this->get_player();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(138)
		int tmp5 = tmp4->exp_level;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(138)
		tmp3->set_max_value(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UserInterface_obj,update_expbar,(void))

::creatures::Player UserInterface_obj::get_player( ){
	HX_STACK_FRAME("UserInterface","get_player",0x439849ca,"UserInterface.get_player","UserInterface.hx",141,0x7e78a9b0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(141)
	::World tmp = ::Main_obj::world;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	::creatures::Player tmp1 = tmp->player;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(141)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(UserInterface_obj,get_player,return )

Dynamic UserInterface_obj::palette;

::phoenix::Batcher UserInterface_obj::batcher;


UserInterface_obj::UserInterface_obj()
{
}

void UserInterface_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UserInterface);
	HX_MARK_MEMBER_NAME(rendering,"rendering");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(damage_flash,"damage_flash");
	HX_MARK_MEMBER_NAME(canvas,"canvas");
	HX_MARK_MEMBER_NAME(healthbar,"healthbar");
	HX_MARK_MEMBER_NAME(expbar,"expbar");
	HX_MARK_MEMBER_NAME(creature_statuses,"creature_statuses");
	HX_MARK_MEMBER_NAME(pause_menu,"pause_menu");
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_END_CLASS();
}

void UserInterface_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rendering,"rendering");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(damage_flash,"damage_flash");
	HX_VISIT_MEMBER_NAME(canvas,"canvas");
	HX_VISIT_MEMBER_NAME(healthbar,"healthbar");
	HX_VISIT_MEMBER_NAME(expbar,"expbar");
	HX_VISIT_MEMBER_NAME(creature_statuses,"creature_statuses");
	HX_VISIT_MEMBER_NAME(pause_menu,"pause_menu");
	HX_VISIT_MEMBER_NAME(player,"player");
}

Dynamic UserInterface_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"canvas") ) { return canvas; }
		if (HX_FIELD_EQ(inName,"expbar") ) { return expbar; }
		if (HX_FIELD_EQ(inName,"player") ) { return inCallProp == hx::paccAlways ? get_player() : player; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rendering") ) { return rendering; }
		if (HX_FIELD_EQ(inName,"healthbar") ) { return healthbar; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pause_menu") ) { return pause_menu; }
		if (HX_FIELD_EQ(inName,"get_player") ) { return get_player_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"damage_flash") ) { return damage_flash; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"update_expbar") ) { return update_expbar_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"update_healthbar") ) { return update_healthbar_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"creature_statuses") ) { return creature_statuses; }
	}
	return super::__Field(inName,inCallProp);
}

bool UserInterface_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"palette") ) { outValue = palette; return true;  }
		if (HX_FIELD_EQ(inName,"batcher") ) { outValue = batcher; return true;  }
	}
	return false;
}

Dynamic UserInterface_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"canvas") ) { canvas=inValue.Cast< ::mint::Canvas >(); return inValue; }
		if (HX_FIELD_EQ(inName,"expbar") ) { expbar=inValue.Cast< ::ui::AttributeBar >(); return inValue; }
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::creatures::Player >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rendering") ) { rendering=inValue.Cast< ::ui::render::MutantMintRenderer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"healthbar") ) { healthbar=inValue.Cast< ::ui::AttributeBar >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pause_menu") ) { pause_menu=inValue.Cast< ::ui::PauseMenu >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"damage_flash") ) { damage_flash=inValue.Cast< ::mint::Panel >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"creature_statuses") ) { creature_statuses=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool UserInterface_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"palette") ) { palette=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"batcher") ) { batcher=ioValue.Cast< ::phoenix::Batcher >(); return true; }
	}
	return false;
}

void UserInterface_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("rendering","\x4c","\xdb","\x73","\xcd"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("damage_flash","\xa0","\x8a","\xf2","\xb9"));
	outFields->push(HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8"));
	outFields->push(HX_HCSTRING("healthbar","\xb7","\xd2","\xaa","\x42"));
	outFields->push(HX_HCSTRING("expbar","\x56","\xa5","\x73","\xc4"));
	outFields->push(HX_HCSTRING("creature_statuses","\xe0","\x11","\x92","\x7c"));
	outFields->push(HX_HCSTRING("pause_menu","\xc8","\x8e","\xb5","\x3d"));
	outFields->push(HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::ui::render::MutantMintRenderer*/ ,(int)offsetof(UserInterface_obj,rendering),HX_HCSTRING("rendering","\x4c","\xdb","\x73","\xcd")},
	{hx::fsFloat,(int)offsetof(UserInterface_obj,scale),HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")},
	{hx::fsObject /*::mint::Panel*/ ,(int)offsetof(UserInterface_obj,damage_flash),HX_HCSTRING("damage_flash","\xa0","\x8a","\xf2","\xb9")},
	{hx::fsObject /*::mint::Canvas*/ ,(int)offsetof(UserInterface_obj,canvas),HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8")},
	{hx::fsObject /*::ui::AttributeBar*/ ,(int)offsetof(UserInterface_obj,healthbar),HX_HCSTRING("healthbar","\xb7","\xd2","\xaa","\x42")},
	{hx::fsObject /*::ui::AttributeBar*/ ,(int)offsetof(UserInterface_obj,expbar),HX_HCSTRING("expbar","\x56","\xa5","\x73","\xc4")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(UserInterface_obj,creature_statuses),HX_HCSTRING("creature_statuses","\xe0","\x11","\x92","\x7c")},
	{hx::fsObject /*::ui::PauseMenu*/ ,(int)offsetof(UserInterface_obj,pause_menu),HX_HCSTRING("pause_menu","\xc8","\x8e","\xb5","\x3d")},
	{hx::fsObject /*::creatures::Player*/ ,(int)offsetof(UserInterface_obj,player),HX_HCSTRING("player","\x61","\xeb","\xb8","\x37")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &UserInterface_obj::palette,HX_HCSTRING("palette","\x7b","\x92","\x63","\x6c")},
	{hx::fsObject /*::phoenix::Batcher*/ ,(void *) &UserInterface_obj::batcher,HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("rendering","\x4c","\xdb","\x73","\xcd"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("damage_flash","\xa0","\x8a","\xf2","\xb9"),
	HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8"),
	HX_HCSTRING("healthbar","\xb7","\xd2","\xaa","\x42"),
	HX_HCSTRING("expbar","\x56","\xa5","\x73","\xc4"),
	HX_HCSTRING("creature_statuses","\xe0","\x11","\x92","\x7c"),
	HX_HCSTRING("pause_menu","\xc8","\x8e","\xb5","\x3d"),
	HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("update_healthbar","\xc1","\x19","\x88","\xf1"),
	HX_HCSTRING("update_expbar","\x0c","\xf4","\x07","\x31"),
	HX_HCSTRING("get_player","\x2a","\x5b","\x40","\x28"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UserInterface_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UserInterface_obj::palette,"palette");
	HX_MARK_MEMBER_NAME(UserInterface_obj::batcher,"batcher");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UserInterface_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UserInterface_obj::palette,"palette");
	HX_VISIT_MEMBER_NAME(UserInterface_obj::batcher,"batcher");
};

#endif

hx::Class UserInterface_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("palette","\x7b","\x92","\x63","\x6c"),
	HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"),
	::String(null()) };

void UserInterface_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("UserInterface","\xce","\xad","\x7e","\x06");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &UserInterface_obj::__GetStatic;
	__mClass->mSetStaticField = &UserInterface_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UserInterface_obj >;
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

void UserInterface_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UserInterface.hx",14,0x7e78a9b0)
		{
			HX_STACK_LINE(15)
			::phoenix::Color tmp = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(15)
			::phoenix::Color tmp1 = tmp->rgb((int)-15196888);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(16)
			::phoenix::Color tmp2 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(16)
			::phoenix::Color tmp3 = tmp2->rgb((int)-3672988);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(17)
			::phoenix::Color tmp4 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(17)
			::phoenix::Color tmp5 = tmp4->rgb((int)15959600);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(18)
			::phoenix::Color tmp6 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(18)
			::phoenix::Color tmp7 = tmp6->rgb((int)6935271);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(19)
			::phoenix::Color tmp8 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(19)
			::phoenix::Color tmp9 = tmp8->rgb((int)14738636);		HX_STACK_VAR(tmp9,"tmp9");
			struct _Function_1_1{
				inline static Dynamic Block( ::phoenix::Color &tmp5,::phoenix::Color &tmp9,::phoenix::Color &tmp3,::phoenix::Color &tmp1,::phoenix::Color &tmp7){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UserInterface.hx",14,0x7e78a9b0)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("black","\xbf","\xd5","\xf1","\xb4") , tmp1,false);
						__result->Add(HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c") , tmp3,false);
						__result->Add(HX_HCSTRING("enemy","\x48","\x12","\x7b","\x70") , tmp5,false);
						__result->Add(HX_HCSTRING("exp","\x9d","\x0c","\x4d","\x00") , tmp7,false);
						__result->Add(HX_HCSTRING("white","\xa9","\x4a","\xbd","\xc9") , tmp9,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(14)
			return _Function_1_1::Block(tmp5,tmp9,tmp3,tmp1,tmp7);
		}
		return null();
	}
};
	palette= _Function_0_1::Block();
}

