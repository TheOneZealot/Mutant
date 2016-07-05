#ifndef INCLUDED_mint_core_Macros
#define INCLUDED_mint_core_Macros

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(mint,core,Macros)
namespace mint{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  Macros_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Macros_obj OBJ_;
		Macros_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="mint.core.Macros")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Macros_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Macros_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Macros","\x07","\x0f","\x20","\xe5"); }

};

} // end namespace mint
} // end namespace core

#endif /* INCLUDED_mint_core_Macros */ 
