                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_Totem_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Totem.BP_Totem_C
// size:0x0018 (0x03A8 - 0x03C0)
class ABP_Totem_C : public ADH_ThrallTotem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             AmbientSound;                                             // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADH_HumanCharacter*                          LocalHuman;                                               // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	void OnCrafted(class ADH_PlayerState* CraftingPlayer)//offset:0x13CEB30;
	void ReceiveBeginPlay()//offset:0x13CEB30;
	void SpawnedFragments(class ADH_DestructibleActor* Destructible)//offset:0x13CEB30;
	void ExecuteUbergraph_BP_Totem(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
