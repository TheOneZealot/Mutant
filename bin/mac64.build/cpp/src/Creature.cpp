#include <hxcpp.h>

#ifndef INCLUDED_Controller
#include <Controller.h>
#endif
#ifndef INCLUDED_Creature
#include <Creature.h>
#endif
#ifndef INCLUDED_World
#include <World.h>
#endif
#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
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
#ifndef INCLUDED_luxe_components_Components
#include <luxe/components/Components.h>
#endif
#ifndef INCLUDED_luxe_components_physics_nape_BoxCollider
#include <luxe/components/physics/nape/BoxCollider.h>
#endif
#ifndef INCLUDED_luxe_components_physics_nape_NapeBody
#include <luxe/components/physics/nape/NapeBody.h>
#endif
#ifndef INCLUDED_luxe_components_sprite_SpriteAnimation
#include <luxe/components/sprite/SpriteAnimation.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeList
#include <nape/callbacks/CbTypeList.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyType
#include <nape/phys/BodyType.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeIterator
#include <nape/shape/ShapeIterator.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_CbTypeList
#include <zpp_nape/util/ZPP_CbTypeList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif

Void Creature_obj::__construct(::String _name,::phoenix::Vector _pos,::phoenix::Vector _size,::phoenix::Vector _bounds)
{
HX_STACK_FRAME("Creature","new",0x2a0dde51,"Creature.new","Creature.hx",22,0xc6ca163f)
HX_STACK_THIS(this)
HX_STACK_ARG(_name,"_name")
HX_STACK_ARG(_pos,"_pos")
HX_STACK_ARG(_size,"_size")
HX_STACK_ARG(_bounds,"_bounds")
{
	HX_STACK_LINE(24)
	Float tmp = (Float(_bounds->x) / Float((int)2));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	Float radius = tmp;		HX_STACK_VAR(radius,"radius");
	HX_STACK_LINE(25)
	Float tmp1 = (Float(_bounds->y) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	Float half_height = tmp1;		HX_STACK_VAR(half_height,"half_height");
	HX_STACK_LINE(26)
	Float tmp2 = (_size->y - _bounds->y);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(26)
	Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(26)
	Float delta = tmp3;		HX_STACK_VAR(delta,"delta");
	struct _Function_1_1{
		inline static Dynamic Block( ::String &_name,::phoenix::Vector &_pos,::phoenix::Vector &_size){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Creature.hx",29,0xc6ca163f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , _name,false);
				__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , _pos,false);
				__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , _size,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(29)
	Dynamic tmp4 = _Function_1_1::Block(_name,_pos,_size);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(29)
	super::__construct(tmp4);
	HX_STACK_LINE(35)
	::phoenix::geometry::Geometry tmp5 = this->geometry;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(35)
	Float tmp6 = delta;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(35)
	Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(35)
	::phoenix::Vector tmp8 = ::phoenix::Vector_obj::__new((int)0,tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(35)
	tmp5->translate(tmp8);
	HX_STACK_LINE(38)
	{
		HX_STACK_LINE(40)
		Float tmp9 = _pos->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(40)
		Float tmp10 = _pos->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(41)
		Float tmp11 = _bounds->x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(41)
		Float tmp12 = _bounds->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(42)
		::nape::phys::BodyType tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			::nape::phys::BodyType tmp14 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(42)
			bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(42)
			if ((tmp15)){
				HX_STACK_LINE(42)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(42)
				::nape::phys::BodyType tmp16 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(42)
				::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = tmp16;
				HX_STACK_LINE(42)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(42)
			tmp13 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
		}
		struct _Function_2_1{
			inline static Dynamic Block( ::nape::phys::BodyType &tmp13,Float &tmp9,Float &tmp11,Float &tmp10,Float &tmp12){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Creature.hx",38,0xc6ca163f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("collider","\x34","\xdf","\xd5","\xc9"),false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp9,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp10,false);
					__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp11,false);
					__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp12,false);
					__result->Add(HX_HCSTRING("body_type","\xb7","\xc8","\xf4","\x2c") , tmp13,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(38)
		Dynamic tmp14 = _Function_2_1::Block(tmp13,tmp9,tmp11,tmp10,tmp12);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(38)
		::luxe::components::physics::nape::BoxCollider tmp15 = ::luxe::components::physics::nape::BoxCollider_obj::__new(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(38)
		::luxe::components::physics::nape::BoxCollider tmp16 = this->collider = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(38)
		::luxe::components::physics::nape::BoxCollider _component = tmp16;		HX_STACK_VAR(_component,"_component");
		HX_STACK_LINE(38)
		(this->component_count)++;
		HX_STACK_LINE(38)
		::luxe::components::Components tmp17 = this->_components;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(38)
		::luxe::components::physics::nape::BoxCollider tmp18 = _component;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(38)
		tmp17->add(tmp18);
	}
	HX_STACK_LINE(44)
	::luxe::components::physics::nape::BoxCollider tmp9 = this->collider;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(44)
	this->body = tmp9->body;
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		::nape::phys::Body tmp10 = this->body;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(45)
		::nape::shape::ShapeList tmp11 = tmp10->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(45)
		::nape::shape::ShapeList _this = tmp11;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(45)
		bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(45)
		if ((tmp12)){
			HX_STACK_LINE(45)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot execute null on list elements","\x97","\xfe","\x61","\x00"));
		}
		HX_STACK_LINE(45)
		::nape::shape::ShapeIterator tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(45)
		{
			HX_STACK_LINE(45)
			_this->zpp_inner->valmod();
			HX_STACK_LINE(45)
			::nape::shape::ShapeList tmp14 = _this;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(45)
			tmp13 = ::nape::shape::ShapeIterator_obj::get(tmp14);
		}
		HX_STACK_LINE(45)
		::nape::shape::ShapeIterator it = tmp13;		HX_STACK_VAR(it,"it");
		HX_STACK_LINE(45)
		while((true)){
			HX_STACK_LINE(45)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(45)
			{
				HX_STACK_LINE(45)
				::zpp_nape::util::ZPP_ShapeList tmp15 = it->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(45)
				tmp15->valmod();
				HX_STACK_LINE(45)
				int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(45)
				{
					HX_STACK_LINE(45)
					::nape::shape::ShapeList _this1 = it->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(45)
					_this1->zpp_inner->valmod();
					HX_STACK_LINE(45)
					bool tmp17 = _this1->zpp_inner->zip_length;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(45)
					if ((tmp17)){
						HX_STACK_LINE(45)
						_this1->zpp_inner->zip_length = false;
						HX_STACK_LINE(45)
						{
							HX_STACK_LINE(45)
							::zpp_nape::util::ZNPList_ZPP_Shape tmp18 = _this1->zpp_inner->inner;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(45)
							_this1->zpp_inner->user_length = tmp18->length;
						}
					}
					HX_STACK_LINE(45)
					tmp16 = _this1->zpp_inner->user_length;
				}
				HX_STACK_LINE(45)
				int length = tmp16;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(45)
				it->zpp_critical = true;
				HX_STACK_LINE(45)
				bool tmp17 = (it->zpp_i < length);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(45)
				if ((tmp17)){
					HX_STACK_LINE(45)
					tmp14 = true;
				}
				else{
					HX_STACK_LINE(45)
					{
						HX_STACK_LINE(45)
						::nape::shape::ShapeIterator tmp18 = ::nape::shape::ShapeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(45)
						it->zpp_next = tmp18;
						HX_STACK_LINE(45)
						::nape::shape::ShapeIterator_obj::zpp_pool = it;
						HX_STACK_LINE(45)
						it->zpp_inner = null();
					}
					HX_STACK_LINE(45)
					tmp14 = false;
				}
			}
			HX_STACK_LINE(45)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(45)
			if ((tmp15)){
				HX_STACK_LINE(45)
				break;
			}
			HX_STACK_LINE(45)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(45)
				::nape::shape::Shape tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(45)
				{
					HX_STACK_LINE(45)
					it->zpp_critical = false;
					HX_STACK_LINE(45)
					int tmp17 = (it->zpp_i)++;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(45)
					tmp16 = it->zpp_inner->at(tmp17);
				}
				HX_STACK_LINE(45)
				{
					HX_STACK_LINE(45)
					{
						HX_STACK_LINE(45)
						tmp16->zpp_inner->immutable_midstep(HX_HCSTRING("Shape::sensorEnabled","\xc6","\x60","\x6c","\x36"));
						HX_STACK_LINE(45)
						tmp16->zpp_inner->sensorEnabled = true;
						HX_STACK_LINE(45)
						tmp16->zpp_inner->wake();
					}
					HX_STACK_LINE(45)
					tmp16->zpp_inner->sensorEnabled;
				}
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(45)
						{
							HX_STACK_LINE(45)
							::nape::shape::ShapeIterator tmp16 = ::nape::shape::ShapeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(45)
							it->zpp_next = tmp16;
							HX_STACK_LINE(45)
							::nape::shape::ShapeIterator_obj::zpp_pool = it;
							HX_STACK_LINE(45)
							it->zpp_inner = null();
						}
						HX_STACK_LINE(45)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(45)
		_this;
	}
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		::nape::callbacks::CbTypeList tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			::nape::phys::Body tmp11 = this->body;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(46)
			::nape::phys::Body _this = tmp11;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(46)
			::nape::callbacks::CbTypeList tmp12 = _this->zpp_inner_i->wrap_cbTypes;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(46)
			bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(46)
			if ((tmp13)){
				HX_STACK_LINE(46)
				_this->zpp_inner_i->setupcbTypes();
			}
			HX_STACK_LINE(46)
			tmp10 = _this->zpp_inner_i->wrap_cbTypes;
		}
		HX_STACK_LINE(46)
		::nape::callbacks::CbTypeList _this = tmp10;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(46)
		::nape::callbacks::CbType tmp11 = ::World_obj::CBTYPE_CREATURE;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(46)
		::nape::callbacks::CbType obj = tmp11;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(46)
		bool tmp12 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(46)
		if ((tmp12)){
			HX_STACK_LINE(46)
			::nape::callbacks::CbType tmp13 = obj;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(46)
			_this->push(tmp13);
		}
		else{
			HX_STACK_LINE(46)
			::nape::callbacks::CbType tmp13 = obj;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(46)
			_this->unshift(tmp13);
		}
	}
	HX_STACK_LINE(47)
	Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		::nape::phys::Body tmp11 = this->body;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(47)
		::nape::phys::Body _this = tmp11;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(47)
		Dynamic tmp12 = _this->zpp_inner_i->userData;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(47)
		bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(47)
		if ((tmp13)){
			struct _Function_3_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Creature.hx",47,0xc6ca163f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(47)
			Dynamic tmp14 = _Function_3_1::Block();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(47)
			_this->zpp_inner_i->userData = tmp14;
		}
		HX_STACK_LINE(47)
		tmp10 = _this->zpp_inner_i->userData;
	}
	HX_STACK_LINE(47)
	tmp10->__FieldRef(HX_HCSTRING("entity","\x23","\x13","\x1c","\x05")) = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(48)
	{
		HX_STACK_LINE(48)
		::nape::phys::Body tmp11 = this->body;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(48)
		::nape::phys::Body _this = tmp11;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			::String tmp12 = HX_HCSTRING("false","\xa3","\x35","\x4f","\xfb");		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(48)
			::String tmp13 = (HX_HCSTRING("Body::","\x02","\x8e","\x7d","\x8f") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(48)
			_this->zpp_inner->immutable_midstep(tmp13);
			HX_STACK_LINE(48)
			bool tmp14 = _this->zpp_inner->norotate;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(48)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(48)
			bool tmp16 = (tmp15 != false);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(48)
			if ((tmp16)){
				HX_STACK_LINE(48)
				bool tmp17 = true;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(48)
				_this->zpp_inner->norotate = tmp17;
				HX_STACK_LINE(48)
				_this->zpp_inner->invalidate_inertia();
			}
		}
		HX_STACK_LINE(48)
		bool tmp12 = _this->zpp_inner->norotate;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(48)
		!(tmp12);
	}
}
;
	return null();
}

//Creature_obj::~Creature_obj() { }

Dynamic Creature_obj::__CreateEmpty() { return  new Creature_obj; }
hx::ObjectPtr< Creature_obj > Creature_obj::__new(::String _name,::phoenix::Vector _pos,::phoenix::Vector _size,::phoenix::Vector _bounds)
{  hx::ObjectPtr< Creature_obj > _result_ = new Creature_obj();
	_result_->__construct(_name,_pos,_size,_bounds);
	return _result_;}

Dynamic Creature_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Creature_obj > _result_ = new Creature_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void Creature_obj::set_animation( ::String anim_name){
{
		HX_STACK_FRAME("Creature","set_animation",0x44adea18,"Creature.set_animation","Creature.hx",52,0xc6ca163f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(anim_name,"anim_name")
		HX_STACK_LINE(53)
		::luxe::components::sprite::SpriteAnimation tmp = this->animation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(53)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(53)
		if ((tmp1)){
			HX_STACK_LINE(53)
			return null();
		}
		HX_STACK_LINE(55)
		::luxe::components::sprite::SpriteAnimation tmp2 = this->animation;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		::String tmp3 = tmp2->animation;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(55)
		::String tmp4 = anim_name;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(55)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(55)
		if ((tmp5)){
			HX_STACK_LINE(57)
			::luxe::components::sprite::SpriteAnimation tmp6 = this->animation;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(57)
			::String tmp7 = anim_name;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(57)
			tmp6->set_animation(tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Creature_obj,set_animation,(void))

Void Creature_obj::init( ){
{
		HX_STACK_FRAME("Creature","init",0x9ecd5fff,"Creature.init","luxe/macros/EntityRules.hx",35,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->super::init();
	}
return null();
}


Void Creature_obj::ondestroy( ){
{
		HX_STACK_FRAME("Creature","ondestroy",0x1cd6566c,"Creature.ondestroy","luxe/macros/EntityRules.hx",47,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->super::ondestroy();
	}
return null();
}



Creature_obj::Creature_obj()
{
}

void Creature_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Creature);
	HX_MARK_MEMBER_NAME(controller,"controller");
	HX_MARK_MEMBER_NAME(animation,"animation");
	HX_MARK_MEMBER_NAME(collider,"collider");
	HX_MARK_MEMBER_NAME(body,"body");
	::luxe::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Creature_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(controller,"controller");
	HX_VISIT_MEMBER_NAME(animation,"animation");
	HX_VISIT_MEMBER_NAME(collider,"collider");
	HX_VISIT_MEMBER_NAME(body,"body");
	::luxe::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Creature_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { return body; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"collider") ) { return collider; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { return animation; }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"controller") ) { return controller; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_animation") ) { return set_animation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Creature_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast< ::nape::phys::Body >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"collider") ) { collider=inValue.Cast< ::luxe::components::physics::nape::BoxCollider >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { animation=inValue.Cast< ::luxe::components::sprite::SpriteAnimation >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"controller") ) { controller=inValue.Cast< ::Controller >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Creature_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("controller","\x9c","\x98","\xbe","\x04"));
	outFields->push(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"));
	outFields->push(HX_HCSTRING("collider","\x34","\xdf","\xd5","\xc9"));
	outFields->push(HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Controller*/ ,(int)offsetof(Creature_obj,controller),HX_HCSTRING("controller","\x9c","\x98","\xbe","\x04")},
	{hx::fsObject /*::luxe::components::sprite::SpriteAnimation*/ ,(int)offsetof(Creature_obj,animation),HX_HCSTRING("animation","\x04","\xef","\x34","\x4b")},
	{hx::fsObject /*::luxe::components::physics::nape::BoxCollider*/ ,(int)offsetof(Creature_obj,collider),HX_HCSTRING("collider","\x34","\xdf","\xd5","\xc9")},
	{hx::fsObject /*::nape::phys::Body*/ ,(int)offsetof(Creature_obj,body),HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("controller","\x9c","\x98","\xbe","\x04"),
	HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"),
	HX_HCSTRING("collider","\x34","\xdf","\xd5","\xc9"),
	HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"),
	HX_HCSTRING("set_animation","\xe7","\xa4","\x9e","\x51"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Creature_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Creature_obj::__mClass,"__mClass");
};

#endif

hx::Class Creature_obj::__mClass;

void Creature_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Creature","\xdf","\x61","\xb2","\x05");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Creature_obj >;
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

