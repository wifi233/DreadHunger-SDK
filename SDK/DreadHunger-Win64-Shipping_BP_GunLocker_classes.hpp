                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_GunLocker_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GunLocker.BP_GunLocker_C
// size:0x0077 (0x0289 - 0x0300)
class ABP_GunLocker_C : public ABP_GunStorageBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0289(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Lid;                                                      // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  LidTransformOpen;                                         // 0x02A0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  DefaultLidTransform;                                      // 0x02D0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	void OnStorageClosed(class UDH_InventoryManager* OtherInventory)//offset:0x13CEB30;
	void ReceiveBeginPlay()//offset:0x13CEB30;
	void OnStorageOpened(class UDH_InventoryManager* OtherInventory)//offset:0x13CEB30;
	void ExecuteUbergraph_BP_GunLocker(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
