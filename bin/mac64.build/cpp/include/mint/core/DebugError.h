#ifndef INCLUDED_mint_core_DebugError
#define INCLUDED_mint_core_DebugError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(mint,core,DebugError)
namespace mint{
namespace core{


class DebugError_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef DebugError_obj OBJ_;

	public:
		DebugError_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("mint.core.DebugError","\x78","\x8d","\xb4","\x4a"); }
		::String __ToString() const { return HX_HCSTRING("DebugError.","\xf9","\xe1","\x0d","\x3e") + tag; }

		static ::mint::core::DebugError assertion(::String expr);
		static Dynamic assertion_dyn();
		static ::mint::core::DebugError null_assertion(::String expr);
		static Dynamic null_assertion_dyn();
};

} // end namespace mint
} // end namespace core

#endif /* INCLUDED_mint_core_DebugError */ 
