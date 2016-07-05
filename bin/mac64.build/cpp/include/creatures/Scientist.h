#ifndef INCLUDED_creatures_Scientist
#define INCLUDED_creatures_Scientist

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Creature
#include <Creature.h>
#endif
HX_DECLARE_CLASS0(Creature)
HX_DECLARE_CLASS1(creatures,Scientist)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Sprite)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace creatures{


class HXCPP_CLASS_ATTRIBUTES  Scientist_obj : public ::Creature_obj{
	public:
		typedef ::Creature_obj super;
		typedef Scientist_obj OBJ_;
		Scientist_obj();
		Void __construct(::phoenix::Vector _pos,::String _name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="creatures.Scientist")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Scientist_obj > __new(::phoenix::Vector _pos,::String _name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Scientist_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Scientist","\xb8","\xf4","\x30","\x96"); }

		virtual Void update( Float dt);

		virtual Void init( );

		virtual Void ondestroy( );

};

} // end namespace creatures

#endif /* INCLUDED_creatures_Scientist */ 
