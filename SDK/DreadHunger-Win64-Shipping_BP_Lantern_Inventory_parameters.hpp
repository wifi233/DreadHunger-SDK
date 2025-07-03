                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Lantern_Inventory_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.GetUseState
struct ABP_Lantern_Inventory_C_GetUseState_Params
{
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.CanUse
struct ABP_Lantern_Inventory_C_CanUse_Params
{
	unsigned char                                      UseState;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.OnSpawnedPickup
struct ABP_Lantern_Inventory_C_OnSpawnedPickup_Params
{
	class ADH_InventoryPickup*                         Pickup;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EInventoryDropMethod                               SpawnMethod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.ReceiveTick
struct ABP_Lantern_Inventory_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.OnEquipped
struct ABP_Lantern_Inventory_C_OnEquipped_Params
{
};

// Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.OnPutDown
struct ABP_Lantern_Inventory_C_OnPutDown_Params
{
};

// Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.BndEvt__LanternHeat_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature
struct ABP_Lantern_Inventory_C_BndEvt__LanternHeat_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature_Params
{
	class UActorComponent*                             Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bReset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.BndEvt__LanternHeat_K2Node_ComponentBoundEvent_2_ActorComponentDeactivateSignature__DelegateSignature
struct ABP_Lantern_Inventory_C_BndEvt__LanternHeat_K2Node_ComponentBoundEvent_2_ActorComponentDeactivateSignature__DelegateSignature_Params
{
	class UActorComponent*                             Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.OnUsed
struct ABP_Lantern_Inventory_C_OnUsed_Params
{
	struct FTransform                                  UseTransform;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	unsigned char                                      UseState;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.OnTopStateChanged
struct ABP_Lantern_Inventory_C_OnTopStateChanged_Params
{
};

// Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.LoadFromPickup
struct ABP_Lantern_Inventory_C_LoadFromPickup_Params
{
	class ADH_InventoryPickup*                         FromPickup;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lantern_Inventory.BP_Lantern_Inventory_C.ExecuteUbergraph_BP_Lantern_Inventory
struct ABP_Lantern_Inventory_C_ExecuteUbergraph_BP_Lantern_Inventory_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
