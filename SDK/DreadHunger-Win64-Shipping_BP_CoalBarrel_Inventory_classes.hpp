                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_CoalBarrel_Inventory_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CoalBarrel_Inventory.BP_CoalBarrel_Inventory_C
// size:0x0019 (0x0910 - 0x0929)
class ABP_CoalBarrel_Inventory_C : public ADH_Inventory
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0910(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDH_InventoryManager*                        Inventory;                                                // 0x0918(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0920(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      InventoryAddedFlash;                                      // 0x0928(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	void OnRep_InventoryAddedFlash()//offset:0x13CEB30;
	void OnSpawnedPickup(class ADH_InventoryPickup* Pickup, EInventoryDropMethod SpawnMethod)//offset:0x13CEB30;
	void OnUsed(const struct FTransform& UseTransform, unsigned char UseState)//offset:0x13CEB30;
	void BndEvt__Inventory_K2Node_ComponentBoundEvent_0_InventoryAddedEvent__DelegateSignature(class ADH_Inventory* AddedType, int AddedAmount)//offset:0x13CEB30;
	void LoadFromInventory(class ADH_Inventory* FromInventory)//offset:0x13CEB30;
	void LoadFromPickup(class ADH_InventoryPickup* FromPickup)//offset:0x13CEB30;
	void ExecuteUbergraph_BP_CoalBarrel_Inventory(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
