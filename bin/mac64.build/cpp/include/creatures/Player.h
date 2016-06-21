#ifndef INCLUDED_creatures_Player
#define INCLUDED_creatures_Player

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Creature
#include <Creature.h>
#endif
HX_DECLARE_CLASS0(Creature)
HX_DECLARE_CLASS1(creatures,Player)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Sprite)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace creatures{


class HXCPP_CLASS_ATTRIBUTES  Player_obj : public ::Creature_obj{
	public:
		typedef ::Creature_obj super;
		typedef Player_obj OBJ_;
		Player_obj();
		Void __construct(::phoenix::Vector _pos);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="creatures.Player")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Player_obj > __new(::phoenix::Vector _pos);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Player_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"); }

		virtual Void update( Float dt);

		virtual Void init( );

		virtual Void ondestroy( );

};

} // end namespace creatures

#endif /* INCLUDED_creatures_Player */ 