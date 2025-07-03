                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_StrongBox_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_StrongBox.BP_StrongBox_C
// size:0x008F (0x0289 - 0x0318)
class ABP_StrongBox_C : public ABP_StorageTrunk_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0289(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Lid;                                                      // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  DefaultLidTransform;                                      // 0x02A0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  LidTransformOpen;                                         // 0x02D0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUnlocked;                                                // 0x0300(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0301(0x0007) MISSED OFFSET
	TArray<class UDH_CraftingRecipe*>                  EmptyRecipesList;                                         // 0x0308(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	void OnSearched()//offset:0x13CEB30;
	void OnRep_bUnlocked()//offset:0x13CEB30;
	void OnStorageClosed(class UDH_InventoryManager* OtherInventory)//offset:0x13CEB30;
	void ReceiveBeginPlay()//offset:0x13CEB30;
	void OnStorageOpened(class UDH_InventoryManager* OtherInventory)//offset:0x13CEB30;
	void ExecuteUbergraph_BP_StrongBox(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
