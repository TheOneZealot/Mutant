#ifndef INCLUDED_mint_core_Signal
#define INCLUDED_mint_core_Signal

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(mint,core,Signal)
namespace mint{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  Signal_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Signal_obj OBJ_;
		Signal_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="mint.core.Signal")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Signal_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Signal_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Signal","\x88","\xa2","\x1a","\xe9"); }

		cpp::ArrayBase listeners;
		virtual Void listen( Dynamic _handler);
		Dynamic listen_dyn();

		virtual Void remove( Dynamic _handler);
		Dynamic remove_dyn();

		virtual bool has( Dynamic _handler);
		Dynamic has_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

};

} // end namespace mint
} // end namespace core

#endif /* INCLUDED_mint_core_Signal */ 
