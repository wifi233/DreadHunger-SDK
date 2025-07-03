                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_WBP_QuestInfo_parameters.hpp"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_QuestInfo.WBP_QuestInfo_C.BP_SetIcon
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QuestInfo_C::BP_SetIcon(class UTexture2D* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuestInfo.WBP_QuestInfo_C.BP_SetIcon");

	UWBP_QuestInfo_C_BP_SetIcon_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuestInfo.WBP_QuestInfo_C.BP_SetText
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_QuestInfo_C::BP_SetText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuestInfo.WBP_QuestInfo_C.BP_SetText");

	UWBP_QuestInfo_C_BP_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuestInfo.WBP_QuestInfo_C.BP_Complete
// (Event, Protected, BlueprintEvent)

void UWBP_QuestInfo_C::BP_Complete()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuestInfo.WBP_QuestInfo_C.BP_Complete");

	UWBP_QuestInfo_C_BP_Complete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuestInfo.WBP_QuestInfo_C.ExecuteUbergraph_WBP_QuestInfo
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QuestInfo_C::ExecuteUbergraph_WBP_QuestInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuestInfo.WBP_QuestInfo_C.ExecuteUbergraph_WBP_QuestInfo");

	UWBP_QuestInfo_C_ExecuteUbergraph_WBP_QuestInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
