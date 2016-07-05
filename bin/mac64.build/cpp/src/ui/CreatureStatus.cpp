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
#ifndef INCLUDED_luxe_Camera
#include <luxe/Camera.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
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
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
#endif
#ifndef INCLUDED_mint_Panel
#include <mint/Panel.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Transform
#include <phoenix/Transform.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_ui_AttributeBar
#include <ui/AttributeBar.h>
#endif
#ifndef INCLUDED_ui_CreatureStatus
#include <ui/CreatureStatus.h>
#endif
namespace ui{

Void CreatureStatus_obj::__construct(::mint::Control _parent,::Creature _target)
{
HX_STACK_FRAME("ui.CreatureStatus","new",0x8a7d1dbd,"ui.CreatureStatus.new","ui/CreatureStatus.hx",18,0xc73e9732)
HX_STACK_THIS(this)
HX_STACK_ARG(_parent,"_parent")
HX_STACK_ARG(_target,"_target")
{
	HX_STACK_LINE(17)
	::ui::CreatureStatus _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(19)
	this->target = _target;
	HX_STACK_LINE(22)
	::mint::Control tmp = _parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	::Creature tmp1 = this->target;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	::String tmp2 = tmp1->get_name();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	::String tmp3 = (HX_HCSTRING("creaturestatus.","\xdd","\x84","\x9f","\xba") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	struct _Function_1_1{
		inline static Dynamic Block( ::mint::Control &tmp,::String &tmp3){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ui/CreatureStatus.hx",21,0xc73e9732)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed") , tmp,false);
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp3,false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , ((Dynamic)((int)20)),false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , ((Dynamic)((int)4)),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(21)
	Dynamic tmp4 = _Function_1_1::Block(tmp,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(21)
	super::__construct(tmp4);
	HX_STACK_LINE(31)
	::Creature tmp5 = this->target;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(31)
	int tmp6 = tmp5->health;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(32)
	::Creature tmp7 = this->target;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(32)
	int tmp8 = tmp7->max_health;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(34)
	Dynamic tmp9 = ::UserInterface_obj::palette;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(34)
	::phoenix::Color tmp10 = tmp9->__Field(HX_HCSTRING("black","\xbf","\xd5","\xf1","\xb4"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(35)
	Dynamic tmp11 = ::UserInterface_obj::palette;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(35)
	::phoenix::Color tmp12 = tmp11->__Field(HX_HCSTRING("enemy","\x48","\x12","\x7b","\x70"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
	struct _Function_1_2{
		inline static Dynamic Block( ::phoenix::Color &tmp10,::phoenix::Color &tmp12){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ui/CreatureStatus.hx",33,0xc73e9732)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp10,false);
				__result->Add(HX_HCSTRING("color_bar","\xb7","\x55","\xaa","\x2f") , tmp12,false);
				__result->Add(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba") , (int)1,false);
				__result->Add(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0") , ((Float)0.5),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(33)
	Dynamic tmp13 = _Function_1_2::Block(tmp10,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(33)
	Dynamic tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
	struct _Function_1_3{
		inline static Dynamic Block( hx::ObjectPtr< ::ui::CreatureStatus_obj > __this,int &tmp6,int &tmp8,Dynamic &tmp14){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ui/CreatureStatus.hx",27,0xc73e9732)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed") , ((::mint::Control)(__this)),false);
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("healthbar","\xb7","\xd2","\xaa","\x42"),false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , ((Dynamic)((int)20)),false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , ((Dynamic)((int)4)),false);
				__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , tmp6,false);
				__result->Add(HX_HCSTRING("max_value","\x56","\x64","\x96","\x28") , tmp8,false);
				__result->Add(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf") , tmp14,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(27)
	Dynamic tmp15 = _Function_1_3::Block(this,tmp6,tmp8,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(27)
	::ui::AttributeBar tmp16 = ::ui::AttributeBar_obj::__new(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(27)
	this->healthbar = tmp16;
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		::Creature tmp17 = this->target;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(41)
		::phoenix::Transform tmp18 = tmp17->get_transform();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(41)
		::phoenix::Transform _this = tmp18;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(41)
		bool tmp19 = (_this->_pos_handlers == null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(41)
		if ((tmp19)){
			HX_STACK_LINE(41)
			_this->_pos_handlers = cpp::ArrayBase_obj::__new();
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::ui::CreatureStatus,_g)
		int __ArgCount() const { return 1; }
		Void run(::phoenix::Vector _pos){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","ui/CreatureStatus.hx",42,0xc73e9732)
			HX_STACK_ARG(_pos,"_pos")
			{

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,::ui::CreatureStatus,_g)
				int __ArgCount() const { return 0; }
				Void run(){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","ui/CreatureStatus.hx",42,0xc73e9732)
					{
						HX_STACK_LINE(43)
						::phoenix::Vector tmp20 = _g->target->get_pos();		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(43)
						::phoenix::Vector tmp21 = _g->get_screen_pos(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(43)
						::phoenix::Vector screen_pos = tmp21;		HX_STACK_VAR(screen_pos,"screen_pos");
						HX_STACK_LINE(44)
						Float tmp22 = screen_pos->x;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(44)
						_g->set_x(tmp22);
						HX_STACK_LINE(45)
						Float tmp23 = screen_pos->y;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(45)
						_g->set_y(tmp23);
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(42)
				::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )( Dynamic(new _Function_3_1(_g)));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(41)
		_this->_pos_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )( Dynamic(new _Function_2_1(_g)));
	}
	HX_STACK_LINE(49)
	::Creature tmp17 = this->target;		HX_STACK_VAR(tmp17,"tmp17");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_4,::ui::CreatureStatus,_g)
	int __ArgCount() const { return 1; }
	Void run(Dynamic _){
		HX_STACK_FRAME("*","_Function_1_4",0x5200ed3a,"*._Function_1_4","ui/CreatureStatus.hx",49,0xc73e9732)
		HX_STACK_ARG(_,"_")
		{
			HX_STACK_LINE(49)
			Dynamic func = _g->update_health_dyn();		HX_STACK_VAR(func,"func");
			HX_STACK_LINE(49)
			{
				HX_STACK_LINE(49)
				bool tmp18 = (func != null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(49)
				if ((tmp18)){
					HX_STACK_LINE(49)
					Dynamic tmp19 = func;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(49)
					::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp19);
				}
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(49)
	tmp17->events->listen(HX_HCSTRING("health.*","\xd8","\xaf","\x56","\xe9"), Dynamic(new _Function_1_4(_g)));
	HX_STACK_LINE(50)
	::Creature tmp18 = this->target;		HX_STACK_VAR(tmp18,"tmp18");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_5,::ui::CreatureStatus,_g)
	int __ArgCount() const { return 1; }
	Void run(Dynamic _){
		HX_STACK_FRAME("*","_Function_1_5",0x5200ed3b,"*._Function_1_5","ui/CreatureStatus.hx",50,0xc73e9732)
		HX_STACK_ARG(_,"_")
		{
			HX_STACK_LINE(51)
			_g->healthbar->destroy();
			HX_STACK_LINE(52)
			_g->destroy();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(50)
	tmp18->events->listen(HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"), Dynamic(new _Function_1_5(_g)));
}
;
	return null();
}

//CreatureStatus_obj::~CreatureStatus_obj() { }

Dynamic CreatureStatus_obj::__CreateEmpty() { return  new CreatureStatus_obj; }
hx::ObjectPtr< CreatureStatus_obj > CreatureStatus_obj::__new(::mint::Control _parent,::Creature _target)
{  hx::ObjectPtr< CreatureStatus_obj > _result_ = new CreatureStatus_obj();
	_result_->__construct(_parent,_target);
	return _result_;}

Dynamic CreatureStatus_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CreatureStatus_obj > _result_ = new CreatureStatus_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void CreatureStatus_obj::update_health( ){
{
		HX_STACK_FRAME("ui.CreatureStatus","update_health",0x5812faef,"ui.CreatureStatus.update_health","ui/CreatureStatus.hx",57,0xc73e9732)
		HX_STACK_THIS(this)
		HX_STACK_LINE(58)
		::ui::AttributeBar tmp = this->healthbar;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		::Creature tmp1 = this->target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		int tmp2 = tmp1->health;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		tmp->set_value(tmp2);
		HX_STACK_LINE(59)
		::ui::AttributeBar tmp3 = this->healthbar;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(59)
		::Creature tmp4 = this->target;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(59)
		int tmp5 = tmp4->max_health;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(59)
		tmp3->set_max_value(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CreatureStatus_obj,update_health,(void))

::phoenix::Vector CreatureStatus_obj::get_screen_pos( ::phoenix::Vector _pos){
	HX_STACK_FRAME("ui.CreatureStatus","get_screen_pos",0xfd6e320d,"ui.CreatureStatus.get_screen_pos","ui/CreatureStatus.hx",63,0xc73e9732)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_pos,"_pos")
	HX_STACK_LINE(64)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	{
		HX_STACK_LINE(64)
		::luxe::Camera tmp1 = ::Luxe_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		::phoenix::Vector tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(64)
			Float tmp3 = this->w;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(64)
			Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(64)
			Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(64)
			Float tmp6 = this->h;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(64)
			Float tmp7 = (Float(tmp6) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(64)
			Float tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(64)
			Float tmp9 = (tmp8 - (int)20);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(64)
			::phoenix::Vector tmp10 = ::phoenix::Vector_obj::__new(tmp5,tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(64)
			::phoenix::Vector b = tmp10;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(64)
			Float tmp11 = (_pos->x + b->x);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(64)
			Float tmp12 = (_pos->y + b->y);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(64)
			Float tmp13 = (_pos->z + b->z);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(64)
			tmp2 = ::phoenix::Vector_obj::__new(tmp11,tmp12,tmp13,null());
		}
		HX_STACK_LINE(64)
		::phoenix::Vector tmp3 = tmp1->world_point_to_screen(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(64)
		::phoenix::Vector a = tmp3;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(64)
		::UserInterface tmp4 = ::Main_obj::ui;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(64)
		Float b = tmp4->scale;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(64)
		Float tmp5 = (Float(a->x) / Float(b));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(64)
		Float tmp6 = (Float(a->y) / Float(b));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(64)
		Float tmp7 = (Float(a->z) / Float(b));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(64)
		tmp = ::phoenix::Vector_obj::__new(tmp5,tmp6,tmp7,null());
	}
	HX_STACK_LINE(64)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(CreatureStatus_obj,get_screen_pos,return )


CreatureStatus_obj::CreatureStatus_obj()
{
}

void CreatureStatus_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CreatureStatus);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(healthbar,"healthbar");
	::mint::Panel_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CreatureStatus_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(healthbar,"healthbar");
	::mint::Panel_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CreatureStatus_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"healthbar") ) { return healthbar; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"update_health") ) { return update_health_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_screen_pos") ) { return get_screen_pos_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CreatureStatus_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::Creature >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"healthbar") ) { healthbar=inValue.Cast< ::ui::AttributeBar >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CreatureStatus_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("healthbar","\xb7","\xd2","\xaa","\x42"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Creature*/ ,(int)offsetof(CreatureStatus_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsObject /*::ui::AttributeBar*/ ,(int)offsetof(CreatureStatus_obj,healthbar),HX_HCSTRING("healthbar","\xb7","\xd2","\xaa","\x42")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("healthbar","\xb7","\xd2","\xaa","\x42"),
	HX_HCSTRING("update_health","\x52","\x77","\x9a","\x69"),
	HX_HCSTRING("get_screen_pos","\x4a","\x8c","\x73","\x42"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CreatureStatus_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CreatureStatus_obj::__mClass,"__mClass");
};

#endif

hx::Class CreatureStatus_obj::__mClass;

void CreatureStatus_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ui.CreatureStatus","\x4b","\x7b","\x5a","\xbe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CreatureStatus_obj >;
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
