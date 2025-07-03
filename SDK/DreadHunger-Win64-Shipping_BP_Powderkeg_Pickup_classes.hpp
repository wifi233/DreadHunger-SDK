                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Powderkeg_Pickup_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Powderkeg_Pickup.BP_Powderkeg_Pickup_C
// size:0x0038 (0x0390 - 0x03C8)
class ABP_Powderkeg_Pickup_C : public ADH_InventoryPickup
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    FuseParticle;                                             // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USplineComponent*                            FuseSpline;                                               // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_CraftingComponent*                       DefusalComponent;                                         // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             FuseSound;                                                // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_CraftingComponent*                       DetonationComponent;                                      // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bFuseLit;                                                 // 0x03C0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03C1(0x0003) MISSED OFFSET
	float                                              LastFuseLitTime;                                          // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	struct FDH_InteractPermissions CanBeInteractedWith(class AController* InteractInstigator, class UPrimitiveComponent* TargetComponent)//offset:0x13CEB30;
	struct FDH_KeybindInteractionMessage GetKeybindInteractText(class AController* InteractInstigator)//offset:0x13CEB30;
	void Defuse()//offset:0x13CEB30;
	float GetInteractTime(class AController* InteractInstigator)//offset:0x13CEB30;
	bool OnInteract(class AController* InteractInstigator, int SlotIndex, class UPrimitiveComponent* TargetComponent)//offset:0x13CEB30;
	void SetFuseEffectsActive(bool bActive)//offset:0x13CEB30;
	void OnRep_bFuseActive()//offset:0x13CEB30;
	void LightFuse()//offset:0x13CEB30;
	void BndEvt__DetonationComponent_K2Node_ComponentBoundEvent_0_CraftingEvent__DelegateSignature(class UDH_CraftingProject* Project)//offset:0x13CEB30;
	void BndEvt__DefusalComponent_K2Node_ComponentBoundEvent_1_CraftingEvent__DelegateSignature(class UDH_CraftingProject* Project)//offset:0x13CEB30;
	void ReceiveDestroyed()//offset:0x13CEB30;
	void BP_OnRep_AttachTarget(class AActor* InAttachTarget)//offset:0x13CEB30;
	void ReceiveTick(float DeltaSeconds)//offset:0x13CEB30;
	void ReceiveBeginPlay()//offset:0x13CEB30;
	void ExecuteUbergraph_BP_Powderkeg_Pickup(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
