                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Campfire_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Campfire.BP_Campfire_C.GetBurnTypes
struct ABP_Campfire_C_GetBurnTypes_Params
{
	TArray<EInventoryType>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Campfire.BP_Campfire_C.GetName
struct ABP_Campfire_C_GetName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Campfire.BP_Campfire_C.GetBurnTime
struct ABP_Campfire_C_GetBurnTime_Params
{
	EInventoryType                                     Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BurnTime;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
