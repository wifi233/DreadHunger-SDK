                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Bow_Inventory_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Bow_Inventory.BP_Bow_Inventory_C
// size:0x0010 (0x0950 - 0x0960)
class ABP_Bow_Inventory_C : public ADH_Weapon_Ranged
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0950(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0958(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	bool CanUse(unsigned char UseState)//offset:0x13CEB30;
	void OnProjectileHitActor(const struct FHitResult& Hit)//offset:0x13CEB30;
	void OnProjectileSpawned(class ADH_Projectile* NewProjectile)//offset:0x13CEB30;
	void OnEquipped()//offset:0x13CEB30;
	void OnPutDown()//offset:0x13CEB30;
	void ReceiveTick(float DeltaSeconds)//offset:0x13CEB30;
	void ExecuteUbergraph_BP_Bow_Inventory(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
