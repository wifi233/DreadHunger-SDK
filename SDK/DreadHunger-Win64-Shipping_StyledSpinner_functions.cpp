                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_StyledSpinner_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StyledSpinner.StyledSpinner_C.GetRightArrowColorAndOpacity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UStyledSpinner_C::GetRightArrowColorAndOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function StyledSpinner.StyledSpinner_C.GetRightArrowColorAndOpacity");

	UStyledSpinner_C_GetRightArrowColorAndOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StyledSpinner.StyledSpinner_C.GetLeftArrowColorAndOpacity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UStyledSpinner_C::GetLeftArrowColorAndOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function StyledSpinner.StyledSpinner_C.GetLeftArrowColorAndOpacity");

	UStyledSpinner_C_GetLeftArrowColorAndOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StyledSpinner.StyledSpinner_C.GetLabelText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStyledSpinner_C::GetLabelText()
{
	static auto fn = UObject::FindObject<UFunction>("Function StyledSpinner.StyledSpinner_C.GetLabelText");

	UStyledSpinner_C_GetLabelText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StyledSpinner.StyledSpinner_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStyledSpinner_C::BndEvt__LeftButton_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StyledSpinner.StyledSpinner_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature");

	UStyledSpinner_C_BndEvt__LeftButton_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StyledSpinner.StyledSpinner_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStyledSpinner_C::BndEvt__RightButton_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StyledSpinner.StyledSpinner_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature");

	UStyledSpinner_C_BndEvt__RightButton_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StyledSpinner.StyledSpinner_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStyledSpinner_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyledSpinner.StyledSpinner_C.PreConstruct");

	UStyledSpinner_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StyledSpinner.StyledSpinner_C.Update Text
// (BlueprintCallable, BlueprintEvent)

void UStyledSpinner_C::Update_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function StyledSpinner.StyledSpinner_C.Update Text");

	UStyledSpinner_C_Update_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StyledSpinner.StyledSpinner_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStyledSpinner_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StyledSpinner.StyledSpinner_C.Construct");

	UStyledSpinner_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StyledSpinner.StyledSpinner_C.On Selection Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UStyledSpinner_C::On_Selection_Changed(const class FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyledSpinner.StyledSpinner_C.On Selection Changed");

	UStyledSpinner_C_On_Selection_Changed_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StyledSpinner.StyledSpinner_C.Update Arrow Colors
// (BlueprintCallable, BlueprintEvent)

void UStyledSpinner_C::Update_Arrow_Colors()
{
	static auto fn = UObject::FindObject<UFunction>("Function StyledSpinner.StyledSpinner_C.Update Arrow Colors");

	UStyledSpinner_C_Update_Arrow_Colors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StyledSpinner.StyledSpinner_C.Update
// (BlueprintCallable, BlueprintEvent)

void UStyledSpinner_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function StyledSpinner.StyledSpinner_C.Update");

	UStyledSpinner_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StyledSpinner.StyledSpinner_C.ExecuteUbergraph_StyledSpinner
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStyledSpinner_C::ExecuteUbergraph_StyledSpinner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyledSpinner.StyledSpinner_C.ExecuteUbergraph_StyledSpinner");

	UStyledSpinner_C_ExecuteUbergraph_StyledSpinner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
