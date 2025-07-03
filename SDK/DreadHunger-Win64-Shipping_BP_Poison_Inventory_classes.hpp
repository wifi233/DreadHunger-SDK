                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Poison_Inventory_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Poison_Inventory.BP_Poison_Inventory_C
// size:0x0008 (0x0930 - 0x0938)
class ABP_Poison_Inventory_C : public ADH_Inventory_Consumable
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0930(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	void OnAppliedTo(class ADH_Inventory* Target, int NumApplied, class ADH_PlayerState* ApplyingPlayer)//offset:0x13CEB30;
	bool CanBeAppliedTo(class ADH_Inventory* Target, const struct FInventorySlotContents& TargetSlot)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
