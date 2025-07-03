                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_WarshipBoiler_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_WarshipBoiler.BP_WarshipBoiler_C.GetBurnTime
struct ABP_WarshipBoiler_C_GetBurnTime_Params
{
	EInventoryType                                     Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BurnTime;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_WarshipBoiler.BP_WarshipBoiler_C.GetName
struct ABP_WarshipBoiler_C_GetName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_WarshipBoiler.BP_WarshipBoiler_C.GetBurnTypes
struct ABP_WarshipBoiler_C_GetBurnTypes_Params
{
	TArray<EInventoryType>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_WarshipBoiler.BP_WarshipBoiler_C.ReceiveBeginPlay
struct ABP_WarshipBoiler_C_ReceiveBeginPlay_Params
{
};

// Function BP_WarshipBoiler.BP_WarshipBoiler_C.OnStorageClosed
struct ABP_WarshipBoiler_C_OnStorageClosed_Params
{
	class UDH_InventoryManager*                        OtherInventory;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_WarshipBoiler.BP_WarshipBoiler_C.OnStorageOpened
struct ABP_WarshipBoiler_C_OnStorageOpened_Params
{
	class UDH_InventoryManager*                        OtherInventory;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_WarshipBoiler.BP_WarshipBoiler_C.ExecuteUbergraph_BP_WarshipBoiler
struct ABP_WarshipBoiler_C_ExecuteUbergraph_BP_WarshipBoiler_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
