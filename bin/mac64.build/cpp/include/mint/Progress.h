#ifndef INCLUDED_mint_Progress
#define INCLUDED_mint_Progress

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_mint_Control
#include <mint/Control.h>
#endif
HX_DECLARE_CLASS1(mint,Control)
HX_DECLARE_CLASS1(mint,Progress)
HX_DECLARE_CLASS2(mint,core,Signal)
namespace mint{


class HXCPP_CLASS_ATTRIBUTES  Progress_obj : public ::mint::Control_obj{
	public:
		typedef ::mint::Control_obj super;
		typedef Progress_obj OBJ_;
		Progress_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="mint.Progress")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Progress_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Progress_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Progress","\xcd","\xb3","\xdc","\x5f"); }

		Float progress;
		::mint::core::Signal onchange;
		Dynamic options;
		virtual Void destroy( );

		virtual Float set_progress( Float _value);
		Dynamic set_progress_dyn();

};

} // end namespace mint

#endif /* INCLUDED_mint_Progress */ 
