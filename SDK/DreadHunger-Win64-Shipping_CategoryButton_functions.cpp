                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_CategoryButton_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CategoryButton.CategoryButton_C.GetIndicatorVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UCategoryButton_C::GetIndicatorVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryButton.CategoryButton_C.GetIndicatorVisibility");

	UCategoryButton_C_GetIndicatorVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CategoryButton.CategoryButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCategoryButton_C::BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryButton.CategoryButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UCategoryButton_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CategoryButton.CategoryButton_C.UpdateSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           InSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCategoryButton_C::UpdateSelected(bool InSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryButton.CategoryButton_C.UpdateSelected");

	UCategoryButton_C_UpdateSelected_Params params;
	params.InSelected = InSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CategoryButton.CategoryButton_C.UpdateLabel
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   InLabel                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCategoryButton_C::UpdateLabel(const struct FText& InLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryButton.CategoryButton_C.UpdateLabel");

	UCategoryButton_C_UpdateLabel_Params params;
	params.InLabel = InLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CategoryButton.CategoryButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCategoryButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryButton.CategoryButton_C.PreConstruct");

	UCategoryButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CategoryButton.CategoryButton_C.ExecuteUbergraph_CategoryButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCategoryButton_C::ExecuteUbergraph_CategoryButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryButton.CategoryButton_C.ExecuteUbergraph_CategoryButton");

	UCategoryButton_C_ExecuteUbergraph_CategoryButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
