                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_StyledActionMapping_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StyledActionMapping.StyledActionMapping_C.BndEvt__ClearBind_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UStyledActionMapping_C::BndEvt__ClearBind_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StyledActionMapping.StyledActionMapping_C.BndEvt__ClearBind_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UStyledActionMapping_C_BndEvt__ClearBind_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StyledActionMapping.StyledActionMapping_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UStyledActionMapping_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyledActionMapping.StyledActionMapping_C.OnMouseEnter");

	UStyledActionMapping_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StyledActionMapping.StyledActionMapping_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UStyledActionMapping_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyledActionMapping.StyledActionMapping_C.OnMouseLeave");

	UStyledActionMapping_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StyledActionMapping.StyledActionMapping_C.ExecuteUbergraph_StyledActionMapping
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStyledActionMapping_C::ExecuteUbergraph_StyledActionMapping(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyledActionMapping.StyledActionMapping_C.ExecuteUbergraph_StyledActionMapping");

	UStyledActionMapping_C_ExecuteUbergraph_StyledActionMapping_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
