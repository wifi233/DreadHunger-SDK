                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Warship_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Warship.BP_Warship_C.GetPressureGauge
struct ABP_Warship_C_GetPressureGauge_Params
{
	class USceneComponent*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_Warship.BP_Warship_C.SpawnBrigCells
struct ABP_Warship_C_SpawnBrigCells_Params
{
	TArray<class USceneComponent*>                     Brig_Scene_Components;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_Warship.BP_Warship_C.BP_GetSkipperLocation
struct ABP_Warship_C_BP_GetSkipperLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Warship.BP_Warship_C.CacheLights
struct ABP_Warship_C_CacheLights_Params
{
};

// Function BP_Warship.BP_Warship_C.ReceiveTick
struct ABP_Warship_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Warship.BP_Warship_C.ReceiveBeginPlay
struct ABP_Warship_C_ReceiveBeginPlay_Params
{
};

// Function BP_Warship.BP_Warship_C.ExecuteUbergraph_BP_Warship
struct ABP_Warship_C_ExecuteUbergraph_BP_Warship_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
