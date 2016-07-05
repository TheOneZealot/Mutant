#ifndef INCLUDED_mint_core_unifill_Exception
#define INCLUDED_mint_core_unifill_Exception

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(mint,core,unifill,Exception)
namespace mint{
namespace core{
namespace unifill{


class Exception_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Exception_obj OBJ_;

	public:
		Exception_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("mint.core.unifill.Exception","\xf1","\x9b","\x58","\xfb"); }
		::String __ToString() const { return HX_HCSTRING("Exception.","\x1f","\x39","\xe5","\x13") + tag; }

		static ::mint::core::unifill::Exception InvalidCodePoint(int code);
		static Dynamic InvalidCodePoint_dyn();
		static ::mint::core::unifill::Exception InvalidCodeUnitSequence(int index);
		static Dynamic InvalidCodeUnitSequence_dyn();
};

} // end namespace mint
} // end namespace core
} // end namespace unifill

#endif /* INCLUDED_mint_core_unifill_Exception */ 
