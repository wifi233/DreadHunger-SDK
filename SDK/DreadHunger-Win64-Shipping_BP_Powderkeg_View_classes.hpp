                                                      /* ��SDK��������湤������,�ù�����ȫ���! */

                                                      /* ����:BiliBili:���ߵĶ̽�è */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Powderkeg_View_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Powderkeg_View.BP_Powderkeg_View_C
// size:0x0010 (0x02E0 - 0x02F0)
class ABP_Powderkeg_View_C : public ADH_InventoryView_Static
{
public:
	class UAudioComponent*                             FuseSound;                                                // 0x02E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    FuseParticle;                                             // 0x02E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	void SetFuseEffectsActive(bool bActive)//offset:0x13CEB30;
	struct FInventoryEventEffectInstance PlayUsedEffects(unsigned char State)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
