                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_WBP_OnlineError_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_OnlineError.WBP_OnlineError_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_OnlineError_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_OnlineError.WBP_OnlineError_C.PreConstruct");

	UWBP_OnlineError_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_OnlineError.WBP_OnlineError_C.BP_OnShow
// (Event, Protected, BlueprintEvent)

void UWBP_OnlineError_C::BP_OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_OnlineError.WBP_OnlineError_C.BP_OnShow");

	UWBP_OnlineError_C_BP_OnShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_OnlineError.WBP_OnlineError_C.BP_OnHide
// (Event, Protected, BlueprintEvent)

void UWBP_OnlineError_C::BP_OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_OnlineError.WBP_OnlineError_C.BP_OnHide");

	UWBP_OnlineError_C_BP_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_OnlineError.WBP_OnlineError_C.BP_OnItemsEmptied
// (Event, Protected, BlueprintEvent)

void UWBP_OnlineError_C::BP_OnItemsEmptied()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_OnlineError.WBP_OnlineError_C.BP_OnItemsEmptied");

	UWBP_OnlineError_C_BP_OnItemsEmptied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_OnlineError.WBP_OnlineError_C.BndEvt__View_K2Node_ComponentBoundEvent_0_OnErrorMessageViewHiddenSignature__DelegateSignature
// (BlueprintEvent)

void UWBP_OnlineError_C::BndEvt__View_K2Node_ComponentBoundEvent_0_OnErrorMessageViewHiddenSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_OnlineError.WBP_OnlineError_C.BndEvt__View_K2Node_ComponentBoundEvent_0_OnErrorMessageViewHiddenSignature__DelegateSignature");

	UWBP_OnlineError_C_BndEvt__View_K2Node_ComponentBoundEvent_0_OnErrorMessageViewHiddenSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_OnlineError.WBP_OnlineError_C.BP_OnItemCreated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UDH_OnlineErrorItemWidget* CreatedItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_OnlineError_C::BP_OnItemCreated(class UDH_OnlineErrorItemWidget* CreatedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_OnlineError.WBP_OnlineError_C.BP_OnItemCreated");

	UWBP_OnlineError_C_BP_OnItemCreated_Params params;
	params.CreatedItem = CreatedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_OnlineError.WBP_OnlineError_C.ExecuteUbergraph_WBP_OnlineError
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_OnlineError_C::ExecuteUbergraph_WBP_OnlineError(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_OnlineError.WBP_OnlineError_C.ExecuteUbergraph_WBP_OnlineError");

	UWBP_OnlineError_C_ExecuteUbergraph_WBP_OnlineError_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
