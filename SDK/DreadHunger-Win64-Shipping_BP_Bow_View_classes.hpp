                                                      /* ��SDK��������湤������,�ù�����ȫ���! */

                                                      /* ����:BiliBili:���ߵĶ̽�è */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Bow_View_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Bow_View.BP_Bow_View_C
// size:0x0000 (0x0320 - 0x0320)
class ABP_Bow_View_C : public ADH_InventoryView_Skeletal
{
public:

	struct FInventoryEventEffectInstance PlayEquipEffects(unsigned char State, EInventoryEffectFilter Filter)//offset:0x13CEB30;
	struct FInventoryEventEffectInstance PlayUsedEffects(unsigned char State)//offset:0x13CEB30;
	void SetArrowVisible(bool bVisible)//offset:0x13CEB30;
	void ShowArrow()//offset:0x13CEB30;
	struct FInventoryEventEffectInstance PlayReloadEffects()//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
