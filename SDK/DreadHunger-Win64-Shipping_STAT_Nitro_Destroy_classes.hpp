                                                      /* ��SDK��������湤������,�ù�����ȫ���! */

                                                      /* ����:BiliBili:���ߵĶ̽�è */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_STAT_Nitro_Destroy_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass STAT_Nitro_Destroy.STAT_Nitro_Destroy_C
// size:0x0004 (0x0098 - 0x009C)
class USTAT_Nitro_Destroy_C : public UDH_PlayerMatchStat
{
public:
	float                                              Score;                                                    // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	float GetScoreModifiers(class ADH_PlayerState* ScoringPlayer, class AActor* Target)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
