#include <hxcpp.h>

#ifndef INCLUDED_AIController
#include <AIController.h>
#endif
#ifndef INCLUDED_Controller
#include <Controller.h>
#endif
#ifndef INCLUDED_Creature
#include <Creature.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Projectile
#include <Projectile.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_controllers_SoldierController
#include <controllers/SoldierController.h>
#endif
#ifndef INCLUDED_creatures_Player
#include <creatures/Player.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_luxe_Events
#include <luxe/Events.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Resources
#include <luxe/Resources.h>
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
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_Ray
#include <nape/geom/Ray.h>
#endif
#ifndef INCLUDED_nape_geom_RayResult
#include <nape/geom/RayResult.h>
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
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_api_Timer
#include <snow/api/Timer.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_ConvexRayResult
#include <zpp_nape/geom/ZPP_ConvexRayResult.h>
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
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
namespace controllers{

Void SoldierController_obj::__construct()
{
HX_STACK_FRAME("controllers.SoldierController","new",0xfe5ec939,"controllers.SoldierController.new","controllers/SoldierController.hx",10,0xbc9166d8)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	this->fire_ready = true;
	HX_STACK_LINE(16)
	super::__construct();
}
;
	return null();
}

//SoldierController_obj::~SoldierController_obj() { }

Dynamic SoldierController_obj::__CreateEmpty() { return  new SoldierController_obj; }
hx::ObjectPtr< SoldierController_obj > SoldierController_obj::__new()
{  hx::ObjectPtr< SoldierController_obj > _result_ = new SoldierController_obj();
	_result_->__construct();
	return _result_;}

Dynamic SoldierController_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoldierController_obj > _result_ = new SoldierController_obj();
	_result_->__construct();
	return _result_;}

Void SoldierController_obj::update( Float dt){
{
		HX_STACK_FRAME("controllers.SoldierController","update",0xe794dad0,"controllers.SoldierController.update","controllers/SoldierController.hx",20,0xbc9166d8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(21)
		::Creature tmp = this->get_creature();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(21)
		bool tmp1 = tmp->flipx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(21)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(21)
		if ((tmp1)){
			HX_STACK_LINE(21)
			tmp2 = (int)-1;
		}
		else{
			HX_STACK_LINE(21)
			tmp2 = (int)1;
		}
		HX_STACK_LINE(21)
		int direction = tmp2;		HX_STACK_VAR(direction,"direction");
		HX_STACK_LINE(22)
		::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(22)
		{
			HX_STACK_LINE(22)
			::nape::phys::Body tmp4 = this->get_body();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(22)
			::nape::phys::Body _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(22)
			::nape::geom::Vec2 tmp5 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(22)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(22)
			if ((tmp6)){
				HX_STACK_LINE(22)
				_this->zpp_inner->setupPosition();
			}
			HX_STACK_LINE(22)
			tmp3 = _this->zpp_inner->wrap_pos;
		}
		HX_STACK_LINE(22)
		::nape::geom::Vec2 tmp4 = ::nape::geom::Vec2_obj::__new(direction,(int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(22)
		::nape::geom::Ray tmp5 = ::nape::geom::Ray_obj::__new(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(22)
		::nape::geom::Ray ray = tmp5;		HX_STACK_VAR(ray,"ray");
		HX_STACK_LINE(23)
		::nape::space::Space tmp6 = this->get_space();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(23)
		::nape::geom::Ray tmp7 = ray;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(23)
		::nape::geom::RayResult tmp8 = tmp6->rayCast(tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(23)
		::nape::geom::RayResult result = tmp8;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(25)
		bool tmp9 = (result != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(25)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(25)
		if ((tmp9)){
			HX_STACK_LINE(25)
			Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(25)
			{
				HX_STACK_LINE(25)
				::nape::phys::Body tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(25)
				{
					HX_STACK_LINE(25)
					::nape::shape::Shape tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(25)
					{
						HX_STACK_LINE(25)
						{
							HX_STACK_LINE(25)
							::zpp_nape::geom::ZPP_ConvexRayResult tmp14 = result->zpp_inner->next;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(25)
							::zpp_nape::geom::ZPP_ConvexRayResult tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(25)
							bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(25)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(25)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(25)
							if ((tmp18)){
								HX_STACK_LINE(25)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
							}
						}
						HX_STACK_LINE(25)
						::nape::shape::Shape tmp14 = result->zpp_inner->shape;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(25)
						tmp13 = tmp14;
					}
					HX_STACK_LINE(25)
					::nape::shape::Shape _this = tmp13;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(25)
					::zpp_nape::phys::ZPP_Body tmp14 = _this->zpp_inner->body;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(25)
					::zpp_nape::phys::ZPP_Body tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(25)
					bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(25)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(25)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(25)
					if ((tmp18)){
						HX_STACK_LINE(25)
						::zpp_nape::phys::ZPP_Body tmp19 = _this->zpp_inner->body;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(25)
						::zpp_nape::phys::ZPP_Body tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(25)
						tmp12 = tmp20->outer;
					}
					else{
						HX_STACK_LINE(25)
						tmp12 = null();
					}
				}
				HX_STACK_LINE(25)
				::nape::phys::Body _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(25)
				Dynamic tmp13 = _this->zpp_inner_i->userData;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(25)
				Dynamic tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(25)
				bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(25)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(25)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(25)
				if ((tmp17)){
					struct _Function_4_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","controllers/SoldierController.hx",25,0xbc9166d8)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(25)
					Dynamic tmp18 = _Function_4_1::Block();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(25)
					Dynamic tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(25)
					_this->zpp_inner_i->userData = tmp19;
				}
				HX_STACK_LINE(25)
				Dynamic tmp18 = _this->zpp_inner_i->userData;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(25)
				tmp11 = tmp18;
			}
			HX_STACK_LINE(25)
			tmp10 = ::Std_obj::is(tmp11->__Field(HX_HCSTRING("entity","\x23","\x13","\x1c","\x05"), hx::paccDynamic ),hx::ClassOf< ::creatures::Player >());
		}
		else{
			HX_STACK_LINE(25)
			tmp10 = false;
		}
		HX_STACK_LINE(25)
		if ((tmp10)){
			HX_STACK_LINE(27)
			Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(27)
			{
				HX_STACK_LINE(27)
				::nape::phys::Body tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(27)
				{
					HX_STACK_LINE(27)
					::nape::shape::Shape tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(27)
					{
						HX_STACK_LINE(27)
						{
							HX_STACK_LINE(27)
							::zpp_nape::geom::ZPP_ConvexRayResult tmp14 = result->zpp_inner->next;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(27)
							bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(27)
							if ((tmp15)){
								HX_STACK_LINE(27)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
							}
						}
						HX_STACK_LINE(27)
						tmp13 = result->zpp_inner->shape;
					}
					HX_STACK_LINE(27)
					::nape::shape::Shape _this = tmp13;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(27)
					::zpp_nape::phys::ZPP_Body tmp14 = _this->zpp_inner->body;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(27)
					bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(27)
					if ((tmp15)){
						HX_STACK_LINE(27)
						::zpp_nape::phys::ZPP_Body tmp16 = _this->zpp_inner->body;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(27)
						tmp12 = tmp16->outer;
					}
					else{
						HX_STACK_LINE(27)
						tmp12 = null();
					}
				}
				HX_STACK_LINE(27)
				::nape::phys::Body _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(27)
				Dynamic tmp13 = _this->zpp_inner_i->userData;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(27)
				bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(27)
				if ((tmp14)){
					struct _Function_4_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","controllers/SoldierController.hx",27,0xbc9166d8)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(27)
					Dynamic tmp15 = _Function_4_1::Block();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(27)
					_this->zpp_inner_i->userData = tmp15;
				}
				HX_STACK_LINE(27)
				tmp11 = _this->zpp_inner_i->userData;
			}
			HX_STACK_LINE(27)
			::creatures::Player player = ((::creatures::Player)(tmp11->__Field(HX_HCSTRING("entity","\x23","\x13","\x1c","\x05"), hx::paccDynamic )));		HX_STACK_VAR(player,"player");
			HX_STACK_LINE(28)
			this->fire();
		}
		HX_STACK_LINE(30)
		::nape::geom::Ray tmp11 = ray;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(30)
		::nape::geom::RayResult tmp12 = result;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(30)
		this->debug_ray(tmp11,tmp12);
		HX_STACK_LINE(32)
		Float tmp13 = dt;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(32)
		this->super::update(tmp13);
	}
return null();
}


Void SoldierController_obj::fire( ){
{
		HX_STACK_FRAME("controllers.SoldierController","fire",0x8f4a98bd,"controllers.SoldierController.fire","controllers/SoldierController.hx",36,0xbc9166d8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		::controllers::SoldierController _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(37)
		bool tmp = this->fire_ready;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		if ((tmp1)){
			HX_STACK_LINE(37)
			return null();
		}
		HX_STACK_LINE(39)
		::luxe::Resources tmp2 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		::luxe::resource::Resource tmp3 = tmp2->cache->get(HX_HCSTRING("assets/textures/Projectile_Bullet.png","\x48","\xa2","\x43","\x47"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(39)
		::phoenix::Texture texture = ((::phoenix::Texture)(tmp3));		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(40)
		int tmp4 = texture->set_filter_min((int)9728);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(40)
		texture->set_filter_mag(tmp4);
		HX_STACK_LINE(41)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(41)
		{
			HX_STACK_LINE(41)
			::nape::geom::Vec2 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(41)
			{
				HX_STACK_LINE(41)
				::nape::phys::Body tmp7 = this->get_body();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(41)
				::nape::phys::Body _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(41)
				::nape::geom::Vec2 tmp8 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(41)
				bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(41)
				if ((tmp9)){
					HX_STACK_LINE(41)
					_this->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(41)
				tmp6 = _this->zpp_inner->wrap_pos;
			}
			HX_STACK_LINE(41)
			::nape::geom::Vec2 _this = tmp6;		HX_STACK_VAR(_this,"_this");
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
			tmp5 = _this->zpp_inner->x;
		}
		HX_STACK_LINE(41)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(41)
		{
			HX_STACK_LINE(41)
			::nape::geom::Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(41)
			{
				HX_STACK_LINE(41)
				::nape::phys::Body tmp8 = this->get_body();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(41)
				::nape::phys::Body _this = tmp8;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(41)
				::nape::geom::Vec2 tmp9 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(41)
				bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(41)
				if ((tmp10)){
					HX_STACK_LINE(41)
					_this->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(41)
				tmp7 = _this->zpp_inner->wrap_pos;
			}
			HX_STACK_LINE(41)
			::nape::geom::Vec2 _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(41)
			{
				HX_STACK_LINE(41)
				bool tmp8 = (_this != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(41)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(41)
				if ((tmp8)){
					HX_STACK_LINE(41)
					tmp9 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(41)
					tmp9 = false;
				}
				HX_STACK_LINE(41)
				if ((tmp9)){
					HX_STACK_LINE(41)
					::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(41)
					::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(41)
					HX_STACK_DO_THROW(tmp11);
				}
			}
			HX_STACK_LINE(41)
			{
				HX_STACK_LINE(41)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(41)
				bool tmp8 = (_this1->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(41)
				if ((tmp8)){
					HX_STACK_LINE(41)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(41)
			tmp6 = _this->zpp_inner->y;
		}
		HX_STACK_LINE(41)
		::phoenix::Vector tmp7 = ::phoenix::Vector_obj::__new(tmp5,tmp6,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(41)
		::phoenix::Vector tmp8 = ::phoenix::Vector_obj::__new((int)2,(int)1,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(41)
		::phoenix::Texture tmp9 = texture;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(41)
		::Creature tmp10 = this->get_creature();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(41)
		bool tmp11 = tmp10->flipx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(41)
		Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(41)
		if ((tmp11)){
			HX_STACK_LINE(41)
			tmp12 = (int)-1;
		}
		else{
			HX_STACK_LINE(41)
			tmp12 = (int)1;
		}
		HX_STACK_LINE(41)
		::phoenix::Vector tmp13 = ::phoenix::Vector_obj::__new(tmp12,(int)0,null(),null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(41)
		::Projectile_obj::__new(tmp7,tmp8,tmp9,tmp13,(int)16);
		HX_STACK_LINE(42)
		this->fire_ready = false;
		HX_STACK_LINE(43)
		::luxe::Timer tmp14 = ::Luxe_obj::timer;		HX_STACK_VAR(tmp14,"tmp14");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::controllers::SoldierController,_g)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","controllers/SoldierController.hx",43,0xbc9166d8)
			{
				HX_STACK_LINE(43)
				_g->fire_ready = true;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(43)
		tmp14->schedule((int)1, Dynamic(new _Function_1_1(_g)),null());
		HX_STACK_LINE(45)
		::Creature tmp15 = this->get_creature();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(45)
		tmp15->events->fire(HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43"),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoldierController_obj,fire,(void))

Void SoldierController_obj::init( ){
{
		HX_STACK_FRAME("controllers.SoldierController","init",0x914a0017,"controllers.SoldierController.init","luxe/macros/ComponentRules.hx",38,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		this->super::init();
	}
return null();
}


Void SoldierController_obj::ondestroy( ){
{
		HX_STACK_FRAME("controllers.SoldierController","ondestroy",0x5b265f54,"controllers.SoldierController.ondestroy","luxe/macros/ComponentRules.hx",50,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->super::ondestroy();
	}
return null();
}


Void SoldierController_obj::onremoved( ){
{
		HX_STACK_FRAME("controllers.SoldierController","onremoved",0x29a051fa,"controllers.SoldierController.onremoved","luxe/macros/ComponentRules.hx",62,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		this->super::onremoved();
	}
return null();
}



SoldierController_obj::SoldierController_obj()
{
}

Dynamic SoldierController_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fire") ) { return fire_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onremoved") ) { return onremoved_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fire_ready") ) { return fire_ready; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SoldierController_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fire_ready") ) { fire_ready=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoldierController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("fire_ready","\xda","\x67","\xc0","\xe5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(SoldierController_obj,fire_ready),HX_HCSTRING("fire_ready","\xda","\x67","\xc0","\xe5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("fire_ready","\xda","\x67","\xc0","\xe5"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onremoved","\x61","\xb0","\x59","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoldierController_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoldierController_obj::__mClass,"__mClass");
};

#endif

hx::Class SoldierController_obj::__mClass;

void SoldierController_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("controllers.SoldierController","\xc7","\xb8","\xa9","\x07");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SoldierController_obj >;
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

} // end namespace controllers
