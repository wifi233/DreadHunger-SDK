                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_ShipsGauge_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ShipsGauge.BP_ShipsGauge_C.ReceiveBeginPlay
struct ABP_ShipsGauge_C_ReceiveBeginPlay_Params
{
};

// Function BP_ShipsGauge.BP_ShipsGauge_C.OnWarshipChanged
struct ABP_ShipsGauge_C_OnWarshipChanged_Params
{
	class ADH_Warship*                                 Warship;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShipsGauge.BP_ShipsGauge_C.ReceiveTick
struct ABP_ShipsGauge_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShipsGauge.BP_ShipsGauge_C.ExecuteUbergraph_BP_ShipsGauge
struct ABP_ShipsGauge_C_ExecuteUbergraph_BP_ShipsGauge_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
