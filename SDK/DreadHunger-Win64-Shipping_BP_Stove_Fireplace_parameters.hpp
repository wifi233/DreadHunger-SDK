                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Stove_Fireplace_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Stove_Fireplace.BP_Stove_Fireplace_C.GetBurnTime
struct ABP_Stove_Fireplace_C_GetBurnTime_Params
{
	EInventoryType                                     Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BurnTime;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Stove_Fireplace.BP_Stove_Fireplace_C.GetName
struct ABP_Stove_Fireplace_C_GetName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Stove_Fireplace.BP_Stove_Fireplace_C.GetBurnTypes
struct ABP_Stove_Fireplace_C_GetBurnTypes_Params
{
	TArray<EInventoryType>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Stove_Fireplace.BP_Stove_Fireplace_C.GetKeybindInteractText
struct ABP_Stove_Fireplace_C_GetKeybindInteractText_Params
{
	class AController*                                 InteractInstigator;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDH_KeybindInteractionMessage               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Stove_Fireplace.BP_Stove_Fireplace_C.ReceiveTick
struct ABP_Stove_Fireplace_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Stove_Fireplace.BP_Stove_Fireplace_C.ReceiveBeginPlay
struct ABP_Stove_Fireplace_C_ReceiveBeginPlay_Params
{
};

// Function BP_Stove_Fireplace.BP_Stove_Fireplace_C.OnStoveClosed
struct ABP_Stove_Fireplace_C_OnStoveClosed_Params
{
	class UDH_InventoryManager*                        OtherInventory;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Stove_Fireplace.BP_Stove_Fireplace_C.OnStoveOpened
struct ABP_Stove_Fireplace_C_OnStoveOpened_Params
{
	class UDH_InventoryManager*                        OtherInventory;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Stove_Fireplace.BP_Stove_Fireplace_C.ExecuteUbergraph_BP_Stove_Fireplace
struct ABP_Stove_Fireplace_C_ExecuteUbergraph_BP_Stove_Fireplace_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
