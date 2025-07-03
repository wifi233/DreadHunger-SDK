                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Shovel_Inventory_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Shovel_Inventory.BP_Shovel_Inventory_C
// size:0x007C (0x0980 - 0x09FC)
class ABP_Shovel_Inventory_C : public ADH_Weapon_Melee
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0980(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0988(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      DigState;                                                 // 0x0990(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0991(0x0007) MISSED OFFSET
	class UDamageType*                                 DiggingDamageType;                                        // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<class ADH_InventoryPickup*, float>            TreasureItems;                                            // 0x09A0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     LastDigSpot;                                              // 0x09F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	class UDamageType* GetDamageType(unsigned char UseState)//offset:0x13CEB30;
	void MaybeSpawnBuriedTreasure(struct FHitResult* Hit)//offset:0x13CEB30;
	float GetDamage(unsigned char UseState)//offset:0x13CEB30;
	bool UseStateBlocksInteracts(unsigned char State)//offset:0x13CEB30;
	bool IsHoldToAttack(unsigned char AttackState)//offset:0x13CEB30;
	unsigned char GetUseState(TEnumAsByte<EInputEvent> InputEvent)//offset:0x13CEB30;
	void OnMeleeWeaponHit(const struct FHitResult& Hit, unsigned char AttackState)//offset:0x13CEB30;
	void ExecuteUbergraph_BP_Shovel_Inventory(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
