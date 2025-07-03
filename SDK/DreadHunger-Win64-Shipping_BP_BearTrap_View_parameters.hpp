                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_BearTrap_View_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_BearTrap_View.BP_BearTrap_View_C.PlayDroppedEffects
struct ABP_BearTrap_View_C_PlayDroppedEffects_Params
{
	bool                                               bWasThrown;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EInventoryDominantHand                             DropHand;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADH_HumanCharacter*                          HumanPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FInventoryEventEffectInstance               ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function BP_BearTrap_View.BP_BearTrap_View_C.PlayUsedEffects
struct ABP_BearTrap_View_C_PlayUsedEffects_Params
{
	unsigned char                                      State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FInventoryEventEffectInstance               ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function BP_BearTrap_View.BP_BearTrap_View_C.PlayAimEffects
struct ABP_BearTrap_View_C_PlayAimEffects_Params
{
	bool                                               bIsAiming;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FInventoryEventEffectInstance               ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function BP_BearTrap_View.BP_BearTrap_View_C.BP_OnArmed
struct ABP_BearTrap_View_C_BP_OnArmed_Params
{
};

// Function BP_BearTrap_View.BP_BearTrap_View_C.ExecuteUbergraph_BP_BearTrap_View
struct ABP_BearTrap_View_C_ExecuteUbergraph_BP_BearTrap_View_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
