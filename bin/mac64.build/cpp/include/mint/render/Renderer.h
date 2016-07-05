#ifndef INCLUDED_mint_render_Renderer
#define INCLUDED_mint_render_Renderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(mint,Control)
HX_DECLARE_CLASS2(mint,render,Renderer)
HX_DECLARE_CLASS2(mint,render,Rendering)
namespace mint{
namespace render{


class HXCPP_CLASS_ATTRIBUTES  Renderer_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Renderer_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
};



template<typename IMPL>
class Renderer_delegate_ : public Renderer_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Renderer_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
};

} // end namespace mint
} // end namespace render

#endif /* INCLUDED_mint_render_Renderer */ 
