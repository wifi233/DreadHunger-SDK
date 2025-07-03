                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_HangingLantern_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HangingLantern.BP_HangingLantern_C
// size:0x0025 (0x0228 - 0x024D)
class ABP_HangingLantern_C : public ADH_PhysicsDecoration_Skeletal
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             SqueakComp;                                               // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             sfx_oilLampLP01;                                          // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MinSqueakVel;                                             // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EShipSpacePartition                                ShipSection;                                              // 0x024C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	void BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)//offset:0x13CEB30;
	void ReceiveBeginPlay()//offset:0x13CEB30;
	void ExecuteUbergraph_BP_HangingLantern(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
