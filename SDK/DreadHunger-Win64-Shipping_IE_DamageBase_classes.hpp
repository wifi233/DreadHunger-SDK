                                                      /* ��SDK��������湤������,�ù�����ȫ���! */

                                                      /* ����:BiliBili:���ߵĶ̽�è */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_IE_DamageBase_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IE_DamageBase.IE_DamageBase_C
// size:0x0050 (0x0040 - 0x0090)
class UIE_DamageBase_C : public UDH_ImpactEffect
{
public:
	struct FImpactDecal                                GenericBloodDecal;                                        // 0x0040(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)

	struct FImpactEffect GetImpactEffects(TEnumAsByte<EPhysicalSurface> ImpactedSurface, bool bWasScrape)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
