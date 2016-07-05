#ifndef INCLUDED_mint_types_TextEventType
#define INCLUDED_mint_types_TextEventType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(mint,types,TextEventType)
namespace mint{
namespace types{


class TextEventType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TextEventType_obj OBJ_;

	public:
		TextEventType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("mint.types.TextEventType","\xe6","\x8e","\xbf","\xeb"); }
		::String __ToString() const { return HX_HCSTRING("TextEventType.","\xe7","\x58","\x2c","\x2a") + tag; }

		static ::mint::types::TextEventType edit;
		static inline ::mint::types::TextEventType edit_dyn() { return edit; }
		static ::mint::types::TextEventType input;
		static inline ::mint::types::TextEventType input_dyn() { return input; }
		static ::mint::types::TextEventType unknown;
		static inline ::mint::types::TextEventType unknown_dyn() { return unknown; }
};

} // end namespace mint
} // end namespace types

#endif /* INCLUDED_mint_types_TextEventType */ 
