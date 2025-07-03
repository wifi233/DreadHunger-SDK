                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_BearTrap_View_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BearTrap_View.BP_BearTrap_View_C
// size:0x0008 (0x0330 - 0x0338)
class ABP_BearTrap_View_C : public ADH_BearTrapView
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	struct FInventoryEventEffectInstance PlayDroppedEffects(bool bWasThrown, EInventoryDominantHand DropHand, class ADH_HumanCharacter* HumanPawn)//offset:0x13CEB30;
	struct FInventoryEventEffectInstance PlayUsedEffects(unsigned char State)//offset:0x13CEB30;
	struct FInventoryEventEffectInstance PlayAimEffects(bool bIsAiming)//offset:0x13CEB30;
	void BP_OnArmed()//offset:0x13CEB30;
	void ExecuteUbergraph_BP_BearTrap_View(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
