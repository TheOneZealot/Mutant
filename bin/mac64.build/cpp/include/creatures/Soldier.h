#ifndef INCLUDED_creatures_Soldier
#define INCLUDED_creatures_Soldier

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Creature
#include <Creature.h>
#endif
HX_DECLARE_CLASS0(Creature)
HX_DECLARE_CLASS1(creatures,Soldier)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Sprite)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace creatures{


class HXCPP_CLASS_ATTRIBUTES  Soldier_obj : public ::Creature_obj{
	public:
		typedef ::Creature_obj super;
		typedef Soldier_obj OBJ_;
		Soldier_obj();
		Void __construct(::phoenix::Vector _pos,::String _name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="creatures.Soldier")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Soldier_obj > __new(::phoenix::Vector _pos,::String _name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Soldier_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Soldier","\x62","\x8f","\xc2","\x4e"); }

		virtual Void update( Float dt);

		virtual Void init( );

		virtual Void ondestroy( );

};

} // end namespace creatures

#endif /* INCLUDED_creatures_Soldier */ 
