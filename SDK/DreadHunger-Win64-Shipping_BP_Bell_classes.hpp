                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Bell_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Bell.BP_Bell_C
// size:0x0038 (0x0228 - 0x0260)
class ABP_Bell_C : public ADH_PhysicsDecoration_Skeletal
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             SqueakComp;                                               // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FFBellHit                                   HitFlash;                                                 // 0x0238(0x0028) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	void SwingSound()//offset:0x13CEB30;
	void RingBell()//offset:0x13CEB30;
	void OnRep_HitFlash()//offset:0x13CEB30;
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)//offset:0x13CEB30;
	void ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo)//offset:0x13CEB30;
	void ExecuteUbergraph_BP_Bell(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
