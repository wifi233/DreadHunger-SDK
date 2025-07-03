                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_TS_Hush_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TS_Hush.TS_Hush_C.DoSpellEffects
struct UTS_Hush_C_DoSpellEffects_Params
{
	class AActor*                                      SpellTarget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TS_Hush.TS_Hush_C.OnCast
struct UTS_Hush_C_OnCast_Params
{
	class AActor*                                      WorldContext;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TS_Hush.TS_Hush_C.OnExpired
struct UTS_Hush_C_OnExpired_Params
{
	class AActor*                                      WorldContext;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TS_Hush.TS_Hush_C.ExecuteUbergraph_TS_Hush
struct UTS_Hush_C_ExecuteUbergraph_TS_Hush_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
