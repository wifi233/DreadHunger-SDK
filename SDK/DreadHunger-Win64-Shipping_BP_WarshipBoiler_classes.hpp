                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_WarshipBoiler_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WarshipBoiler.BP_WarshipBoiler_C
// size:0x0088 (0x02C8 - 0x0350)
class ABP_WarshipBoiler_C : public ADH_WarshipBoiler
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_EngineGrating;                                         // 0x02D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Engine;                                                   // 0x02D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      EngineMovingParts;                                        // 0x02E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              OpenAnimationSpeed;                                       // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CloseAnimationSpeed;                                      // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  GrateTransformOpen;                                       // 0x02F0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  DefaultGrateTransform;                                    // 0x0320(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	bool GetBurnTime(EInventoryType Type, float* BurnTime)//offset:0x13CEB30;
	struct FText GetName()//offset:0x13CEB30;
	TArray<EInventoryType> GetBurnTypes()//offset:0x13CEB30;
	void ReceiveBeginPlay()//offset:0x13CEB30;
	void OnStorageClosed(class UDH_InventoryManager* OtherInventory)//offset:0x13CEB30;
	void OnStorageOpened(class UDH_InventoryManager* OtherInventory)//offset:0x13CEB30;
	void ExecuteUbergraph_BP_WarshipBoiler(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
