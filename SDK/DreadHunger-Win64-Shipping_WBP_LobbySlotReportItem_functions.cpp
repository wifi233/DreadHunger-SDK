                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_WBP_LobbySlotReportItem_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_LobbySlotReportItem.WBP_LobbySlotReportItem_C.BP_OnReportReasonSet
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   InReportReason                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_LobbySlotReportItem_C::BP_OnReportReasonSet(const struct FText& InReportReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LobbySlotReportItem.WBP_LobbySlotReportItem_C.BP_OnReportReasonSet");

	UWBP_LobbySlotReportItem_C_BP_OnReportReasonSet_Params params;
	params.InReportReason = InReportReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LobbySlotReportItem.WBP_LobbySlotReportItem_C.BndEvt__ReportButton_K2Node_ComponentBoundEvent_0_ButtonSimpleSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UDH_ButtonWidget*        Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_LobbySlotReportItem_C::BndEvt__ReportButton_K2Node_ComponentBoundEvent_0_ButtonSimpleSignature__DelegateSignature(class UDH_ButtonWidget* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LobbySlotReportItem.WBP_LobbySlotReportItem_C.BndEvt__ReportButton_K2Node_ComponentBoundEvent_0_ButtonSimpleSignature__DelegateSignature");

	UWBP_LobbySlotReportItem_C_BndEvt__ReportButton_K2Node_ComponentBoundEvent_0_ButtonSimpleSignature__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LobbySlotReportItem.WBP_LobbySlotReportItem_C.ExecuteUbergraph_WBP_LobbySlotReportItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LobbySlotReportItem_C::ExecuteUbergraph_WBP_LobbySlotReportItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LobbySlotReportItem.WBP_LobbySlotReportItem_C.ExecuteUbergraph_WBP_LobbySlotReportItem");

	UWBP_LobbySlotReportItem_C_ExecuteUbergraph_WBP_LobbySlotReportItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
