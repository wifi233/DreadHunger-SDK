                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Totem_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Totem.BP_Totem_C.OnCrafted
struct ABP_Totem_C_OnCrafted_Params
{
	class ADH_PlayerState*                             CraftingPlayer;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Totem.BP_Totem_C.ReceiveBeginPlay
struct ABP_Totem_C_ReceiveBeginPlay_Params
{
};

// Function BP_Totem.BP_Totem_C.SpawnedFragments
struct ABP_Totem_C_SpawnedFragments_Params
{
	class ADH_DestructibleActor*                       Destructible;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Totem.BP_Totem_C.ExecuteUbergraph_BP_Totem
struct ABP_Totem_C_ExecuteUbergraph_BP_Totem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
