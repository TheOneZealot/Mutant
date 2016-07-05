#ifndef INCLUDED_mint_core_unifill_InternalEncodingIter
#define INCLUDED_mint_core_unifill_InternalEncodingIter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(mint,core,unifill,InternalEncodingIter)
namespace mint{
namespace core{
namespace unifill{


class HXCPP_CLASS_ATTRIBUTES  InternalEncodingIter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef InternalEncodingIter_obj OBJ_;
		InternalEncodingIter_obj();
		Void __construct(::String s,int beginIndex,int endIndex);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="mint.core.unifill.InternalEncodingIter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< InternalEncodingIter_obj > __new(::String s,int beginIndex,int endIndex);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InternalEncodingIter_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("InternalEncodingIter","\x88","\x6a","\x04","\x12"); }

		::String string;
		int index;
		int endIndex;
		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		int i;
		virtual int next( );
		Dynamic next_dyn();

};

} // end namespace mint
} // end namespace core
} // end namespace unifill

#endif /* INCLUDED_mint_core_unifill_InternalEncodingIter */ 
