                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_WBP_QuestInfo_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_QuestInfo.WBP_QuestInfo_C.BP_SetIcon
struct UWBP_QuestInfo_C_BP_SetIcon_Params
{
	class UTexture2D*                                  Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QuestInfo.WBP_QuestInfo_C.BP_SetText
struct UWBP_QuestInfo_C_BP_SetText_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_QuestInfo.WBP_QuestInfo_C.BP_Complete
struct UWBP_QuestInfo_C_BP_Complete_Params
{
};

// Function WBP_QuestInfo.WBP_QuestInfo_C.ExecuteUbergraph_WBP_QuestInfo
struct UWBP_QuestInfo_C_ExecuteUbergraph_WBP_QuestInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
