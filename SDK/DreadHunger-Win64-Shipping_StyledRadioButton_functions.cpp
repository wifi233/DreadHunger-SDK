                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_StyledRadioButton_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StyledRadioButton.StyledRadioButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStyledRadioButton_C::BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StyledRadioButton.StyledRadioButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UStyledRadioButton_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StyledRadioButton.StyledRadioButton_C.UpdateLabel
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   InLabel                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UStyledRadioButton_C::UpdateLabel(const struct FText& InLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyledRadioButton.StyledRadioButton_C.UpdateLabel");

	UStyledRadioButton_C_UpdateLabel_Params params;
	params.InLabel = InLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StyledRadioButton.StyledRadioButton_C.UpdateSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           InSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStyledRadioButton_C::UpdateSelected(bool InSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyledRadioButton.StyledRadioButton_C.UpdateSelected");

	UStyledRadioButton_C_UpdateSelected_Params params;
	params.InSelected = InSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StyledRadioButton.StyledRadioButton_C.ExecuteUbergraph_StyledRadioButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStyledRadioButton_C::ExecuteUbergraph_StyledRadioButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyledRadioButton.StyledRadioButton_C.ExecuteUbergraph_StyledRadioButton");

	UStyledRadioButton_C_ExecuteUbergraph_StyledRadioButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
