                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_StyledAxisMapping_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StyledAxisMapping.StyledAxisMapping_C.BndEvt__ClearBind_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UStyledAxisMapping_C::BndEvt__ClearBind_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StyledAxisMapping.StyledAxisMapping_C.BndEvt__ClearBind_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UStyledAxisMapping_C_BndEvt__ClearBind_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StyledAxisMapping.StyledAxisMapping_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UStyledAxisMapping_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyledAxisMapping.StyledAxisMapping_C.OnMouseEnter");

	UStyledAxisMapping_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StyledAxisMapping.StyledAxisMapping_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UStyledAxisMapping_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyledAxisMapping.StyledAxisMapping_C.OnMouseLeave");

	UStyledAxisMapping_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StyledAxisMapping.StyledAxisMapping_C.ExecuteUbergraph_StyledAxisMapping
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStyledAxisMapping_C::ExecuteUbergraph_StyledAxisMapping(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyledAxisMapping.StyledAxisMapping_C.ExecuteUbergraph_StyledAxisMapping");

	UStyledAxisMapping_C_ExecuteUbergraph_StyledAxisMapping_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
