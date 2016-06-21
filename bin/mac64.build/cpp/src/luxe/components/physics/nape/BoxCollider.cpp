#include <hxcpp.h>

#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_components_physics_nape_BoxCollider
#include <luxe/components/physics/nape/BoxCollider.h>
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
#ifndef INCLUDED_nape_shape_Polygon
#include <nape/shape/Polygon.h>
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
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace luxe{
namespace components{
namespace physics{
namespace nape{

Void BoxCollider_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("luxe.components.physics.nape.BoxCollider","new",0xd76e61d2,"luxe.components.physics.nape.BoxCollider.new","luxe/components/physics/nape/BoxCollider.hx",33,0xd659789e)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(35)
	this->options = _options;
	HX_STACK_LINE(37)
	Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	super::__construct(tmp);
}
;
	return null();
}

//BoxCollider_obj::~BoxCollider_obj() { }

Dynamic BoxCollider_obj::__CreateEmpty() { return  new BoxCollider_obj; }
hx::ObjectPtr< BoxCollider_obj > BoxCollider_obj::__new(Dynamic _options)
{  hx::ObjectPtr< BoxCollider_obj > _result_ = new BoxCollider_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic BoxCollider_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BoxCollider_obj > _result_ = new BoxCollider_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void BoxCollider_obj::onadded( ){
{
		HX_STACK_FRAME("luxe.components.physics.nape.BoxCollider","onadded",0x493935b3,"luxe.components.physics.nape.BoxCollider.onadded","luxe/components/physics/nape/BoxCollider.hx",41,0xd659789e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(43)
		this->super::onadded();
		HX_STACK_LINE(45)
		Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		Float tmp1 = tmp->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		Float tmp3 = tmp2->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		Array< ::Dynamic > verts = ::nape::shape::Polygon_obj::box(tmp1,tmp3,null());		HX_STACK_VAR(verts,"verts");
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			::nape::phys::Body tmp4 = this->body;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(46)
			::nape::shape::ShapeList tmp5 = tmp4->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(46)
			::nape::shape::ShapeList _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(46)
			Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(46)
			::nape::phys::Material tmp7 = tmp6->__Field(HX_HCSTRING("material","\xa7","\x5c","\xa5","\xf0"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(46)
			Dynamic tmp8 = this->options;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(46)
			::nape::dynamics::InteractionFilter tmp9 = tmp8->__Field(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(46)
			::nape::shape::Polygon tmp10 = ::nape::shape::Polygon_obj::__new(verts,tmp7,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(46)
			::nape::shape::Shape obj = tmp10;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(46)
			bool tmp11 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(46)
			if ((tmp11)){
				HX_STACK_LINE(46)
				::nape::shape::Shape tmp12 = obj;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(46)
				_this->push(tmp12);
			}
			else{
				HX_STACK_LINE(46)
				::nape::shape::Shape tmp12 = obj;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(46)
				_this->unshift(tmp12);
			}
		}
		HX_STACK_LINE(47)
		{
			HX_STACK_LINE(47)
			::nape::geom::Vec2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(47)
			{
				HX_STACK_LINE(47)
				::nape::phys::Body tmp5 = this->body;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(47)
				::nape::phys::Body _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(47)
				::nape::geom::Vec2 tmp6 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(47)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(47)
				if ((tmp7)){
					HX_STACK_LINE(47)
					_this->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(47)
				tmp4 = _this->zpp_inner->wrap_pos;
			}
			HX_STACK_LINE(47)
			::nape::geom::Vec2 _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(47)
			Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(47)
			Float x = tmp5->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(47)
			Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(47)
			Float y = tmp6->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(47)
			{
				HX_STACK_LINE(47)
				bool tmp7 = (_this != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(47)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(47)
				if ((tmp7)){
					HX_STACK_LINE(47)
					tmp8 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(47)
					tmp8 = false;
				}
				HX_STACK_LINE(47)
				if ((tmp8)){
					HX_STACK_LINE(47)
					::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(47)
					::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(47)
					HX_STACK_DO_THROW(tmp10);
				}
			}
			HX_STACK_LINE(47)
			{
				HX_STACK_LINE(47)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(47)
				bool tmp7 = _this1->_immutable;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(47)
				if ((tmp7)){
					HX_STACK_LINE(47)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(47)
				bool tmp8 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(47)
				if ((tmp8)){
					HX_STACK_LINE(47)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(47)
			bool tmp7 = (x != x);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(47)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(47)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(47)
			if ((tmp8)){
				HX_STACK_LINE(47)
				tmp9 = (y != y);
			}
			else{
				HX_STACK_LINE(47)
				tmp9 = true;
			}
			HX_STACK_LINE(47)
			if ((tmp9)){
				HX_STACK_LINE(47)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(47)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(47)
			{
				HX_STACK_LINE(47)
				{
					HX_STACK_LINE(47)
					bool tmp11 = (_this != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(47)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(47)
					if ((tmp11)){
						HX_STACK_LINE(47)
						tmp12 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(47)
						tmp12 = false;
					}
					HX_STACK_LINE(47)
					if ((tmp12)){
						HX_STACK_LINE(47)
						::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(47)
						::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(47)
						HX_STACK_DO_THROW(tmp14);
					}
				}
				HX_STACK_LINE(47)
				{
					HX_STACK_LINE(47)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(47)
					bool tmp11 = (_this1->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(47)
					if ((tmp11)){
						HX_STACK_LINE(47)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(47)
				tmp10 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(47)
			Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(47)
			bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(47)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(47)
			if ((tmp12)){
				HX_STACK_LINE(47)
				Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(47)
				{
					HX_STACK_LINE(47)
					{
						HX_STACK_LINE(47)
						bool tmp15 = (_this != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(47)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(47)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(47)
						bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(47)
						if ((tmp18)){
							HX_STACK_LINE(47)
							tmp17 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(47)
							tmp17 = false;
						}
						HX_STACK_LINE(47)
						bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(47)
						if ((tmp19)){
							HX_STACK_LINE(47)
							::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(47)
							::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(47)
							::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(47)
							::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(47)
							::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(47)
							HX_STACK_DO_THROW(tmp24);
						}
					}
					HX_STACK_LINE(47)
					{
						HX_STACK_LINE(47)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(47)
						bool tmp15 = (_this1->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(47)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(47)
						bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(47)
						if ((tmp17)){
							HX_STACK_LINE(47)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(47)
					Float tmp15 = _this->zpp_inner->y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(47)
					tmp14 = tmp15;
				}
				HX_STACK_LINE(47)
				Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(47)
				tmp13 = (tmp14 == tmp15);
			}
			else{
				HX_STACK_LINE(47)
				tmp13 = false;
			}
			HX_STACK_LINE(47)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(47)
			if ((tmp14)){
				HX_STACK_LINE(47)
				{
					HX_STACK_LINE(47)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(47)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(47)
					{
					}
				}
				HX_STACK_LINE(47)
				{
					HX_STACK_LINE(47)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(47)
					bool tmp15 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(47)
					if ((tmp15)){
						HX_STACK_LINE(47)
						::zpp_nape::geom::ZPP_Vec2 tmp16 = _this1;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(47)
						_this1->_invalidate(tmp16);
					}
				}
			}
			HX_STACK_LINE(47)
			_this;
		}
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			::nape::phys::Body tmp4 = this->body;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(48)
			::nape::phys::Body _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(48)
			Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(48)
			{
				HX_STACK_LINE(48)
				Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(48)
				Dynamic tmp7 = tmp6->__Field(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(48)
				bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(48)
				if ((tmp8)){
					HX_STACK_LINE(48)
					Dynamic tmp9 = this->options;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(48)
					tmp9->__FieldRef(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08")) = (int)0;
				}
				HX_STACK_LINE(48)
				Dynamic tmp9 = this->options;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(48)
				tmp5 = tmp9->__Field(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"), hx::paccDynamic );
			}
			HX_STACK_LINE(48)
			Float rotation = tmp5;		HX_STACK_VAR(rotation,"rotation");
			HX_STACK_LINE(48)
			{
				HX_STACK_LINE(48)
				_this->zpp_inner->immutable_midstep(HX_HCSTRING("Body::rotation","\x40","\x9d","\x24","\x6b"));
				HX_STACK_LINE(48)
				bool tmp6 = _this->zpp_inner->world;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(48)
				if ((tmp6)){
					HX_STACK_LINE(48)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world is immutable","\x72","\x0f","\x57","\x56"));
				}
				HX_STACK_LINE(48)
				int tmp7 = _this->zpp_inner->type;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(48)
				bool tmp8 = (tmp7 == (int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(48)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(48)
				if ((tmp8)){
					HX_STACK_LINE(48)
					::zpp_nape::space::ZPP_Space tmp10 = _this->zpp_inner->space;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(48)
					::zpp_nape::space::ZPP_Space tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(48)
					tmp9 = (tmp11 != null());
				}
				else{
					HX_STACK_LINE(48)
					tmp9 = false;
				}
				HX_STACK_LINE(48)
				if ((tmp9)){
					HX_STACK_LINE(48)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Static objects cannot be rotated once inside a Space","\x1b","\xe2","\x01","\xc9"));
				}
				HX_STACK_LINE(48)
				Float tmp10 = _this->zpp_inner->rot;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(48)
				Float tmp11 = rotation;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(48)
				bool tmp12 = (tmp10 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(48)
				if ((tmp12)){
					HX_STACK_LINE(48)
					bool tmp13 = (rotation != rotation);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(48)
					if ((tmp13)){
						HX_STACK_LINE(48)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Body::rotation cannot be NaN","\xa9","\xa5","\x47","\x9c"));
					}
					HX_STACK_LINE(48)
					_this->zpp_inner->rot = rotation;
					HX_STACK_LINE(48)
					{
						HX_STACK_LINE(48)
						::zpp_nape::phys::ZPP_Body _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(48)
						_this1->zip_axis = true;
						HX_STACK_LINE(48)
						{
							HX_STACK_LINE(48)
							::zpp_nape::util::ZNPNode_ZPP_Shape tmp14 = _this1->shapes->head;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(48)
							::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp14;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(48)
							while((true)){
								HX_STACK_LINE(48)
								bool tmp15 = (cx_ite != null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(48)
								bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(48)
								if ((tmp16)){
									HX_STACK_LINE(48)
									break;
								}
								HX_STACK_LINE(48)
								::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
								HX_STACK_LINE(48)
								{
									HX_STACK_LINE(48)
									bool tmp17 = (s->type == (int)1);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(48)
									if ((tmp17)){
										HX_STACK_LINE(48)
										s->polygon->invalidate_gverts();
										HX_STACK_LINE(48)
										s->polygon->invalidate_gaxi();
									}
									HX_STACK_LINE(48)
									s->invalidate_worldCOM();
								}
								HX_STACK_LINE(48)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(48)
						_this1->zip_worldCOM = true;
					}
					HX_STACK_LINE(48)
					_this->zpp_inner->wake();
				}
			}
			HX_STACK_LINE(48)
			_this->zpp_inner->rot;
		}
		HX_STACK_LINE(50)
		this->post_add();
	}
return null();
}


Void BoxCollider_obj::init( ){
{
		HX_STACK_FRAME("luxe.components.physics.nape.BoxCollider","init",0xa5dfed5e,"luxe.components.physics.nape.BoxCollider.init","luxe/macros/ComponentRules.hx",38,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		this->super::init();
	}
return null();
}


Void BoxCollider_obj::ondestroy( ){
{
		HX_STACK_FRAME("luxe.components.physics.nape.BoxCollider","ondestroy",0x824bf0ad,"luxe.components.physics.nape.BoxCollider.ondestroy","luxe/macros/ComponentRules.hx",50,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->super::ondestroy();
	}
return null();
}


Void BoxCollider_obj::onremoved( ){
{
		HX_STACK_FRAME("luxe.components.physics.nape.BoxCollider","onremoved",0x50c5e353,"luxe.components.physics.nape.BoxCollider.onremoved","luxe/macros/ComponentRules.hx",62,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		this->super::onremoved();
	}
return null();
}



BoxCollider_obj::BoxCollider_obj()
{
}

void BoxCollider_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BoxCollider);
	HX_MARK_MEMBER_NAME(options,"options");
	::luxe::components::physics::nape::NapeBody_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BoxCollider_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(options,"options");
	::luxe::components::physics::nape::NapeBody_obj::__Visit(HX_VISIT_ARG);
}

Dynamic BoxCollider_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic BoxCollider_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BoxCollider_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BoxCollider_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
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
	HX_MARK_MEMBER_NAME(BoxCollider_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BoxCollider_obj::__mClass,"__mClass");
};

#endif

hx::Class BoxCollider_obj::__mClass;

void BoxCollider_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.components.physics.nape.BoxCollider","\xe0","\xd0","\x48","\xa2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BoxCollider_obj >;
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
