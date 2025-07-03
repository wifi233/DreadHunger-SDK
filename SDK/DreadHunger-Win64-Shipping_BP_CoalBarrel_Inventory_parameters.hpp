                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_CoalBarrel_Inventory_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CoalBarrel_Inventory.BP_CoalBarrel_Inventory_C.OnRep_InventoryAddedFlash
struct ABP_CoalBarrel_Inventory_C_OnRep_InventoryAddedFlash_Params
{
};

// Function BP_CoalBarrel_Inventory.BP_CoalBarrel_Inventory_C.OnSpawnedPickup
struct ABP_CoalBarrel_Inventory_C_OnSpawnedPickup_Params
{
	class ADH_InventoryPickup*                         Pickup;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EInventoryDropMethod                               SpawnMethod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CoalBarrel_Inventory.BP_CoalBarrel_Inventory_C.OnUsed
struct ABP_CoalBarrel_Inventory_C_OnUsed_Params
{
	struct FTransform                                  UseTransform;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	unsigned char                                      UseState;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_CoalBarrel_Inventory.BP_CoalBarrel_Inventory_C.BndEvt__Inventory_K2Node_ComponentBoundEvent_0_InventoryAddedEvent__DelegateSignature
struct ABP_CoalBarrel_Inventory_C_BndEvt__Inventory_K2Node_ComponentBoundEvent_0_InventoryAddedEvent__DelegateSignature_Params
{
	class ADH_Inventory*                               AddedType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AddedAmount;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CoalBarrel_Inventory.BP_CoalBarrel_Inventory_C.LoadFromInventory
struct ABP_CoalBarrel_Inventory_C_LoadFromInventory_Params
{
	class ADH_Inventory*                               FromInventory;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CoalBarrel_Inventory.BP_CoalBarrel_Inventory_C.LoadFromPickup
struct ABP_CoalBarrel_Inventory_C_LoadFromPickup_Params
{
	class ADH_InventoryPickup*                         FromPickup;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CoalBarrel_Inventory.BP_CoalBarrel_Inventory_C.ExecuteUbergraph_BP_CoalBarrel_Inventory
struct ABP_CoalBarrel_Inventory_C_ExecuteUbergraph_BP_CoalBarrel_Inventory_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
