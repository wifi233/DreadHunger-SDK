                                                      /* ��SDK��������湤������,�ù�����ȫ���! */

                                                      /* ����:BiliBili:���ߵĶ̽�è */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Candlestick_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Candlestick.BP_Candlestick_C.Interpolate
struct ABP_Candlestick_C_Interpolate_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Candlestick.BP_Candlestick_C.SetIsLit
struct ABP_Candlestick_C_SetIsLit_Params
{
	bool                                               bNewIsLit;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Candlestick.BP_Candlestick_C.ReceiveTick
struct ABP_Candlestick_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Candlestick.BP_Candlestick_C.ReceiveBeginPlay
struct ABP_Candlestick_C_ReceiveBeginPlay_Params
{
};

// Function BP_Candlestick.BP_Candlestick_C.ExecuteUbergraph_BP_Candlestick
struct ABP_Candlestick_C_ExecuteUbergraph_BP_Candlestick_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
