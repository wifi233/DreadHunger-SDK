                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_GunCabinet_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GunCabinet.BP_GunCabinet_C
// size:0x0093 (0x0289 - 0x031C)
class ABP_GunCabinet_C : public ABP_GunStorageBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0289(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        RightDoor;                                                // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LeftDoor;                                                 // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET
	struct FTransform                                  DefaultTransform_RightDoor;                               // 0x02B0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  DefaultTransformLeftDoor;                                 // 0x02E0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    DoorRotation;                                             // 0x0310(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	void OnStorageClosed(class UDH_InventoryManager* OtherInventory)//offset:0x13CEB30;
	void ReceiveBeginPlay()//offset:0x13CEB30;
	void OnStorageOpened(class UDH_InventoryManager* OtherInventory)//offset:0x13CEB30;
	void ExecuteUbergraph_BP_GunCabinet(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
