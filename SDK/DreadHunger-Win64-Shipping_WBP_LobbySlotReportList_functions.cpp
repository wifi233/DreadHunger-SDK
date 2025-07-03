                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_WBP_LobbySlotReportList_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_LobbySlotReportList.WBP_LobbySlotReportList_C.BP_OnItemCreated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UDH_LobbySlotReportItemWidget* CreatedItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_LobbySlotReportList_C::BP_OnItemCreated(class UDH_LobbySlotReportItemWidget* CreatedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LobbySlotReportList.WBP_LobbySlotReportList_C.BP_OnItemCreated");

	UWBP_LobbySlotReportList_C_BP_OnItemCreated_Params params;
	params.CreatedItem = CreatedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LobbySlotReportList.WBP_LobbySlotReportList_C.BP_OnItemsEmptied
// (Event, Protected, BlueprintEvent)

void UWBP_LobbySlotReportList_C::BP_OnItemsEmptied()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LobbySlotReportList.WBP_LobbySlotReportList_C.BP_OnItemsEmptied");

	UWBP_LobbySlotReportList_C_BP_OnItemsEmptied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LobbySlotReportList.WBP_LobbySlotReportList_C.BP_OnShow
// (Event, Protected, BlueprintEvent)

void UWBP_LobbySlotReportList_C::BP_OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LobbySlotReportList.WBP_LobbySlotReportList_C.BP_OnShow");

	UWBP_LobbySlotReportList_C_BP_OnShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LobbySlotReportList.WBP_LobbySlotReportList_C.Hide
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_LobbySlotReportList_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LobbySlotReportList.WBP_LobbySlotReportList_C.Hide");

	UWBP_LobbySlotReportList_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LobbySlotReportList.WBP_LobbySlotReportList_C.ExecuteUbergraph_WBP_LobbySlotReportList
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LobbySlotReportList_C::ExecuteUbergraph_WBP_LobbySlotReportList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LobbySlotReportList.WBP_LobbySlotReportList_C.ExecuteUbergraph_WBP_LobbySlotReportList");

	UWBP_LobbySlotReportList_C_ExecuteUbergraph_WBP_LobbySlotReportList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
