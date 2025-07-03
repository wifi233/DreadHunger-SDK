                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_HangingLamp_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HangingLamp.BP_HangingLamp_C
// size:0x002D (0x0228 - 0x0255)
class ABP_HangingLamp_C : public ADH_PhysicsDecoration_Skeletal
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             SqueakComp;                                               // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             SC_FXOilLampLP;                                           // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight1;                                              // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight1;                                               // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MinSqueakVel;                                             // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EShipSpacePartition                                ShipSection;                                              // 0x0254(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	void BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)//offset:0x13CEB30;
	void ReceiveBeginPlay()//offset:0x13CEB30;
	void ExecuteUbergraph_BP_HangingLamp(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
