                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Bow_Inventory_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Bow_Inventory.BP_Bow_Inventory_C.CanUse
struct ABP_Bow_Inventory_C_CanUse_Params
{
	unsigned char                                      UseState;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Bow_Inventory.BP_Bow_Inventory_C.OnProjectileHitActor
struct ABP_Bow_Inventory_C_OnProjectileHitActor_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Bow_Inventory.BP_Bow_Inventory_C.OnProjectileSpawned
struct ABP_Bow_Inventory_C_OnProjectileSpawned_Params
{
	class ADH_Projectile*                              NewProjectile;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Bow_Inventory.BP_Bow_Inventory_C.OnEquipped
struct ABP_Bow_Inventory_C_OnEquipped_Params
{
};

// Function BP_Bow_Inventory.BP_Bow_Inventory_C.OnPutDown
struct ABP_Bow_Inventory_C_OnPutDown_Params
{
};

// Function BP_Bow_Inventory.BP_Bow_Inventory_C.ReceiveTick
struct ABP_Bow_Inventory_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Bow_Inventory.BP_Bow_Inventory_C.ExecuteUbergraph_BP_Bow_Inventory
struct ABP_Bow_Inventory_C_ExecuteUbergraph_BP_Bow_Inventory_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
