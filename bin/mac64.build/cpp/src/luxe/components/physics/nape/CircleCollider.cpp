#include <hxcpp.h>

#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_components_physics_nape_CircleCollider
#include <luxe/components/physics/nape/CircleCollider.h>
#endif
#ifndef INCLUDED_luxe_components_physics_nape_NapeBody
#include <luxe/components/physics/nape/NapeBody.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_shape_Circle
#include <nape/shape/Circle.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace luxe{
namespace components{
namespace physics{
namespace nape{

Void CircleCollider_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("luxe.components.physics.nape.CircleCollider","new",0x28d6cdf5,"luxe.components.physics.nape.CircleCollider.new","luxe/components/physics/nape/CircleCollider.hx",28,0x1c73e45b)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(30)
	this->options = _options;
	HX_STACK_LINE(32)
	Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	super::__construct(tmp);
}
;
	return null();
}

//CircleCollider_obj::~CircleCollider_obj() { }

Dynamic CircleCollider_obj::__CreateEmpty() { return  new CircleCollider_obj; }
hx::ObjectPtr< CircleCollider_obj > CircleCollider_obj::__new(Dynamic _options)
{  hx::ObjectPtr< CircleCollider_obj > _result_ = new CircleCollider_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic CircleCollider_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CircleCollider_obj > _result_ = new CircleCollider_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void CircleCollider_obj::onadded( ){
{
		HX_STACK_FRAME("luxe.components.physics.nape.CircleCollider","onadded",0xdc4def56,"luxe.components.physics.nape.CircleCollider.onadded","luxe/components/physics/nape/CircleCollider.hx",36,0x1c73e45b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		this->super::onadded();
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			::nape::phys::Body tmp = this->body;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(40)
			::nape::shape::ShapeList tmp1 = tmp->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(40)
			::nape::shape::ShapeList _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(40)
			Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(40)
			Float tmp3 = tmp2->__Field(HX_HCSTRING("r","\x72","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(40)
			Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(40)
			::nape::phys::Material tmp5 = tmp4->__Field(HX_HCSTRING("material","\xa7","\x5c","\xa5","\xf0"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(40)
			Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(40)
			::nape::dynamics::InteractionFilter tmp7 = tmp6->__Field(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(40)
			::nape::shape::Circle tmp8 = ::nape::shape::Circle_obj::__new(tmp3,null(),tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(40)
			::nape::shape::Shape obj = tmp8;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(40)
			bool tmp9 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(40)
			if ((tmp9)){
				HX_STACK_LINE(40)
				::nape::shape::Shape tmp10 = obj;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(40)
				_this->push(tmp10);
			}
			else{
				HX_STACK_LINE(40)
				::nape::shape::Shape tmp10 = obj;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(40)
				_this->unshift(tmp10);
			}
		}
		HX_STACK_LINE(41)
		{
			HX_STACK_LINE(41)
			::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(41)
			{
				HX_STACK_LINE(41)
				::nape::phys::Body tmp1 = this->body;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(41)
				::nape::phys::Body _this = tmp1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(41)
				::nape::geom::Vec2 tmp2 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(41)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(41)
				if ((tmp3)){
					HX_STACK_LINE(41)
					_this->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(41)
				tmp = _this->zpp_inner->wrap_pos;
			}
			HX_STACK_LINE(41)
			::nape::geom::Vec2 _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(41)
			Dynamic tmp1 = this->options;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(41)
			Float x = tmp1->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(41)
			Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(41)
			Float y = tmp2->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(41)
			{
				HX_STACK_LINE(41)
				bool tmp3 = (_this != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(41)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(41)
				if ((tmp3)){
					HX_STACK_LINE(41)
					tmp4 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(41)
					tmp4 = false;
				}
				HX_STACK_LINE(41)
				if ((tmp4)){
					HX_STACK_LINE(41)
					::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(41)
					::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(41)
					HX_STACK_DO_THROW(tmp6);
				}
			}
			HX_STACK_LINE(41)
			{
				HX_STACK_LINE(41)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(41)
				bool tmp3 = _this1->_immutable;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(41)
				if ((tmp3)){
					HX_STACK_LINE(41)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(41)
				bool tmp4 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(41)
				if ((tmp4)){
					HX_STACK_LINE(41)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(41)
			bool tmp3 = (x != x);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(41)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(41)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(41)
			if ((tmp4)){
				HX_STACK_LINE(41)
				tmp5 = (y != y);
			}
			else{
				HX_STACK_LINE(41)
				tmp5 = true;
			}
			HX_STACK_LINE(41)
			if ((tmp5)){
				HX_STACK_LINE(41)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(41)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(41)
			{
				HX_STACK_LINE(41)
				{
					HX_STACK_LINE(41)
					bool tmp7 = (_this != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(41)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(41)
					if ((tmp7)){
						HX_STACK_LINE(41)
						tmp8 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(41)
						tmp8 = false;
					}
					HX_STACK_LINE(41)
					if ((tmp8)){
						HX_STACK_LINE(41)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(41)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(41)
						HX_STACK_DO_THROW(tmp10);
					}
				}
				HX_STACK_LINE(41)
				{
					HX_STACK_LINE(41)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(41)
					bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(41)
					if ((tmp7)){
						HX_STACK_LINE(41)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(41)
				tmp6 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(41)
			Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(41)
			bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(41)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(41)
			if ((tmp8)){
				HX_STACK_LINE(41)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(41)
				{
					HX_STACK_LINE(41)
					{
						HX_STACK_LINE(41)
						bool tmp11 = (_this != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(41)
						bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(41)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(41)
						bool tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(41)
						if ((tmp14)){
							HX_STACK_LINE(41)
							tmp13 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(41)
							tmp13 = false;
						}
						HX_STACK_LINE(41)
						bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(41)
						if ((tmp15)){
							HX_STACK_LINE(41)
							::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(41)
							::String tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(41)
							::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(41)
							::String tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(41)
							::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(41)
							HX_STACK_DO_THROW(tmp20);
						}
					}
					HX_STACK_LINE(41)
					{
						HX_STACK_LINE(41)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(41)
						bool tmp11 = (_this1->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(41)
						bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(41)
						bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(41)
						if ((tmp13)){
							HX_STACK_LINE(41)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(41)
					Float tmp11 = _this->zpp_inner->y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(41)
					tmp10 = tmp11;
				}
				HX_STACK_LINE(41)
				Float tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(41)
				tmp9 = (tmp10 == tmp11);
			}
			else{
				HX_STACK_LINE(41)
				tmp9 = false;
			}
			HX_STACK_LINE(41)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(41)
			if ((tmp10)){
				HX_STACK_LINE(41)
				{
					HX_STACK_LINE(41)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(41)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(41)
					{
					}
				}
				HX_STACK_LINE(41)
				{
					HX_STACK_LINE(41)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(41)
					bool tmp11 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(41)
					if ((tmp11)){
						HX_STACK_LINE(41)
						::zpp_nape::geom::ZPP_Vec2 tmp12 = _this1;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(41)
						_this1->_invalidate(tmp12);
					}
				}
			}
			HX_STACK_LINE(41)
			_this;
		}
		HX_STACK_LINE(43)
		this->post_add();
	}
return null();
}


Void CircleCollider_obj::init( ){
{
		HX_STACK_FRAME("luxe.components.physics.nape.CircleCollider","init",0x8fd61fdb,"luxe.components.physics.nape.CircleCollider.init","luxe/macros/ComponentRules.hx",38,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		this->super::init();
	}
return null();
}


Void CircleCollider_obj::ondestroy( ){
{
		HX_STACK_FRAME("luxe.components.physics.nape.CircleCollider","ondestroy",0x8f3c9910,"luxe.components.physics.nape.CircleCollider.ondestroy","luxe/macros/ComponentRules.hx",50,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->super::ondestroy();
	}
return null();
}


Void CircleCollider_obj::onremoved( ){
{
		HX_STACK_FRAME("luxe.components.physics.nape.CircleCollider","onremoved",0x5db68bb6,"luxe.components.physics.nape.CircleCollider.onremoved","luxe/macros/ComponentRules.hx",62,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		this->super::onremoved();
	}
return null();
}



CircleCollider_obj::CircleCollider_obj()
{
}

void CircleCollider_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CircleCollider);
	HX_MARK_MEMBER_NAME(options,"options");
	::luxe::components::physics::nape::NapeBody_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CircleCollider_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(options,"options");
	::luxe::components::physics::nape::NapeBody_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CircleCollider_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		if (HX_FIELD_EQ(inName,"onadded") ) { return onadded_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onremoved") ) { return onremoved_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CircleCollider_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CircleCollider_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(CircleCollider_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"),
	HX_HCSTRING("onadded","\x41","\x03","\x54","\x1f"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onremoved","\x61","\xb0","\x59","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CircleCollider_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CircleCollider_obj::__mClass,"__mClass");
};

#endif

hx::Class CircleCollider_obj::__mClass;

void CircleCollider_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.components.physics.nape.CircleCollider","\x83","\xaf","\x99","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CircleCollider_obj >;
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

} // end namespace luxe
} // end namespace components
} // end namespace physics
} // end namespace nape
