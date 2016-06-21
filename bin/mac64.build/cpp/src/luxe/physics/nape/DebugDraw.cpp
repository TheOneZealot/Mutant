#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_luxe_Draw
#include <luxe/Draw.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_physics_nape_DebugDraw
#include <luxe/physics/nape/DebugDraw.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2Iterator
#include <nape/geom/Vec2Iterator.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2List
#include <nape/geom/Vec2List.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Compound
#include <nape/phys/Compound.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Circle
#include <nape/shape/Circle.h>
#endif
#ifndef INCLUDED_nape_shape_Polygon
#include <nape/shape/Polygon.h>
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
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Quaternion
#include <phoenix/Quaternion.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_Spatial
#include <phoenix/Spatial.h>
#endif
#ifndef INCLUDED_phoenix_Transform
#include <phoenix/Transform.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_RectangleGeometry
#include <phoenix/geometry/RectangleGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_RingGeometry
#include <phoenix/geometry/RingGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextureCoord
#include <phoenix/geometry/TextureCoord.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextureCoordSet
#include <phoenix/geometry/TextureCoordSet.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
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
#ifndef INCLUDED_zpp_nape_shape_ZPP_Circle
#include <zpp_nape/shape/ZPP_Circle.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Vec2List
#include <zpp_nape/util/ZPP_Vec2List.h>
#endif
namespace luxe{
namespace physics{
namespace nape{

Void DebugDraw_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("luxe.physics.nape.DebugDraw","new",0x3003eb42,"luxe.physics.nape.DebugDraw.new","luxe/physics/nape/DebugDraw.hx",25,0xfe8d84ad)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(47)
	this->visible = true;
	HX_STACK_LINE(39)
	this->drawConstraints = false;
	HX_STACK_LINE(37)
	this->drawShapeAngleIndicators = true;
	HX_STACK_LINE(34)
	this->drawShapeDetail = false;
	HX_STACK_LINE(31)
	this->drawBodyDetail = true;
	HX_STACK_LINE(28)
	this->drawBodies = true;
	HX_STACK_LINE(56)
	bool tmp = (_options == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	if ((tmp)){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/physics/nape/DebugDraw.hx",56,0xfe8d84ad)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(56)
		tmp1 = _Function_2_1::Block();
	}
	else{
		HX_STACK_LINE(56)
		tmp1 = _options;
	}
	HX_STACK_LINE(56)
	this->options = tmp1;
	HX_STACK_LINE(58)
	Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	::phoenix::Batcher tmp3 = tmp2->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(58)
	bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(58)
	if ((tmp4)){
		HX_STACK_LINE(58)
		::phoenix::Renderer tmp5 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(58)
		Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(58)
		tmp6->__FieldRef(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0")) = tmp5->batcher;
	}
	HX_STACK_LINE(60)
	::haxe::ds::ObjectMap tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(60)
	{
		HX_STACK_LINE(60)
		::haxe::ds::ObjectMap tmp6 = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(60)
		::haxe::ds::ObjectMap tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(60)
		tmp5 = tmp7;
	}
	HX_STACK_LINE(60)
	this->geometry = tmp5;
}
;
	return null();
}

//DebugDraw_obj::~DebugDraw_obj() { }

Dynamic DebugDraw_obj::__CreateEmpty() { return  new DebugDraw_obj; }
hx::ObjectPtr< DebugDraw_obj > DebugDraw_obj::__new(Dynamic _options)
{  hx::ObjectPtr< DebugDraw_obj > _result_ = new DebugDraw_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic DebugDraw_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DebugDraw_obj > _result_ = new DebugDraw_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void DebugDraw_obj::add( ::nape::phys::Body _body,::phoenix::Color _active_color,::phoenix::Color _inactive_color){
{
		HX_STACK_FRAME("luxe.physics.nape.DebugDraw","add",0x2ffa0d03,"luxe.physics.nape.DebugDraw.add","luxe/physics/nape/DebugDraw.hx",67,0xfe8d84ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_body,"_body")
		HX_STACK_ARG(_active_color,"_active_color")
		HX_STACK_ARG(_inactive_color,"_inactive_color")
		HX_STACK_LINE(69)
		bool tmp = (_active_color == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		if ((tmp)){
			HX_STACK_LINE(69)
			::phoenix::Color tmp1 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(69)
			::phoenix::Color tmp2 = tmp1->rgb((int)16121979);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(69)
			_active_color = tmp2;
		}
		HX_STACK_LINE(73)
		Dynamic tmp1 = this->options;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		Dynamic tmp2 = tmp1->__Field(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(74)
		Dynamic tmp4 = tmp3->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(75)
		bool tmp5 = this->visible;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(76)
		Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(76)
		::phoenix::Batcher tmp7 = tmp6->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		struct _Function_1_1{
			inline static Dynamic Block( bool &tmp5,Dynamic &tmp4,Dynamic &tmp2,::phoenix::Batcher &tmp7){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/physics/nape/DebugDraw.hx",71,0xfe8d84ad)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88") , (int)1,false);
					__result->Add(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf") , tmp2,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp4,false);
					__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , tmp5,false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp7,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(71)
		Dynamic tmp8 = _Function_1_1::Block(tmp5,tmp4,tmp2,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(71)
		::phoenix::geometry::Geometry tmp9 = ::phoenix::geometry::Geometry_obj::__new(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(71)
		::phoenix::geometry::Geometry bodyGeom = tmp9;		HX_STACK_VAR(bodyGeom,"bodyGeom");
		HX_STACK_LINE(79)
		Array< ::Dynamic > shapeVerts;		HX_STACK_VAR(shapeVerts,"shapeVerts");
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			::nape::shape::ShapeIterator tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(80)
			{
				HX_STACK_LINE(80)
				::nape::shape::ShapeList tmp11 = _body->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(80)
				::nape::shape::ShapeList _this = tmp11;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(80)
				_this->zpp_inner->valmod();
				HX_STACK_LINE(80)
				::nape::shape::ShapeList tmp12 = _this;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(80)
				tmp10 = ::nape::shape::ShapeIterator_obj::get(tmp12);
			}
			HX_STACK_LINE(80)
			::nape::shape::ShapeIterator _g = tmp10;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(80)
			while((true)){
				HX_STACK_LINE(80)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(80)
				{
					HX_STACK_LINE(80)
					::zpp_nape::util::ZPP_ShapeList tmp12 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(80)
					tmp12->valmod();
					HX_STACK_LINE(80)
					int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(80)
					{
						HX_STACK_LINE(80)
						::nape::shape::ShapeList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(80)
						_this->zpp_inner->valmod();
						HX_STACK_LINE(80)
						bool tmp14 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(80)
						if ((tmp14)){
							HX_STACK_LINE(80)
							_this->zpp_inner->zip_length = false;
							HX_STACK_LINE(80)
							{
								HX_STACK_LINE(80)
								::zpp_nape::util::ZNPList_ZPP_Shape tmp15 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(80)
								_this->zpp_inner->user_length = tmp15->length;
							}
						}
						HX_STACK_LINE(80)
						tmp13 = _this->zpp_inner->user_length;
					}
					HX_STACK_LINE(80)
					int length = tmp13;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(80)
					_g->zpp_critical = true;
					HX_STACK_LINE(80)
					bool tmp14 = (_g->zpp_i < length);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(80)
					if ((tmp14)){
						HX_STACK_LINE(80)
						tmp11 = true;
					}
					else{
						HX_STACK_LINE(80)
						{
							HX_STACK_LINE(80)
							::nape::shape::ShapeIterator tmp15 = ::nape::shape::ShapeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(80)
							_g->zpp_next = tmp15;
							HX_STACK_LINE(80)
							::nape::shape::ShapeIterator_obj::zpp_pool = _g;
							HX_STACK_LINE(80)
							_g->zpp_inner = null();
						}
						HX_STACK_LINE(80)
						tmp11 = false;
					}
				}
				HX_STACK_LINE(80)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(80)
				if ((tmp12)){
					HX_STACK_LINE(80)
					break;
				}
				HX_STACK_LINE(80)
				::nape::shape::Shape tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(80)
				{
					HX_STACK_LINE(80)
					_g->zpp_critical = false;
					HX_STACK_LINE(80)
					int tmp14 = (_g->zpp_i)++;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(80)
					tmp13 = _g->zpp_inner->at(tmp14);
				}
				HX_STACK_LINE(80)
				::nape::shape::Shape _shape = tmp13;		HX_STACK_VAR(_shape,"_shape");
				HX_STACK_LINE(82)
				int tmp14 = _shape->zpp_inner->type;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(82)
				bool tmp15 = (tmp14 == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(82)
				if ((tmp15)){
					HX_STACK_LINE(83)
					int tmp16 = _shape->zpp_inner->type;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(83)
					bool tmp17 = (tmp16 == (int)0);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(83)
					::nape::shape::Circle tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(83)
					if ((tmp17)){
						HX_STACK_LINE(83)
						::zpp_nape::shape::ZPP_Circle tmp19 = _shape->zpp_inner->circle;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(83)
						tmp18 = tmp19->outer_zn;
					}
					else{
						HX_STACK_LINE(83)
						tmp18 = null();
					}
					HX_STACK_LINE(83)
					shapeVerts = this->make_circle_verts(tmp18);
				}
				else{
					HX_STACK_LINE(85)
					::nape::geom::Vec2List tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(85)
					{
						HX_STACK_LINE(85)
						int tmp17 = _shape->zpp_inner->type;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(85)
						bool tmp18 = (tmp17 == (int)1);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(85)
						::nape::shape::Polygon tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(85)
						if ((tmp18)){
							HX_STACK_LINE(85)
							::zpp_nape::shape::ZPP_Polygon tmp20 = _shape->zpp_inner->polygon;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(85)
							tmp19 = tmp20->outer_zn;
						}
						else{
							HX_STACK_LINE(85)
							tmp19 = null();
						}
						HX_STACK_LINE(85)
						::nape::shape::Polygon _this = tmp19;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(85)
						::nape::geom::Vec2List tmp20 = _this->zpp_inner_zn->wrap_lverts;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(85)
						bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(85)
						if ((tmp21)){
							HX_STACK_LINE(85)
							_this->zpp_inner_zn->getlverts();
						}
						HX_STACK_LINE(85)
						tmp16 = _this->zpp_inner_zn->wrap_lverts;
					}
					HX_STACK_LINE(85)
					shapeVerts = this->make_polygon_verts(tmp16);
				}
				HX_STACK_LINE(88)
				bodyGeom->vertices = bodyGeom->vertices->concat(shapeVerts);
			}
		}
		HX_STACK_LINE(92)
		::phoenix::Color tmp10 = _active_color;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(92)
		bodyGeom->set_color(tmp10);
		HX_STACK_LINE(94)
		bool tmp11 = (_inactive_color == null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(94)
		if ((tmp11)){
			HX_STACK_LINE(95)
			::phoenix::Color tmp12 = _active_color->clone();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(95)
			_inactive_color = tmp12;
			HX_STACK_LINE(96)
			Float tmp13 = (_active_color->a * ((Float)0.4));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(96)
			_inactive_color->a = tmp13;
		}
		HX_STACK_LINE(99)
		::haxe::ds::ObjectMap tmp12 = this->geometry;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(99)
		::nape::phys::Body tmp13 = _body;		HX_STACK_VAR(tmp13,"tmp13");
		struct _Function_1_2{
			inline static Dynamic Block( ::phoenix::Color &_active_color,::phoenix::geometry::Geometry &bodyGeom,::phoenix::Color &_inactive_color){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/physics/nape/DebugDraw.hx",99,0xfe8d84ad)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2") , bodyGeom,false);
					__result->Add(HX_HCSTRING("active_color","\xea","\x92","\xca","\x71") , _active_color,false);
					__result->Add(HX_HCSTRING("inactive_color","\x4f","\xb2","\x97","\x43") , _inactive_color,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(99)
		Dynamic tmp14 = _Function_1_2::Block(_active_color,bodyGeom,_inactive_color);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(99)
		tmp12->set(tmp13,tmp14);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DebugDraw_obj,add,(void))

Void DebugDraw_obj::remove( ::nape::phys::Body _body){
{
		HX_STACK_FRAME("luxe.physics.nape.DebugDraw","remove",0x87c6faa2,"luxe.physics.nape.DebugDraw.remove","luxe/physics/nape/DebugDraw.hx",104,0xfe8d84ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_body,"_body")
		HX_STACK_LINE(106)
		::haxe::ds::ObjectMap tmp = this->geometry;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(106)
		::nape::phys::Body tmp1 = _body;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(106)
		Dynamic cache = tmp2;		HX_STACK_VAR(cache,"cache");
		HX_STACK_LINE(108)
		bool tmp3 = (cache == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(108)
		if ((tmp3)){
			HX_STACK_LINE(109)
			return null();
		}
		HX_STACK_LINE(112)
		cache->__Field(HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2"), hx::paccDynamic )->__Field(HX_HCSTRING("drop","\x2f","\x38","\x70","\x42"), hx::paccDynamic )(null());
		HX_STACK_LINE(113)
		cache->__FieldRef(HX_HCSTRING("active_color","\xea","\x92","\xca","\x71")) = null();
		HX_STACK_LINE(114)
		cache->__FieldRef(HX_HCSTRING("inactive_color","\x4f","\xb2","\x97","\x43")) = null();
		HX_STACK_LINE(115)
		cache = null();
		HX_STACK_LINE(117)
		::haxe::ds::ObjectMap tmp4 = this->geometry;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(117)
		::nape::phys::Body tmp5 = _body;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(117)
		tmp4->remove(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DebugDraw_obj,remove,(void))

Void DebugDraw_obj::update( ){
{
		HX_STACK_FRAME("luxe.physics.nape.DebugDraw","update",0x0a43e467,"luxe.physics.nape.DebugDraw.update","luxe/physics/nape/DebugDraw.hx",125,0xfe8d84ad)
		HX_STACK_THIS(this)
		HX_STACK_LINE(127)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(127)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(127)
		if ((tmp1)){
			HX_STACK_LINE(128)
			return null();
		}
		HX_STACK_LINE(131)
		Dynamic cache;		HX_STACK_VAR(cache,"cache");
		HX_STACK_LINE(133)
		::haxe::ds::ObjectMap tmp2 = this->geometry;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(133)
		Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(133)
		for(::cpp::FastIterator_obj< ::nape::phys::Body > *__it = ::cpp::CreateFastIterator< ::nape::phys::Body >(tmp3);  __it->hasNext(); ){
			::nape::phys::Body body = __it->next();
			{
				HX_STACK_LINE(135)
				::haxe::ds::ObjectMap tmp4 = this->geometry;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(135)
				::nape::phys::Body tmp5 = body;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(135)
				Dynamic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(135)
				cache = tmp6;
				HX_STACK_LINE(137)
				{
					HX_STACK_LINE(137)
					::phoenix::Transform tmp7 = cache->__Field(HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2"), hx::paccDynamic )->__Field(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(137)
					::phoenix::Vector tmp8 = tmp7->local->pos;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(137)
					::phoenix::Vector _this = tmp8;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(137)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(137)
					{
						HX_STACK_LINE(137)
						::nape::geom::Vec2 tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(137)
						{
							HX_STACK_LINE(137)
							::nape::geom::Vec2 tmp11 = body->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(137)
							bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(137)
							if ((tmp12)){
								HX_STACK_LINE(137)
								body->zpp_inner->setupPosition();
							}
							HX_STACK_LINE(137)
							tmp10 = body->zpp_inner->wrap_pos;
						}
						HX_STACK_LINE(137)
						::nape::geom::Vec2 _this1 = tmp10;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(137)
						bool tmp11 = (_this1 != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(137)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(137)
						if ((tmp11)){
							HX_STACK_LINE(137)
							tmp12 = _this1->zpp_disp;
						}
						else{
							HX_STACK_LINE(137)
							tmp12 = false;
						}
						HX_STACK_LINE(137)
						if ((tmp12)){
							HX_STACK_LINE(137)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(137)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(137)
							HX_STACK_DO_THROW(tmp14);
						}
						HX_STACK_LINE(137)
						{
							HX_STACK_LINE(137)
							::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(137)
							bool tmp13 = (_this2->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(137)
							if ((tmp13)){
								HX_STACK_LINE(137)
								_this2->_validate();
							}
						}
						HX_STACK_LINE(137)
						tmp9 = _this1->zpp_inner->x;
					}
					HX_STACK_LINE(137)
					Float _x = tmp9;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(137)
					_this->x = _x;
					HX_STACK_LINE(137)
					bool tmp10 = _this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(137)
					if ((tmp10)){
						HX_STACK_LINE(137)
						_this->x;
					}
					else{
						HX_STACK_LINE(137)
						bool tmp11 = (_this->listen_x != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(137)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(137)
						if ((tmp11)){
							HX_STACK_LINE(137)
							bool tmp13 = _this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(137)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(137)
							tmp12 = !(tmp14);
						}
						else{
							HX_STACK_LINE(137)
							tmp12 = false;
						}
						HX_STACK_LINE(137)
						if ((tmp12)){
							HX_STACK_LINE(137)
							Float tmp13 = _x;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(137)
							_this->listen_x(tmp13);
						}
						HX_STACK_LINE(137)
						_this->x;
					}
				}
				HX_STACK_LINE(138)
				{
					HX_STACK_LINE(138)
					::phoenix::Transform tmp7 = cache->__Field(HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2"), hx::paccDynamic )->__Field(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(138)
					::phoenix::Vector tmp8 = tmp7->local->pos;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(138)
					::phoenix::Vector _this = tmp8;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(138)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(138)
					{
						HX_STACK_LINE(138)
						::nape::geom::Vec2 tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(138)
						{
							HX_STACK_LINE(138)
							::nape::geom::Vec2 tmp11 = body->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(138)
							bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(138)
							if ((tmp12)){
								HX_STACK_LINE(138)
								body->zpp_inner->setupPosition();
							}
							HX_STACK_LINE(138)
							tmp10 = body->zpp_inner->wrap_pos;
						}
						HX_STACK_LINE(138)
						::nape::geom::Vec2 _this1 = tmp10;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(138)
						bool tmp11 = (_this1 != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(138)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(138)
						if ((tmp11)){
							HX_STACK_LINE(138)
							tmp12 = _this1->zpp_disp;
						}
						else{
							HX_STACK_LINE(138)
							tmp12 = false;
						}
						HX_STACK_LINE(138)
						if ((tmp12)){
							HX_STACK_LINE(138)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(138)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(138)
							HX_STACK_DO_THROW(tmp14);
						}
						HX_STACK_LINE(138)
						{
							HX_STACK_LINE(138)
							::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(138)
							bool tmp13 = (_this2->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(138)
							if ((tmp13)){
								HX_STACK_LINE(138)
								_this2->_validate();
							}
						}
						HX_STACK_LINE(138)
						tmp9 = _this1->zpp_inner->y;
					}
					HX_STACK_LINE(138)
					Float _y = tmp9;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(138)
					_this->y = _y;
					HX_STACK_LINE(138)
					bool tmp10 = _this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(138)
					if ((tmp10)){
						HX_STACK_LINE(138)
						_this->y;
					}
					else{
						HX_STACK_LINE(138)
						bool tmp11 = (_this->listen_y != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(138)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(138)
						if ((tmp11)){
							HX_STACK_LINE(138)
							bool tmp13 = _this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(138)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(138)
							tmp12 = !(tmp14);
						}
						else{
							HX_STACK_LINE(138)
							tmp12 = false;
						}
						HX_STACK_LINE(138)
						if ((tmp12)){
							HX_STACK_LINE(138)
							Float tmp13 = _y;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(138)
							_this->listen_y(tmp13);
						}
						HX_STACK_LINE(138)
						_this->y;
					}
				}
				HX_STACK_LINE(140)
				{
					HX_STACK_LINE(140)
					::phoenix::Vector tmp7 = ::luxe::physics::nape::DebugDraw_obj::cache_euler;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(140)
					::phoenix::Vector _this = tmp7;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(140)
					Float tmp8 = body->zpp_inner->rot;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(140)
					Float _z = tmp8;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(140)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(140)
					_this->ignore_listeners = true;
					HX_STACK_LINE(140)
					{
						HX_STACK_LINE(140)
						_this->x = (int)0;
						HX_STACK_LINE(140)
						bool tmp9 = _this->_construct;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(140)
						if ((tmp9)){
							HX_STACK_LINE(140)
							_this->x;
						}
						else{
							HX_STACK_LINE(140)
							bool tmp10 = (_this->listen_x != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(140)
							bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(140)
							if ((tmp10)){
								HX_STACK_LINE(140)
								bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(140)
								bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(140)
								tmp11 = !(tmp13);
							}
							else{
								HX_STACK_LINE(140)
								tmp11 = false;
							}
							HX_STACK_LINE(140)
							if ((tmp11)){
								HX_STACK_LINE(140)
								_this->listen_x((int)0);
							}
							HX_STACK_LINE(140)
							_this->x;
						}
					}
					HX_STACK_LINE(140)
					{
						HX_STACK_LINE(140)
						_this->y = (int)0;
						HX_STACK_LINE(140)
						bool tmp9 = _this->_construct;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(140)
						if ((tmp9)){
							HX_STACK_LINE(140)
							_this->y;
						}
						else{
							HX_STACK_LINE(140)
							bool tmp10 = (_this->listen_y != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(140)
							bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(140)
							if ((tmp10)){
								HX_STACK_LINE(140)
								bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(140)
								bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(140)
								tmp11 = !(tmp13);
							}
							else{
								HX_STACK_LINE(140)
								tmp11 = false;
							}
							HX_STACK_LINE(140)
							if ((tmp11)){
								HX_STACK_LINE(140)
								_this->listen_y((int)0);
							}
							HX_STACK_LINE(140)
							_this->y;
						}
					}
					HX_STACK_LINE(140)
					{
						HX_STACK_LINE(140)
						_this->z = _z;
						HX_STACK_LINE(140)
						bool tmp9 = _this->_construct;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(140)
						if ((tmp9)){
							HX_STACK_LINE(140)
							_this->z;
						}
						else{
							HX_STACK_LINE(140)
							bool tmp10 = (_this->listen_z != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(140)
							bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(140)
							if ((tmp10)){
								HX_STACK_LINE(140)
								bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(140)
								bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(140)
								tmp11 = !(tmp13);
							}
							else{
								HX_STACK_LINE(140)
								tmp11 = false;
							}
							HX_STACK_LINE(140)
							if ((tmp11)){
								HX_STACK_LINE(140)
								Float tmp12 = _z;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(140)
								_this->listen_z(tmp12);
							}
							HX_STACK_LINE(140)
							_this->z;
						}
					}
					HX_STACK_LINE(140)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(140)
					bool tmp9 = (_this->listen_x != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(140)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(140)
					if ((tmp9)){
						HX_STACK_LINE(140)
						bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(140)
						bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(140)
						tmp10 = !(tmp12);
					}
					else{
						HX_STACK_LINE(140)
						tmp10 = false;
					}
					HX_STACK_LINE(140)
					if ((tmp10)){
						HX_STACK_LINE(140)
						Float tmp11 = _this->x;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(140)
						_this->listen_x(tmp11);
					}
					HX_STACK_LINE(140)
					bool tmp11 = (_this->listen_y != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(140)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(140)
					if ((tmp11)){
						HX_STACK_LINE(140)
						bool tmp13 = _this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(140)
						bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(140)
						tmp12 = !(tmp14);
					}
					else{
						HX_STACK_LINE(140)
						tmp12 = false;
					}
					HX_STACK_LINE(140)
					if ((tmp12)){
						HX_STACK_LINE(140)
						Float tmp13 = _this->y;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(140)
						_this->listen_y(tmp13);
					}
					HX_STACK_LINE(140)
					bool tmp13 = (_this->listen_z != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(140)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(140)
					if ((tmp13)){
						HX_STACK_LINE(140)
						bool tmp15 = _this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(140)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(140)
						tmp14 = !(tmp16);
					}
					else{
						HX_STACK_LINE(140)
						tmp14 = false;
					}
					HX_STACK_LINE(140)
					if ((tmp14)){
						HX_STACK_LINE(140)
						Float tmp15 = _this->z;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(140)
						_this->listen_z(tmp15);
					}
					HX_STACK_LINE(140)
					_this;
				}
				HX_STACK_LINE(141)
				::phoenix::Transform tmp7 = cache->__Field(HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2"), hx::paccDynamic )->__Field(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(141)
				::phoenix::Quaternion tmp8 = tmp7->local->rotation;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(141)
				::phoenix::Vector tmp9 = ::luxe::physics::nape::DebugDraw_obj::cache_euler;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(141)
				tmp8->setFromEuler(tmp9,null());
				HX_STACK_LINE(143)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(143)
				{
					HX_STACK_LINE(143)
					::zpp_nape::space::ZPP_Space tmp11 = body->zpp_inner->space;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(143)
					bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(143)
					if ((tmp12)){
						HX_STACK_LINE(143)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: isSleeping makes no sense if the object is not contained within a Space","\x1a","\xc1","\xd3","\xeb"));
					}
					HX_STACK_LINE(143)
					::zpp_nape::space::ZPP_Component tmp13 = body->zpp_inner->component;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(143)
					tmp10 = tmp13->sleeping;
				}
				HX_STACK_LINE(143)
				if ((tmp10)){
					HX_STACK_LINE(144)
					::phoenix::Color tmp11 = cache->__Field(HX_HCSTRING("inactive_color","\x4f","\xb2","\x97","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(144)
					cache->__Field(HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2"), hx::paccDynamic )->__Field(HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"), hx::paccDynamic )(tmp11);
				}
				else{
					HX_STACK_LINE(146)
					::phoenix::Color tmp11 = cache->__Field(HX_HCSTRING("active_color","\xea","\x92","\xca","\x71"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(146)
					cache->__Field(HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2"), hx::paccDynamic )->__Field(HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"), hx::paccDynamic )(tmp11);
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DebugDraw_obj,update,(void))

Void DebugDraw_obj::draw_immediate( Dynamic _options){
{
		HX_STACK_FRAME("luxe.physics.nape.DebugDraw","draw_immediate",0x225d5514,"luxe.physics.nape.DebugDraw.draw_immediate","luxe/physics/nape/DebugDraw.hx",156,0xfe8d84ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_options,"_options")
		HX_STACK_LINE(158)
		Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(158)
		Dynamic previous_options = tmp;		HX_STACK_VAR(previous_options,"previous_options");
		HX_STACK_LINE(159)
		Dynamic tmp1 = this->options;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(159)
		Dynamic previous_immediate = tmp1->__Field(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf"), hx::paccDynamic );		HX_STACK_VAR(previous_immediate,"previous_immediate");
		HX_STACK_LINE(161)
		bool tmp2 = (_options != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(161)
		if ((tmp2)){
			HX_STACK_LINE(162)
			this->options = _options;
		}
		HX_STACK_LINE(165)
		Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(165)
		tmp3->__FieldRef(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf")) = true;
		HX_STACK_LINE(167)
		Dynamic cache;		HX_STACK_VAR(cache,"cache");
		HX_STACK_LINE(168)
		::haxe::ds::ObjectMap tmp4 = this->geometry;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(168)
		Dynamic tmp5 = tmp4->keys();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(168)
		for(::cpp::FastIterator_obj< ::nape::phys::Body > *__it = ::cpp::CreateFastIterator< ::nape::phys::Body >(tmp5);  __it->hasNext(); ){
			::nape::phys::Body body = __it->next();
			{
				HX_STACK_LINE(169)
				::haxe::ds::ObjectMap tmp6 = this->geometry;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(169)
				::nape::phys::Body tmp7 = body;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(169)
				Dynamic tmp8 = tmp6->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(169)
				cache = tmp8;
				HX_STACK_LINE(170)
				::nape::phys::Body tmp9 = body;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(170)
				::phoenix::Color tmp10 = cache->__Field(HX_HCSTRING("active_color","\xea","\x92","\xca","\x71"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(170)
				::phoenix::Color tmp11 = cache->__Field(HX_HCSTRING("inactive_color","\x4f","\xb2","\x97","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(170)
				this->draw_body(tmp9,tmp10,tmp11);
			}
;
		}
		HX_STACK_LINE(173)
		this->options = previous_options;
		HX_STACK_LINE(174)
		Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(174)
		tmp6->__FieldRef(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf")) = previous_immediate;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DebugDraw_obj,draw_immediate,(void))

Void DebugDraw_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.physics.nape.DebugDraw","destroy",0x77da60dc,"luxe.physics.nape.DebugDraw.destroy","luxe/physics/nape/DebugDraw.hx",178,0xfe8d84ad)
		HX_STACK_THIS(this)
		HX_STACK_LINE(181)
		::haxe::ds::ObjectMap tmp = this->geometry;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(181)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(181)
		for(::cpp::FastIterator_obj< ::nape::phys::Body > *__it = ::cpp::CreateFastIterator< ::nape::phys::Body >(tmp1);  __it->hasNext(); ){
			::nape::phys::Body key = __it->next();
			{
				HX_STACK_LINE(182)
				::nape::phys::Body tmp2 = key;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(182)
				this->remove(tmp2);
			}
;
		}
		HX_STACK_LINE(185)
		this->geometry = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DebugDraw_obj,destroy,(void))

bool DebugDraw_obj::set_visible( bool state){
	HX_STACK_FRAME("luxe.physics.nape.DebugDraw","set_visible",0x5104ac77,"luxe.physics.nape.DebugDraw.set_visible","luxe/physics/nape/DebugDraw.hx",191,0xfe8d84ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(state,"state")
	HX_STACK_LINE(193)
	bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(193)
	bool tmp1 = state;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(193)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(193)
	if ((tmp2)){
		HX_STACK_LINE(194)
		bool tmp3 = this->visible;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(194)
		return tmp3;
	}
	HX_STACK_LINE(197)
	::haxe::ds::ObjectMap tmp3 = this->geometry;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(197)
	Dynamic tmp4 = tmp3->iterator();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(197)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp4);  __it->hasNext(); ){
		Dynamic cache = __it->next();
		{
			HX_STACK_LINE(198)
			bool tmp5 = state;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(198)
			cache->__Field(HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2"), hx::paccDynamic )->__Field(HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"), hx::paccDynamic )(tmp5);
		}
;
	}
	HX_STACK_LINE(201)
	bool tmp5 = this->visible = state;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(201)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(DebugDraw_obj,set_visible,return )

Void DebugDraw_obj::draw_body( ::nape::phys::Body _body,::phoenix::Color _active_color,::phoenix::Color _inactive_color){
{
		HX_STACK_FRAME("luxe.physics.nape.DebugDraw","draw_body",0x20bccc5f,"luxe.physics.nape.DebugDraw.draw_body","luxe/physics/nape/DebugDraw.hx",205,0xfe8d84ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_body,"_body")
		HX_STACK_ARG(_active_color,"_active_color")
		HX_STACK_ARG(_inactive_color,"_inactive_color")
		HX_STACK_LINE(207)
		bool tmp = _body->debugDraw;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(207)
		if ((tmp)){
			HX_STACK_LINE(209)
			{
				HX_STACK_LINE(209)
				::nape::shape::ShapeIterator tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(209)
				{
					HX_STACK_LINE(209)
					::nape::shape::ShapeList tmp2 = _body->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(209)
					::nape::shape::ShapeList _this = tmp2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(209)
					_this->zpp_inner->valmod();
					HX_STACK_LINE(209)
					::nape::shape::ShapeList tmp3 = _this;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(209)
					tmp1 = ::nape::shape::ShapeIterator_obj::get(tmp3);
				}
				HX_STACK_LINE(209)
				::nape::shape::ShapeIterator _g = tmp1;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(209)
				while((true)){
					HX_STACK_LINE(209)
					bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(209)
					{
						HX_STACK_LINE(209)
						::zpp_nape::util::ZPP_ShapeList tmp3 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(209)
						tmp3->valmod();
						HX_STACK_LINE(209)
						int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(209)
						{
							HX_STACK_LINE(209)
							::nape::shape::ShapeList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(209)
							_this->zpp_inner->valmod();
							HX_STACK_LINE(209)
							bool tmp5 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(209)
							if ((tmp5)){
								HX_STACK_LINE(209)
								_this->zpp_inner->zip_length = false;
								HX_STACK_LINE(209)
								{
									HX_STACK_LINE(209)
									::zpp_nape::util::ZNPList_ZPP_Shape tmp6 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(209)
									_this->zpp_inner->user_length = tmp6->length;
								}
							}
							HX_STACK_LINE(209)
							tmp4 = _this->zpp_inner->user_length;
						}
						HX_STACK_LINE(209)
						int length = tmp4;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(209)
						_g->zpp_critical = true;
						HX_STACK_LINE(209)
						bool tmp5 = (_g->zpp_i < length);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(209)
						if ((tmp5)){
							HX_STACK_LINE(209)
							tmp2 = true;
						}
						else{
							HX_STACK_LINE(209)
							{
								HX_STACK_LINE(209)
								::nape::shape::ShapeIterator tmp6 = ::nape::shape::ShapeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(209)
								_g->zpp_next = tmp6;
								HX_STACK_LINE(209)
								::nape::shape::ShapeIterator_obj::zpp_pool = _g;
								HX_STACK_LINE(209)
								_g->zpp_inner = null();
							}
							HX_STACK_LINE(209)
							tmp2 = false;
						}
					}
					HX_STACK_LINE(209)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(209)
					if ((tmp3)){
						HX_STACK_LINE(209)
						break;
					}
					HX_STACK_LINE(209)
					::nape::shape::Shape tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(209)
					{
						HX_STACK_LINE(209)
						_g->zpp_critical = false;
						HX_STACK_LINE(209)
						int tmp5 = (_g->zpp_i)++;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(209)
						tmp4 = _g->zpp_inner->at(tmp5);
					}
					HX_STACK_LINE(209)
					::nape::shape::Shape _shape = tmp4;		HX_STACK_VAR(_shape,"_shape");
					HX_STACK_LINE(210)
					::nape::shape::Shape tmp5 = _shape;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(210)
					::phoenix::Color tmp6 = _active_color;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(210)
					::phoenix::Color tmp7 = _inactive_color;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(210)
					this->draw_shape(tmp5,tmp6,tmp7);
				}
			}
			HX_STACK_LINE(213)
			bool tmp1 = this->drawBodyDetail;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(213)
			if ((tmp1)){
				HX_STACK_LINE(215)
				::phoenix::Color tmp2 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(215)
				::phoenix::Color tmp3 = tmp2->rgb((int)16777215);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(215)
				::phoenix::Color detail_color = tmp3;		HX_STACK_VAR(detail_color,"detail_color");
				HX_STACK_LINE(217)
				detail_color->a = ((Float)0.1);
				HX_STACK_LINE(219)
				::nape::geom::Vec2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(219)
				{
					HX_STACK_LINE(219)
					::nape::geom::Vec2 tmp5 = _body->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(219)
					bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(219)
					if ((tmp6)){
						HX_STACK_LINE(219)
						_body->zpp_inner->setupPosition();
					}
					HX_STACK_LINE(219)
					tmp4 = _body->zpp_inner->wrap_pos;
				}
				HX_STACK_LINE(219)
				::phoenix::Color tmp5 = detail_color;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(219)
				this->draw_point(tmp4,tmp5);
				HX_STACK_LINE(221)
				::nape::geom::AABB tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(221)
				{
					HX_STACK_LINE(221)
					bool tmp7 = _body->zpp_inner->world;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(221)
					if ((tmp7)){
						HX_STACK_LINE(221)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world has no bounds","\x88","\xea","\xf6","\xa3"));
					}
					HX_STACK_LINE(221)
					::zpp_nape::geom::ZPP_AABB tmp8 = _body->zpp_inner->aabb;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(221)
					tmp6 = tmp8->wrapper();
				}
				HX_STACK_LINE(221)
				::phoenix::Color tmp7 = detail_color;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(221)
				this->draw_AABB(tmp6,tmp7);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DebugDraw_obj,draw_body,(void))

Void DebugDraw_obj::draw_shape( ::nape::shape::Shape _shape,::phoenix::Color _active_color,::phoenix::Color _inactive_color){
{
		HX_STACK_FRAME("luxe.physics.nape.DebugDraw","draw_shape",0x49a316c4,"luxe.physics.nape.DebugDraw.draw_shape","luxe/physics/nape/DebugDraw.hx",228,0xfe8d84ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_shape,"_shape")
		HX_STACK_ARG(_active_color,"_active_color")
		HX_STACK_ARG(_inactive_color,"_inactive_color")
		HX_STACK_LINE(232)
		Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(232)
		Dynamic tmp1 = tmp->__Field(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(233)
		Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(233)
		Dynamic tmp3 = tmp2->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(234)
		Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(234)
		Dynamic tmp5 = tmp4->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(235)
		Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(235)
		::phoenix::Batcher tmp7 = tmp6->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &tmp5,Dynamic &tmp3,Dynamic &tmp1,::phoenix::Batcher &tmp7){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/physics/nape/DebugDraw.hx",230,0xfe8d84ad)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88") , (int)1,false);
					__result->Add(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf") , tmp1,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp3,false);
					__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , tmp5,false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp7,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(230)
		Dynamic tmp8 = _Function_1_1::Block(tmp5,tmp3,tmp1,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(230)
		::phoenix::geometry::Geometry tmp9 = ::phoenix::geometry::Geometry_obj::__new(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(230)
		::phoenix::geometry::Geometry geom = tmp9;		HX_STACK_VAR(geom,"geom");
		HX_STACK_LINE(238)
		int tmp10 = _shape->zpp_inner->type;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(238)
		bool tmp11 = (tmp10 == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(238)
		if ((tmp11)){
			HX_STACK_LINE(239)
			int tmp12 = _shape->zpp_inner->type;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(239)
			bool tmp13 = (tmp12 == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(239)
			::nape::shape::Circle tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(239)
			if ((tmp13)){
				HX_STACK_LINE(239)
				::zpp_nape::shape::ZPP_Circle tmp15 = _shape->zpp_inner->circle;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(239)
				tmp14 = tmp15->outer_zn;
			}
			else{
				HX_STACK_LINE(239)
				tmp14 = null();
			}
			HX_STACK_LINE(239)
			::nape::shape::Circle circle = tmp14;		HX_STACK_VAR(circle,"circle");
			HX_STACK_LINE(240)
			::nape::shape::Circle tmp15 = circle;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(240)
			geom->vertices = this->make_circle_verts(tmp15);
			HX_STACK_LINE(241)
			::phoenix::Spatial tmp16 = geom->transform->local;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(241)
			::zpp_nape::phys::ZPP_Body tmp17 = _shape->zpp_inner->body;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(241)
			bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(241)
			::nape::phys::Body tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(241)
			if ((tmp18)){
				HX_STACK_LINE(241)
				::zpp_nape::phys::ZPP_Body tmp20 = _shape->zpp_inner->body;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(241)
				tmp19 = tmp20->outer;
			}
			else{
				HX_STACK_LINE(241)
				tmp19 = null();
			}
			HX_STACK_LINE(241)
			Float tmp20 = tmp19->zpp_inner->rot;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(241)
			::phoenix::Vector tmp21 = ::phoenix::Vector_obj::__new((int)0,(int)0,tmp20,null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(241)
			tmp16->rotation->setFromEuler(tmp21,null());
			HX_STACK_LINE(242)
			{
				HX_STACK_LINE(242)
				::phoenix::Spatial tmp22 = geom->transform->local;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(242)
				::phoenix::Vector _this = tmp22->pos;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(242)
				Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(242)
				{
					HX_STACK_LINE(242)
					::nape::geom::Vec2 tmp24;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(242)
					{
						HX_STACK_LINE(242)
						::zpp_nape::phys::ZPP_Body tmp25 = _shape->zpp_inner->body;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(242)
						bool tmp26 = (tmp25 != null());		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(242)
						::nape::phys::Body tmp27;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(242)
						if ((tmp26)){
							HX_STACK_LINE(242)
							::zpp_nape::phys::ZPP_Body tmp28 = _shape->zpp_inner->body;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(242)
							tmp27 = tmp28->outer;
						}
						else{
							HX_STACK_LINE(242)
							tmp27 = null();
						}
						HX_STACK_LINE(242)
						::nape::phys::Body _this1 = tmp27;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(242)
						::nape::geom::Vec2 tmp28 = _this1->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(242)
						bool tmp29 = (tmp28 == null());		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(242)
						if ((tmp29)){
							HX_STACK_LINE(242)
							_this1->zpp_inner->setupPosition();
						}
						HX_STACK_LINE(242)
						tmp24 = _this1->zpp_inner->wrap_pos;
					}
					HX_STACK_LINE(242)
					::nape::geom::Vec2 _this1 = tmp24;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(242)
					bool tmp25 = (_this1 != null());		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(242)
					bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(242)
					if ((tmp25)){
						HX_STACK_LINE(242)
						tmp26 = _this1->zpp_disp;
					}
					else{
						HX_STACK_LINE(242)
						tmp26 = false;
					}
					HX_STACK_LINE(242)
					if ((tmp26)){
						HX_STACK_LINE(242)
						::String tmp27 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(242)
						::String tmp28 = (tmp27 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(242)
						HX_STACK_DO_THROW(tmp28);
					}
					HX_STACK_LINE(242)
					{
						HX_STACK_LINE(242)
						::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
						HX_STACK_LINE(242)
						bool tmp27 = (_this2->_validate != null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(242)
						if ((tmp27)){
							HX_STACK_LINE(242)
							_this2->_validate();
						}
					}
					HX_STACK_LINE(242)
					tmp23 = _this1->zpp_inner->x;
				}
				HX_STACK_LINE(242)
				Float _x = tmp23;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(242)
				Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(242)
				{
					HX_STACK_LINE(242)
					::nape::geom::Vec2 tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(242)
					{
						HX_STACK_LINE(242)
						::zpp_nape::phys::ZPP_Body tmp26 = _shape->zpp_inner->body;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(242)
						bool tmp27 = (tmp26 != null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(242)
						::nape::phys::Body tmp28;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(242)
						if ((tmp27)){
							HX_STACK_LINE(242)
							::zpp_nape::phys::ZPP_Body tmp29 = _shape->zpp_inner->body;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(242)
							tmp28 = tmp29->outer;
						}
						else{
							HX_STACK_LINE(242)
							tmp28 = null();
						}
						HX_STACK_LINE(242)
						::nape::phys::Body _this1 = tmp28;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(242)
						::nape::geom::Vec2 tmp29 = _this1->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(242)
						bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(242)
						if ((tmp30)){
							HX_STACK_LINE(242)
							_this1->zpp_inner->setupPosition();
						}
						HX_STACK_LINE(242)
						tmp25 = _this1->zpp_inner->wrap_pos;
					}
					HX_STACK_LINE(242)
					::nape::geom::Vec2 _this1 = tmp25;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(242)
					bool tmp26 = (_this1 != null());		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(242)
					bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(242)
					if ((tmp26)){
						HX_STACK_LINE(242)
						tmp27 = _this1->zpp_disp;
					}
					else{
						HX_STACK_LINE(242)
						tmp27 = false;
					}
					HX_STACK_LINE(242)
					if ((tmp27)){
						HX_STACK_LINE(242)
						::String tmp28 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(242)
						::String tmp29 = (tmp28 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(242)
						HX_STACK_DO_THROW(tmp29);
					}
					HX_STACK_LINE(242)
					{
						HX_STACK_LINE(242)
						::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
						HX_STACK_LINE(242)
						bool tmp28 = (_this2->_validate != null());		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(242)
						if ((tmp28)){
							HX_STACK_LINE(242)
							_this2->_validate();
						}
					}
					HX_STACK_LINE(242)
					tmp24 = _this1->zpp_inner->y;
				}
				HX_STACK_LINE(242)
				Float _y = tmp24;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(242)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(242)
				_this->ignore_listeners = true;
				HX_STACK_LINE(242)
				{
					HX_STACK_LINE(242)
					_this->x = _x;
					HX_STACK_LINE(242)
					bool tmp25 = _this->_construct;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(242)
					if ((tmp25)){
						HX_STACK_LINE(242)
						_this->x;
					}
					else{
						HX_STACK_LINE(242)
						bool tmp26 = (_this->listen_x != null());		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(242)
						bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(242)
						if ((tmp26)){
							HX_STACK_LINE(242)
							bool tmp28 = _this->ignore_listeners;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(242)
							bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(242)
							tmp27 = !(tmp29);
						}
						else{
							HX_STACK_LINE(242)
							tmp27 = false;
						}
						HX_STACK_LINE(242)
						if ((tmp27)){
							HX_STACK_LINE(242)
							Float tmp28 = _x;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(242)
							_this->listen_x(tmp28);
						}
						HX_STACK_LINE(242)
						_this->x;
					}
				}
				HX_STACK_LINE(242)
				{
					HX_STACK_LINE(242)
					_this->y = _y;
					HX_STACK_LINE(242)
					bool tmp25 = _this->_construct;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(242)
					if ((tmp25)){
						HX_STACK_LINE(242)
						_this->y;
					}
					else{
						HX_STACK_LINE(242)
						bool tmp26 = (_this->listen_y != null());		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(242)
						bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(242)
						if ((tmp26)){
							HX_STACK_LINE(242)
							bool tmp28 = _this->ignore_listeners;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(242)
							bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(242)
							tmp27 = !(tmp29);
						}
						else{
							HX_STACK_LINE(242)
							tmp27 = false;
						}
						HX_STACK_LINE(242)
						if ((tmp27)){
							HX_STACK_LINE(242)
							Float tmp28 = _y;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(242)
							_this->listen_y(tmp28);
						}
						HX_STACK_LINE(242)
						_this->y;
					}
				}
				HX_STACK_LINE(242)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(242)
				bool tmp25 = (_this->listen_x != null());		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(242)
				bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(242)
				if ((tmp25)){
					HX_STACK_LINE(242)
					bool tmp27 = _this->ignore_listeners;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(242)
					bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(242)
					tmp26 = !(tmp28);
				}
				else{
					HX_STACK_LINE(242)
					tmp26 = false;
				}
				HX_STACK_LINE(242)
				if ((tmp26)){
					HX_STACK_LINE(242)
					Float tmp27 = _this->x;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(242)
					_this->listen_x(tmp27);
				}
				HX_STACK_LINE(242)
				bool tmp27 = (_this->listen_y != null());		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(242)
				bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(242)
				if ((tmp27)){
					HX_STACK_LINE(242)
					bool tmp29 = _this->ignore_listeners;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(242)
					bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(242)
					tmp28 = !(tmp30);
				}
				else{
					HX_STACK_LINE(242)
					tmp28 = false;
				}
				HX_STACK_LINE(242)
				if ((tmp28)){
					HX_STACK_LINE(242)
					Float tmp29 = _this->y;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(242)
					_this->listen_y(tmp29);
				}
				HX_STACK_LINE(242)
				_this;
			}
		}
		else{
			HX_STACK_LINE(245)
			int tmp12 = _shape->zpp_inner->type;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(245)
			bool tmp13 = (tmp12 == (int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(245)
			::nape::shape::Polygon tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(245)
			if ((tmp13)){
				HX_STACK_LINE(245)
				::zpp_nape::shape::ZPP_Polygon tmp15 = _shape->zpp_inner->polygon;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(245)
				tmp14 = tmp15->outer_zn;
			}
			else{
				HX_STACK_LINE(245)
				tmp14 = null();
			}
			HX_STACK_LINE(245)
			::nape::shape::Polygon poly = tmp14;		HX_STACK_VAR(poly,"poly");
			HX_STACK_LINE(246)
			::nape::geom::Vec2List tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(246)
			{
				HX_STACK_LINE(246)
				::nape::geom::Vec2List tmp16 = poly->zpp_inner_zn->wrap_gverts;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(246)
				bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(246)
				if ((tmp17)){
					HX_STACK_LINE(246)
					poly->zpp_inner_zn->getgverts();
				}
				HX_STACK_LINE(246)
				tmp15 = poly->zpp_inner_zn->wrap_gverts;
			}
			HX_STACK_LINE(246)
			geom->vertices = this->make_polygon_verts(tmp15);
		}
		HX_STACK_LINE(249)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(249)
		{
			HX_STACK_LINE(249)
			::zpp_nape::phys::ZPP_Body tmp13 = _shape->zpp_inner->body;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(249)
			bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(249)
			::nape::phys::Body tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(249)
			if ((tmp14)){
				HX_STACK_LINE(249)
				::zpp_nape::phys::ZPP_Body tmp16 = _shape->zpp_inner->body;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(249)
				tmp15 = tmp16->outer;
			}
			else{
				HX_STACK_LINE(249)
				tmp15 = null();
			}
			HX_STACK_LINE(249)
			::nape::phys::Body _this = tmp15;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(249)
			::zpp_nape::space::ZPP_Space tmp16 = _this->zpp_inner->space;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(249)
			bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(249)
			if ((tmp17)){
				HX_STACK_LINE(249)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: isSleeping makes no sense if the object is not contained within a Space","\x1a","\xc1","\xd3","\xeb"));
			}
			HX_STACK_LINE(249)
			::zpp_nape::space::ZPP_Component tmp18 = _this->zpp_inner->component;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(249)
			tmp12 = tmp18->sleeping;
		}
		HX_STACK_LINE(249)
		::phoenix::Color tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(249)
		if ((tmp12)){
			HX_STACK_LINE(249)
			tmp13 = _inactive_color;
		}
		else{
			HX_STACK_LINE(249)
			tmp13 = _active_color;
		}
		HX_STACK_LINE(249)
		geom->set_color(tmp13);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DebugDraw_obj,draw_shape,(void))

Void DebugDraw_obj::draw_constraint( ::nape::constraint::Constraint _constraint){
{
		HX_STACK_FRAME("luxe.physics.nape.DebugDraw","draw_constraint",0x2718bdda,"luxe.physics.nape.DebugDraw.draw_constraint","luxe/physics/nape/DebugDraw.hx",253,0xfe8d84ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_constraint,"_constraint")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DebugDraw_obj,draw_constraint,(void))

Void DebugDraw_obj::draw_compound( ::nape::phys::Compound _space){
{
		HX_STACK_FRAME("luxe.physics.nape.DebugDraw","draw_compound",0x8da937a8,"luxe.physics.nape.DebugDraw.draw_compound","luxe/physics/nape/DebugDraw.hx",259,0xfe8d84ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_space,"_space")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DebugDraw_obj,draw_compound,(void))

Void DebugDraw_obj::draw_point( ::nape::geom::Vec2 _p,::phoenix::Color color){
{
		HX_STACK_FRAME("luxe.physics.nape.DebugDraw","draw_point",0x9415e7f3,"luxe.physics.nape.DebugDraw.draw_point","luxe/physics/nape/DebugDraw.hx",267,0xfe8d84ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_p,"_p")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(269)
		::luxe::Draw tmp = ::Luxe_obj::draw;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(270)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(270)
		{
			HX_STACK_LINE(270)
			{
				HX_STACK_LINE(270)
				bool tmp2 = (_p != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(270)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(270)
				if ((tmp2)){
					HX_STACK_LINE(270)
					tmp3 = _p->zpp_disp;
				}
				else{
					HX_STACK_LINE(270)
					tmp3 = false;
				}
				HX_STACK_LINE(270)
				if ((tmp3)){
					HX_STACK_LINE(270)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(270)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(270)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(270)
			{
				HX_STACK_LINE(270)
				::zpp_nape::geom::ZPP_Vec2 _this = _p->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(270)
				bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(270)
				if ((tmp2)){
					HX_STACK_LINE(270)
					_this->_validate();
				}
			}
			HX_STACK_LINE(270)
			tmp1 = _p->zpp_inner->x;
		}
		HX_STACK_LINE(271)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(271)
		{
			HX_STACK_LINE(271)
			{
				HX_STACK_LINE(271)
				bool tmp3 = (_p != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(271)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(271)
				if ((tmp3)){
					HX_STACK_LINE(271)
					tmp4 = _p->zpp_disp;
				}
				else{
					HX_STACK_LINE(271)
					tmp4 = false;
				}
				HX_STACK_LINE(271)
				if ((tmp4)){
					HX_STACK_LINE(271)
					::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(271)
					::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(271)
					HX_STACK_DO_THROW(tmp6);
				}
			}
			HX_STACK_LINE(271)
			{
				HX_STACK_LINE(271)
				::zpp_nape::geom::ZPP_Vec2 _this = _p->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(271)
				bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(271)
				if ((tmp3)){
					HX_STACK_LINE(271)
					_this->_validate();
				}
			}
			HX_STACK_LINE(271)
			tmp2 = _p->zpp_inner->y;
		}
		HX_STACK_LINE(273)
		::phoenix::Color tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(274)
		Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(274)
		Dynamic tmp5 = tmp4->__Field(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(275)
		Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(275)
		Dynamic tmp7 = tmp6->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(276)
		Dynamic tmp8 = this->options;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(276)
		Dynamic tmp9 = tmp8->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(277)
		Dynamic tmp10 = this->options;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(277)
		::phoenix::Batcher tmp11 = tmp10->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &tmp5,Dynamic &tmp9,::phoenix::Batcher &tmp11,Float &tmp2,::phoenix::Color &tmp3,Float &tmp1,Dynamic &tmp7){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/physics/nape/DebugDraw.hx",269,0xfe8d84ad)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp1,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp2,false);
					__result->Add(HX_HCSTRING("r","\x72","\x00","\x00","\x00") , ((Dynamic)((int)2)),false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp3,false);
					__result->Add(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf") , tmp5,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp7,false);
					__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , tmp9,false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp11,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(269)
		Dynamic tmp12 = _Function_1_1::Block(tmp5,tmp9,tmp11,tmp2,tmp3,tmp1,tmp7);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(269)
		tmp->ring(tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DebugDraw_obj,draw_point,(void))

Void DebugDraw_obj::draw_AABB( ::nape::geom::AABB _bounds,::phoenix::Color color){
{
		HX_STACK_FRAME("luxe.physics.nape.DebugDraw","draw_AABB",0x0ac9bc5d,"luxe.physics.nape.DebugDraw.draw_AABB","luxe/physics/nape/DebugDraw.hx",282,0xfe8d84ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_bounds,"_bounds")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(284)
		::luxe::Draw tmp = ::Luxe_obj::draw;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(285)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(285)
		{
			HX_STACK_LINE(285)
			{
				HX_STACK_LINE(285)
				::zpp_nape::geom::ZPP_AABB _this = _bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(285)
				bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(285)
				if ((tmp2)){
					HX_STACK_LINE(285)
					_this->_validate();
				}
			}
			HX_STACK_LINE(285)
			tmp1 = _bounds->zpp_inner->minx;
		}
		HX_STACK_LINE(286)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(286)
		{
			HX_STACK_LINE(286)
			{
				HX_STACK_LINE(286)
				::zpp_nape::geom::ZPP_AABB _this = _bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(286)
				bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(286)
				if ((tmp3)){
					HX_STACK_LINE(286)
					_this->_validate();
				}
			}
			HX_STACK_LINE(286)
			tmp2 = _bounds->zpp_inner->miny;
		}
		HX_STACK_LINE(287)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(287)
		{
			HX_STACK_LINE(287)
			{
				HX_STACK_LINE(287)
				::zpp_nape::geom::ZPP_AABB _this = _bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(287)
				bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(287)
				if ((tmp4)){
					HX_STACK_LINE(287)
					_this->_validate();
				}
			}
			HX_STACK_LINE(287)
			{
				HX_STACK_LINE(287)
				::zpp_nape::geom::ZPP_AABB _this = _bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(287)
				tmp3 = (_this->maxx - _this->minx);
			}
		}
		HX_STACK_LINE(288)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(288)
		{
			HX_STACK_LINE(288)
			{
				HX_STACK_LINE(288)
				::zpp_nape::geom::ZPP_AABB _this = _bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(288)
				bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(288)
				if ((tmp5)){
					HX_STACK_LINE(288)
					_this->_validate();
				}
			}
			HX_STACK_LINE(288)
			{
				HX_STACK_LINE(288)
				::zpp_nape::geom::ZPP_AABB _this = _bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(288)
				tmp4 = (_this->maxy - _this->miny);
			}
		}
		HX_STACK_LINE(289)
		::phoenix::Color tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(291)
		Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(291)
		Dynamic tmp7 = tmp6->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(292)
		Dynamic tmp8 = this->options;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(292)
		Dynamic tmp9 = tmp8->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(293)
		Dynamic tmp10 = this->options;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(293)
		::phoenix::Batcher tmp11 = tmp10->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
		struct _Function_1_1{
			inline static Dynamic Block( ::phoenix::Color &tmp5,Dynamic &tmp9,::phoenix::Batcher &tmp11,Float &tmp4,Float &tmp2,Float &tmp3,Float &tmp1,Dynamic &tmp7){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/physics/nape/DebugDraw.hx",284,0xfe8d84ad)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp1,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp2,false);
					__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp3,false);
					__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp4,false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp5,false);
					__result->Add(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf") , true,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp7,false);
					__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , tmp9,false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp11,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(284)
		Dynamic tmp12 = _Function_1_1::Block(tmp5,tmp9,tmp11,tmp4,tmp2,tmp3,tmp1,tmp7);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(284)
		tmp->rectangle(tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DebugDraw_obj,draw_AABB,(void))

Array< ::Dynamic > DebugDraw_obj::make_circle_verts( ::nape::shape::Circle circle){
	HX_STACK_FRAME("luxe.physics.nape.DebugDraw","make_circle_verts",0xbf686a86,"luxe.physics.nape.DebugDraw.make_circle_verts","luxe/physics/nape/DebugDraw.hx",298,0xfe8d84ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(circle,"circle")
	HX_STACK_LINE(300)
	::phoenix::Color tmp = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(300)
	::phoenix::Color _color = tmp;		HX_STACK_VAR(_color,"_color");
	HX_STACK_LINE(301)
	::luxe::Draw tmp1 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(304)
	Float tmp2 = circle->zpp_inner_zn->radius;		HX_STACK_VAR(tmp2,"tmp2");
	struct _Function_1_1{
		inline static Dynamic Block( Float &tmp2){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/physics/nape/DebugDraw.hx",301,0xfe8d84ad)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
				__result->Add(HX_HCSTRING("r","\x72","\x00","\x00","\x00") , tmp2,false);
				__result->Add(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf") , true,false);
				__result->Add(HX_HCSTRING("no_batcher_add","\x0b","\x25","\xc3","\x59") , true,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(301)
	Dynamic tmp3 = _Function_1_1::Block(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(301)
	::phoenix::geometry::RingGeometry tmp4 = tmp1->ring(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(301)
	::phoenix::geometry::RingGeometry _tmp = tmp4;		HX_STACK_VAR(_tmp,"_tmp");
	HX_STACK_LINE(309)
	Array< ::Dynamic > _verts = _tmp->vertices->copy();		HX_STACK_VAR(_verts,"_verts");
	HX_STACK_LINE(311)
	_tmp->drop(null());
	HX_STACK_LINE(313)
	{
		HX_STACK_LINE(313)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(313)
		while((true)){
			HX_STACK_LINE(313)
			bool tmp5 = (_g < _verts->length);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(313)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(313)
			if ((tmp6)){
				HX_STACK_LINE(313)
				break;
			}
			HX_STACK_LINE(313)
			::phoenix::geometry::Vertex tmp7 = _verts->__get(_g).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(313)
			::phoenix::geometry::Vertex v = tmp7;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(313)
			++(_g);
			HX_STACK_LINE(314)
			{
				HX_STACK_LINE(314)
				::phoenix::Vector _g1 = v->pos;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(314)
				{
					HX_STACK_LINE(314)
					Float tmp8 = _g1->x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(314)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(314)
					{
						HX_STACK_LINE(314)
						::nape::geom::Vec2 tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(314)
						{
							HX_STACK_LINE(314)
							::nape::geom::Vec2 tmp11 = circle->zpp_inner->wrap_localCOM;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(314)
							bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(314)
							if ((tmp12)){
								HX_STACK_LINE(314)
								int tmp13 = circle->zpp_inner->type;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(314)
								bool tmp14 = (tmp13 == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(314)
								if ((tmp14)){
									HX_STACK_LINE(314)
									::zpp_nape::shape::ZPP_Circle tmp15 = circle->zpp_inner->circle;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(314)
									tmp15->setupLocalCOM();
								}
								else{
									HX_STACK_LINE(314)
									::zpp_nape::shape::ZPP_Polygon tmp15 = circle->zpp_inner->polygon;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(314)
									tmp15->setupLocalCOM();
								}
							}
							HX_STACK_LINE(314)
							tmp10 = circle->zpp_inner->wrap_localCOM;
						}
						HX_STACK_LINE(314)
						::nape::geom::Vec2 _this = tmp10;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(314)
						bool tmp11 = (_this != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(314)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(314)
						if ((tmp11)){
							HX_STACK_LINE(314)
							tmp12 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(314)
							tmp12 = false;
						}
						HX_STACK_LINE(314)
						if ((tmp12)){
							HX_STACK_LINE(314)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(314)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(314)
							HX_STACK_DO_THROW(tmp14);
						}
						HX_STACK_LINE(314)
						{
							HX_STACK_LINE(314)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(314)
							bool tmp13 = (_this1->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(314)
							if ((tmp13)){
								HX_STACK_LINE(314)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(314)
						tmp9 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(314)
					Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(314)
					Float _x = tmp10;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(314)
					_g1->x = _x;
					HX_STACK_LINE(314)
					bool tmp11 = _g1->_construct;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(314)
					if ((tmp11)){
						HX_STACK_LINE(314)
						_g1->x;
					}
					else{
						HX_STACK_LINE(314)
						bool tmp12 = (_g1->listen_x != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(314)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(314)
						if ((tmp12)){
							HX_STACK_LINE(314)
							bool tmp14 = _g1->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(314)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(314)
							tmp13 = !(tmp15);
						}
						else{
							HX_STACK_LINE(314)
							tmp13 = false;
						}
						HX_STACK_LINE(314)
						if ((tmp13)){
							HX_STACK_LINE(314)
							Float tmp14 = _x;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(314)
							_g1->listen_x(tmp14);
						}
						HX_STACK_LINE(314)
						_g1->x;
					}
				}
			}
			HX_STACK_LINE(315)
			{
				HX_STACK_LINE(315)
				::phoenix::Vector _g1 = v->pos;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(315)
				{
					HX_STACK_LINE(315)
					Float tmp8 = _g1->y;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(315)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(315)
					{
						HX_STACK_LINE(315)
						::nape::geom::Vec2 tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(315)
						{
							HX_STACK_LINE(315)
							::nape::geom::Vec2 tmp11 = circle->zpp_inner->wrap_localCOM;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(315)
							bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(315)
							if ((tmp12)){
								HX_STACK_LINE(315)
								int tmp13 = circle->zpp_inner->type;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(315)
								bool tmp14 = (tmp13 == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(315)
								if ((tmp14)){
									HX_STACK_LINE(315)
									::zpp_nape::shape::ZPP_Circle tmp15 = circle->zpp_inner->circle;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(315)
									tmp15->setupLocalCOM();
								}
								else{
									HX_STACK_LINE(315)
									::zpp_nape::shape::ZPP_Polygon tmp15 = circle->zpp_inner->polygon;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(315)
									tmp15->setupLocalCOM();
								}
							}
							HX_STACK_LINE(315)
							tmp10 = circle->zpp_inner->wrap_localCOM;
						}
						HX_STACK_LINE(315)
						::nape::geom::Vec2 _this = tmp10;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(315)
						bool tmp11 = (_this != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(315)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(315)
						if ((tmp11)){
							HX_STACK_LINE(315)
							tmp12 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(315)
							tmp12 = false;
						}
						HX_STACK_LINE(315)
						if ((tmp12)){
							HX_STACK_LINE(315)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(315)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(315)
							HX_STACK_DO_THROW(tmp14);
						}
						HX_STACK_LINE(315)
						{
							HX_STACK_LINE(315)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(315)
							bool tmp13 = (_this1->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(315)
							if ((tmp13)){
								HX_STACK_LINE(315)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(315)
						tmp9 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(315)
					Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(315)
					Float _y = tmp10;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(315)
					_g1->y = _y;
					HX_STACK_LINE(315)
					bool tmp11 = _g1->_construct;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(315)
					if ((tmp11)){
						HX_STACK_LINE(315)
						_g1->y;
					}
					else{
						HX_STACK_LINE(315)
						bool tmp12 = (_g1->listen_y != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(315)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(315)
						if ((tmp12)){
							HX_STACK_LINE(315)
							bool tmp14 = _g1->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(315)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(315)
							tmp13 = !(tmp15);
						}
						else{
							HX_STACK_LINE(315)
							tmp13 = false;
						}
						HX_STACK_LINE(315)
						if ((tmp13)){
							HX_STACK_LINE(315)
							Float tmp14 = _y;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(315)
							_g1->listen_y(tmp14);
						}
						HX_STACK_LINE(315)
						_g1->y;
					}
				}
			}
			HX_STACK_LINE(316)
			v->color = _color;
		}
	}
	HX_STACK_LINE(320)
	Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(320)
	{
		HX_STACK_LINE(320)
		::nape::geom::Vec2 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(320)
		{
			HX_STACK_LINE(320)
			::nape::geom::Vec2 tmp7 = circle->zpp_inner->wrap_localCOM;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(320)
			bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(320)
			if ((tmp8)){
				HX_STACK_LINE(320)
				int tmp9 = circle->zpp_inner->type;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(320)
				bool tmp10 = (tmp9 == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(320)
				if ((tmp10)){
					HX_STACK_LINE(320)
					::zpp_nape::shape::ZPP_Circle tmp11 = circle->zpp_inner->circle;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(320)
					tmp11->setupLocalCOM();
				}
				else{
					HX_STACK_LINE(320)
					::zpp_nape::shape::ZPP_Polygon tmp11 = circle->zpp_inner->polygon;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(320)
					tmp11->setupLocalCOM();
				}
			}
			HX_STACK_LINE(320)
			tmp6 = circle->zpp_inner->wrap_localCOM;
		}
		HX_STACK_LINE(320)
		::nape::geom::Vec2 _this = tmp6;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(320)
		{
			HX_STACK_LINE(320)
			bool tmp7 = (_this != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(320)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(320)
			if ((tmp7)){
				HX_STACK_LINE(320)
				tmp8 = _this->zpp_disp;
			}
			else{
				HX_STACK_LINE(320)
				tmp8 = false;
			}
			HX_STACK_LINE(320)
			if ((tmp8)){
				HX_STACK_LINE(320)
				::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(320)
				::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(320)
				HX_STACK_DO_THROW(tmp10);
			}
		}
		HX_STACK_LINE(320)
		{
			HX_STACK_LINE(320)
			::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(320)
			bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(320)
			if ((tmp7)){
				HX_STACK_LINE(320)
				_this1->_validate();
			}
		}
		HX_STACK_LINE(320)
		tmp5 = _this->zpp_inner->x;
	}
	HX_STACK_LINE(320)
	Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(320)
	{
		HX_STACK_LINE(320)
		::nape::geom::Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(320)
		{
			HX_STACK_LINE(320)
			::nape::geom::Vec2 tmp8 = circle->zpp_inner->wrap_localCOM;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(320)
			bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(320)
			if ((tmp9)){
				HX_STACK_LINE(320)
				int tmp10 = circle->zpp_inner->type;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(320)
				bool tmp11 = (tmp10 == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(320)
				if ((tmp11)){
					HX_STACK_LINE(320)
					::zpp_nape::shape::ZPP_Circle tmp12 = circle->zpp_inner->circle;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(320)
					tmp12->setupLocalCOM();
				}
				else{
					HX_STACK_LINE(320)
					::zpp_nape::shape::ZPP_Polygon tmp12 = circle->zpp_inner->polygon;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(320)
					tmp12->setupLocalCOM();
				}
			}
			HX_STACK_LINE(320)
			tmp7 = circle->zpp_inner->wrap_localCOM;
		}
		HX_STACK_LINE(320)
		::nape::geom::Vec2 _this = tmp7;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(320)
		{
			HX_STACK_LINE(320)
			bool tmp8 = (_this != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(320)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(320)
			if ((tmp8)){
				HX_STACK_LINE(320)
				tmp9 = _this->zpp_disp;
			}
			else{
				HX_STACK_LINE(320)
				tmp9 = false;
			}
			HX_STACK_LINE(320)
			if ((tmp9)){
				HX_STACK_LINE(320)
				::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(320)
				::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(320)
				HX_STACK_DO_THROW(tmp11);
			}
		}
		HX_STACK_LINE(320)
		{
			HX_STACK_LINE(320)
			::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(320)
			bool tmp8 = (_this1->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(320)
			if ((tmp8)){
				HX_STACK_LINE(320)
				_this1->_validate();
			}
		}
		HX_STACK_LINE(320)
		tmp6 = _this->zpp_inner->y;
	}
	HX_STACK_LINE(320)
	::phoenix::Vector tmp7 = ::phoenix::Vector_obj::__new(tmp5,tmp6,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(320)
	::phoenix::Color tmp8 = _color;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(320)
	::phoenix::geometry::Vertex tmp9 = ::phoenix::geometry::Vertex_obj::__new(tmp7,tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(320)
	_verts->insert((int)0,tmp9);
	HX_STACK_LINE(321)
	::phoenix::geometry::Vertex tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(321)
	{
		HX_STACK_LINE(321)
		::phoenix::geometry::Vertex tmp11 = _verts->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(321)
		::phoenix::geometry::Vertex _this = tmp11;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(321)
		::phoenix::Vector tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(321)
		{
			HX_STACK_LINE(321)
			::phoenix::Vector _this1 = _this->pos;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(321)
			tmp12 = ::phoenix::Vector_obj::__new(_this1->x,_this1->y,_this1->z,_this1->w);
		}
		HX_STACK_LINE(321)
		::phoenix::Color tmp13 = _this->color->clone();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(321)
		::phoenix::Vector tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(321)
		{
			HX_STACK_LINE(321)
			::phoenix::Vector _this1 = _this->normal;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(321)
			tmp14 = ::phoenix::Vector_obj::__new(_this1->x,_this1->y,_this1->z,_this1->w);
		}
		HX_STACK_LINE(321)
		::phoenix::geometry::Vertex tmp15 = ::phoenix::geometry::Vertex_obj::__new(tmp12,tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(321)
		::phoenix::geometry::Vertex _new = tmp15;		HX_STACK_VAR(_new,"_new");
		HX_STACK_LINE(321)
		::phoenix::geometry::TextureCoordSet tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(321)
		{
			HX_STACK_LINE(321)
			::phoenix::geometry::TextureCoordSet _this1 = _this->uv;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(321)
			::phoenix::geometry::TextureCoordSet tmp17 = ::phoenix::geometry::TextureCoordSet_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(321)
			::phoenix::geometry::TextureCoordSet _set = tmp17;		HX_STACK_VAR(_set,"_set");
			HX_STACK_LINE(321)
			{
				HX_STACK_LINE(321)
				::phoenix::geometry::TextureCoord _this2 = _set->uv0;		HX_STACK_VAR(_this2,"_this2");
				HX_STACK_LINE(321)
				Float tmp18 = _this1->uv0->u;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(321)
				_this2->u = tmp18;
				HX_STACK_LINE(321)
				Float tmp19 = _this1->uv0->v;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(321)
				_this2->v = tmp19;
				HX_STACK_LINE(321)
				Float tmp20 = _this1->uv0->w;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(321)
				_this2->w = tmp20;
				HX_STACK_LINE(321)
				Float tmp21 = _this1->uv0->t;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(321)
				_this2->t = tmp21;
				HX_STACK_LINE(321)
				_this2;
			}
			HX_STACK_LINE(321)
			{
				HX_STACK_LINE(321)
				::phoenix::geometry::TextureCoord _this2 = _set->uv1;		HX_STACK_VAR(_this2,"_this2");
				HX_STACK_LINE(321)
				Float tmp18 = _this1->uv1->u;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(321)
				_this2->u = tmp18;
				HX_STACK_LINE(321)
				Float tmp19 = _this1->uv1->v;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(321)
				_this2->v = tmp19;
				HX_STACK_LINE(321)
				Float tmp20 = _this1->uv1->w;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(321)
				_this2->w = tmp20;
				HX_STACK_LINE(321)
				Float tmp21 = _this1->uv1->t;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(321)
				_this2->t = tmp21;
				HX_STACK_LINE(321)
				_this2;
			}
			HX_STACK_LINE(321)
			{
				HX_STACK_LINE(321)
				::phoenix::geometry::TextureCoord _this2 = _set->uv2;		HX_STACK_VAR(_this2,"_this2");
				HX_STACK_LINE(321)
				Float tmp18 = _this1->uv2->u;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(321)
				_this2->u = tmp18;
				HX_STACK_LINE(321)
				Float tmp19 = _this1->uv2->v;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(321)
				_this2->v = tmp19;
				HX_STACK_LINE(321)
				Float tmp20 = _this1->uv2->w;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(321)
				_this2->w = tmp20;
				HX_STACK_LINE(321)
				Float tmp21 = _this1->uv2->t;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(321)
				_this2->t = tmp21;
				HX_STACK_LINE(321)
				_this2;
			}
			HX_STACK_LINE(321)
			{
				HX_STACK_LINE(321)
				::phoenix::geometry::TextureCoord _this2 = _set->uv3;		HX_STACK_VAR(_this2,"_this2");
				HX_STACK_LINE(321)
				Float tmp18 = _this1->uv3->u;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(321)
				_this2->u = tmp18;
				HX_STACK_LINE(321)
				Float tmp19 = _this1->uv3->v;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(321)
				_this2->v = tmp19;
				HX_STACK_LINE(321)
				Float tmp20 = _this1->uv3->w;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(321)
				_this2->w = tmp20;
				HX_STACK_LINE(321)
				Float tmp21 = _this1->uv3->t;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(321)
				_this2->t = tmp21;
				HX_STACK_LINE(321)
				_this2;
			}
			HX_STACK_LINE(321)
			{
				HX_STACK_LINE(321)
				::phoenix::geometry::TextureCoord _this2 = _set->uv4;		HX_STACK_VAR(_this2,"_this2");
				HX_STACK_LINE(321)
				Float tmp18 = _this1->uv4->u;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(321)
				_this2->u = tmp18;
				HX_STACK_LINE(321)
				Float tmp19 = _this1->uv4->v;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(321)
				_this2->v = tmp19;
				HX_STACK_LINE(321)
				Float tmp20 = _this1->uv4->w;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(321)
				_this2->w = tmp20;
				HX_STACK_LINE(321)
				Float tmp21 = _this1->uv4->t;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(321)
				_this2->t = tmp21;
				HX_STACK_LINE(321)
				_this2;
			}
			HX_STACK_LINE(321)
			{
				HX_STACK_LINE(321)
				::phoenix::geometry::TextureCoord _this2 = _set->uv5;		HX_STACK_VAR(_this2,"_this2");
				HX_STACK_LINE(321)
				Float tmp18 = _this1->uv5->u;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(321)
				_this2->u = tmp18;
				HX_STACK_LINE(321)
				Float tmp19 = _this1->uv5->v;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(321)
				_this2->v = tmp19;
				HX_STACK_LINE(321)
				Float tmp20 = _this1->uv5->w;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(321)
				_this2->w = tmp20;
				HX_STACK_LINE(321)
				Float tmp21 = _this1->uv5->t;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(321)
				_this2->t = tmp21;
				HX_STACK_LINE(321)
				_this2;
			}
			HX_STACK_LINE(321)
			{
				HX_STACK_LINE(321)
				::phoenix::geometry::TextureCoord _this2 = _set->uv6;		HX_STACK_VAR(_this2,"_this2");
				HX_STACK_LINE(321)
				Float tmp18 = _this1->uv6->u;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(321)
				_this2->u = tmp18;
				HX_STACK_LINE(321)
				Float tmp19 = _this1->uv6->v;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(321)
				_this2->v = tmp19;
				HX_STACK_LINE(321)
				Float tmp20 = _this1->uv6->w;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(321)
				_this2->w = tmp20;
				HX_STACK_LINE(321)
				Float tmp21 = _this1->uv6->t;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(321)
				_this2->t = tmp21;
				HX_STACK_LINE(321)
				_this2;
			}
			HX_STACK_LINE(321)
			{
				HX_STACK_LINE(321)
				::phoenix::geometry::TextureCoord _this2 = _set->uv7;		HX_STACK_VAR(_this2,"_this2");
				HX_STACK_LINE(321)
				Float tmp18 = _this1->uv7->u;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(321)
				_this2->u = tmp18;
				HX_STACK_LINE(321)
				Float tmp19 = _this1->uv7->v;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(321)
				_this2->v = tmp19;
				HX_STACK_LINE(321)
				Float tmp20 = _this1->uv7->w;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(321)
				_this2->w = tmp20;
				HX_STACK_LINE(321)
				Float tmp21 = _this1->uv7->t;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(321)
				_this2->t = tmp21;
				HX_STACK_LINE(321)
				_this2;
			}
			HX_STACK_LINE(321)
			tmp16 = _set;
		}
		HX_STACK_LINE(321)
		_new->uv = tmp16;
		HX_STACK_LINE(321)
		tmp10 = _new;
	}
	HX_STACK_LINE(321)
	_verts->insert((int)1,tmp10);
	HX_STACK_LINE(323)
	return _verts;
}


HX_DEFINE_DYNAMIC_FUNC1(DebugDraw_obj,make_circle_verts,return )

Array< ::Dynamic > DebugDraw_obj::make_polygon_verts( ::nape::geom::Vec2List vertexList){
	HX_STACK_FRAME("luxe.physics.nape.DebugDraw","make_polygon_verts",0x6e6c29ea,"luxe.physics.nape.DebugDraw.make_polygon_verts","luxe/physics/nape/DebugDraw.hx",327,0xfe8d84ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vertexList,"vertexList")
	HX_STACK_LINE(329)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(329)
	Array< ::Dynamic > verts = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(verts,"verts");
	HX_STACK_LINE(331)
	{
		HX_STACK_LINE(331)
		::nape::geom::Vec2Iterator tmp = vertexList->iterator();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(331)
		::nape::geom::Vec2Iterator _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(331)
		while((true)){
			HX_STACK_LINE(331)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(331)
			{
				HX_STACK_LINE(331)
				::zpp_nape::util::ZPP_Vec2List tmp2 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(331)
				tmp2->valmod();
				HX_STACK_LINE(331)
				int tmp3 = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(331)
				int length = tmp3;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(331)
				_g->zpp_critical = true;
				HX_STACK_LINE(331)
				bool tmp4 = (_g->zpp_i < length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(331)
				if ((tmp4)){
					HX_STACK_LINE(331)
					tmp1 = true;
				}
				else{
					HX_STACK_LINE(331)
					{
						HX_STACK_LINE(331)
						::nape::geom::Vec2Iterator tmp5 = ::nape::geom::Vec2Iterator_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(331)
						_g->zpp_next = tmp5;
						HX_STACK_LINE(331)
						::nape::geom::Vec2Iterator_obj::zpp_pool = _g;
						HX_STACK_LINE(331)
						_g->zpp_inner = null();
					}
					HX_STACK_LINE(331)
					tmp1 = false;
				}
			}
			HX_STACK_LINE(331)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(331)
			if ((tmp2)){
				HX_STACK_LINE(331)
				break;
			}
			HX_STACK_LINE(331)
			::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(331)
			{
				HX_STACK_LINE(331)
				_g->zpp_critical = false;
				HX_STACK_LINE(331)
				int tmp4 = (_g->zpp_i)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(331)
				tmp3 = _g->zpp_inner->at(tmp4);
			}
			HX_STACK_LINE(331)
			::nape::geom::Vec2 v = tmp3;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(333)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(333)
			{
				HX_STACK_LINE(333)
				{
					HX_STACK_LINE(333)
					bool tmp5 = (v != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(333)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(333)
					if ((tmp5)){
						HX_STACK_LINE(333)
						tmp6 = v->zpp_disp;
					}
					else{
						HX_STACK_LINE(333)
						tmp6 = false;
					}
					HX_STACK_LINE(333)
					if ((tmp6)){
						HX_STACK_LINE(333)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(333)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(333)
						HX_STACK_DO_THROW(tmp8);
					}
				}
				HX_STACK_LINE(333)
				{
					HX_STACK_LINE(333)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(333)
					bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(333)
					if ((tmp5)){
						HX_STACK_LINE(333)
						_this->_validate();
					}
				}
				HX_STACK_LINE(333)
				tmp4 = v->zpp_inner->x;
			}
			HX_STACK_LINE(333)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(333)
			{
				HX_STACK_LINE(333)
				{
					HX_STACK_LINE(333)
					bool tmp6 = (v != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(333)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(333)
					if ((tmp6)){
						HX_STACK_LINE(333)
						tmp7 = v->zpp_disp;
					}
					else{
						HX_STACK_LINE(333)
						tmp7 = false;
					}
					HX_STACK_LINE(333)
					if ((tmp7)){
						HX_STACK_LINE(333)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(333)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(333)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(333)
				{
					HX_STACK_LINE(333)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(333)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(333)
					if ((tmp6)){
						HX_STACK_LINE(333)
						_this->_validate();
					}
				}
				HX_STACK_LINE(333)
				tmp5 = v->zpp_inner->y;
			}
			HX_STACK_LINE(333)
			::phoenix::Vector tmp6 = ::phoenix::Vector_obj::__new(tmp4,tmp5,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(333)
			::phoenix::geometry::Vertex tmp7 = ::phoenix::geometry::Vertex_obj::__new(tmp6,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(333)
			verts->push(tmp7);
			HX_STACK_LINE(335)
			bool tmp8 = (i != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(335)
			if ((tmp8)){
				HX_STACK_LINE(336)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(336)
				{
					HX_STACK_LINE(336)
					{
						HX_STACK_LINE(336)
						bool tmp10 = (v != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(336)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(336)
						if ((tmp10)){
							HX_STACK_LINE(336)
							tmp11 = v->zpp_disp;
						}
						else{
							HX_STACK_LINE(336)
							tmp11 = false;
						}
						HX_STACK_LINE(336)
						if ((tmp11)){
							HX_STACK_LINE(336)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(336)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(336)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(336)
					{
						HX_STACK_LINE(336)
						::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(336)
						bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(336)
						if ((tmp10)){
							HX_STACK_LINE(336)
							_this->_validate();
						}
					}
					HX_STACK_LINE(336)
					tmp9 = v->zpp_inner->x;
				}
				HX_STACK_LINE(336)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(336)
				{
					HX_STACK_LINE(336)
					{
						HX_STACK_LINE(336)
						bool tmp11 = (v != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(336)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(336)
						if ((tmp11)){
							HX_STACK_LINE(336)
							tmp12 = v->zpp_disp;
						}
						else{
							HX_STACK_LINE(336)
							tmp12 = false;
						}
						HX_STACK_LINE(336)
						if ((tmp12)){
							HX_STACK_LINE(336)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(336)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(336)
							HX_STACK_DO_THROW(tmp14);
						}
					}
					HX_STACK_LINE(336)
					{
						HX_STACK_LINE(336)
						::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(336)
						bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(336)
						if ((tmp11)){
							HX_STACK_LINE(336)
							_this->_validate();
						}
					}
					HX_STACK_LINE(336)
					tmp10 = v->zpp_inner->y;
				}
				HX_STACK_LINE(336)
				::phoenix::Vector tmp11 = ::phoenix::Vector_obj::__new(tmp9,tmp10,null(),null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(336)
				::phoenix::geometry::Vertex tmp12 = ::phoenix::geometry::Vertex_obj::__new(tmp11,null(),null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(336)
				verts->push(tmp12);
			}
			HX_STACK_LINE(339)
			(i)++;
		}
	}
	HX_STACK_LINE(343)
	::nape::geom::Vec2 tmp = vertexList->at((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(343)
	::nape::geom::Vec2 last = tmp;		HX_STACK_VAR(last,"last");
	HX_STACK_LINE(345)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(345)
	{
		HX_STACK_LINE(345)
		{
			HX_STACK_LINE(345)
			bool tmp2 = (last != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(345)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(345)
			if ((tmp2)){
				HX_STACK_LINE(345)
				tmp3 = last->zpp_disp;
			}
			else{
				HX_STACK_LINE(345)
				tmp3 = false;
			}
			HX_STACK_LINE(345)
			if ((tmp3)){
				HX_STACK_LINE(345)
				::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(345)
				::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(345)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		HX_STACK_LINE(345)
		{
			HX_STACK_LINE(345)
			::zpp_nape::geom::ZPP_Vec2 _this = last->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(345)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(345)
			if ((tmp2)){
				HX_STACK_LINE(345)
				_this->_validate();
			}
		}
		HX_STACK_LINE(345)
		tmp1 = last->zpp_inner->x;
	}
	HX_STACK_LINE(345)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(345)
	{
		HX_STACK_LINE(345)
		{
			HX_STACK_LINE(345)
			bool tmp3 = (last != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(345)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(345)
			if ((tmp3)){
				HX_STACK_LINE(345)
				tmp4 = last->zpp_disp;
			}
			else{
				HX_STACK_LINE(345)
				tmp4 = false;
			}
			HX_STACK_LINE(345)
			if ((tmp4)){
				HX_STACK_LINE(345)
				::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(345)
				::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(345)
				HX_STACK_DO_THROW(tmp6);
			}
		}
		HX_STACK_LINE(345)
		{
			HX_STACK_LINE(345)
			::zpp_nape::geom::ZPP_Vec2 _this = last->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(345)
			bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(345)
			if ((tmp3)){
				HX_STACK_LINE(345)
				_this->_validate();
			}
		}
		HX_STACK_LINE(345)
		tmp2 = last->zpp_inner->y;
	}
	HX_STACK_LINE(345)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp1,tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(345)
	::phoenix::geometry::Vertex tmp4 = ::phoenix::geometry::Vertex_obj::__new(tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(345)
	verts->push(tmp4);
	HX_STACK_LINE(347)
	return verts;
}


HX_DEFINE_DYNAMIC_FUNC1(DebugDraw_obj,make_polygon_verts,return )

::phoenix::Vector DebugDraw_obj::cache_euler;


DebugDraw_obj::DebugDraw_obj()
{
}

void DebugDraw_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DebugDraw);
	HX_MARK_MEMBER_NAME(drawBodies,"drawBodies");
	HX_MARK_MEMBER_NAME(drawBodyDetail,"drawBodyDetail");
	HX_MARK_MEMBER_NAME(drawShapeDetail,"drawShapeDetail");
	HX_MARK_MEMBER_NAME(drawShapeAngleIndicators,"drawShapeAngleIndicators");
	HX_MARK_MEMBER_NAME(drawConstraints,"drawConstraints");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(geometry,"geometry");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_END_CLASS();
}

void DebugDraw_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(drawBodies,"drawBodies");
	HX_VISIT_MEMBER_NAME(drawBodyDetail,"drawBodyDetail");
	HX_VISIT_MEMBER_NAME(drawShapeDetail,"drawShapeDetail");
	HX_VISIT_MEMBER_NAME(drawShapeAngleIndicators,"drawShapeAngleIndicators");
	HX_VISIT_MEMBER_NAME(drawConstraints,"drawConstraints");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(geometry,"geometry");
	HX_VISIT_MEMBER_NAME(visible,"visible");
}

Dynamic DebugDraw_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"geometry") ) { return geometry; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"draw_body") ) { return draw_body_dyn(); }
		if (HX_FIELD_EQ(inName,"draw_AABB") ) { return draw_AABB_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawBodies") ) { return drawBodies; }
		if (HX_FIELD_EQ(inName,"draw_shape") ) { return draw_shape_dyn(); }
		if (HX_FIELD_EQ(inName,"draw_point") ) { return draw_point_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"draw_compound") ) { return draw_compound_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"drawBodyDetail") ) { return drawBodyDetail; }
		if (HX_FIELD_EQ(inName,"draw_immediate") ) { return draw_immediate_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"drawShapeDetail") ) { return drawShapeDetail; }
		if (HX_FIELD_EQ(inName,"drawConstraints") ) { return drawConstraints; }
		if (HX_FIELD_EQ(inName,"draw_constraint") ) { return draw_constraint_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"make_circle_verts") ) { return make_circle_verts_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"make_polygon_verts") ) { return make_polygon_verts_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"drawShapeAngleIndicators") ) { return drawShapeAngleIndicators; }
	}
	return super::__Field(inName,inCallProp);
}

bool DebugDraw_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"cache_euler") ) { outValue = cache_euler; return true;  }
	}
	return false;
}

Dynamic DebugDraw_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return set_visible(inValue);visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"geometry") ) { geometry=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawBodies") ) { drawBodies=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"drawBodyDetail") ) { drawBodyDetail=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"drawShapeDetail") ) { drawShapeDetail=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawConstraints") ) { drawConstraints=inValue.Cast< bool >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"drawShapeAngleIndicators") ) { drawShapeAngleIndicators=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DebugDraw_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"cache_euler") ) { cache_euler=ioValue.Cast< ::phoenix::Vector >(); return true; }
	}
	return false;
}

void DebugDraw_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("drawBodies","\xa4","\x96","\xa0","\x9c"));
	outFields->push(HX_HCSTRING("drawBodyDetail","\xf7","\xd3","\x45","\x9a"));
	outFields->push(HX_HCSTRING("drawShapeDetail","\xee","\xea","\xf8","\xc7"));
	outFields->push(HX_HCSTRING("drawShapeAngleIndicators","\x7a","\x5f","\xb7","\x29"));
	outFields->push(HX_HCSTRING("drawConstraints","\xd2","\xf3","\x4b","\xdd"));
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	outFields->push(HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(DebugDraw_obj,drawBodies),HX_HCSTRING("drawBodies","\xa4","\x96","\xa0","\x9c")},
	{hx::fsBool,(int)offsetof(DebugDraw_obj,drawBodyDetail),HX_HCSTRING("drawBodyDetail","\xf7","\xd3","\x45","\x9a")},
	{hx::fsBool,(int)offsetof(DebugDraw_obj,drawShapeDetail),HX_HCSTRING("drawShapeDetail","\xee","\xea","\xf8","\xc7")},
	{hx::fsBool,(int)offsetof(DebugDraw_obj,drawShapeAngleIndicators),HX_HCSTRING("drawShapeAngleIndicators","\x7a","\x5f","\xb7","\x29")},
	{hx::fsBool,(int)offsetof(DebugDraw_obj,drawConstraints),HX_HCSTRING("drawConstraints","\xd2","\xf3","\x4b","\xdd")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DebugDraw_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(DebugDraw_obj,geometry),HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2")},
	{hx::fsBool,(int)offsetof(DebugDraw_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::phoenix::Vector*/ ,(void *) &DebugDraw_obj::cache_euler,HX_HCSTRING("cache_euler","\x6c","\xd8","\x14","\x5b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("drawBodies","\xa4","\x96","\xa0","\x9c"),
	HX_HCSTRING("drawBodyDetail","\xf7","\xd3","\x45","\x9a"),
	HX_HCSTRING("drawShapeDetail","\xee","\xea","\xf8","\xc7"),
	HX_HCSTRING("drawShapeAngleIndicators","\x7a","\x5f","\xb7","\x29"),
	HX_HCSTRING("drawConstraints","\xd2","\xf3","\x4b","\xdd"),
	HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"),
	HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("draw_immediate","\xb6","\x68","\xec","\x17"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("draw_body","\xfd","\x5b","\x0a","\x29"),
	HX_HCSTRING("draw_shape","\x66","\x31","\x33","\x85"),
	HX_HCSTRING("draw_constraint","\xf8","\xd7","\xba","\x0e"),
	HX_HCSTRING("draw_compound","\x46","\xee","\xb9","\x86"),
	HX_HCSTRING("draw_point","\x95","\x02","\xa6","\xcf"),
	HX_HCSTRING("draw_AABB","\xfb","\x4b","\x17","\x13"),
	HX_HCSTRING("make_circle_verts","\x24","\xc8","\x5b","\x67"),
	HX_HCSTRING("make_polygon_verts","\x8c","\xb6","\x6a","\xbb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DebugDraw_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DebugDraw_obj::cache_euler,"cache_euler");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DebugDraw_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DebugDraw_obj::cache_euler,"cache_euler");
};

#endif

hx::Class DebugDraw_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("cache_euler","\x6c","\xd8","\x14","\x5b"),
	::String(null()) };

void DebugDraw_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.physics.nape.DebugDraw","\x50","\xe2","\x20","\xe2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DebugDraw_obj::__GetStatic;
	__mClass->mSetStaticField = &DebugDraw_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DebugDraw_obj >;
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

void DebugDraw_obj::__boot()
{
	cache_euler= ::phoenix::Vector_obj::__new(null(),null(),null(),null());
}

} // end namespace luxe
} // end namespace physics
} // end namespace nape
