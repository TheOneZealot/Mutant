#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Interactor
#define INCLUDED_zpp_nape_util_ZNPList_ZPP_Interactor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPNode_ZPP_Interactor)
namespace zpp_nape{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  ZNPList_ZPP_Interactor_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZNPList_ZPP_Interactor_obj OBJ_;
		ZNPList_ZPP_Interactor_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="zpp_nape.util.ZNPList_ZPP_Interactor")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZNPList_ZPP_Interactor_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZNPList_ZPP_Interactor_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ZNPList_ZPP_Interactor","\x43","\x71","\x5f","\xa6"); }

		::zpp_nape::util::ZNPNode_ZPP_Interactor head;
		virtual ::zpp_nape::util::ZNPNode_ZPP_Interactor begin( );
		Dynamic begin_dyn();

		bool modified;
		bool pushmod;
		int length;
		virtual Void setbegin( ::zpp_nape::util::ZNPNode_ZPP_Interactor i);
		Dynamic setbegin_dyn();

		virtual ::zpp_nape::phys::ZPP_Interactor add( ::zpp_nape::phys::ZPP_Interactor o);
		Dynamic add_dyn();

		virtual ::zpp_nape::phys::ZPP_Interactor inlined_add( ::zpp_nape::phys::ZPP_Interactor o);
		Dynamic inlined_add_dyn();

		virtual Void addAll( ::zpp_nape::util::ZNPList_ZPP_Interactor x);
		Dynamic addAll_dyn();

		virtual ::zpp_nape::util::ZNPNode_ZPP_Interactor insert( ::zpp_nape::util::ZNPNode_ZPP_Interactor cur,::zpp_nape::phys::ZPP_Interactor o);
		Dynamic insert_dyn();

		virtual ::zpp_nape::util::ZNPNode_ZPP_Interactor inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_Interactor cur,::zpp_nape::phys::ZPP_Interactor o);
		Dynamic inlined_insert_dyn();

		virtual Void pop( );
		Dynamic pop_dyn();

		virtual Void inlined_pop( );
		Dynamic inlined_pop_dyn();

		virtual ::zpp_nape::phys::ZPP_Interactor pop_unsafe( );
		Dynamic pop_unsafe_dyn();

		virtual ::zpp_nape::phys::ZPP_Interactor inlined_pop_unsafe( );
		Dynamic inlined_pop_unsafe_dyn();

		virtual Void remove( ::zpp_nape::phys::ZPP_Interactor obj);
		Dynamic remove_dyn();

		virtual bool try_remove( ::zpp_nape::phys::ZPP_Interactor obj);
		Dynamic try_remove_dyn();

		virtual Void inlined_remove( ::zpp_nape::phys::ZPP_Interactor obj);
		Dynamic inlined_remove_dyn();

		virtual bool inlined_try_remove( ::zpp_nape::phys::ZPP_Interactor obj);
		Dynamic inlined_try_remove_dyn();

		virtual ::zpp_nape::util::ZNPNode_ZPP_Interactor erase( ::zpp_nape::util::ZNPNode_ZPP_Interactor pre);
		Dynamic erase_dyn();

		virtual ::zpp_nape::util::ZNPNode_ZPP_Interactor inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_Interactor pre);
		Dynamic inlined_erase_dyn();

		virtual ::zpp_nape::util::ZNPNode_ZPP_Interactor splice( ::zpp_nape::util::ZNPNode_ZPP_Interactor pre,int n);
		Dynamic splice_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void inlined_clear( );
		Dynamic inlined_clear_dyn();

		virtual Void reverse( );
		Dynamic reverse_dyn();

		virtual bool empty( );
		Dynamic empty_dyn();

		virtual int size( );
		Dynamic size_dyn();

		virtual bool has( ::zpp_nape::phys::ZPP_Interactor obj);
		Dynamic has_dyn();

		virtual bool inlined_has( ::zpp_nape::phys::ZPP_Interactor obj);
		Dynamic inlined_has_dyn();

		virtual ::zpp_nape::phys::ZPP_Interactor front( );
		Dynamic front_dyn();

		virtual ::zpp_nape::phys::ZPP_Interactor back( );
		Dynamic back_dyn();

		virtual ::zpp_nape::util::ZNPNode_ZPP_Interactor iterator_at( int ind);
		Dynamic iterator_at_dyn();

		virtual ::zpp_nape::phys::ZPP_Interactor at( int ind);
		Dynamic at_dyn();

};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZNPList_ZPP_Interactor */ 
