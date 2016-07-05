#ifndef INCLUDED_Action
#define INCLUDED_Action

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
HX_DECLARE_CLASS0(Action)
HX_DECLARE_CLASS0(Creature)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Sprite)
HX_DECLARE_CLASS1(luxe,Visual)


class HXCPP_CLASS_ATTRIBUTES  Action_obj : public ::luxe::Objects_obj{
	public:
		typedef ::luxe::Objects_obj super;
		typedef Action_obj OBJ_;
		Action_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Action")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Action_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Action_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Action","\xd6","\xaf","\xda","\x4a"); }

		Dynamic options;
		::Creature owner;
		virtual Void act( );
		Dynamic act_dyn();

};


#endif /* INCLUDED_Action */ 
