                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Spyglass_Inventory_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Spyglass_Inventory.BP_Spyglass_Inventory_C
// size:0x002C (0x0980 - 0x09AC)
class ABP_Spyglass_Inventory_C : public ADH_Weapon_Melee
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0980(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0988(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TraceDist;                                                // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0994(0x0004) MISSED OFFSET
	class AActor*                                      CurrentTarget;                                            // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TargetListenerPosition;                                   // 0x09A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	void UpdateListenerPosition(float DeltaTime)//offset:0x13CEB30;
	void ClearTarget()//offset:0x13CEB30;
	void OnChangedTarget(class AActor* NewTarget)//offset:0x13CEB30;
	void UpdateTarget()//offset:0x13CEB30;
	unsigned char GetUseState(TEnumAsByte<EInputEvent> InputEvent)//offset:0x13CEB30;
	void OnAimed(bool bNewIsAiming)//offset:0x13CEB30;
	void ReceiveTick(float DeltaSeconds)//offset:0x13CEB30;
	void ReceiveDestroyed()//offset:0x13CEB30;
	void ExecuteUbergraph_BP_Spyglass_Inventory(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
