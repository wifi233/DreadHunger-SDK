                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_WBP_OnlineErrorItem_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_OnlineErrorItem.WBP_OnlineErrorItem_C.BP_OnErrorSet
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   InLocalizedText                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                  InRawError                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWBP_OnlineErrorItem_C::BP_OnErrorSet(const struct FText& InLocalizedText, const class FString& InRawError)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_OnlineErrorItem.WBP_OnlineErrorItem_C.BP_OnErrorSet");

	UWBP_OnlineErrorItem_C_BP_OnErrorSet_Params params;
	params.InLocalizedText = InLocalizedText;
	params.InRawError = InRawError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_OnlineErrorItem.WBP_OnlineErrorItem_C.ExecuteUbergraph_WBP_OnlineErrorItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_OnlineErrorItem_C::ExecuteUbergraph_WBP_OnlineErrorItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_OnlineErrorItem.WBP_OnlineErrorItem_C.ExecuteUbergraph_WBP_OnlineErrorItem");

	UWBP_OnlineErrorItem_C_ExecuteUbergraph_WBP_OnlineErrorItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
