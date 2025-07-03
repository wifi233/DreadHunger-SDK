                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Powderkeg_Inventory_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Powderkeg_Inventory.BP_Powderkeg_Inventory_C.GetUseState
struct ABP_Powderkeg_Inventory_C_GetUseState_Params
{
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Powderkeg_Inventory.BP_Powderkeg_Inventory_C.SetIsArmed
struct ABP_Powderkeg_Inventory_C_SetIsArmed_Params
{
	bool                                               bNewIsArmed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Powderkeg_Inventory.BP_Powderkeg_Inventory_C.OnUsed
struct ABP_Powderkeg_Inventory_C_OnUsed_Params
{
	struct FTransform                                  UseTransform;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	unsigned char                                      UseState;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_Powderkeg_Inventory.BP_Powderkeg_Inventory_C.OnSpawnedPickup
struct ABP_Powderkeg_Inventory_C_OnSpawnedPickup_Params
{
	class ADH_InventoryPickup*                         Pickup;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EInventoryDropMethod                               SpawnMethod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Powderkeg_Inventory.BP_Powderkeg_Inventory_C.ExecuteUbergraph_BP_Powderkeg_Inventory
struct ABP_Powderkeg_Inventory_C_ExecuteUbergraph_BP_Powderkeg_Inventory_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
