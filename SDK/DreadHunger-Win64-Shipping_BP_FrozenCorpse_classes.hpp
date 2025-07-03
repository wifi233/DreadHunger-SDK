                                                      /* 该SDK由虚幻引擎工具生成,该工具完全免费! */

                                                      /* 作者:BiliBili:窗边的短脚猫 */

                                                      /* Link:https://space.bilibili.com/3671718 */

#pragma once

// DreadHunger-Win64-Shipping SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DreadHunger-Win64-Shipping_BP_FrozenCorpse_structs.hpp"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FrozenCorpse.BP_FrozenCorpse_C
// size:0x0037 (0x0289 - 0x02C0)
class ABP_FrozenCorpse_C : public ABP_StorageTrunk_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0289(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Mosaic;                                                   // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDH_CensorshipComponent*                     Censorship;                                               // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstance*                           HarvestedCorpseMaterial;                                  // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CorpseHarvested;                                          // 0x02B0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldSway;                                              // 0x02B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x02B2(0x0002) MISSED OFFSET
	float                                              SwayDegrees;                                              // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwayTime;                                                 // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CorpseMaterialIndex;                                      // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	void OnSearched()//offset:0x13CEB30;
	void UpdateCorpseMaterial()//offset:0x13CEB30;
	void OnRep_CorpseHarvested()//offset:0x13CEB30;
	void ReceiveTick(float DeltaSeconds)//offset:0x13CEB30;
	void ReceiveBeginPlay()//offset:0x13CEB30;
	void ExecuteUbergraph_BP_FrozenCorpse(int EntryPoint)//offset:0x13CEB30;
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
