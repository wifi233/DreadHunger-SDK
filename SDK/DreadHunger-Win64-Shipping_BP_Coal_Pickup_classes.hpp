                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Coal_Pickup_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Coal_Pickup.BP_Coal_Pickup_C
// size:0x0008 (0x0390 - 0x0398)
class ABP_Coal_Pickup_C : public ADH_InventoryPickup
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	void ReceiveBeginPlay()//offset:0x13CEB30;
	void ReceiveDestroyed()//offset:0x13CEB30;
	void ExecuteUbergraph_BP_Coal_Pickup(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
