                                                      /* ��SDK��������湤������,�ù�����ȫ���! */

                                                      /* ����:BiliBili:���ߵĶ̽�è */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_STAT_Kill_Predator_classes.hpp"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function STAT_Kill_Predator.STAT_Kill_Predator_C.GetScoreModifiers
struct USTAT_Kill_Predator_C_GetScoreModifiers_Params
{
	class ADH_PlayerState*                             ScoringPlayer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
