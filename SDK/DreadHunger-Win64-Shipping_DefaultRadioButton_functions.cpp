                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_DefaultRadioButton_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DefaultRadioButton.DefaultRadioButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDefaultRadioButton_C::BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultRadioButton.DefaultRadioButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UDefaultRadioButton_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultRadioButton.DefaultRadioButton_C.UpdateLabel
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   InLabel                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UDefaultRadioButton_C::UpdateLabel(const struct FText& InLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultRadioButton.DefaultRadioButton_C.UpdateLabel");

	UDefaultRadioButton_C_UpdateLabel_Params params;
	params.InLabel = InLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultRadioButton.DefaultRadioButton_C.UpdateSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           InSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDefaultRadioButton_C::UpdateSelected(bool InSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultRadioButton.DefaultRadioButton_C.UpdateSelected");

	UDefaultRadioButton_C_UpdateSelected_Params params;
	params.InSelected = InSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultRadioButton.DefaultRadioButton_C.ExecuteUbergraph_DefaultRadioButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDefaultRadioButton_C::ExecuteUbergraph_DefaultRadioButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultRadioButton.DefaultRadioButton_C.ExecuteUbergraph_DefaultRadioButton");

	UDefaultRadioButton_C_ExecuteUbergraph_DefaultRadioButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultRadioButton.DefaultRadioButton_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDefaultRadioButton_C::Clicked__DelegateSignature(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultRadioButton.DefaultRadioButton_C.Clicked__DelegateSignature");

	UDefaultRadioButton_C_Clicked__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
