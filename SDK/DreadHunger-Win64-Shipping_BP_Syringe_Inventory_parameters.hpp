                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Syringe_Inventory_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Syringe_Inventory.BP_Syringe_Inventory_C.GetOverrideTraceHits
struct ABP_Syringe_Inventory_C_GetOverrideTraceHits_Params
{
	unsigned char                                      UseState;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FHitResult>                          OverrideHits;                                             // (Parm, OutParm)
};

// Function BP_Syringe_Inventory.BP_Syringe_Inventory_C.GetTraceStartTime
struct ABP_Syringe_Inventory_C_GetTraceStartTime_Params
{
	unsigned char                                      UseState;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Syringe_Inventory.BP_Syringe_Inventory_C.GetUseState
struct ABP_Syringe_Inventory_C_GetUseState_Params
{
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Syringe_Inventory.BP_Syringe_Inventory_C.GiveHealth
struct ABP_Syringe_Inventory_C_GiveHealth_Params
{
	class ADH_HumanCharacter*                          Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Syringe_Inventory.BP_Syringe_Inventory_C.OnMeleeWeaponHit
struct ABP_Syringe_Inventory_C_OnMeleeWeaponHit_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	unsigned char                                      AttackState;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_Syringe_Inventory.BP_Syringe_Inventory_C.ExecuteUbergraph_BP_Syringe_Inventory
struct ABP_Syringe_Inventory_C_ExecuteUbergraph_BP_Syringe_Inventory_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
