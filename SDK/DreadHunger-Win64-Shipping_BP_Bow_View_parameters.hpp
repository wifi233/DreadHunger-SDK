                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Bow_View_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Bow_View.BP_Bow_View_C.PlayEquipEffects
struct ABP_Bow_View_C_PlayEquipEffects_Params
{
	unsigned char                                      State;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	EInventoryEffectFilter                             Filter;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FInventoryEventEffectInstance               ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function BP_Bow_View.BP_Bow_View_C.PlayUsedEffects
struct ABP_Bow_View_C_PlayUsedEffects_Params
{
	unsigned char                                      State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FInventoryEventEffectInstance               ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function BP_Bow_View.BP_Bow_View_C.SetArrowVisible
struct ABP_Bow_View_C_SetArrowVisible_Params
{
	bool                                               bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Bow_View.BP_Bow_View_C.ShowArrow
struct ABP_Bow_View_C_ShowArrow_Params
{
};

// Function BP_Bow_View.BP_Bow_View_C.PlayReloadEffects
struct ABP_Bow_View_C_PlayReloadEffects_Params
{
	struct FInventoryEventEffectInstance               ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
