                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_StyledKeyLabel_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StyledKeyLabel.StyledKeyLabel_C.GetIconBrush
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UStyledKeyLabel_C::GetIconBrush()
{
	static auto fn = UObject::FindObject<UFunction>("Function StyledKeyLabel.StyledKeyLabel_C.GetIconBrush");

	UStyledKeyLabel_C_GetIconBrush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StyledKeyLabel.StyledKeyLabel_C.GetDisplayNameUpper
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStyledKeyLabel_C::GetDisplayNameUpper()
{
	static auto fn = UObject::FindObject<UFunction>("Function StyledKeyLabel.StyledKeyLabel_C.GetDisplayNameUpper");

	UStyledKeyLabel_C_GetDisplayNameUpper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StyledKeyLabel.StyledKeyLabel_C.UpdateKeyLabel
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UStyledKeyLabel_C::UpdateKeyLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function StyledKeyLabel.StyledKeyLabel_C.UpdateKeyLabel");

	UStyledKeyLabel_C_UpdateKeyLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StyledKeyLabel.StyledKeyLabel_C.ExecuteUbergraph_StyledKeyLabel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStyledKeyLabel_C::ExecuteUbergraph_StyledKeyLabel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StyledKeyLabel.StyledKeyLabel_C.ExecuteUbergraph_StyledKeyLabel");

	UStyledKeyLabel_C_ExecuteUbergraph_StyledKeyLabel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
