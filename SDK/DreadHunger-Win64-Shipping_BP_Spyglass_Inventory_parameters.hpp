                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Spyglass_Inventory_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Spyglass_Inventory.BP_Spyglass_Inventory_C.UpdateListenerPosition
struct ABP_Spyglass_Inventory_C_UpdateListenerPosition_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Spyglass_Inventory.BP_Spyglass_Inventory_C.ClearTarget
struct ABP_Spyglass_Inventory_C_ClearTarget_Params
{
};

// Function BP_Spyglass_Inventory.BP_Spyglass_Inventory_C.OnChangedTarget
struct ABP_Spyglass_Inventory_C_OnChangedTarget_Params
{
	class AActor*                                      NewTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Spyglass_Inventory.BP_Spyglass_Inventory_C.UpdateTarget
struct ABP_Spyglass_Inventory_C_UpdateTarget_Params
{
};

// Function BP_Spyglass_Inventory.BP_Spyglass_Inventory_C.GetUseState
struct ABP_Spyglass_Inventory_C_GetUseState_Params
{
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Spyglass_Inventory.BP_Spyglass_Inventory_C.OnAimed
struct ABP_Spyglass_Inventory_C_OnAimed_Params
{
	bool                                               bNewIsAiming;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Spyglass_Inventory.BP_Spyglass_Inventory_C.ReceiveTick
struct ABP_Spyglass_Inventory_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Spyglass_Inventory.BP_Spyglass_Inventory_C.ReceiveDestroyed
struct ABP_Spyglass_Inventory_C_ReceiveDestroyed_Params
{
};

// Function BP_Spyglass_Inventory.BP_Spyglass_Inventory_C.ExecuteUbergraph_BP_Spyglass_Inventory
struct ABP_Spyglass_Inventory_C_ExecuteUbergraph_BP_Spyglass_Inventory_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
