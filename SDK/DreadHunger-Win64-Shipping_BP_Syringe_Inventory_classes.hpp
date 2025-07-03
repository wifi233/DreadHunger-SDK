                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Syringe_Inventory_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Syringe_Inventory.BP_Syringe_Inventory_C
// size:0x001C (0x0980 - 0x099C)
class ABP_Syringe_Inventory_C : public ADH_Weapon_Melee
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0980(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0988(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              HealthPerJab;                                             // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      SelfJabIndex;                                             // 0x0994(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0995(0x0003) MISSED OFFSET
	float                                              PoisonValue;                                              // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	void GetOverrideTraceHits(unsigned char UseState, TArray<struct FHitResult>* OverrideHits)//offset:0x13CEB30;
	float GetTraceStartTime(unsigned char UseState)//offset:0x13CEB30;
	unsigned char GetUseState(TEnumAsByte<EInputEvent> InputEvent)//offset:0x13CEB30;
	void GiveHealth(class ADH_HumanCharacter* Target)//offset:0x13CEB30;
	void OnMeleeWeaponHit(const struct FHitResult& Hit, unsigned char AttackState)//offset:0x13CEB30;
	void ExecuteUbergraph_BP_Syringe_Inventory(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
