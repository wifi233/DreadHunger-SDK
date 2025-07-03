                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Powderkeg_Inventory_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Powderkeg_Inventory.BP_Powderkeg_Inventory_C
// size:0x0011 (0x0910 - 0x0921)
class ABP_Powderkeg_Inventory_C : public ADH_Inventory
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0910(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0918(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bArmed;                                                   // 0x0920(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	unsigned char GetUseState(TEnumAsByte<EInputEvent> InputEvent)//offset:0x13CEB30;
	void SetIsArmed(bool bNewIsArmed)//offset:0x13CEB30;
	void OnUsed(const struct FTransform& UseTransform, unsigned char UseState)//offset:0x13CEB30;
	void OnSpawnedPickup(class ADH_InventoryPickup* Pickup, EInventoryDropMethod SpawnMethod)//offset:0x13CEB30;
	void ExecuteUbergraph_BP_Powderkeg_Inventory(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
