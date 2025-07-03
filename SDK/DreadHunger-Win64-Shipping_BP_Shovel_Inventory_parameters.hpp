                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Shovel_Inventory_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Shovel_Inventory.BP_Shovel_Inventory_C.GetDamageType
struct ABP_Shovel_Inventory_C_GetDamageType_Params
{
	unsigned char                                      UseState;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UDamageType*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Shovel_Inventory.BP_Shovel_Inventory_C.MaybeSpawnBuriedTreasure
struct ABP_Shovel_Inventory_C_MaybeSpawnBuriedTreasure_Params
{
	struct FHitResult                                  Hit;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Shovel_Inventory.BP_Shovel_Inventory_C.GetDamage
struct ABP_Shovel_Inventory_C_GetDamage_Params
{
	unsigned char                                      UseState;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Shovel_Inventory.BP_Shovel_Inventory_C.UseStateBlocksInteracts
struct ABP_Shovel_Inventory_C_UseStateBlocksInteracts_Params
{
	unsigned char                                      State;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Shovel_Inventory.BP_Shovel_Inventory_C.IsHoldToAttack
struct ABP_Shovel_Inventory_C_IsHoldToAttack_Params
{
	unsigned char                                      AttackState;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Shovel_Inventory.BP_Shovel_Inventory_C.GetUseState
struct ABP_Shovel_Inventory_C_GetUseState_Params
{
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Shovel_Inventory.BP_Shovel_Inventory_C.OnMeleeWeaponHit
struct ABP_Shovel_Inventory_C_OnMeleeWeaponHit_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	unsigned char                                      AttackState;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_Shovel_Inventory.BP_Shovel_Inventory_C.ExecuteUbergraph_BP_Shovel_Inventory
struct ABP_Shovel_Inventory_C_ExecuteUbergraph_BP_Shovel_Inventory_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
