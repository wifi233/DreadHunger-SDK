                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_IE_BoneClubBlunt_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IE_BoneClubBlunt.IE_BoneClubBlunt_C.GetImpactEffects
struct UIE_BoneClubBlunt_C_GetImpactEffects_Params
{
	TEnumAsByte<EPhysicalSurface>*                     ImpactedSurface;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWasScrape;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FImpactEffect                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
